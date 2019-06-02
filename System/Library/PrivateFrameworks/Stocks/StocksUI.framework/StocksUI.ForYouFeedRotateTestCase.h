/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNTestCaseRotate.h>

@class NSString, NSArray;

@interface StocksUI.ForYouFeedRotateTestCase : NSObject <SNTestCaseRotate> {

	 testName;
	 timeoutInSeconds;
	 aggregate;
	 requiredCapabilities;
	 rotateOrientation;

}

@property (readonly,nonatomic) NSString * testName; 
@property (readonly,nonatomic) double timeoutInSeconds; 
@property (readonly,nonatomic) unsigned long long aggregate; 
@property (readonly,nonatomic) NSArray * requiredCapabilities; 
@property (readonly,nonatomic) long long rotateOrientation; 
-(unsigned long long)aggregate;
-(double)timeoutInSeconds;
-(NSString *)testName;
-(NSArray *)requiredCapabilities;
-(long long)rotateOrientation;
-(id)init;
@end

