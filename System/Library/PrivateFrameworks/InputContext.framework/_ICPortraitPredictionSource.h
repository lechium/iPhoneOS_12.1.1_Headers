/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_ICPredictionSourcing.h>

@class NSMutableArray, NSCondition, PPQuickTypeBroker;

@interface _ICPortraitPredictionSource : NSObject <_ICPredictionSourcing> {

	NSMutableArray* _contacts;
	NSCondition* _ppBrokerLoadedCondition;
	PPQuickTypeBroker* _ppBroker;

}

@property (retain) PPQuickTypeBroker * ppBroker;              //@synthesize ppBroker=_ppBroker - In the implementation block
-(void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
-(void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)setPpBroker:(PPQuickTypeBroker *)arg1 ;
-(PPQuickTypeBroker *)ppBroker;
-(id)getPPBroker;
-(BOOL)_populateError:(id*)arg1 withExplanations:(id)arg2 ;
-(id)_quickTypeQueryWithTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 errorWithExplanations:(id*)arg5 ;
-(id)_quickTypeQueryWithQuery:(id)arg1 limit:(unsigned long long)arg2 timeoutInMilliseconds:(unsigned long long)arg3 ;
-(void)hibernate;
-(id)init;
-(void)warmUp;
@end

