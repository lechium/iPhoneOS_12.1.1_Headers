//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BFFOnBoardingSplashController.h"

#import "BFFFlowItem.h"

@class NSString;

@interface BuddyApplicationSwitcherOnBoardingSplashController : BFFOnBoardingSplashController <BFFFlowItem>
{
    id <BFFFlowItemDelegate> _delegate;	// 8 = 0x8
}

@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100086608
- (id)init;	// IMP=0x0000000100086488
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000863c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

