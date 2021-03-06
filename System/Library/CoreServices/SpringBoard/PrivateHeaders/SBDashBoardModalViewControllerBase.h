//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "SBDashBoardModalViewDelegate.h"

@class NSString;

@interface SBDashBoardModalViewControllerBase : SBDashBoardViewControllerBase <SBDashBoardModalViewDelegate>
{
}

+ (Class)viewClass;	// IMP=0x00000001004a0aac
- (void)handleSecondaryActionForView:(id)arg1;	// IMP=0x00000001004a0f10
- (void)handlePrimaryActionForView:(id)arg1;	// IMP=0x00000001004a0f04
- (long long)presentationPriority;	// IMP=0x00000001004a0efc
- (long long)presentationType;	// IMP=0x00000001004a0ef4
- (long long)presentationStyle;	// IMP=0x00000001004a0eec
- (void)aggregateBehavior:(id)arg1;	// IMP=0x00000001004a0e74
- (void)aggregateAppearance:(id)arg1;	// IMP=0x00000001004a0ac0
- (void)viewDidLoad;	// IMP=0x00000001004a09f0
- (id)viewIfLoaded;	// IMP=0x00000001004a09bc
- (id)view;	// IMP=0x00000001004a0988

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

