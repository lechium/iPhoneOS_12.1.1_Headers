/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTDaemonClientRegistrar.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RTDaemonClientRegistrarProtocol.h>

@protocol RTDaemonClientRegistrarScenarioTriggerProtocol, OS_dispatch_queue;
@class NSMutableDictionary, RTScenarioTriggerManager, RTInvocationDispatcher, NSObject, NSString;

@interface RTDaemonClientRegistrarScenarioTrigger : RTDaemonClientRegistrar <NSSecureCoding, RTDaemonClientRegistrarProtocol> {

	unsigned long long _monitoredScenarioTriggerTypes;
	id<RTDaemonClientRegistrarScenarioTriggerProtocol> _delegate;
	NSMutableDictionary* _pendingScenarioInvocations;
	RTScenarioTriggerManager* _scenarioTriggerManager;
	RTInvocationDispatcher* _dispatcher;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableDictionary * pendingScenarioInvocations;                                //@synthesize pendingScenarioInvocations=_pendingScenarioInvocations - In the implementation block
@property (nonatomic,retain) RTScenarioTriggerManager * scenarioTriggerManager;                               //@synthesize scenarioTriggerManager=_scenarioTriggerManager - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                                             //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) unsigned long long monitoredScenarioTriggerTypes;                              //@synthesize monitoredScenarioTriggerTypes=_monitoredScenarioTriggerTypes - In the implementation block
@property (assign,nonatomic,__weak) id<RTDaemonClientRegistrarScenarioTriggerProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(RTInvocationDispatcher *)dispatcher;
-(BOOL)invocationsPending;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(long long)countOfPendingInvocations;
-(id)initWithScenarioTriggerManager:(id)arg1 queue:(id)arg2 ;
-(RTScenarioTriggerManager *)scenarioTriggerManager;
-(void)startMonitoringForScenarioTriggerType:(unsigned long long)arg1 ;
-(void)stopMonitoringForScenarioTriggerType:(unsigned long long)arg1 ;
-(unsigned long long)monitoredScenarioTriggerTypes;
-(void)addPendingScenarioTriggerBlock:(/*^block*/id)arg1 failBlock:(/*^block*/id)arg2 description:(id)arg3 ;
-(void)setScenarioTriggerManager:(RTScenarioTriggerManager *)arg1 ;
-(void)onScenarioTriggerManagerNotification:(id)arg1 ;
-(void)_logMonitoredScenarioTriggers:(unsigned long long)arg1 ;
-(void)_onScenarioTriggerManagerNotification:(id)arg1 ;
-(NSMutableDictionary *)pendingScenarioInvocations;
-(void)setPendingScenarioInvocations:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<RTDaemonClientRegistrarScenarioTriggerProtocol>)arg1 ;
-(id<RTDaemonClientRegistrarScenarioTriggerProtocol>)delegate;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)registered;
@end

