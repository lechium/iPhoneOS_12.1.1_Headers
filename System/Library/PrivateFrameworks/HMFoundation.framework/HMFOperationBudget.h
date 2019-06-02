/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFTimerDelegate.h>

@class HMFUnfairLock, HMFTimer, NSString;

@interface HMFOperationBudget : HMFObject <HMFLogging, HMFTimerDelegate> {

	HMFUnfairLock* _lock;
	HMFTimer* _timer;
	unsigned long long _value;
	unsigned long long _limit;
	HMFRate _rate;

}

@property (nonatomic,readonly) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) HMFRate rate;                          //@synthesize rate=_rate - In the implementation block
@property (readonly) unsigned long long value;                        //@synthesize value=_value - In the implementation block
@property (getter=isFull,readonly) BOOL full; 
@property (getter=isEmpty,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(unsigned long long)limit;
-(BOOL)isFull;
-(BOOL)decrementByCount:(unsigned long long)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(id)initWithLimit:(unsigned long long)arg1 rate:(HMFRate)arg2 ;
-(BOOL)decrement;
-(id)init;
-(void)reset;
-(unsigned long long)value;
-(BOOL)isEmpty;
-(HMFRate)rate;
@end

