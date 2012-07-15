//
//  TDParser.m
//  ToodledoAPI
//
//  Created by Alex Leutgöb on 03.11.09.
//  Copyright 2009 alexleutgoeb.com. All rights reserved.
//

#import "TDParser.h"


@implementation TDParser

@synthesize data;

- (id)initWithTarget:(id)theTarget andSelector:(SEL)theSelector {
	[super init];
	target = theTarget;
	selector = theSelector;
	return self;
}

- (id)initWithData:(NSData *)aData {
	if (self = [super init]) {
		self.data = aData;
	}
	return self;
}

- (void)dealloc {
	[data release];
	[error release];
	[results release];
	[currentString release];
    [super dealloc];
}

- (NSDictionary *)parseResults:(NSError **)parseError {
	NSDictionary *parser = [[[NSJSONSerialization alloc] init] JSONObjectWithData:data options:NSJSONReadingAllowFragments error:&error];
	NSLog(@"jsonObject = %@", [parser description]);
	[parser release];
	
	if (error) {
		*parseError = error;
		return nil;
	}
	else {
		return parser;
	}
}

#pragma mark -
#pragma mark NSJSONSerialization delegation methods

- (void)parserDidStartDocument:(NSJSONSerialization *)parser {
	if (results != nil) {
		[results release];
		results = nil;
	}
	results = [[NSDictionary alloc] init];
}

- (void)parser:(NSJSONSerialization *)parser foundCharacters:(NSString *)string {	
	string = [string stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
	if (!currentString) {
		currentString = [[NSMutableString alloc] initWithString:string];
	} else {
		[currentString appendString:string];
	}
}

- (void)parser:(NSJSONSerialization *)parser parseErrorOccurred:(NSError *)parseError {
	error = [parseError retain];
}

- (void)parserDidEndDocument:(NSJSONSerialization *)parser {
	// id result = error ? (id)error : (id)results;
	// [target performSelectorOnMainThread:selector withObject:result waitUntilDone:YES];
}

@end
