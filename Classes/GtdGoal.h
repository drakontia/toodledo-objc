//
//  GtdGoal.h
//  ToodledoAPI
//
//  Created by Daisuke Miura on 2012/07/16
//  Copyright 2012 drakontia.com. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface GtdGoal : NSObject {
	
@private
	NSInteger uid;
	NSString *name;
	NSInteger level;
	NSInteger contributes;
	BOOL archived;
}

@property (nonatomic) NSInteger uid;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) NSInteger level;
@property (nonatomic) NSInteger contributes;
@property BOOL archived;

@end
