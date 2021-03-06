/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFLWorkflowControllerDelegate.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@class UNUserNotificationCenter, WFLWorkflowController, PETScalarEventTracker, NSString;

@interface ATXActionNotificationServer : NSObject <WFLWorkflowControllerDelegate, UNUserNotificationCenterDelegate> {

	UNUserNotificationCenter* _notificationCenter;
	WFLWorkflowController* _currentWorkflowController;
	PETScalarEventTracker* _removeTracker;
	PETScalarEventTracker* _notifyInitTracker;
	PETScalarEventTracker* _notifyErrorTracker;
	PETScalarEventTracker* _notifySuccessTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_requestIdentifierForBundleId:(id)arg1 ;
+(id)bundleIdFromRequestIdentifier:(id)arg1 ;
+(id)sharedInstance;
-(void)removeAllNotifications;
-(void)_setupNotifications;
-(void)workflowControllerWillRun:(id)arg1 ;
-(void)workflowControllerDidFinishRunning:(id)arg1 withOutput:(id)arg2 ;
-(void)workflowControllerDidStop:(id)arg1 withError:(id)arg2 ;
-(void)workflowController:(id)arg1 didRunAction:(id)arg2 ;
-(id)workflowController:(id)arg1 userInterfaceForRunningAction:(id)arg2 ;
-(void)_postTestNotification;
-(void)_postTestNotificationWithPredictionCount:(long long)arg1 ;
-(void)postNotificationForATXAction:(id)arg1 actionResponse:(id)arg2 ;
-(void)postNotificationForATXActionResponse:(id)arg1 ;
-(void)_postNotificationForATXAction:(id)arg1 actionResponse:(id)arg2 ;
-(id)_attachmentForIdentifier:(id)arg1 ;
-(id)_localizedStringForKey:(id)arg1 defaultValue:(id)arg2 languageCode:(id)arg3 ;
-(id)init;
-(BOOL)_isRTL;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

