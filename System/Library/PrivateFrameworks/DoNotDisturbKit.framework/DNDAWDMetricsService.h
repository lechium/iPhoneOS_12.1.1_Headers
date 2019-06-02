/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DNDStateUpdateListener.h>

@protocol OS_dispatch_queue;
@class NSObject, DNDStateService, DNDState, NSString;

@interface DNDAWDMetricsService : NSObject <DNDStateUpdateListener> {

	NSObject*<OS_dispatch_queue> _queue;
	DNDStateService* _notificationsStateService;
	DNDState* _currentState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)_queue_postAWDMetric;
-(unsigned long long)_queue_currentAWDMetricState;
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(void)resume;
@end
