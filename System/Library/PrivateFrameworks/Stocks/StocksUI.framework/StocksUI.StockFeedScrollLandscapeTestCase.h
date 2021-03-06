/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNTestCaseScroll.h>
#import <libobjc.A.dylib/SNTestRunOptions.h>

@class NSString, NSArray;

@interface StocksUI.StockFeedScrollLandscapeTestCase : NSObject <SNTestCaseScroll, SNTestRunOptions> {

	 testName;
	 timeoutInSeconds;
	 aggregate;
	 requiredCapabilities;
	 iterations;
	 offset;
	 orientation;
	 waitForCommitToFinish;

}

@property (readonly,nonatomic) NSString * testName; 
@property (readonly,nonatomic) double timeoutInSeconds; 
@property (readonly,nonatomic) unsigned long long aggregate; 
@property (readonly,nonatomic) NSArray * requiredCapabilities; 
@property (readonly,nonatomic) long long iterations; 
@property (readonly,nonatomic) long long offset; 
@property (readonly,nonatomic) long long orientation; 
@property (readonly,nonatomic) BOOL waitForCommitToFinish; 
-(unsigned long long)aggregate;
-(double)timeoutInSeconds;
-(NSString *)testName;
-(NSArray *)requiredCapabilities;
-(id)scrollViewWithContext:(id)arg1 ;
-(BOOL)waitForCommitToFinish;
-(id)init;
-(long long)offset;
-(long long)orientation;
-(long long)iterations;
@end

