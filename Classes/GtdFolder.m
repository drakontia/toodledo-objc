//
//  GtdFolder.m
//  ToodledoAPI
//
//  Created by Alex Leutgöb on 09.11.09.
//  Copyright 2009 alexleutgoeb.com. All rights reserved.
//

#import "GtdFolder.h"


@implementation GtdFolder

@synthesize uid;
@synthesize name;
@synthesize private;
@synthesize archived;
@synthesize ord;

- (id)init {
	if (self = [super init]) {
		name = nil;
		uid = -1;
		private = NO;
		archived = NO;
		ord = -1;
	}
	return self;
}

- (NSString *)description {
	return [NSString stringWithFormat:@"<GtdFolder id='%i' name='%@' private='%i' archived='%i' ord='%i'>", uid, name, private, archived, ord];
}


@end
