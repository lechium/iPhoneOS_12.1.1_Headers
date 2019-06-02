//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PHCallParticipantsViewDelegate.h"

@class NSMutableArray, NSNumberFormatter, NSString, PHCallParticipantsView, PHContactsClient;

@interface PHCallParticipantsViewController : UIViewController <PHCallParticipantsViewDelegate>
{
    _Bool _handlesCallWaitingCalls;	// 8 = 0x8
    _Bool _allowsFieldModeSendButton;	// 9 = 0x9
    _Bool _shouldCompressLabelsVertically;	// 10 = 0xa
    _Bool _shouldIgnoreUpdates;	// 11 = 0xb
    _Bool _shouldInsertSpaceBeforeNextOverrideStringCharacter;	// 12 = 0xc
    PHContactsClient *_contactsClient;	// 16 = 0x10
    NSNumberFormatter *_numberFormatter;	// 24 = 0x18
    PHCallParticipantsView *_participantsView;	// 32 = 0x20
    NSMutableArray *_callGroups;	// 40 = 0x28
    NSString *_nameOverrideString;	// 48 = 0x30
}

@property _Bool shouldInsertSpaceBeforeNextOverrideStringCharacter; // @synthesize shouldInsertSpaceBeforeNextOverrideStringCharacter=_shouldInsertSpaceBeforeNextOverrideStringCharacter;
@property(retain) NSString *nameOverrideString; // @synthesize nameOverrideString=_nameOverrideString;
@property(retain, nonatomic) NSMutableArray *callGroups; // @synthesize callGroups=_callGroups;
@property(retain) PHCallParticipantsView *participantsView; // @synthesize participantsView=_participantsView;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(retain, nonatomic) PHContactsClient *contactsClient; // @synthesize contactsClient=_contactsClient;
@property(nonatomic) _Bool shouldIgnoreUpdates; // @synthesize shouldIgnoreUpdates=_shouldIgnoreUpdates;
@property(nonatomic) _Bool shouldCompressLabelsVertically; // @synthesize shouldCompressLabelsVertically=_shouldCompressLabelsVertically;
@property(nonatomic) _Bool allowsFieldModeSendButton; // @synthesize allowsFieldModeSendButton=_allowsFieldModeSendButton;
@property _Bool handlesCallWaitingCalls; // @synthesize handlesCallWaitingCalls=_handlesCallWaitingCalls;
- (void).cxx_destruct;	// IMP=0x00000001000c3a64
- (_Bool)isDeviceCapableOfTelephonyCalls;	// IMP=0x00000001000c3968
- (void)fieldModeSendButtonTappedInParticipantsView:(id)arg1;	// IMP=0x00000001000c3770
- (id)appIconInParticipantsView:(id)arg1;	// IMP=0x00000001000c3630
- (id)fontForParticipantLabelForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000c3520
- (id)colorForStatusLabelForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000c342c
- (_Bool)shouldIgnoreUpdatesInParticipantsView:(id)arg1;	// IMP=0x00000001000c3420
- (id)compactLabelTextForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000c32fc
- (void)participantViewInfoButtonTappedAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000c3280
- (void)participantTappedAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000c3090
- (_Bool)shouldShowParticipantImageAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x000000010000f884
- (unsigned short)activityStateForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x000000010001125c
- (id)supplementalParticipantLabelFormatStringAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x000000010000f594
- (_Bool)anyLabelDescriptorIsDynamic;	// IMP=0x000000010001f930
- (id)labelForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x000000010000f400
- (id)callForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x000000010000f4a4
- (id)nameForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x000000010000f250
- (id)overrideStringForParticipantsView:(id)arg1;	// IMP=0x000000010000d26c
- (unsigned long long)numberOfParticipantLabels;	// IMP=0x000000010000c538
- (unsigned long long)numberOfParticipantsForParticipantsView:(id)arg1;	// IMP=0x000000010000c52c
- (_Bool)shouldShowInfoButtonForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x0000000100011508
- (_Bool)shouldShowSingleDurationLabel;	// IMP=0x000000010000d144
- (_Bool)shouldShowSingleDurationLabelInParticipantsView:(id)arg1;	// IMP=0x00000001000c3084
- (id)localizedSenderIdentityForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000c2ec8
- (id)contactForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x000000010000f6c4
- (void)resetNameOverrideString;	// IMP=0x000000010001c4ac
- (void)setShouldInsertSpaceBeforeNextOverrideStringCharacter;	// IMP=0x00000001000c2eb8
- (void)keypadDataSourceChangedNotification:(id)arg1;	// IMP=0x00000001000c2b2c
- (void)callContinuityChangedNotification:(id)arg1;	// IMP=0x00000001000c2a48
- (void)secondTickNotification:(id)arg1;	// IMP=0x000000010001f8cc
- (void)displayContextChangedNotification:(id)arg1;	// IMP=0x00000001000c2994
- (void)callModelChangedNotification:(id)arg1;	// IMP=0x00000001000205b8
- (void)isThirdPartyVideoChangedNotification:(id)arg1;	// IMP=0x00000001000c28b0
- (void)conferenceParticipantsChangedNotification:(id)arg1;	// IMP=0x00000001000c27cc
- (void)callStatusChangedNotification:(id)arg1;	// IMP=0x0000000100021544
- (void)_updateCallGroups;	// IMP=0x000000010000c698
- (void)loadView;	// IMP=0x000000010000b150
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100022830
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001dde8
- (void)didReceiveMemoryWarning;	// IMP=0x00000001000c247c
- (void)dealloc;	// IMP=0x00000001000c23ac
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010000b0e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

