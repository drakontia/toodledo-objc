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
	NSString *note;
	NSString *meta;
}

@property (nonatomic) NSInteger uid;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *tag;
@property (nonatomic) NSInteger folder;
@property (nonatomic) NSInteger context;
@property (nonatomic) NSInteger goal;
@property (nonatomic) NSInteger location;
@property (nonatomic) NSInteger parent;
@property (nonatomic) NSInteger children;
@property (nonatomic) NSInteger order;
@property (nonatomic, retain) NSDate *duedate;
@property (nonatomic, retain) NSDate *duedatemod;
@property (nonatomic, retain) NSDate *startdate;
@property (nonatomic, retain) NSDate *duetime;
@property (nonatomic, retain) NSDate *starttime;
@property (nonatomic) NSInteger remind;
@property (nonatomic, retain) NSString *repeat;
@property BOOL repeatfrom;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSInteger length;
@property (nonatomic) NSInteger priority;
@property BOOL star;
@property (nonatomic, retain) NSDate *modified;
@property (nonatomic, retain) NSDate *completed;
@property (nonatomic, retain) NSDate *added;
@property (nonatomic, copy) NSString *timer;
@property (nonatomic, retain) NSData *timeron;
@property (nonatomic, copy) NSString *note;
@property (nonatomic, retain) NSString *meta;

@end
