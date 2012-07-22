//
//  GtdLocation.m
//  ToodledoAPI
//
//  Created by drakontia on 12/07/16.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import "GtdLocation.h"

@implementation GtdLocation

@synthesize uid;
@synthesize name;
@synthesize description;
@synthesize lat;
@synthesize lot;

- (id)init {
	if (self = [super init]) {
		name = nil;
		uid = -1;
		description= 0;
	}
	return self;
}

- (NSString *)description {
	return [NSString stringWithFormat:@"<GtdContext id='%i' name='%@'>", uid, name];
}

@end
