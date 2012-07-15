//
//  GtdTask.h
//  ToodledoAPI
//
//  Created by Alex Leutgöb on 07.11.09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface GtdTask : NSObject {

@private
	NSInteger uid;
	NSString *title;
	NSArray *tag;
	NSInteger folder;
	NSInteger context;
	NSInteger goal;
	NSInteger location;
	NSInteger parent;
	NSInteger children;
	NSInteger order;
	NSDate *duedate;
	NSInteger duedatemod;
	NSDate *startdate;
	NSDate *duetime;
	NSDate *starttime;
	NSInteger remind;
	NSString *repeat;
	BOOL repeatfrom;
	NSInteger status;
	NSInteger length;
	NSInteger priority;
	BOOL star;
	NSData *modified;
	NSDate *completed;
	NSDate *added;
	NSString *timer;
	NSDate *timeron;
	NSText *note;
	NSString *meta;
}

@property (nonatomic) NSInteger uid;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *tag;
@property (nonatomic) NSInteger folder;
@property (nonatomic) NSInteger context;
@property (nonatomic, retain) NSDate *date_created;
@property (nonatomic, retain) NSDate *date_modified;
@property (nonatomic, retain) NSDate *date_start;
@property (nonatomic, retain) NSDate *date_due;
@property (nonatomic, retain) NSDate *date_deleted;
@property BOOL hasDueDate;
@property BOOL hasDueTime;
@property (nonatomic) NSInteger priority;
@property (nonatomic, retain) NSDate *completed;
@property (nonatomic) NSInteger length;
@property (nonatomic, copy) NSString *note;
@property BOOL star;
@property NSInteger repeat;
@property NSInteger status;
@property NSInteger reminder;
@property NSInteger parentId;

@end
