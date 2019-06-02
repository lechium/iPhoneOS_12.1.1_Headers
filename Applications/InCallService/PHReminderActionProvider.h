//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, NSString, TUCall;

@interface PHReminderActionProvider : NSObject <CLLocationManagerDelegate>
{
    TUCall *_call;	// 8 = 0x8
    CDUnknownBlockType _locationAuthorizationStatusCallback;	// 16 = 0x10
    CLLocationManager *_locationManager;	// 24 = 0x18
}

@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(copy) CDUnknownBlockType locationAuthorizationStatusCallback; // @synthesize locationAuthorizationStatusCallback=_locationAuthorizationStatusCallback;
@property(retain) TUCall *call; // @synthesize call=_call;
- (void).cxx_destruct;	// IMP=0x000000010008cb7c
- (id)reminderText;	// IMP=0x000000010008c59c
- (id)reminderActivity;	// IMP=0x000000010008c520
- (id)reminderAction;	// IMP=0x000000010008c4a4
- (void)createReminderForWhenILeave;	// IMP=0x000000010008b910
- (void)createReminderForLocation:(id)arg1;	// IMP=0x000000010008af20
- (void)createReminderWithDurationInMinutes:(int)arg1;	// IMP=0x000000010008a894
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x000000010008a7e4
- (void)performLocationReminderAction:(CDUnknownBlockType)arg1 ifAuthorizedForStatus:(int)arg2;	// IMP=0x000000010008a5e8
- (id)reminderActionsForAlertController:(id)arg1;	// IMP=0x0000000100089c64
- (id)destinationID;	// IMP=0x0000000100089be8
- (int)addressBookIdentifier;	// IMP=0x0000000100089b9c
- (id)displayName;	// IMP=0x0000000100089b48
- (id)numberForReminder;	// IMP=0x0000000100089a74
- (id)init;	// IMP=0x00000001000899c4
- (id)initWithCall:(id)arg1;	// IMP=0x0000000100089944

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
