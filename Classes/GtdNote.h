//
//  GtdNote.h
//  ToodledoAPI
//
//  Created by Alex Leutgöb on 09.11.09.
//  Copyright 2009 alexleutgoeb.com. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface GtdNote : NSObject 
{

@private
	NSInteger id;
	NSString *title;
	NSInteger folder;
	NSDate *modified;
	NSDate *added;
	BOOL private;
	NSText *text;
	
}

@property (nonatomic) NSInteger id;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) NSInteger folder;
@property (nonatomic, retain) NSDate *modified;
@property (nonatomic, retain) NSDate *added;
@property (nonatomic) BOOL private;
@property (nonatomic, copy) NSText *text;

@end
