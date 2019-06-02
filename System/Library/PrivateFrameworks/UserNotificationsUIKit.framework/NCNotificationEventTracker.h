/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PETScalarEventTracker, ATXNotificationsLoggingClient;

@interface NCNotificationEventTracker : NSObject {

	PETScalarEventTracker* _shortLookDefaultActionTracker;
	PETScalarEventTracker* _shortLookDismissTracker;
	PETScalarEventTracker* _shortLookClearTracker;
	PETScalarEventTracker* _notificationCenterClearDayTracker;
	PETScalarEventTracker* _notificationCenterClearAllTracker;
	PETScalarEventTracker* _longLookPresentationTracker;
	PETScalarEventTracker* _longLookDefaultActionTracker;
	PETScalarEventTracker* _longLookCustomActionTracker;
	PETScalarEventTracker* _longLookDismissTracker;
	PETScalarEventTracker* _longLookReparkTracker;
	ATXNotificationsLoggingClient* _logger;

}
+(id)createATXNotificationInterfaceFromRequest:(id)arg1 ;
+(id)sharedInstance;
-(void)longLookCustomAction:(id)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3 ;
-(void)defaultActionForNotification:(id)arg1 ;
-(void)dismissActionForNotification:(id)arg1 ;
-(void)silenceActionForNotification:(id)arg1 ;
-(id)_destinationProperty;
-(id)_triggerPropertyForEvent:(id)arg1 ;
-(id)_firstPartyAppProperty;
-(id)_attachmentCountProperty;
-(id)_primaryAttachmentTypeProperty;
-(id)_customExtensionProperty;
-(id)_customActionsCountProperty;
-(id)_textInputProperty;
-(id)_shortLookDefaultActionTracker;
-(id)notificationDestinationForState:(id)arg1 ;
-(id)_shortLookDismissTracker;
-(id)_shortLookClearTracker;
-(id)_notificationCenterClearDayTracker;
-(id)_notificationCenterClearAllTracker;
-(id)_longLookDefaultActionTracker;
-(id)_longLookCustomActionTracker;
-(id)_longLookDismissTracker;
-(id)_longLookReparkTracker;
-(unsigned long long)primaryAttachmentTypeForRequest:(id)arg1 ;
-(id)_longLookPresentationTracker;
-(void)shortLookDefaultActionInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3 ;
-(void)shortLookDismissInvokedForNotificationRequest:(id)arg1 withState:(id)arg2 ;
-(void)shortLookClearedForNotificationRequest:(id)arg1 withState:(id)arg2 ;
-(void)notificationCenterDayCleared;
-(void)notificationCenterClearAll;
-(void)longLookDidPresentForNotificationRequest:(id)arg1 ;
-(void)longLookDefaultActionInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3 ;
-(void)longLookDismissInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3 ;
-(void)longLookReparkInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3 ;
-(void)pulldownActionForNotification:(id)arg1 ;
-(void)receivedNotification:(id)arg1 forFeed:(unsigned long long)arg2 ;
-(void)removedNotificationFromLockScreen:(id)arg1 ;
-(void)removedNotificationFromAllFeeds:(id)arg1 ;
-(void)tappedCoalescedNotification:(id)arg1 inBundle:(id)arg2 ;
-(void)realTimeTuningOutcome:(long long)arg1 withBundleId:(id)arg2 ;
-(void)realTimeTuningTrigger:(long long)arg1 ;
-(id)init;
@end

