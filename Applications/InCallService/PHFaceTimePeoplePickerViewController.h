//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CNAutocompleteFetchDelegate.h"
#import "CNContactPickerDelegate.h"
#import "MFComposeRecipientTextViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CNAutocompleteStore, MFComposeRecipientTextView, NSLayoutConstraint, NSMutableArray, NSMutableSet, NSSet, NSString, UIButton, UIStackView, UITableView, UIView;

@interface PHFaceTimePeoplePickerViewController : UIViewController <CNContactPickerDelegate, CNAutocompleteFetchDelegate, MFComposeRecipientTextViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    id <PHFaceTimePeoplePickerViewControllerDelegate> _delegate;	// 8 = 0x8
    unsigned long long _style;	// 16 = 0x10
    CNAutocompleteStore *_autocompleteStore;	// 24 = 0x18
    id <CNCancelable> _currentFetchRequest;	// 32 = 0x20
    NSString *_currentSearchTerm;	// 40 = 0x28
    NSMutableSet *_idsDestinations;	// 48 = 0x30
    NSMutableArray *_pendingResults;	// 56 = 0x38
    NSMutableArray *_predictedResults;	// 64 = 0x40
    NSMutableArray *_contactsWithRecentResults;	// 72 = 0x48
    NSMutableArray *_suggestionResults;	// 80 = 0x50
    NSSet *_existingAddresses;	// 88 = 0x58
    MFComposeRecipientTextView *_recipientTextView;	// 96 = 0x60
    NSLayoutConstraint *_recipientTextViewHeightAnchor;	// 104 = 0x68
    UIView *_topSeparatorView;	// 112 = 0x70
    UIView *_bottomSeparatorView;	// 120 = 0x78
    UITableView *_tableView;	// 128 = 0x80
    UIButton *_audioButton;	// 136 = 0x88
    UIButton *_videoButton;	// 144 = 0x90
    UIButton *_addPeopleButton;	// 152 = 0x98
    UIStackView *_actionButtonsContainerView;	// 160 = 0xa0
    NSLayoutConstraint *_actionButtonsContainerViewBottomAnchor;	// 168 = 0xa8
    NSLayoutConstraint *_actionButtonsContainerHeightAnchor;	// 176 = 0xb0
    struct CGRect _keyboardRect;	// 184 = 0xb8
}

