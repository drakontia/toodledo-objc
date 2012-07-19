//
//  GtdContext.m
//  ToodledoAPI
//
//  Created by Alex Leutgöb on 09.11.09.
//  Copyright 2009 alexleutgoeb.com. All rights reserved.
//

#import "GtdContext.h"


@implementation GtdContext

@synthesize uid;
@synthesize name;

- (id)init {
	if (self = [super init]) {
		name = nil;
		uid = -1;
	}
	return self;
}

- (NSString *)description {
	return [NSString stringWithFormat:@"<GtdContext id='%i' name='%@'>", uid, name];
}

@end
