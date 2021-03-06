//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MTABedtimeSetupStep.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MTAlarm, NSLayoutConstraint, NSString, UIImageView, UILabel, UITableView, UIView;

@interface MTABedtimeSetupReminderViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MTABedtimeSetupStep>
{
    id <MTABedtimeSetupDelegate> setupDelegate;	// 8 = 0x8
    MTAlarm *sleepAlarm;	// 16 = 0x10
    UIView *_tableHeaderView;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UITableView *_tableView;	// 48 = 0x30
    NSLayoutConstraint *_titleBaselineConstraint;	// 56 = 0x38
    NSLayoutConstraint *_iconTopConstraint;	// 64 = 0x40
    NSLayoutConstraint *_iconTitleConstraint;	// 72 = 0x48
}

@property(retain, nonatomic) NSLayoutConstraint *iconTitleConstraint; // @synthesize iconTitleConstraint=_iconTitleConstraint;
@property(retain, nonatomic) NSLayoutConstraint *iconTopConstraint; // @synthesize iconTopConstraint=_iconTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleBaselineConstraint; // @synthesize titleBaselineConstraint=_titleBaselineConstraint;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) MTAlarm *sleepAlarm; // @synthesize sleepAlarm;
@property(nonatomic) __weak id <MTABedtimeSetupDelegate> setupDelegate; // @synthesize setupDelegate;
- (void).cxx_destruct;	// IMP=0x0000000100006ac8
- (unsigned long long)reminderMinutesForCellAtIndexPath:(id)arg1;	// IMP=0x000000010000694c
- (id)titleForCellAtIndexPath:(id)arg1;	// IMP=0x00000001000066e8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000064cc
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100006208
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100006200
- (void)next:(id)arg1;	// IMP=0x000000010000610c
- (void)handleContentSizeChange:(id)arg1;	// IMP=0x000000010000604c
- (void)resizeHeaderView;	// IMP=0x0000000100005ec0
- (void)setupConstraints;	// IMP=0x00000001000052ec
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x0000000100005170
- (void)viewWillLayoutSubviews;	// IMP=0x0000000100005120
- (void)updateTitleBaselineConstraint;	// IMP=0x0000000100004fe8
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100004f04
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100004eb4
- (void)viewDidLoad;	// IMP=0x0000000100004b24
- (void)loadView;	// IMP=0x00000001000044e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

