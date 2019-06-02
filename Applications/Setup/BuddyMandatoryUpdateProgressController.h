//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BFFFlowItem.h"
#import "PSUISoftwareUpdateManagerDelegate.h"

@class BFFSimpleProgressView, NSString, PSUISoftwareUpdateManager;

@interface BuddyMandatoryUpdateProgressController : UIViewController <PSUISoftwareUpdateManagerDelegate, BFFFlowItem>
{
    id <BFFFlowItemDelegate> _delegate;	// 8 = 0x8
    PSUISoftwareUpdateManager *_updateManager;	// 16 = 0x10
    BFFSimpleProgressView *_progressView;	// 24 = 0x18
}

+ (id)cloudConfigSkipKey;	// IMP=0x000000010006a958
@property(retain) BFFSimpleProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain) PSUISoftwareUpdateManager *updateManager; // @synthesize updateManager=_updateManager;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010006b3cc
- (void)manager:(id)arg1 installFailedWithError:(id)arg2;	// IMP=0x000000010006b1b4
- (void)manager:(id)arg1 installStartedForUpdate:(id)arg2;	// IMP=0x000000010006afc4
- (void)manager:(id)arg1 download:(id)arg2 failedWithError:(id)arg3;	// IMP=0x000000010006ae18
- (void)manager:(id)arg1 downloadFinished:(id)arg2;	// IMP=0x000000010006ae0c
- (void)manager:(id)arg1 promptForDevicePasscodeWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010006ae08
- (void)manager:(id)arg1 downloadProgressChanged:(id)arg2 displayStyle:(int)arg3;	// IMP=0x000000010006ab30
- (void)manager:(id)arg1 didTransitionToState:(int)arg2 fromState:(int)arg3 error:(id)arg4;	// IMP=0x000000010006a968
- (_Bool)shouldAllowStartOver;	// IMP=0x000000010006a960
- (void)startInstall;	// IMP=0x000000010006a6ac
- (void)startDownload;	// IMP=0x000000010006a14c
- (void)showAlertForError:(id)arg1;	// IMP=0x0000000100069970
- (void)resetProgress;	// IMP=0x0000000100069864
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000695e4
- (void)loadView;	// IMP=0x000000010006939c
- (id)initWithMandatoryUpdate:(_Bool)arg1 bypassTermsAndConditions:(_Bool)arg2;	// IMP=0x000000010006922c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
