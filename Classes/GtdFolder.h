//
//  GtdFolder.h
//  ToodledoAPI
//
//  Created by Alex Leutgöb on 09.11.09.
//  Copyright 2009 alexleutgoeb.com. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface GtdFolder : NSObject {
@private
	NSInteger uid;
	NSString *name;
	BOOL private;
	BOOL archived;
	NSInteger ord;
}

@property NSInteger uid;
@property (nonatomic, copy) NSString *name;
@property (getter=isPrivate) BOOL private;
@property (getter=isArchived) BOOL archived;
@property NSInteger ord;

@end
