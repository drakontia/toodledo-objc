//
//  TDApiTests.m
//  ToodledoAPI
//
//  Created by drakontia on 12/07/17.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import "TaskTests.h"
#import "TDApi.m"

@implementation TDApiTests

@synthesize api;

-(void)setUpClass {
	api = [[TDApi alloc] init];
}

-(void)tearDownClass {

}

-(void)testLoadAccount {
	
	[self prepare];
	
	[self performSelector:@selector(loadAccount) withObject:nil afterDelay:0.1];
	
	[self waitForStatus:kGHUnitStatusSuccess timeout:3.0];
}

-(void)loadAccount {
	
	[api loadAccountInfo];
}

@end
