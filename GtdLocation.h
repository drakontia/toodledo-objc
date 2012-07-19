//
//  GtdLocation.h
//  ToodledoAPI
//
//  Created by drakontia on 12/07/16.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GtdLocation : NSObject {

@private
	NSInteger uid;
	NSString *name;
	NSString *description;
	NSInteger lat;
	NSInteger lon;
}

@property (nonatomic) NSInteger uid;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *description;
@property (nonatomic) NSInteger lat;
@property (nonatomic) NSInteger lot;

@end
