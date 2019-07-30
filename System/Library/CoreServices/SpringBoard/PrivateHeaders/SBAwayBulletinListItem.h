//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAwayListItem.h"

@class BBBulletin, BBObserver, NSDate, NSMutableArray, NSString, UIImage, UIViewController;

@interface SBAwayBulletinListItem : SBAwayListItem
{
    NSMutableArray *_bulletins;	// 40 = 0x28
    int _personID;	// 48 = 0x30
    NSString *_contactInfo;	// 56 = 0x38
    BBObserver *_observer;	// 64 = 0x40
    NSDate *_sortDate;	// 72 = 0x48
    NSDate *_displayDate;	// 80 = 0x50
    NSString *_message;	// 88 = 0x58
    UIImage *_listItemImage;	// 96 = 0x60
    _Bool _shouldPlayLightsAndSirens;	// 104 = 0x68
    BBBulletin *_activeBulletin;	// 112 = 0x70
    UIViewController *_secondaryContentViewController;	// 120 = 0x78
}

@property(retain) UIViewController *secondaryContentViewController; // @synthesize secondaryContentViewController=_secondaryContentViewController;
@property(retain) BBBulletin *activeBulletin; // @synthesize activeBulletin=_activeBulletin;
@property(nonatomic) _Bool shouldPlayLightsAndSirens; // @synthesize shouldPlayLightsAndSirens=_shouldPlayLightsAndSirens;
- (void).cxx_destruct;	// IMP=0x000000010035bec0
- (_Bool)overridesPocketMode;	// IMP=0x000000010035be0c
- (_Bool)overridesQuietMode;	// IMP=0x000000010035bdb0
- (_Bool)isCritical;	// IMP=0x000000010035bd54
- (_Bool)inertWhenLocked;	// IMP=0x000000010035bcf8
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010035bb58
- (id)observer;	// IMP=0x000000010035bb48
- (long long)snoozeButtonindex;	// IMP=0x000000010035bb24
- (_Bool)wantsHighlightOnInsert;	// IMP=0x000000010035bb1c
- (void)buttonPressed;	// IMP=0x000000010035babc
- (_Bool)canBeRemovedByUnlock;	// IMP=0x000000010035bab0
- (_Bool)canBeRemovedByNotificationCenterPresentation;	// IMP=0x000000010035ba58
- (_Bool)allowsAutomaticRemovalFromLockScreen;	// IMP=0x000000010035ba40
- (_Bool)wantsFullscreenPresentation;	// IMP=0x000000010035ba28
- (_Bool)canSnooze;	// IMP=0x000000010035b9e0
- (_Bool)canCoalesceWithBulletin:(id)arg1;	// IMP=0x000000010035b84c
- (_Bool)hasSamePersonAsBulletin:(id)arg1;	// IMP=0x000000010035b688
- (id)attachmentText;	// IMP=0x000000010035b614
- (id)attachmentImage;	// IMP=0x000000010035b5b0
- (id)iconImage;	// IMP=0x000000010035b5a0
- (id)description;	// IMP=0x000000010035b488
- (unsigned long long)maxMessageLines;	// IMP=0x000000010035b470
- (id)subtitle;	// IMP=0x000000010035b3f8
- (id)publishDate;	// IMP=0x000000010035b338
- (id)date;	// IMP=0x000000010035b328
- (_Bool)hasEventDate;	// IMP=0x000000010035b310
- (id)title;	// IMP=0x000000010035b278
- (id)message;	// IMP=0x000000010035b268
- (id)bulletins;	// IMP=0x000000010035b258
- (id)sortDate;	// IMP=0x000000010035b248
- (_Bool)containsBulletinWithID:(id)arg1;	// IMP=0x000000010035b20c
- (void)modifyBulletin:(id)arg1;	// IMP=0x000000010035b14c
- (void)removeAllBulletins;	// IMP=0x000000010035b10c
- (void)removeBulletin:(id)arg1;	// IMP=0x000000010035b070
- (void)addBulletin:(id)arg1;	// IMP=0x000000010035b030
- (void)_updateMessage;	// IMP=0x000000010035a6c8
- (_Bool)_hasCustomSecondaryContent;	// IMP=0x000000010035a6b0
- (_Bool)_suppressesMessageForPrivacy;	// IMP=0x000000010035a698
- (void)_updateImage;	// IMP=0x000000010035a61c
- (void)_updateDisplayDate;	// IMP=0x000000010035a464
- (void)_updateSortDate;	// IMP=0x000000010035a2b8
- (void)_updateActiveBulletin;	// IMP=0x000000010035a240
- (id)sortedBulletins;	// IMP=0x000000010035a0bc
- (void)_update;	// IMP=0x000000010035a02c
- (id)bulletinWithID:(id)arg1;	// IMP=0x0000000100359e94
- (id)initWithBulletin:(id)arg1 andObserver:(id)arg2;	// IMP=0x0000000100359cf4

@end
