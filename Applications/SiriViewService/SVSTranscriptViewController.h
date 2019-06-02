//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AFQueueDelegate.h"
#import "SVSSuggestionsViewControllerDelegate.h"
#import "SVSTranscriptDataSource.h"
#import "SVSTranscriptDelegate.h"
#import "SVSTranscriptViewDelegate.h"
#import "SiriUIAceObjectViewControllerDelegate.h"
#import "SiriUIAceObjectViewControllerDelegatePrivate.h"
#import "SiriUISnippetViewControllerDelegate.h"
#import "SiriUISnippetViewControllerDelegatePrivate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSIndexPath, NSMutableDictionary, NSMutableSet, NSString, NSUUID, SAUIGetResponseAlternativesPlayback, SVSSuggestionsViewController, SVSTranscript, SVSTranscriptAnimationQueue, SVSTranscriptFlowLayout, SVSTranscriptView, SiriUITranscriptItem, UITapGestureRecognizer, UIViewController<SiriUIViewController>;

@interface SVSTranscriptViewController : UIViewController <AFQueueDelegate, SiriUISnippetViewControllerDelegate, SiriUISnippetViewControllerDelegatePrivate, SiriUIAceObjectViewControllerDelegate, SiriUIAceObjectViewControllerDelegatePrivate, SVSSuggestionsViewControllerDelegate, SVSTranscriptDataSource, SVSTranscriptDelegate, SVSTranscriptViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    long long _updateAnimationCount;	// 8 = 0x8
    _Bool _viewIsDisappearing;	// 16 = 0x10
    _Bool _isWaitingForSpeechStartPoint;	// 17 = 0x11
    _Bool _initialSpeechRecordingDidEnd;	// 18 = 0x12
    unsigned long long _displayedTranscriptItemCount;	// 24 = 0x18
    double _firstItemTopPadding;	// 32 = 0x20
    double _previousContentYOffset;	// 40 = 0x28
    NSMutableSet *_controllersTrackingScrollingEvent;	// 48 = 0x30
    double _contentOffsetPriorToDraggingY;	// 56 = 0x38
    UIViewController *_viewControllerToCallViewDidAppear;	// 64 = 0x40
    SAUIGetResponseAlternativesPlayback *_lastPlaybackCommand;	// 72 = 0x48
    long long _correctionScreenItemIndex;	// 80 = 0x50
    CDStruct_a82615c4 _keyboardInfo;	// 88 = 0x58
    long long _currentRequestSource;	// 136 = 0x88
    _Bool _viewIsInViewHierarchy;	// 144 = 0x90
    _Bool _didLoadConversationList;	// 145 = 0x91
    _Bool _showsTranscriptEndWhenVisible;	// 146 = 0x92
    id <SVSTranscriptViewControllerDataSource> _dataSource;	// 152 = 0x98
    id <SVSTranscriptViewControllerDelegate> _delegate;	// 160 = 0xa0
    SVSSuggestionsViewController *_suggestionsViewController;	// 168 = 0xa8
    SVSTranscriptFlowLayout *_layout;	// 176 = 0xb0
    SVSTranscript *_transcript;	// 184 = 0xb8
    SVSTranscriptAnimationQueue *_animationQueue;	// 192 = 0xc0
    SVSTranscriptAnimationQueue *_pinAnimationQueue;	// 200 = 0xc8
    double _lastAnimationTime;	// 208 = 0xd0
    double _lastPinAnimationTime;	// 216 = 0xd8
    double _currentPinMinimumDuration;	// 224 = 0xe0
    SiriUITranscriptItem *_currentPin;	// 232 = 0xe8
    NSMutableSet *_identifiersOfItemsWithPendingActions;	// 240 = 0xf0
    NSMutableSet *_identifiersOfItemsWithFinishedActions;	// 248 = 0xf8
    UIViewController<SiriUIViewController> *_editingViewController;	// 256 = 0x100
    UITapGestureRecognizer *_editingEndGestureRecognizer;	// 264 = 0x108
    NSIndexPath *_indexPathForPendingCellToAnimate;	// 272 = 0x110
    double _lastTranscriptDragStartTime;	// 280 = 0x118
    double _lastTranscriptEditingStartTime;	// 288 = 0x120
    NSMutableDictionary *_displayDateByTranscriptIdentifier;	// 296 = 0x128
}

