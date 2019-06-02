/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDAssertion;

@interface HDSessionAssertionWrapper : NSObject {

	HDAssertion* _currentAssertion;
	/*^block*/id _createAndTakeBlock;

}

@property (nonatomic,copy,readonly) id createAndTakeBlock;              //@synthesize createAndTakeBlock=_createAndTakeBlock - In the implementation block
@property (nonatomic,readonly) BOOL taken; 
-(BOOL)taken;
-(id)initWithCreateAndTakeBlock:(/*^block*/id)arg1 ;
-(void)_takeAssertion;
-(void)_releaseAssertion;
-(id)createAndTakeBlock;
@end

