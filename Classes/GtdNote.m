//
//  GtdNote.m
//  ToodledoAPI
//
//  Created by Alex Leutgöb on 09.11.09.
//  Copyright 2009 alexleutgoeb.com. All rights reserved.
//

#import "GtdNote.h"


@implementation GtdNote

@synthesize uid;
@synthesize title;
@synthesize folder;
@synthesize modified;
@synthesize added;
@synthesize private;
@synthesize text;

- (id)init {
	if (self = [super init]) {
		title = nil;
		uid = -1;
	}
	return self;
}

- (NSString *)description 
{
	return [NSString stringWithFormat:@"<GtdNote id='%i' text='%@'>", uid, text];
}


@end