@property(readonly, nonatomic, getter=_displayDateByTranscriptIdentifier) NSMutableDictionary *displayDateByTranscriptIdentifier; // @synthesize displayDateByTranscriptIdentifier=_displayDateByTranscriptIdentifier;
@property(nonatomic, getter=_lastTranscriptEditingStartTime, setter=_setLastTranscriptEditingStartTime:) double lastTranscriptEditingStartTime; // @synthesize lastTranscriptEditingStartTime=_lastTranscriptEditingStartTime;
@property(nonatomic, getter=_lastTranscriptDragStartTime, setter=_setLastTranscriptDragStartTime:) double lastTranscriptDragStartTime; // @synthesize lastTranscriptDragStartTime=_lastTranscriptDragStartTime;
@property(retain, nonatomic, getter=_indexPathForPendingCellToAnimate, setter=_setIndexPathForPendingCellToAnimate:) NSIndexPath *indexPathForPendingCellToAnimate; // @synthesize indexPathForPendingCellToAnimate=_indexPathForPendingCellToAnimate;
@property(nonatomic, getter=_showsTranscriptEndWhenVisible, setter=_setShowsTranscriptEndWhenVisible:) _Bool showsTranscriptEndWhenVisible; // @synthesize showsTranscriptEndWhenVisible=_showsTranscriptEndWhenVisible;
@property(retain, nonatomic, getter=_editingEndGestureRecognizer, setter=_setEditingEndGestureRecognizer:) UITapGestureRecognizer *editingEndGestureRecognizer; // @synthesize editingEndGestureRecognizer=_editingEndGestureRecognizer;
@property(retain, nonatomic, getter=_editingViewController, setter=_setEditingViewController:) UIViewController<SiriUIViewController> *editingViewController; // @synthesize editingViewController=_editingViewController;
@property(readonly, nonatomic, getter=_identifiersOfItemsWithFinishedActions) NSMutableSet *identifiersOfItemsWithFinishedActions; // @synthesize identifiersOfItemsWithFinishedActions=_identifiersOfItemsWithFinishedActions;
@property(readonly, nonatomic, getter=_identifiersOfItemsWithPendingActions) NSMutableSet *identifiersOfItemsWithPendingActions; // @synthesize identifiersOfItemsWithPendingActions=_identifiersOfItemsWithPendingActions;
@property(retain, nonatomic, getter=_currentPin, setter=_setCurrentPin:) SiriUITranscriptItem *currentPin; // @synthesize currentPin=_currentPin;
@property(nonatomic, getter=_currentPinMinimumDuration, setter=_setCurrentPinMinimumDuration:) double currentPinMinimumDuration; // @synthesize currentPinMinimumDuration=_currentPinMinimumDuration;
@property(nonatomic, getter=_lastPinAnimationTime, setter=_setLastPinAnimationTime:) double lastPinAnimationTime; // @synthesize lastPinAnimationTime=_lastPinAnimationTime;
@property(nonatomic, getter=_lastAnimationTime, setter=_setLastAnimationTime:) double lastAnimationTime; // @synthesize lastAnimationTime=_lastAnimationTime;
@property(readonly, nonatomic, getter=_pinAnimationQueue) SVSTranscriptAnimationQueue *pinAnimationQueue; // @synthesize pinAnimationQueue=_pinAnimationQueue;
@property(readonly, nonatomic, getter=_animationQueue) SVSTranscriptAnimationQueue *animationQueue; // @synthesize animationQueue=_animationQueue;
@property(nonatomic, getter=_didLoadConversationList, setter=_setDidLoadConversationList:) _Bool didLoadConversationList; // @synthesize didLoadConversationList=_didLoadConversationList;
@property(readonly, nonatomic, getter=_transcript) SVSTranscript *transcript; // @synthesize transcript=_transcript;
@property(readonly, nonatomic, getter=_layout) SVSTranscriptFlowLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic, getter=_suggestionsViewController) SVSSuggestionsViewController *suggestionsViewController; // @synthesize suggestionsViewController=_suggestionsViewController;
@property(nonatomic, getter=_viewIsInViewHierarchy, setter=_setViewIsInViewHierarchy:) _Bool viewIsInViewHierarchy; // @synthesize viewIsInViewHierarchy=_viewIsInViewHierarchy;
@property(nonatomic) __weak id <SVSTranscriptViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SVSTranscriptViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x000000010001835c
- (void)_logMetricsForSnippetAtIndexPath:(id)arg1;	// IMP=0x0000000100017d18
- (void)_logMetricsForVisibleSnippets;	// IMP=0x0000000100017c44
- (id)mostRecentMetricsContext;	// IMP=0x0000000100017af0
- (void)siriStoppedFingerprintingMusic;	// IMP=0x0000000100017ad8
- (void)siriBeganFingerprintingMusic;	// IMP=0x0000000100017ac0
- (void)showSpeechAlternatives:(id)arg1;	// IMP=0x00000001000177d4
- (void)handleGetResponseAlternativesPlayback:(id)arg1;	// IMP=0x00000001000173ac
- (void)changeUtterance:(id)arg1;	// IMP=0x00000001000171d0
- (void)_animateSnippetConfirmation:(id)arg1;	// IMP=0x00000001000170f0
- (void)_animateSnippetCancellation:(id)arg1;	// IMP=0x0000000100017010
- (id)_tossAnimationForCell;	// IMP=0x0000000100016dfc
- (void)_animateSnippetTossInCell:(id)arg1;	// IMP=0x0000000100016cf4
- (void)_performNextAnimation;	// IMP=0x00000001000164ec
- (_Bool)_shouldConditionallyPinToTranscriptItem:(id)arg1;	// IMP=0x0000000100015d64
- (void)_performNextPinAnimation;	// IMP=0x0000000100015a2c
- (void)_processPinAnimationQueue;	// IMP=0x0000000100015700
- (void)_scheduleNextPinAnimationAfterDelay:(double)arg1;	// IMP=0x0000000100015690
- (void)_processAnimationQueue;	// IMP=0x0000000100015330
- (void)_scheduleNextAnimationAfterDelay:(double)arg1;	// IMP=0x00000001000152c0
- (double)_nextPinAnimationTime;	// IMP=0x000000010001505c
- (double)_nextAnimationTime;	// IMP=0x0000000100014f80
- (void)queue:(id)arg1 didEnqueueObjects:(id)arg2;	// IMP=0x0000000100014ec0
- (void)animateTranscriptWithUpdates:(CDUnknownBlockType)arg1;	// IMP=0x0000000100014d78
- (double)_pinningDifferenceForTranscriptItem:(id)arg1;	// IMP=0x0000000100014c98
- (double)_topPaddingForTranscriptItem:(id)arg1;	// IMP=0x0000000100014bd0
- (double)_topPaddingForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000149f4
- (struct UIEdgeInsets)_requiredExtraSpaceToPinTranscriptItem:(id)arg1;	// IMP=0x00000001000147ec
- (void)_appendExtraSpaceToContentInsetsWithOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000146cc
- (void)_appendExtraSpaceToContentInsets;	// IMP=0x0000000100014674
- (void)_pinTranscriptToItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000144c8
- (void)_pinTranscriptToCurrentPin;	// IMP=0x0000000100014478
- (struct CGRect)_frameForItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000143b0
- (void)pinItemWithIdentifier:(id)arg1;	// IMP=0x0000000100014308
- (void)_tappedOutsideEditingView:(id)arg1;	// IMP=0x0000000100014200
- (void)_teardownEditingViewController:(id)arg1;	// IMP=0x000000010001414c
- (void)_setupEditingForViewController:(id)arg1;	// IMP=0x0000000100013ff8
- (id)_indexPathForFirstResponder;	// IMP=0x0000000100013cf0
- (void)_setKeyboardInfo:(CDStruct_a82615c4)arg1;	// IMP=0x000000010001398c
- (id)_indexPathForItemAtIndex:(long long)arg1;	// IMP=0x0000000100013974
- (id)_indexPathsForItemsAtIndexes:(id)arg1;	// IMP=0x00000001000137f0
- (id)_transcriptItemForSiriViewController:(id)arg1;	// IMP=0x0000000100013670
- (void)_registerReusableView:(Class)arg1;	// IMP=0x0000000100013278
- (id)_aceViewControllerIfExistsAtItemIndex:(long long)arg1;	// IMP=0x00000001000131fc
- (id)_snippetViewControllerIfExistsAtItemIndex:(long long)arg1;	// IMP=0x0000000100013180
- (id)_snippetViewControllerIfExistsForTranscriptItem:(id)arg1;	// IMP=0x0000000100013100
- (id)_aceViewControllerIfExistsForTranscriptItem:(id)arg1;	// IMP=0x0000000100013080
- (id)_controllerForItemIndex:(long long)arg1;	// IMP=0x0000000100012ffc
- (Class)aceControllerCellClass;	// IMP=0x0000000100012fe8
- (Class)snippetControllerCellClass;	// IMP=0x0000000100012fd4
- (double)_expectedWidthForItemIndex:(unsigned long long)arg1;	// IMP=0x0000000100012f78
- (_Bool)_itemIndexIsInset:(unsigned long long)arg1;	// IMP=0x0000000100012f10
- (struct UIEdgeInsets)_edgeInsetsForItemIndex:(unsigned long long)arg1;	// IMP=0x0000000100012eb4
- (struct UIEdgeInsets)_transcriptItemLayoutMargins;	// IMP=0x0000000100012e84
- (void)resumeTouchesIfNecessary;	// IMP=0x0000000100012d98
- (void)cancelTouchesIfNecessary;	// IMP=0x0000000100012cac
- (void)_updateKeylinesForScrollView:(id)arg1;	// IMP=0x0000000100012b84
- (void)_processHidingSnippetView:(id)arg1;	// IMP=0x00000001000125c4
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100012564
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000100012488
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000100012398
- (void)notifySnippetsEndDraggingEventForScrollView:(id)arg1;	// IMP=0x0000000100012248
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000100012184
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x0000000100012130
- (double)_heightForFooterAtItemIndex:(long long)arg1;	// IMP=0x0000000100012018
- (double)_heightForHeaderAtItemIndex:(long long)arg1;	// IMP=0x0000000100011f00
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001000119a4
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100011494
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100010ee4
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000001000102d0
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000001000102c0
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000001000102b8
- (void)transcriptView:(id)arg1 didSetContentSize:(struct CGSize)arg2;	// IMP=0x0000000100010258
- (void)transcript:(id)arg1 performAceCommands:(id)arg2 conversationItemIdentifier:(id)arg3;	// IMP=0x00000001000100d4
- (void)transcript:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010000fc74
- (void)transcript:(id)arg1 didRemoveTranscriptItems:(id)arg2 atIndexes:(id)arg3;	// IMP=0x000000010000f69c
- (void)transcript:(id)arg1 didReloadTranscriptItemsAtIndexes:(id)arg2;	// IMP=0x000000010000f544
- (void)transcript:(id)arg1 didReplaceTranscriptItemsAtIndexes:(id)arg2 replacedTranscriptItems:(id)arg3;	// IMP=0x000000010000e988
- (id)_invalidIndexesToRemoveBeforeIndex:(long long)arg1;	// IMP=0x000000010000e74c
- (void)transcript:(id)arg1 didDelayPresentationOfItemsWithConversationItemIdentifiers:(id)arg2;	// IMP=0x000000010000e6dc
- (void)transcript:(id)arg1 didDiscardTranscriptItemsWithConversationItemIdentifiers:(id)arg2;	// IMP=0x000000010000e62c
- (void)transcript:(id)arg1 didInsertTranscriptItemsAtIndexes:(id)arg2;	// IMP=0x000000010000db84
- (void)_removeConversationItemWithIdentifier:(id)arg1;	// IMP=0x000000010000db30
- (void)_removeConversationItemsWithIdentifiers:(id)arg1;	// IMP=0x000000010000dac0
- (void)_updateTitle;	// IMP=0x000000010000d8a0
- (id)viewControllerDelegateForTranscript:(id)arg1;	// IMP=0x000000010000d89c
- (_Bool)transcript:(id)arg1 itemIsRestoredAtIndex:(long long)arg2;	// IMP=0x000000010000d848
- (long long)transcript:(id)arg1 presentationStateForItemAtIndex:(long long)arg2;	// IMP=0x000000010000d7f8
- (id)transcript:(id)arg1 aceObjectForItemAtIndex:(long long)arg2;	// IMP=0x000000010000d7a0
- (_Bool)transcript:(id)arg1 itemAtIndexIsVirgin:(long long)arg2;	// IMP=0x000000010000d750
- (id)transcript:(id)arg1 aceCommandIdentifierForItemAtIndex:(long long)arg2;	// IMP=0x000000010000d6f8
- (id)transcript:(id)arg1 dialogPhaseForItemAtIndex:(long long)arg2;	// IMP=0x000000010000d6e8
- (id)transcript:(id)arg1 identifierOfItemAtIndex:(long long)arg2;	// IMP=0x000000010000d690
- (id)_aceCommandIdentifierForItemAtIndex:(long long)arg1;	// IMP=0x000000010000d63c
- (id)_dialogPhaseForItemAtIndex:(long long)arg1;	// IMP=0x000000010000d5e8
- (id)_conversationItemAtIndex:(long long)arg1;	// IMP=0x000000010000d58c
- (long long)numberOfItemsInTranscript:(id)arg1;	// IMP=0x000000010000d540
- (CDStruct_a82615c4)keyboardInfoForSuggestionsController:(id)arg1;	// IMP=0x000000010000d4d0
- (double)contentWidthForSuggestionsViewController:(id)arg1;	// IMP=0x000000010000d474
- (id)siriEnabledAppListForSuggestionsController:(id)arg1;	// IMP=0x000000010000d418
- (void)suggestionsViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000d368
- (double)statusViewHeightForSuggestionsViewController:(id)arg1;	// IMP=0x000000010000d35c
- (struct CGRect)statusBarFrameForSuggestionsViewController:(id)arg1;	// IMP=0x000000010000d2e0
- (void)suggestionsViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x000000010000d270
- (void)suggestionsViewDidShowSuggestions:(id)arg1;	// IMP=0x000000010000d228
- (void)cancelSpeakingForSiriViewController:(id)arg1;	// IMP=0x000000010000d1e0
- (void)siriViewController:(id)arg1 speakText:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000d18c
- (void)_speakText:(id)arg1 isPhonetic:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000d0f0
- (double)boundingWidthForSnippetViewController:(id)arg1;	// IMP=0x000000010000d010
- (unsigned long long)navigationIndexOfSnippetViewController:(id)arg1;	// IMP=0x000000010000cf70
- (id)siriEnabledAppListForSiriViewController:(id)arg1;	// IMP=0x000000010000cf14
- (unsigned long long)siriDeviceLockStateForSnippetViewController:(id)arg1;	// IMP=0x000000010000cec0
- (void)siriSnippetViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000ce50
- (void)siriSnippetViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000cdc4
- (void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000cd3c
- (void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x000000010000ccdc
- (void)siriSnippetViewController:(id)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;	// IMP=0x000000010000cc84
- (void)siriSnippetViewController:(id)arg1 didDismissViewController:(id)arg2;	// IMP=0x000000010000cc14
- (void)siriSnippetViewController:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x000000010000cba4
- (void)siriSnippetViewController:(id)arg1 didPresentViewController:(id)arg2;	// IMP=0x000000010000cb34
- (void)siriSnippetViewController:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x000000010000cac4
- (void)siriSnippetViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x000000010000ca6c
- (void)siriViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x000000010000c9fc
- (id)persistentStoreForSiriViewController:(id)arg1;	// IMP=0x000000010000c9a8
- (id)persistentDataStoreForSiriViewController:(id)arg1;	// IMP=0x000000010000c8c0
- (void)cancelRequestForSiriSnippetViewController:(id)arg1;	// IMP=0x000000010000c878
- (void)siriSnippetViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x000000010000c7ec
- (_Bool)siriSnippetViewControllerIsVisible:(id)arg1;	// IMP=0x000000010000c434
- (void)siriSnippetViewControllerViewDidLoad:(id)arg1;	// IMP=0x000000010000c3c8
- (void)siriSnippetViewControllerWillBecomeFirstResponder:(id)arg1;	// IMP=0x000000010000c380
- (double)siriSnippetViewControllerExpectedWidth:(id)arg1;	// IMP=0x000000010000c374
- (void)siriViewController:(id)arg1 setContentOffset:(double)arg2;	// IMP=0x000000010000c1f0
- (struct UIEdgeInsets)siriViewControllerDisplayInsetsForVisibleSpace:(id)arg1;	// IMP=0x000000010000c1dc
- (double)statusBarHeightForSiriViewController:(id)arg1;	// IMP=0x000000010000c1c0
- (struct UIEdgeInsets)siriViewControllerBackgroundInsets:(id)arg1;	// IMP=0x000000010000c084
- (struct CGSize)siriViewControllerVisibleContentArea:(id)arg1;	// IMP=0x000000010000c010
- (double)siriViewControllerExpectedWidth:(id)arg1;	// IMP=0x000000010000bee4
- (_Bool)_inTextInputMode;	// IMP=0x000000010000be90
- (_Bool)inTextInputModeForSuggestionsViewController:(id)arg1;	// IMP=0x000000010000be84
- (_Bool)inTextInputModeForSiriViewController:(id)arg1;	// IMP=0x000000010000be6c
- (void)siriViewControllerHeightDidChange:(id)arg1;	// IMP=0x000000010000ba24
- (void)siriViewControllerHeightDidChange:(id)arg1 pinTopOfSnippet:(_Bool)arg2;	// IMP=0x000000010000ba18
- (void)siriSnippetViewController:(id)arg1 pushSirilandSnippets:(id)arg2;	// IMP=0x000000010000b86c
- (id)localeForSiriViewController:(id)arg1;	// IMP=0x000000010000b808
- (void)removeSiriViewController:(id)arg1;	// IMP=0x000000010000b794
- (void)siriViewController:(id)arg1 startCorrectedSpeechRequestWithText:(id)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(id)arg4;	// IMP=0x000000010000b54c
- (void)siriViewControllerDidEndEditing:(id)arg1;	// IMP=0x000000010000b370
- (void)siriViewControllerRequestTearDownEditingViewController:(id)arg1;	// IMP=0x000000010000b364
- (void)siriViewControllerWillBeginEditing:(id)arg1;	// IMP=0x000000010000b234
- (void)siriViewControllerRequestToPin:(id)arg1;	// IMP=0x000000010000b18c
- (_Bool)siriViewControllerShouldPreventUserInteraction:(id)arg1;	// IMP=0x000000010000b138
- (void)siriDidReceiveViewsWithDialogPhase:(id)arg1;	// IMP=0x000000010000afb0
- (void)showCorrectionScreenForSiriViewController:(id)arg1;	// IMP=0x000000010000add4
- (_Bool)shouldEnableInteractionForSiriViewController:(id)arg1;	// IMP=0x000000010000ab10
- (void)siriViewControllerDidResignFirstResponder:(id)arg1;	// IMP=0x000000010000aac8
- (void)siriViewController:(id)arg1 addSelectionResponse:(id)arg2;	// IMP=0x000000010000a9bc
- (id)siriViewController:(id)arg1 listItemToPickInAutodisambiguationForListItems:(id)arg2;	// IMP=0x000000010000a938
- (id)siriViewController:(id)arg1 disambiguationItemForListItem:(id)arg2 disambiguationKey:(id)arg3;	// IMP=0x000000010000a898
- (id)siriViewController:(id)arg1 filteredDisambiguationListItems:(id)arg2;	// IMP=0x000000010000a814
- (id)siriViewControllerEffectiveBundleForCoreLocation:(id)arg1;	// IMP=0x000000010000a6cc
- (_Bool)siriViewController:(id)arg1 openPunchOut:(id)arg2;	// IMP=0x000000010000a5e4
- (void)siriViewController:(id)arg1 setDomainObject:(id)arg2 forIdentifier:(id)arg3;	// IMP=0x000000010000a464
- (id)siriViewController:(id)arg1 domainObjectForIdentifier:(id)arg2;	// IMP=0x000000010000a2f8
- (id)_domainObjectStore;	// IMP=0x000000010000a29c
- (void)siriViewController:(id)arg1 sendGenericAceCommands:(id)arg2;	// IMP=0x000000010000a0cc
- (id)updatedUserUtteranceForSiriViewController:(id)arg1;	// IMP=0x0000000100009ffc
- (id)additionalSpeechInterpretationsForSiriViewController:(id)arg1;	// IMP=0x0000000100009f2c
- (void)siriViewController:(id)arg1 openURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009e34
- (_Bool)siriViewController:(id)arg1 openURL:(id)arg2;	// IMP=0x0000000100009dd8
- (void)siriViewController:(id)arg1 performAceCommands:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000097c4
- (void)siriViewController:(id)arg1 performAceCommands:(id)arg2;	// IMP=0x0000000100009770
- (_Bool)_containStartRequest:(id)arg1;	// IMP=0x00000001000095b0
- (_Bool)logTranscriptContents;	// IMP=0x0000000100009428
- (id)requestContext;	// IMP=0x000000010000931c
- (void)siriDidDetectSpeechStartpoint;	// IMP=0x0000000100009118
- (void)endEditingAndCorrect:(_Bool)arg1;	// IMP=0x00000001000090ac
- (void)siriRequestWillStart;	// IMP=0x0000000100008fb4
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1;	// IMP=0x0000000100008e68
- (void)presentationStateDidChangeForItemsAtIndexes:(id)arg1;	// IMP=0x0000000100008dfc
- (void)removeItemsWithIdentifiers:(id)arg1 atIndexes:(id)arg2;	// IMP=0x0000000100008d74
- (void)reloadItemsAtIndexes:(id)arg1;	// IMP=0x0000000100008d08
- (void)insertItemsAtIndexes:(id)arg1;	// IMP=0x0000000100008c6c
- (void)reloadData;	// IMP=0x0000000100008a14
@property(readonly, nonatomic) _Bool transcriptIsAnimating;
- (void)restoreTranscriptPositionAnimated:(_Bool)arg1;	// IMP=0x0000000100008770
- (void)saveTranscriptPosition;	// IMP=0x00000001000085e0
- (void)showTranscriptEnd;	// IMP=0x0000000100008554
- (void)showTranscriptStart;	// IMP=0x000000010000846c
@property(readonly, nonatomic) _Bool transcriptEndIsVisible;
@property(readonly, nonatomic) _Bool transcriptStartIsVisible;
- (struct CGPoint)_maxContentOffset;	// IMP=0x00000001000082cc
- (double)_contentHeight;	// IMP=0x0000000100008258
- (struct CGPoint)_contentOffset;	// IMP=0x00000001000081fc
@property(readonly, nonatomic) NSUUID *identifierOfLastDisplayedItem;
- (void)_showSuggestionsIfNecessary;	// IMP=0x0000000100007d30
- (void)_showListeningNudgeIfNecessary;	// IMP=0x0000000100007c2c
- (void)keyboardHeightDidChange;	// IMP=0x0000000100007b48
- (void)statusBarFrameDidChange;	// IMP=0x0000000100007b3c
- (double)_bottomContentOverlayHeight;	// IMP=0x0000000100007afc
- (double)_bottomMarginHeight;	// IMP=0x0000000100007aa0
- (_Bool)_isKeyboardVisibleAboveSiriStatusView;	// IMP=0x0000000100007a48
- (void)_updateViewTopMarginHeight;	// IMP=0x000000010000791c
- (void)_updateNavigationBarFrame;	// IMP=0x00000001000077d8
- (_Bool)_isNavigationBarHidden;	// IMP=0x000000010000778c
- (id)_navigationBar;	// IMP=0x0000000100007738
- (void)_updateStatusBarRelatedAttributes;	// IMP=0x0000000100007704
- (struct CGRect)_statusBarFrame;	// IMP=0x0000000100007688
- (id)_conversationItemList;	// IMP=0x000000010000762c
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;	// IMP=0x00000001000074dc
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x0000000100007398
- (void)siriDidDeactivate;	// IMP=0x00000001000072d0
- (_Bool)currentSnippetContainsFooterButtons;	// IMP=0x00000001000071b0
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;	// IMP=0x000000010000706c
- (void)siriWillActivateFromSource:(long long)arg1;	// IMP=0x0000000100006f88
- (id)childViewControllerForHomeIndicatorAutoHidden;	// IMP=0x0000000100006f38
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100006e38
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100006d1c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100006b58
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000064f0
- (void)_runSirilandTransitionTestWithIterations:(int)arg1;	// IMP=0x0000000100005d70
- (_Bool)_isRootViewController;	// IMP=0x0000000100005ce8
- (double)_navigationControllerContentOffsetAdjustment;	// IMP=0x0000000100005ce0
- (void)_setNavigationControllerContentInsetAdjustment:(struct UIEdgeInsets)arg1;	// IMP=0x0000000100005cdc
- (id)_collectionView;	// IMP=0x0000000100005c88
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100005ae4
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100005a1c
- (void)viewDidLoad;	// IMP=0x0000000100005850
- (void)loadView;	// IMP=0x00000001000055d8
- (void)dealloc;	// IMP=0x00000001000054fc
- (void)invalidate;	// IMP=0x00000001000054bc
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100005288
- (void)svscvc_setItemIdentifier:(id)arg1;	// IMP=0x0000000100050568
- (id)svscvc_itemIdentifier;	// IMP=0x000000010005055c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SVSTranscriptView *view; // @dynamic view;

@end

