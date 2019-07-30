//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIBannerItem.h"

#import "SBDefaultBannerViewSource.h"
#import "SBUIQuietModePlayability.h"

@class NSString, SBAwayListItem;

@interface SBLockScreenNotificationBannerItem : SBUIBannerItem <SBDefaultBannerViewSource, SBUIQuietModePlayability>
{
    SBAwayListItem *_listItem;	// 8 = 0x8
    id <SBLockScreenActionHandler> _lockedActionHandler;	// 16 = 0x10
    id <SBLockScreenNotificationBannerItemDelegate> _delegate;	// 24 = 0x18
}

@property(nonatomic) __weak id <SBLockScreenNotificationBannerItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SBLockScreenActionHandler> unlockActionHandler; // @synthesize unlockActionHandler=_lockedActionHandler;
@property(readonly, nonatomic) SBAwayListItem *listItem; // @synthesize listItem=_listItem;
- (void).cxx_destruct;	// IMP=0x000000010021b1d8
- (id)lockScreenActionContext;	// IMP=0x000000010021b168
- (_Bool)overridesPocketMode;	// IMP=0x000000010021b134
- (_Bool)overridesQuietMode;	// IMP=0x000000010021b100
- (_Bool)isCritical;	// IMP=0x000000010021b0cc
- (_Bool)inertWhenLocked;	// IMP=0x000000010021b098
- (_Bool)shouldPlayLightsAndSirens;	// IMP=0x000000010021b064
- (id)accessoryIconMask;	// IMP=0x000000010021b05c
- (_Bool)showMessagePreview;	// IMP=0x000000010021b054
- (id)attachmentImage;	// IMP=0x000000010021b04c
- (id)attachmentText;	// IMP=0x000000010021b044
- (id)iconImage;	// IMP=0x000000010021b03c
- (id)sourceDate;	// IMP=0x000000010021b024
- (id)suppressedMessage;	// IMP=0x000000010021b01c
- (id)message;	// IMP=0x000000010021b014
- (id)subtitle;	// IMP=0x000000010021b00c
- (id)title;	// IMP=0x000000010021b004
- (id)sortDate;	// IMP=0x000000010021afec
- (_Bool)canShowWhileLocked;	// IMP=0x000000010021afe4
- (CDUnknownBlockType)action;	// IMP=0x000000010021aebc
- (id)initWithListItem:(id)arg1;	// IMP=0x000000010021ae30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
