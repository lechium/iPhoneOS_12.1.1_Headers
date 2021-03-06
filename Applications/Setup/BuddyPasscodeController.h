//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BFFPasscodeViewController.h"

#import "BFFFlowItem.h"
#import "BFFPasscodeViewControllerDelegate.h"

@class NSString;

@interface BuddyPasscodeController : BFFPasscodeViewController <BFFFlowItem, BFFPasscodeViewControllerDelegate>
{
    id <BFFFlowItemDelegate> _delegate;	// 8 = 0x8
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000dd71c
+ (_Bool)controllerNeedsToRun;	// IMP=0x00000001000dd530
+ (void)forceShowPasscodeController;	// IMP=0x00000001000dd520
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000dda74
- (void)passcodeViewController:(id)arg1 didSetPasscode:(id)arg2;	// IMP=0x00000001000dd9d0
- (void)passcodeViewControllerWillSetPasscode:(id)arg1;	// IMP=0x00000001000dd984
- (void)passcodeViewController:(id)arg1 didFinishWithPasscodeCreation:(id)arg2;	// IMP=0x00000001000dd860
- (void)controllerWasPopped;	// IMP=0x00000001000dd810
- (_Bool)controllerAllowsNavigatingBack;	// IMP=0x00000001000dd7bc
- (_Bool)isEphemeral;	// IMP=0x00000001000dd79c
- (_Bool)allowsSkip;	// IMP=0x00000001000dd788
- (id)init;	// IMP=0x00000001000dd72c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

