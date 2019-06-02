/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DNDStateUpdateListener.h>
#import <libobjc.A.dylib/DNDSettingsUpdateListener.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, DNDModeAssertionService, DNDStateService, DNDSettingsService, DNDStateModeAssertionMetadata, DNDState, DNDBehaviorSettings, DNDBypassSettings, UNUserNotificationCenter, NSString;

@interface DNDNotificationsService : NSObject <DNDStateUpdateListener, DNDSettingsUpdateListener, UNUserNotificationCenterDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	DNDModeAssertionService* _notificationsAssertionService;
	DNDStateService* _notificationsStateService;
	DNDSettingsService* _notificationsSettingsService;
	BOOL _doNotDisturbActive;
	BOOL _basicActive;
	BOOL _bedtimeActive;
	BOOL _drivingActive;
	BOOL _workoutActive;
	DNDStateModeAssertionMetadata* _longestAssertionMetadata;
	DNDState* _currentState;
	DNDBehaviorSettings* _currentBehaviorSettings;
	DNDBypassSettings* _currentPhoneCallBypassSettings;
	UNUserNotificationCenter* _notificationsCenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)_attachmentForIdentifier:(id)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)settingsService:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2 ;
-(void)settingsService:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2 ;
-(void)_queue_postOrRemoveNotificationWithUpdatedBehavior:(BOOL)arg1 significantTimeChange:(BOOL)arg2 ;
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(void)_handleSignificantTimeChange;
-(void)resume;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

