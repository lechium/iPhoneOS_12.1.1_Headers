//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AFConversationDelegate.h"
#import "SVSTranscriptStackViewControllerDataSource.h"
#import "SVSTranscriptStackViewControllerDelegate.h"
#import "SiriUISuggestionsViewDelegate.h"

@class AFConversation, NSString, SVSTranscriptStackViewController, SiriUISuggestionsView;

@interface SVSSuggestionsViewController : UIViewController <SiriUISuggestionsViewDelegate, SVSTranscriptStackViewControllerDelegate, SVSTranscriptStackViewControllerDataSource, AFConversationDelegate>
{
    AFConversation *_conversation;	// 8 = 0x8
    SVSTranscriptStackViewController *_guideController;	// 16 = 0x10
    id <SVSSuggestionsViewControllerDelegate> _delegate;	// 24 = 0x18
}

@property(nonatomic) __weak id <SVSSuggestionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010001d660
- (_Bool)suggestionsViewIsInTextInputMode:(id)arg1;	// IMP=0x000000010001d590
- (double)contentWidthForSuggestionsView:(id)arg1;	// IMP=0x000000010001d534
- (void)suggestionsView:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x000000010001d494
- (double)statusViewHeightForSuggestionsView:(id)arg1;	// IMP=0x000000010001d438
- (double)statusBarHeightForSuggestionsView:(id)arg1;	// IMP=0x000000010001d3d8
- (void)didShowSuggestionsForSuggestionsView:(id)arg1;	// IMP=0x000000010001d33c
- (void)conversation:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010001d320
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 inConversation:(id)arg2;	// IMP=0x000000010001d2d8
- (void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4;	// IMP=0x000000010001d264
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010001d248
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010001d22c
- (_Bool)inTextInputModeForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001d190
- (void)willSendStartRequestForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001d18c
- (void)transcriptStackViewController:(id)arg1 didDelayPresentationOfItemsWithIdentifiers:(id)arg2;	// IMP=0x000000010001d188
- (void)transcriptStackViewController:(id)arg1 willDiscardConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x000000010001d184
- (void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001d180
- (void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x000000010001d17c
- (void)transcriptStackViewController:(id)arg1 didFinishTest:(id)arg2;	// IMP=0x000000010001d178
- (void)transcriptStackViewController:(id)arg1 willStartTest:(id)arg2;	// IMP=0x000000010001d174
- (void)transcriptStackViewController:(id)arg1 viewDidSetContentSizeForTranscriptAtIndex:(long long)arg2;	// IMP=0x000000010001d170
- (void)transcriptStackViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001d16c
- (void)transcriptStackViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x000000010001d168
- (void)transcriptStackViewController:(id)arg1 didShowTipWithIdentifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 flowID:(id)arg5;	// IMP=0x000000010001d164
- (void)transcriptStackViewController:(id)arg1 didShowAceViewWithIdentifier:(id)arg2 aceViewClass:(Class)arg3 metricsContext:(id)arg4 forInterval:(double)arg5;	// IMP=0x000000010001d160
- (void)transcriptStackViewController:(id)arg1 didScrollForInterval:(double)arg2 metricsContext:(id)arg3;	// IMP=0x000000010001d15c
- (void)transcriptStackViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3;	// IMP=0x000000010001d158
- (void)transcriptStackViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001d154
- (void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2;	// IMP=0x000000010001d150
- (void)transcriptStackViewController:(id)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;	// IMP=0x000000010001d14c
- (void)transcriptStackViewController:(id)arg1 didDismissViewController:(id)arg2;	// IMP=0x000000010001d148
- (void)transcriptStackViewController:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x000000010001d144
- (void)transcriptStackViewController:(id)arg1 didPresentViewController:(id)arg2;	// IMP=0x000000010001d140
- (void)transcriptStackViewController:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x000000010001d13c
- (void)transcriptStackViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x000000010001d138
- (void)transcriptStackViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001d134
- (void)transcriptStackViewController:(id)arg1 synthesizeSpeechWithPhoneticText:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001d130
- (void)stopSpeakingForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001d12c
- (void)transcriptStackViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001d128
- (void)cancelRequestForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001d124
- (void)transcriptStackViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(id)arg4 userSelectionResults:(id)arg5;	// IMP=0x000000010001d120
- (void)transcriptStackViewControllerDidResignFirstResponder:(id)arg1;	// IMP=0x000000010001d11c
- (void)transcriptStackViewControllerDidEndEditing:(id)arg1;	// IMP=0x000000010001d118
- (void)transcriptStackViewControllerWillBeginEditing:(id)arg1;	// IMP=0x000000010001d114
- (void)transcriptStackViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x000000010001d110
- (void)transcriptStackViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x000000010001d10c
- (void)transcriptStackViewControllerDidShowSuggestions:(id)arg1;	// IMP=0x000000010001d108
- (void)transcriptStackViewControllerDidExitSiriland:(id)arg1;	// IMP=0x000000010001d104
- (void)transcriptStackViewControllerWillEnterSiriland:(id)arg1;	// IMP=0x000000010001d100
- (CDStruct_a82615c4)keyboardInfoForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001d090
- (unsigned long long)deviceLockStateForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001d088
- (id)transcriptStackViewController:(id)arg1 updatedUserUtteranceForRefId:(id)arg2;	// IMP=0x000000010001d080
- (id)transcriptStackViewController:(id)arg1 additionalSpeechInterpretationsForRefId:(id)arg2;	// IMP=0x000000010001d078
- (id)effectiveCoreLocationBundleForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001d070
- (_Bool)transcriptStackViewControllerShouldPreventUserInteraction:(id)arg1;	// IMP=0x000000010001d068
- (_Bool)transcriptStackViewControllerWillShowSuggestions:(id)arg1;	// IMP=0x000000010001d060
- (_Bool)transcriptStackViewControllerShouldDelaySuggestions:(id)arg1;	// IMP=0x000000010001d058
- (void)transcriptStackViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001cfa8
- (long long)initialDisplayTypeForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001cfa0
- (double)statusViewHeightForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001cf44
- (struct CGRect)statusBarFrameForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001cec8
- (double)contentWidthForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001ce6c
- (id)siriEnabledAppListForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001ce10
- (id)domainObjectStoreForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001ce08
- (id)conversationForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001cdf8
- (long long)siriStateForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010001cdf0
- (void)keyboardHeightDidChange;	// IMP=0x000000010001cdd8
- (void)_createGuideController;	// IMP=0x000000010001cc08
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000010001cb78
- (void)animateOut;	// IMP=0x000000010001cac8
- (void)showRootGuide;	// IMP=0x000000010001cab0
- (void)showGuideStart;	// IMP=0x000000010001ca98
- (_Bool)isShowingGuide;	// IMP=0x000000010001ca4c
- (void)showGuideAnimated:(_Bool)arg1;	// IMP=0x000000010001c90c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001c844
- (void)hideAcousticIDSpinner;	// IMP=0x000000010001c804
- (void)showAcousticIDSpinner;	// IMP=0x000000010001c7c4
- (void)_showHeaderText:(id)arg1 subheaderText:(id)arg2 largeSubheaderText:(id)arg3;	// IMP=0x000000010001c65c
- (void)showEmptyView;	// IMP=0x000000010001c5f8
- (void)showUserNudge;	// IMP=0x000000010001c570
- (void)showGreeting;	// IMP=0x000000010001c4ec
- (void)showUnavailable;	// IMP=0x000000010001c368
- (id)_nudgeHeaderText;	// IMP=0x000000010001c274
- (id)_initialHeaderText;	// IMP=0x000000010001c180
- (void)loadView;	// IMP=0x000000010001c0c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SiriUISuggestionsView *view; // @dynamic view;

@end
