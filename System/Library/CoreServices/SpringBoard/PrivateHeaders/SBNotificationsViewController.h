//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBulletinObserverViewController.h"

#import "UIGestureRecognizerDelegatePrivate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, SBNotificationCenterHeaderView, SBNotificationCenterTouchEater;

@interface SBNotificationsViewController : SBBulletinObserverViewController <UIGestureRecognizerDelegatePrivate>
{
    NSMutableArray *_orderedSectionIDs;	// 8 = 0x8
    NSMutableDictionary *_sectionIDsToOrderedBulletins;	// 16 = 0x10
    SBNotificationCenterTouchEater *_clearButtonTouchEater;	// 24 = 0x18
    SBNotificationCenterHeaderView *_headerViewCurrentlyInClearState;	// 32 = 0x20
    NSMutableArray *_orderedChronologicalSectionIDs;	// 40 = 0x28
    NSMutableDictionary *_sectionIDsToChronologicalSectionInfos;	// 48 = 0x30
    struct {
        unsigned int suppliesInsertionAnimation:1;
        unsigned int suppliesRemovalAnimation:1;
        unsigned int suppliesReplacementAnimation:1;
        unsigned int handlesBulletinActions:1;
    } _notificationsModeViewControllerDelegateFlags;	// 56 = 0x38
    id <SBNCTableViewControllerDelegate> _delegate;	// 64 = 0x40
}

