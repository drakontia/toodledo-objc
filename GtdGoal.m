//
//  GtdGoal.m
//  ToodledoAPI
//
//  Created by drakontia on 12/07/16.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import "GtdGoal.h"

@implementation GtdGoal

@synthesize uid;
@synthesize name;
@synthesize level;
@synthesize contributes;
@synthesize archived;

- (id)init {
	if (self = [super init]) {
		name = nil;
		uid = -1;
		level = 0;
	}
	return self;
}

- (NSString *)description {
	return [NSString stringWithFormat:@"<GtdContext id='%i' name='%@'>", uid, name];
}

@end
