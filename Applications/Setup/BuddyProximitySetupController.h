//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BFFSplashController.h"

#import "BFFFlowItem.h"

@class BuddyChoice, NSString;

@interface BuddyProximitySetupController : BFFSplashController <BFFFlowItem>
{
    id <BFFFlowItemDelegate> _delegate;	// 8 = 0x8
    BuddyChoice *_skipChoice;	// 16 = 0x10
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000621b4
+ (_Bool)controllerNeedsToRun;	// IMP=0x00000001000620d4
+ (_Bool)controllerAffectedByTapFreeSetup;	// IMP=0x00000001000620cc
@property(retain) BuddyChoice *skipChoice; // @synthesize skipChoice=_skipChoice;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000622fc
- (void)startOver;	// IMP=0x0000000100062240
- (_Bool)controllerAllowsNavigatingBack;	// IMP=0x00000001000621c4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100061fc0
- (id)init;	// IMP=0x0000000100061a6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