+ (_Bool)isTelephonyCallCapableForAddress:(id)arg1;	// IMP=0x00000001000a2a20
+ (id)idsDestinationsForRecipient:(id)arg1;	// IMP=0x00000001000a1a6c
+ (id)idsDestinationsForAutocompleteResult:(id)arg1;	// IMP=0x00000001000a16d0
+ (_Bool)shouldUseBlendMode;	// IMP=0x000000010009c7d4
+ (id)phoneNumberSeparatorCharacterSet;	// IMP=0x000000010009c7b8
+ (id)separatorColor;	// IMP=0x000000010009c7a4
+ (id)cellSelectedBackgroundColor;	// IMP=0x000000010009c778
+ (id)unavailableRecipientTintColor;	// IMP=0x000000010009c764
+ (id)availableRecipientTintColor;	// IMP=0x000000010009c750
+ (id)inactiveButtonBackgroundColor;	// IMP=0x000000010009c73c
+ (id)activeButtonBackgroundColor;	// IMP=0x000000010009c728
+ (id)inactiveButtonTintColor;	// IMP=0x000000010009c708
+ (id)activeButtonTintColor;	// IMP=0x000000010009c6f4
@property(retain, nonatomic) NSLayoutConstraint *actionButtonsContainerHeightAnchor; // @synthesize actionButtonsContainerHeightAnchor=_actionButtonsContainerHeightAnchor;
@property(retain, nonatomic) NSLayoutConstraint *actionButtonsContainerViewBottomAnchor; // @synthesize actionButtonsContainerViewBottomAnchor=_actionButtonsContainerViewBottomAnchor;
@property(nonatomic) struct CGRect keyboardRect; // @synthesize keyboardRect=_keyboardRect;
@property(retain, nonatomic) UIStackView *actionButtonsContainerView; // @synthesize actionButtonsContainerView=_actionButtonsContainerView;
@property(retain, nonatomic) UIButton *addPeopleButton; // @synthesize addPeopleButton=_addPeopleButton;
@property(retain, nonatomic) UIButton *videoButton; // @synthesize videoButton=_videoButton;
@property(retain, nonatomic) UIButton *audioButton; // @synthesize audioButton=_audioButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(retain, nonatomic) NSLayoutConstraint *recipientTextViewHeightAnchor; // @synthesize recipientTextViewHeightAnchor=_recipientTextViewHeightAnchor;
@property(retain, nonatomic) MFComposeRecipientTextView *recipientTextView; // @synthesize recipientTextView=_recipientTextView;
@property(readonly, copy, nonatomic) NSSet *existingAddresses; // @synthesize existingAddresses=_existingAddresses;
@property(readonly, copy, nonatomic) NSMutableArray *suggestionResults; // @synthesize suggestionResults=_suggestionResults;
@property(readonly, copy, nonatomic) NSMutableArray *contactsWithRecentResults; // @synthesize contactsWithRecentResults=_contactsWithRecentResults;
@property(readonly, copy, nonatomic) NSMutableArray *predictedResults; // @synthesize predictedResults=_predictedResults;
@property(readonly, copy, nonatomic) NSMutableArray *pendingResults; // @synthesize pendingResults=_pendingResults;
@property(readonly, copy, nonatomic) NSMutableSet *idsDestinations; // @synthesize idsDestinations=_idsDestinations;
@property(copy, nonatomic) NSString *currentSearchTerm; // @synthesize currentSearchTerm=_currentSearchTerm;
@property(retain, nonatomic) id <CNCancelable> currentFetchRequest; // @synthesize currentFetchRequest=_currentFetchRequest;
@property(readonly, nonatomic) CNAutocompleteStore *autocompleteStore; // @synthesize autocompleteStore=_autocompleteStore;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <PHFaceTimePeoplePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000a5590
- (void)autocompleteFetchDidFinish:(id)arg1;	// IMP=0x00000001000a50b8
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;	// IMP=0x00000001000a4eec
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001000a4e1c
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;	// IMP=0x00000001000a4dcc
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;	// IMP=0x00000001000a4ab8
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;	// IMP=0x00000001000a49c4
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;	// IMP=0x00000001000a48d0
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;	// IMP=0x00000001000a46dc
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;	// IMP=0x00000001000a457c
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00000001000a4484
- (void)performContactSearchWithText:(id)arg1;	// IMP=0x00000001000a3e38
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000001000a3d48
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000001000a3d2c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000a39c0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000a3970
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000a3968
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000a37c8
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000a36d0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000a365c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000a35cc
- (void)viewDidLoad;	// IMP=0x00000001000a33bc
- (void)handleComposeRecipientListChanged;	// IMP=0x00000001000a3294
- (void)addPeopleButtonTapped:(id)arg1;	// IMP=0x00000001000a2ffc
- (void)startCallButtonTappedWithVideo:(_Bool)arg1;	// IMP=0x00000001000a2cf4
- (void)startAudioCallButtonTapped;	// IMP=0x00000001000a2ce4
- (void)startVideoCallButtonTapped;	// IMP=0x00000001000a2cd4
- (void)cancelButtonTapped;	// IMP=0x00000001000a2bf0
- (void)handleIDSStatusChanged:(id)arg1;	// IMP=0x00000001000a2b08
- (void)keyboardWillBeHidden:(id)arg1;	// IMP=0x00000001000a2ac4
- (void)keyboardWillShow:(id)arg1;	// IMP=0x00000001000a2a28
- (id)tintColorForPotentialRecipient:(id)arg1;	// IMP=0x00000001000a2794
- (id)tintColorForPickedRecipient:(id)arg1;	// IMP=0x00000001000a2504
- (_Bool)isMultiwayAllowedForCurrentRecipients;	// IMP=0x00000001000a22d4
- (_Bool)isVideoAllowedForCurrentRecipients;	// IMP=0x00000001000a2154
- (_Bool)isAudioAllowedForCurrentRecipients;	// IMP=0x00000001000a1f7c
- (void)reset;	// IMP=0x00000001000a138c
- (void)updateState;	// IMP=0x00000001000a0810
- (void)updateTableView;	// IMP=0x00000001000a05e0
- (id)recipientForIndexPath:(id)arg1;	// IMP=0x00000001000a0508
- (id)resultsForSection:(long long)arg1;	// IMP=0x00000001000a0484
- (id)recipientFromHandle:(id)arg1;	// IMP=0x00000001000a0128
- (id)recipientsForRecentCalls:(id)arg1;	// IMP=0x000000010009fbd0
- (id)recentCallsMatchingSearchString:(id)arg1;	// IMP=0x000000010009f688
- (void)processPendingResults;	// IMP=0x000000010009f090
- (void)setUpConstraints;	// IMP=0x000000010009df84
- (void)setUpSeparatorsUsing:(id)arg1;	// IMP=0x000000010009dd10
- (void)setUpRecipientViewUsing:(id)arg1;	// IMP=0x000000010009d9f4
- (void)setUpTableViewUsing:(id)arg1;	// IMP=0x000000010009d658
- (void)setUpButtonViewsUsing:(id)arg1;	// IMP=0x000000010009cc74
- (void)setUpNavigationBar;	// IMP=0x000000010009c7dc
- (id)initWithStyle:(unsigned long long)arg1 existingAddresses:(id)arg2;	// IMP=0x000000010009c2cc
- (id)initWithStyle:(unsigned long long)arg1;	// IMP=0x000000010009c258

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
