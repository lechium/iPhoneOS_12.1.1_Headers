//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SetupChoiceController.h"

#import "PSUIHomeButtonCustomizeControllerDelegate.h"

@class SetupChoice, UIImageView;

@interface BuddyHomeButtonController : SetupChoiceController <PSUIHomeButtonCustomizeControllerDelegate>
{
    SetupChoice *_customizeChoice;	// 8 = 0x8
    SetupChoice *_skipChoice;	// 16 = 0x10
    UIImageView *_deviceImageView;	// 24 = 0x18
}

+ (id)cloudConfigSkipKey;	// IMP=0x000000010004b960
+ (_Bool)controllerNeedsToRun;	// IMP=0x000000010004b744
- (void).cxx_destruct;	// IMP=0x000000010004c604
- (void)homeButtonCustomizeControllerDidFinish:(id)arg1;	// IMP=0x000000010004c5d0
- (void)controllerDone;	// IMP=0x000000010004c404
- (void)viewDidLayoutSubviews;	// IMP=0x000000010004c1c8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010004c114
- (void)loadView;	// IMP=0x000000010004bdb4
- (_Bool)useTableLayout;	// IMP=0x000000010004bdac
- (_Bool)wantsNextButton;	// IMP=0x000000010004bda4
- (id)footerDetailText;	// IMP=0x000000010004bd14
- (id)titleText;	// IMP=0x000000010004bc84
- (_Bool)shouldAllowStartOver;	// IMP=0x000000010004bbf0
- (id)init;	// IMP=0x000000010004b970
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004b7bc

@end

