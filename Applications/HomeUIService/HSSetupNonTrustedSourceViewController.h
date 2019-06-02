//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "HSSetupStep.h"

@class HMAccessoryCategory, HSTitleAndDescriptionView, HUColoredButton, LSApplicationProxy, NAFuture, NSString, UIImageView;

@interface HSSetupNonTrustedSourceViewController : UIViewController <HSSetupStep>
{
    id <HSSetupStepDelegate> _delegate;	// 8 = 0x8
    LSApplicationProxy *_appProxy;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    HMAccessoryCategory *_category;	// 32 = 0x20
    HUColoredButton *_button;	// 40 = 0x28
    UIImageView *_sourceAppIcon;	// 48 = 0x30
    HSTitleAndDescriptionView *_promptView;	// 56 = 0x38
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x000000010001cee8
@property(retain, nonatomic) HSTitleAndDescriptionView *promptView; // @synthesize promptView=_promptView;
@property(retain, nonatomic) UIImageView *sourceAppIcon; // @synthesize sourceAppIcon=_sourceAppIcon;
@property(retain, nonatomic) HUColoredButton *button; // @synthesize button=_button;
@property(retain, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) LSApplicationProxy *appProxy; // @synthesize appProxy=_appProxy;
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010001e814
@property(readonly, nonatomic) long long setupState;
- (int)_iconVariantForScale:(double)arg1;	// IMP=0x000000010001e670
- (id)_createSourceAppIconView;	// IMP=0x000000010001e514
- (void)_buttonTapped:(id)arg1;	// IMP=0x000000010001e4cc
- (void)_cancel:(id)arg1;	// IMP=0x000000010001e484
- (void)viewDidLoad;	// IMP=0x000000010001d46c
- (id)_sanitizedCategoryName;	// IMP=0x000000010001d2f8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010001d1e8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010001d0d8
- (id)initWithBundleID:(id)arg1 category:(id)arg2;	// IMP=0x000000010001cef0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture;
@property(readonly) Class superclass;

@end

