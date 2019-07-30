//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBObserverDelegate.h"
#import "SBBulletinAlertHandler.h"
#import "SBBulletinBusyClient.h"

@class BBObserver, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;

@interface SBBulletinModalController : NSObject <BBObserverDelegate, SBBulletinAlertHandler, SBBulletinBusyClient>
{
    BBObserver *_observer;	// 8 = 0x8
    NSMutableArray *_incomingBulletinEventQueue;	// 16 = 0x10
    NSMutableDictionary *_handlersBySectionID;	// 24 = 0x18
    NSMapTable *_handlersByBulletinID;	// 32 = 0x20
    NSMapTable *_alertsByBulletinID;	// 40 = 0x28
    _Bool _quietModeEnabled;	// 48 = 0x30
}

+ (id)sharedInstanceIfExists;	// IMP=0x00000001002ee16c
+ (id)sharedInstance;	// IMP=0x00000001002ee15c
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;	// IMP=0x00000001002ee080
- (void).cxx_destruct;	// IMP=0x00000001002efce4
- (void)showTestBulletin;	// IMP=0x00000001002ef99c
- (void)_syncDismissalForBulletin:(id)arg1;	// IMP=0x00000001002ef8e0
- (void)handleEvent:(int)arg1 withBulletin:(id)arg2 forRegistry:(id)arg3;	// IMP=0x00000001002ef780
- (_Bool)bindBulletin:(id)arg1 forRegistry:(id)arg2;	// IMP=0x00000001002ef778
- (void)bulletinWindowStoppedBeingBusy;	// IMP=0x00000001002ef76c
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(_Bool)arg2;	// IMP=0x00000001002ef654
- (void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned long long)arg2;	// IMP=0x00000001002ef63c
- (id)observer:(id)arg1 composedAttachmentImageForType:(long long)arg2 thumbnailData:(id)arg3 key:(id)arg4;	// IMP=0x00000001002ef5e4
- (id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(long long)arg2;	// IMP=0x00000001002ef5cc
- (_Bool)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;	// IMP=0x00000001002ef5c4
- (void)observer:(id)arg1 noteServerReceivedResponseForBulletin:(id)arg2;	// IMP=0x00000001002ef574
- (void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;	// IMP=0x00000001002ef2ec
- (void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2;	// IMP=0x00000001002ef2d0
- (void)observer:(id)arg1 removeBulletin:(id)arg2;	// IMP=0x00000001002ef0d0
- (void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3;	// IMP=0x00000001002eeecc
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x00000001002eea34
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;	// IMP=0x00000001002ee9d4
- (void)_executeOrPendEventBlock:(CDUnknownBlockType)arg1 forFeed:(unsigned long long)arg2 bulletin:(id)arg3;	// IMP=0x00000001002ee904
- (void)_dequeuePendedEventsIfPossible;	// IMP=0x00000001002ee744
- (_Bool)canShowAlertForFeed:(unsigned long long)arg1;	// IMP=0x00000001002ee6c8
- (_Bool)isBulletinWindowBusy;	// IMP=0x00000001002ee674
- (_Bool)isDevicePasscodeLocked;	// IMP=0x00000001002ee620
- (_Bool)isLockScreenActive;	// IMP=0x00000001002ee5c0
- (_Bool)isDeviceUILocked;	// IMP=0x00000001002ee564
- (id)attachmentImageForBulletin:(id)arg1;	// IMP=0x00000001002ee544
- (id)init;	// IMP=0x00000001002ee17c
- (void)destroyingAlert:(id)arg1 withBulletin:(id)arg2;	// IMP=0x00000001002efd60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

