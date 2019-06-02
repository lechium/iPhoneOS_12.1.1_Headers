/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@class HMDBackgroundTaskAgentTimer, NSString, NSUUID, NSSet;

@interface HMDTimeEvent : HMDEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver> {

	BOOL _repetitive;
	HMDBackgroundTaskAgentTimer* _btaTimer;

}

@property (nonatomic,readonly) BOOL repetitive;                                               //@synthesize repetitive=_repetitive - In the implementation block
@property (nonatomic,readonly) HMDBackgroundTaskAgentTimer * btaTimer;                        //@synthesize btaTimer=_btaTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)isValidAbsoluteDateComponents:(id)arg1 ;
+(BOOL)isValidOffsetDateComponents:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)_activate:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithModel:(id)arg1 home:(id)arg2 ;
-(id)_nextTimerDate;
-(void)_initialize;
-(void)_reactiveTriggerAfterDelay;
-(void)_updateRepetitive;
-(HMDBackgroundTaskAgentTimer *)btaTimer;
-(BOOL)repetitive;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isActive;
-(void)timerFired:(id)arg1 ;
@end

