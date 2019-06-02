//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DialerController.h"

#import "CNContactPickerDelegate.h"
#import "CNContactViewControllerDelegate.h"
#import "TUCallProviderManagerDelegate.h"
#import "UIAlertControllerSystemProvidedPresentationDelegate.h"

@class NSString, PHDialerAlertController, TUMetadataCache;

@interface MPKeypadViewController : DialerController <CNContactPickerDelegate, CNContactViewControllerDelegate, UIAlertControllerSystemProvidedPresentationDelegate, TUCallProviderManagerDelegate>
{
    TUMetadataCache *_metadataCache;	// 40 = 0x28
    PHDialerAlertController *_callTypeAlertController;	// 48 = 0x30
}

@property(retain, nonatomic) PHDialerAlertController *callTypeAlertController; // @synthesize callTypeAlertController=_callTypeAlertController;
@property(retain, nonatomic) TUMetadataCache *metadataCache; // @synthesize metadataCache=_metadataCache;
- (void).cxx_destruct;	// IMP=0x000000010009aa38
- (void)providersChangedForProviderManager:(id)arg1;	// IMP=0x000000010009a900
- (void)_willBeginSystemProvidedPresentationOfAlertController:(id)arg1;	// IMP=0x0000000100099d28
- (_Bool)_shouldPerformSystemProvidedPresentationOfAlertController:(id)arg1 atSystemProvidedPresentationRegisteredViewLocation:(struct CGPoint)arg2;	// IMP=0x0000000100099c80
- (id)_presentingViewControllerForSystemProvidedPresentationOfAlertController:(id)arg1;	// IMP=0x0000000100099c7c
- (void)_updateAction:(id)arg1 forService:(id)arg2 withDestination:(id)arg3;	// IMP=0x0000000100099a84
- (id)pseudoNameStringForDestinationID:(id)arg1;	// IMP=0x0000000100099888
- (_Bool)defaultActionIsFaceTimeAudio;	// IMP=0x0000000100099858
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;	// IMP=0x0000000100099700
- (void)contactPickerDidCancel:(id)arg1;	// IMP=0x00000001000996ec
- (void)contactViewWrapperDidCancel;	// IMP=0x00000001000996d8
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;	// IMP=0x00000001000995e8
- (id)_newContactWithPhoneNumber:(id)arg1;	// IMP=0x0000000100099458
- (void)_addNewContact:(id)arg1;	// IMP=0x00000001000993b4
- (void)dialerView:(id)arg1 senderIdentityWasTapped:(id)arg2;	// IMP=0x0000000100098f1c
- (void)_updateMetadataCacheIfPossible;	// IMP=0x0000000100098d98
- (void)updateLocalizedSenderIdentity:(id)arg1;	// IMP=0x0000000100098c5c
- (void)refreshLocalizedSenderIdentity;	// IMP=0x0000000100098a3c
- (void)_updateName;	// IMP=0x0000000100098800
- (void)_metadataCacheDidUpdate:(id)arg1;	// IMP=0x0000000100098780
- (id)_metadataNameForDialerText;	// IMP=0x0000000100098540
- (void)_addButtonClicked:(id)arg1;	// IMP=0x0000000100097dc4
- (_Bool)_anyContactsExist;	// IMP=0x0000000100097bfc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100097bac
- (void)viewDidLoad;	// IMP=0x00000001000979bc
- (id)initWithDialerType:(int)arg1;	// IMP=0x0000000100097924

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
