//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UNUserNotificationCenterObserver.h"

@class NSString, UNUserNotificationCenter;

@interface SBClockNotificationManager : NSObject <UNUserNotificationCenterObserver>
{
    UNUserNotificationCenter *_userNotificationCenter;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100335d50
- (void).cxx_destruct;	// IMP=0x000000010033686c
- (void)_updateTimerShortcutItems;	// IMP=0x0000000100336858
- (void)_updateAlarmStatusBarItemForPendingNotificationRequests:(id)arg1;	// IMP=0x000000010033653c
- (void)userNotificationCenter:(id)arg1 didChangePendingNotificationRequests:(id)arg2;	// IMP=0x0000000100336354
- (void)userNotificationCenter:(id)arg1 didDeliverNotifications:(id)arg2;	// IMP=0x000000010033618c
- (void)removePendingNotificationRequestsWithIdentifier:(id)arg1;	// IMP=0x00000001003360c8
- (void)getPendingNotificationRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001003360b0
- (void)addNotificationRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100335fcc
- (id)init;	// IMP=0x0000000100335dd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
