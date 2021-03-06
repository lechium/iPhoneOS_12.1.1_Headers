/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class HMFTimer, NSHashTable, NSObject, NSString;

@interface HMDTimeInformationMonitor : HMFObject <HMFTimerDelegate> {

	HMFTimer* _expirationTimer;
	NSHashTable* _delegates;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,readonly) HMFTimer * expirationTimer;                            //@synthesize expirationTimer=_expirationTimer - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                                 //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)systemTimeChanged:(id)arg1 ;
-(void)_updateWithTimerInterval;
-(NSHashTable *)delegates;
-(HMFTimer *)expirationTimer;
-(void)_handleExpiration;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(id)init;
-(void)dealloc;
@end

