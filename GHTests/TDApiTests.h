//
//  TDApiTests.h
//  ToodledoAPI
//
//  Created by drakontia on 12/07/17.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <GHUnitIOS/GHUnit.h>

@class TDApi;

@interface TDApiTests : GHAsyncTestCase {
	TDApi *api;
}

@property (nonatomic, retain) TDApi *api;
@end
