//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBAlertingNotificationDestination.h"
#import "SBDashBoardNotificationAlertingController.h"
#import "SBDashBoardNotificationDispatcher.h"

@class NSString, SBDashBoardBehavior, SBNCAlertingController;

@interface SBDashBoardNotificationDispatcher : NSObject <SBDashBoardNotificationAlertingController, SBAlertingNotificationDestination, SBDashBoardNotificationDispatcher>
{
    _Bool _active;	// 8 = 0x8
    id <SBDashBoardNotificationDestination> _modalDestination;	// 16 = 0x10
    id <SBDashBoardNotificationDestination> _listDestination;	// 24 = 0x18
    SBDashBoardBehavior *_activeBehavior;	// 32 = 0x20
    SBNCAlertingController *_alertingController;	// 40 = 0x28
    id <NCNotificationDestinationDelegate> _notificationDestinationDelegate;	// 48 = 0x30
}

@property(nonatomic) __weak id <NCNotificationDestinationDelegate> delegate; // @synthesize delegate=_notificationDestinationDelegate;
@property(nonatomic) __weak SBNCAlertingController *alertingController; // @synthesize alertingController=_alertingController;
@property(retain, nonatomic) SBDashBoardBehavior *activeBehavior; // @synthesize activeBehavior=_activeBehavior;
@property(nonatomic) __weak id <SBDashBoardNotificationDestination> listDestination; // @synthesize listDestination=_listDestination;
@property(nonatomic) __weak id <SBDashBoardNotificationDestination> modalDestination; // @synthesize modalDestination=_modalDestination;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;	// IMP=0x0000000100533ed8
- (void)stopAllRealerts;	// IMP=0x0000000100533d70
- (id)destination:(id)arg1 settingsForSectionIdentifier:(id)arg2;	// IMP=0x0000000100533ce8
- (id)alertingControllerForDestination:(id)arg1;	// IMP=0x0000000100533ce4
- (void)destination:(id)arg1 clearNotificationRequests:(id)arg2;	// IMP=0x0000000100533c10
- (void)destination:(id)arg1 performAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100533b44
- (void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100533a78
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (void)updateNotificationSectionSettings:(id)arg1;	// IMP=0x0000000100533994
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;	// IMP=0x0000000100533784
- (void)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;	// IMP=0x0000000100533574
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;	// IMP=0x0000000100533218
- (_Bool)canReceiveNotificationRequest:(id)arg1;	// IMP=0x0000000100533210
- (_Bool)interceptsQueueRequest:(id)arg1;	// IMP=0x00000001005330e4
@property(readonly, nonatomic) NSString *identifier;
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;	// IMP=0x0000000100533044

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