@property(nonatomic) __weak id <SBNCTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100540e7c
- (void)_handleEatenTouch:(id)arg1;	// IMP=0x0000000100540db4
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000100540d50
- (_Bool)handleAction:(id)arg1 forBulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100540c80
- (long long)notificationCenterTableViewController:(id)arg1 replacementAnimationForRow:(id)arg2 inSection:(id)arg3;	// IMP=0x0000000100540b68
- (long long)notificationCenterTableViewController:(id)arg1 removalAnimationForRow:(id)arg2 inSection:(id)arg3;	// IMP=0x0000000100540a50
- (long long)notificationCenterTableViewController:(id)arg1 insertionAnimationForRow:(id)arg2 inSection:(id)arg3;	// IMP=0x0000000100540938
- (void)_handleLocalChange:(id)arg1;	// IMP=0x00000001005408b4
- (void)_handleSignificantTimeChange:(id)arg1;	// IMP=0x0000000100540830
- (void)_handleTimeZoneChange:(id)arg1;	// IMP=0x00000001005407ac
- (void)_updateChronologicalSectionsForTimeZoneChange;	// IMP=0x000000010054072c
- (void)_updateChronologicalSectionHeadersForLocaleChange;	// IMP=0x0000000100540704
- (void)_updateChronologicalSectionHeadersForSignificantTimeChange;	// IMP=0x00000001005406dc
- (void)_updateChronologicalSectionHeadersWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001005401f0
- (void)clearSection:(id)arg1;	// IMP=0x000000010053fe50
- (void)updateForChangeInLockedState;	// IMP=0x000000010053fd7c
- (void)updateSection:(id)arg1 withParameters:(id)arg2;	// IMP=0x000000010053fbd0
- (void)updateSection:(id)arg1 withInfo:(id)arg2;	// IMP=0x000000010053f5d0
- (void)_updateSectionForChangeInNumberOfLines:(id)arg1;	// IMP=0x000000010053f40c
- (void)_updateSection:(id)arg1 withLockState:(_Bool)arg2;	// IMP=0x000000010053f3a0
- (void)_updateSectionForChangeInMessagePrivacyIfNecessary:(id)arg1;	// IMP=0x000000010053f18c
- (void)_updateSectionForChangeInLockScreenVisibility:(id)arg1 withLockState:(_Bool)arg2 updatedSubsectionIDs:(id)arg3;	// IMP=0x000000010053ea68
- (void)_updateSectionForChangeInLockScreenVisibility:(id)arg1 withProcessingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010053e7f4
- (void)commitReorderOfSections:(id)arg1;	// IMP=0x000000010053e5c8
- (void)_reloadOrderedSections:(id)arg1;	// IMP=0x000000010053dcac
- (id)_allBulletinsSorted;	// IMP=0x000000010053db10
- (void)_populateBulletinInfo:(id)arg1 inSection:(id)arg2;	// IMP=0x000000010053d710
- (void)_populateBulletinInfo:(id)arg1 inSection:(id)arg2 andSectionOrderRule:(long long)arg3;	// IMP=0x000000010053d580
- (id)infoForBulletin:(id)arg1 inSection:(id)arg2 forFeed:(unsigned long long)arg3;	// IMP=0x000000010053d4d8
- (id)infoForBulletinSection:(id)arg1;	// IMP=0x000000010053d484
- (void)_configureBBSectionInfo:(id)arg1;	// IMP=0x000000010053d1a0
- (void)commitReplacementWithBulletin:(id)arg1 ofBulletin:(id)arg2 inSection:(id)arg3;	// IMP=0x000000010053cc48
- (void)commitRemovalOfBulletin:(id)arg1 fromSection:(id)arg2;	// IMP=0x000000010053c7e0
- (void)commitInsertionOfBulletin:(id)arg1 beforeBulletin:(id)arg2 inSection:(id)arg3 forFeed:(unsigned long long)arg4;	// IMP=0x000000010053c0b8
- (void)_tearDownChronologicalStructures;	// IMP=0x000000010053c078
- (void)_updateSectionOrderForOperationInSection:(id)arg1;	// IMP=0x000000010053bf40
- (void)_sortBulletins:(id)arg1 forSection:(id)arg2;	// IMP=0x000000010053bc9c
- (void)commitReplacementWithSection:(id)arg1 ofSection:(id)arg2;	// IMP=0x000000010053b860
- (void)commitMoveOfSection:(id)arg1 beforeSection:(id)arg2;	// IMP=0x000000010053b62c
- (void)commitRemovalOfSection:(id)arg1;	// IMP=0x000000010053b5cc
- (void)_commitRemovalOfBulletinBoardSectionIfNecessary:(id)arg1;	// IMP=0x000000010053b3d4
- (void)_commitRemovalOfChronologicalSectionIfNecessary:(id)arg1;	// IMP=0x000000010053b2d4
- (void)_invalidateClearActionsForSection:(id)arg1;	// IMP=0x000000010053b1e8
- (void)commitInsertionOfSection:(id)arg1 beforeSection:(id)arg2;	// IMP=0x000000010053ad18
- (void)_sortSectionIDs;	// IMP=0x000000010053abf0
- (id)_chronologicalSectionAfterChronologicalSection:(id)arg1;	// IMP=0x000000010053aafc
- (_Bool)_isChronologicalSectionInfo:(id)arg1;	// IMP=0x000000010053aa88
- (id)_chronologicalSectionInfoForDate:(id)arg1 creatingIfNecessary:(_Bool)arg2;	// IMP=0x000000010053a6a4
- (_Bool)_isArrangedByAppSection;	// IMP=0x000000010053a680
@property(readonly, nonatomic) __weak NSMutableDictionary *sectionIDsToOrderedBulletins;
@property(readonly, nonatomic) __weak NSArray *orderedSectionIDs;
- (id)contentUnavailableText;	// IMP=0x000000010053a5bc
- (void)_installClearButtonTouchEater;	// IMP=0x000000010053a4d4
- (void)_setHeaderViewCurrentlyInClearState:(id)arg1;	// IMP=0x000000010053a328
- (id)_headerViewCurrentlyInClearState;	// IMP=0x000000010053a318
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010053a278
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010053a228
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010053a01c
- (void)dealloc;	// IMP=0x0000000100539fa0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100539f90
- (id)initWithObserverFeed:(unsigned long long)arg1;	// IMP=0x0000000100539dc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

