//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class NSMutableIndexSet, SBApplicationIcon;

@interface SBRelatedDataDeletionAlertItem : SBAlertItem
{
    SBApplicationIcon *_icon;	// 8 = 0x8
    NSMutableIndexSet *_relatedDataStores;	// 16 = 0x10
    NSMutableIndexSet *_dataStoresToPurge;	// 24 = 0x18
    long long _deleteButtonIndex;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010026cac4
- (_Bool)dismissOnLock;	// IMP=0x000000010026cabc
- (_Bool)shouldShowInLockScreen;	// IMP=0x000000010026cab4
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x000000010026c268
- (void)dismissAlertDeletingData:(_Bool)arg1;	// IMP=0x000000010026bfac
- (_Bool)_hasUnconsideredDataStores;	// IMP=0x000000010026bf84
- (unsigned long long)_currentDataStoreCandidate;	// IMP=0x000000010026bf6c
- (void)setHasGameKitData:(_Bool)arg1;	// IMP=0x000000010026bf3c
- (void)setHasHealthKitData:(_Bool)arg1;	// IMP=0x000000010026bf0c
- (id)initWithIcon:(id)arg1;	// IMP=0x000000010026be10

@end

