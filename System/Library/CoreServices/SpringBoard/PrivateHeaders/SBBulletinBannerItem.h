//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIBannerItem.h"

#import "SBDefaultBannerViewSource.h"

@class BBBulletin, BBObserver, NSArray, NSString, SBUISound, UIImage;

@interface SBBulletinBannerItem : SBUIBannerItem <SBDefaultBannerViewSource>
{
    BBBulletin *_seedBulletin;	// 8 = 0x8
    BBObserver *_observer;	// 16 = 0x10
    NSArray *_additionalBulletins;	// 24 = 0x18
    UIImage *_iconImage;	// 32 = 0x20
    SBUISound *_sound;	// 40 = 0x28
}

+ (id)itemWithSeedBulletin:(id)arg1 additionalBulletins:(id)arg2 andObserver:(id)arg3;	// IMP=0x0000000100366d6c
+ (id)itemWithBulletin:(id)arg1 andObserver:(id)arg2;	// IMP=0x0000000100366ce4
- (void).cxx_destruct;	// IMP=0x000000010036862c
- (_Bool)overridesPocketMode;	// IMP=0x00000001003685d0
- (_Bool)overridesQuietMode;	// IMP=0x0000000100368574
- (_Bool)isCritical;	// IMP=0x0000000100368518
- (_Bool)inertWhenLocked;	// IMP=0x00000001003684bc
- (_Bool)showMessagePreview;	// IMP=0x0000000100368490
- (id)attachmentImage;	// IMP=0x0000000100368434
- (id)attachmentText;	// IMP=0x0000000100368374
- (id)iconImage;	// IMP=0x0000000100368310
- (id)sourceDate;	// IMP=0x0000000100368288
- (id)_seedBulletinMessage;	// IMP=0x00000001003681d4
- (id)suppressedMessage;	// IMP=0x000000010036816c
- (id)message;	// IMP=0x0000000100367f5c
- (id)subtitle;	// IMP=0x0000000100367f44
- (id)title;	// IMP=0x0000000100367e90
- (id)actionWithIdentifier:(id)arg1;	// IMP=0x0000000100367e20
- (_Bool)_supportsSubActions;	// IMP=0x0000000100367de4
- (id)lockScreenActionContextWithContext:(id)arg1;	// IMP=0x0000000100367d10
- (id)_defaultBBAction;	// IMP=0x0000000100367bd4
- (id)defaultActionWithContext:(id)arg1;	// IMP=0x0000000100367b48
- (id)subActions;	// IMP=0x0000000100367a50
- (id)subActionLabels;	// IMP=0x00000001003679c8
- (id)pullDownNotification;	// IMP=0x00000001003679bc
- (_Bool)canShowInAssistant;	// IMP=0x00000001003679b4
- (id)sortDate;	// IMP=0x000000010036799c
- (id)seedBulletin;	// IMP=0x000000010036798c
- (id)_uiBannerActionForBBAction:(id)arg1 context:(id)arg2;	// IMP=0x0000000100367194
- (CDUnknownBlockType)action;	// IMP=0x000000010036713c
- (id)sound;	// IMP=0x000000010036712c
- (void)_setSound;	// IMP=0x0000000100367084
- (id)accessoryIconMask;	// IMP=0x000000010036706c
- (id)additionalBulletins;	// IMP=0x000000010036705c
- (void)dealloc;	// IMP=0x0000000100367000
@property(readonly, copy) NSString *description;
- (id)_initWithSeedBulletin:(id)arg1 additionalBulletins:(id)arg2 andObserver:(id)arg3;	// IMP=0x0000000100366e14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

