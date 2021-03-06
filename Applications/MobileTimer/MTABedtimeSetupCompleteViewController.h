//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MTABedtimeSetupStep.h"

@class MTAlarm, NSLayoutConstraint, NSString, UIImageView, UILabel, UIScrollView;

@interface MTABedtimeSetupCompleteViewController : UIViewController <MTABedtimeSetupStep>
{
    id <MTABedtimeSetupDelegate> setupDelegate;	// 8 = 0x8
    MTAlarm *sleepAlarm;	// 16 = 0x10
    UIScrollView *_scrollView;	// 24 = 0x18
    UIImageView *_glyphImageView;	// 32 = 0x20
    UIImageView *_graphImageView;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UILabel *_messageLabel;	// 56 = 0x38
    UILabel *_footerLabel;	// 64 = 0x40
    NSLayoutConstraint *_titleBaselineConstraint;	// 72 = 0x48
    NSLayoutConstraint *_iconTitleConstraint;	// 80 = 0x50
    NSLayoutConstraint *_titleMessageConstraint;	// 88 = 0x58
}

@property(retain, nonatomic) NSLayoutConstraint *titleMessageConstraint; // @synthesize titleMessageConstraint=_titleMessageConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconTitleConstraint; // @synthesize iconTitleConstraint=_iconTitleConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleBaselineConstraint; // @synthesize titleBaselineConstraint=_titleBaselineConstraint;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *graphImageView; // @synthesize graphImageView=_graphImageView;
@property(retain, nonatomic) UIImageView *glyphImageView; // @synthesize glyphImageView=_glyphImageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MTAlarm *sleepAlarm; // @synthesize sleepAlarm;
@property(nonatomic) __weak id <MTABedtimeSetupDelegate> setupDelegate; // @synthesize setupDelegate;
- (void).cxx_destruct;	// IMP=0x000000010006a318
- (void)done:(id)arg1;	// IMP=0x000000010006a10c
- (void)handleContentSizeChange:(id)arg1;	// IMP=0x0000000100069f10
- (void)setupConstraints;	// IMP=0x0000000100068a00
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100068964
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100068870
- (void)updateTitleBaselineConstraint;	// IMP=0x0000000100068738
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100068654
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100068604
- (void)viewDidLoad;	// IMP=0x000000010006844c
- (void)loadView;	// IMP=0x00000001000678c8
- (id)init;	// IMP=0x00000001000677e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

