//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BFFFlowItem.h"

@class NSString, UIActivityIndicatorView, UILabel, UIView;

@interface BuddySpinnerController : UIViewController <BFFFlowItem>
{
    UIView *_containerView;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
    UIActivityIndicatorView *_spinner;	// 24 = 0x18
    id <BFFFlowItemDelegate> _delegate;	// 32 = 0x20
}

+ (id)cloudConfigSkipKey;	// IMP=0x00000001000665bc
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100066c74
- (void)setSpinnerText:(id)arg1;	// IMP=0x0000000100066be0
- (void)viewDidLayoutSubviews;	// IMP=0x000000010006695c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000668fc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010006689c
- (void)loadView;	// IMP=0x00000001000667e4
- (_Bool)isEphemeral;	// IMP=0x00000001000667dc
- (_Bool)shouldSuppressExtendedInitializationActivityIndicator;	// IMP=0x00000001000667d4
- (id)init;	// IMP=0x00000001000665c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

