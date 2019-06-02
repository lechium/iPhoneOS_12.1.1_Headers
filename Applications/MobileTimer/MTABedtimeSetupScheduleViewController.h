//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MTABedtimeSetupStep.h"

@class MTABedtimeRepeatControl, MTAlarm, NSLayoutConstraint, NSString, UIImageView, UILabel, UIScrollView;

@interface MTABedtimeSetupScheduleViewController : UIViewController <MTABedtimeSetupStep>
{
    id <MTABedtimeSetupDelegate> setupDelegate;	// 8 = 0x8
    MTAlarm *sleepAlarm;	// 16 = 0x10
    UIScrollView *_scrollView;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UILabel *_explanatoryLabel;	// 48 = 0x30
    MTABedtimeRepeatControl *_repeatControl;	// 56 = 0x38
    UILabel *_repeatLabel;	// 64 = 0x40
    NSLayoutConstraint *_titleBaselineConstraint;	// 72 = 0x48
    NSLayoutConstraint *_iconTopConstraint;	// 80 = 0x50
    NSLayoutConstraint *_iconTitleConstraint;	// 88 = 0x58
    NSLayoutConstraint *_titleMessageConstraint;	// 96 = 0x60
    NSLayoutConstraint *_repeatControlHeightConstraint;	// 104 = 0x68
    NSLayoutConstraint *_repeatLabelHeightConstraint;	// 112 = 0x70
}

@property(retain, nonatomic) NSLayoutConstraint *repeatLabelHeightConstraint; // @synthesize repeatLabelHeightConstraint=_repeatLabelHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *repeatControlHeightConstraint; // @synthesize repeatControlHeightConstraint=_repeatControlHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleMessageConstraint; // @synthesize titleMessageConstraint=_titleMessageConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconTitleConstraint; // @synthesize iconTitleConstraint=_iconTitleConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconTopConstraint; // @synthesize iconTopConstraint=_iconTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleBaselineConstraint; // @synthesize titleBaselineConstraint=_titleBaselineConstraint;
@property(retain, nonatomic) UILabel *repeatLabel; // @synthesize repeatLabel=_repeatLabel;
@property(retain, nonatomic) MTABedtimeRepeatControl *repeatControl; // @synthesize repeatControl=_repeatControl;
@property(retain, nonatomic) UILabel *explanatoryLabel; // @synthesize explanatoryLabel=_explanatoryLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MTAlarm *sleepAlarm; // @synthesize sleepAlarm;
@property(nonatomic) __weak id <MTABedtimeSetupDelegate> setupDelegate; // @synthesize setupDelegate;
- (void).cxx_destruct;	// IMP=0x000000010004fb34
- (void)next:(id)arg1;	// IMP=0x000000010004f844
- (void)repeatControlChanged:(id)arg1;	// IMP=0x000000010004f674
- (void)handleContentSizeChange:(id)arg1;	// IMP=0x000000010004f364
- (double)repeatLabelHeight;	// IMP=0x000000010004f1bc
- (void)setupConstraints;	// IMP=0x000000010004d9d0
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x000000010004d890
- (void)viewWillLayoutSubviews;	// IMP=0x000000010004d720
- (void)updateTitleBaselineConstraint;	// IMP=0x000000010004d5e8
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000010004d504
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010004d494
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010004d394
- (void)viewDidLoad;	// IMP=0x000000010004cfdc
- (void)loadView;	// IMP=0x000000010004c5bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

