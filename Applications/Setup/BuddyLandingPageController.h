//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BFFFlowItem.h"

@class NSString, UIActivityIndicatorView, UILabel, UIView;

@interface BuddyLandingPageController : UIViewController <BFFFlowItem>
{
    id <BFFFlowItemDelegate> _delegate;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
    UIActivityIndicatorView *_spinner;	// 32 = 0x20
}

+ (id)cloudConfigSkipKey;	// IMP=0x0000000100057b3c
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;	// IMP=0x0000000100058984
- (void)loadActualView;	// IMP=0x0000000100058914
- (void)done;	// IMP=0x00000001000588f4
- (void)setDelegate:(id)arg1;	// IMP=0x00000001000588e0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100058868
- (void)viewDidLayoutSubviews;	// IMP=0x000000010005850c
- (void)viewDidLoad;	// IMP=0x0000000100057ba4
- (id)init;	// IMP=0x0000000100057b44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

