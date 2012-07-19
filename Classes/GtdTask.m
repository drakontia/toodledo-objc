//
//  GtdTask.m
//  ToodledoAPI
//
//  Created by Alex Leutgöb on 07.11.09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "GtdTask.h"


@implementation GtdTask

@synthesize uid;
@synthesize title;
@synthesize tag;
@synthesize folder;
@synthesize context;
@synthesize goal;
@synthesize location;
@synthesize parent;
@synthesize children;
@synthesize order;
@synthesize duedate;
@synthesize duedatemod;
@synthesize startdate;
@synthesize duetime;
@synthesize starttime;
@synthesize remind;
@synthesize repeat;
@synthesize repeatfrom;
@synthesize status;
@synthesize length;
@synthesize priority;
@synthesize star;
@synthesize modified;
@synthesize completed;
@synthesize added;
@synthesize timer;
@synthesize timeron;
@synthesize note;
@synthesize meta;

- (id)init {
	if (self = [super init]) {
		title = nil;
		tag = nil;
		uid = -1;
		parent = 0;
		children = 0;
		duedatemod = 0;
		remind = 0;
		star = 0;
	}
	return self;
}

- (NSString *)description {
	return [NSString stringWithFormat:@"<GtdTask id='%i' title='%@' duedate='%@' folder='%@' context='%@'>", uid, title, duedate, folder, context];
}


@end
