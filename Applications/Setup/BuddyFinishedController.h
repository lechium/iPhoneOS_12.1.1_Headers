//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BuddyLandingPageController.h"

@class NSLayoutConstraint, UIButton, UILabel;

@interface BuddyFinishedController : BuddyLandingPageController
{
    UILabel *_titleLabel;	// 40 = 0x28
    UIButton *_actionButton;	// 48 = 0x30
    NSLayoutConstraint *_titleVerticalConstraint;	// 56 = 0x38
    NSLayoutConstraint *_buttonVerticalConstraint;	// 64 = 0x40
}

@property(retain, nonatomic) NSLayoutConstraint *buttonVerticalConstraint; // @synthesize buttonVerticalConstraint=_buttonVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleVerticalConstraint; // @synthesize titleVerticalConstraint=_titleVerticalConstraint;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x0000000100059f10
- (void)done;	// IMP=0x0000000100059e10
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100059928
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000001000598c0
- (void)_setVerticalConstraintsConstantsForSize:(struct CGSize)arg1;	// IMP=0x0000000100059780
- (void)loadActualView;	// IMP=0x00000001000589ec

@end

