//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UILabel, UIStackView;

@interface VMAccountsView : UIView
{
    id <VMAccountsViewDataSource> _dataSource;	// 8 = 0x8
    id <VMAccountsViewDelegate> _delegate;	// 16 = 0x10
    UILabel *_messageLabel;	// 24 = 0x18
    NSMutableArray *_buttons;	// 32 = 0x20
    UIStackView *_buttonStackView;	// 40 = 0x28
}

@property(retain, nonatomic) UIStackView *buttonStackView; // @synthesize buttonStackView=_buttonStackView;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(nonatomic) __weak id <VMAccountsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <VMAccountsViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x00000001000760e8
@property(readonly, nonatomic) double messageLabelLastBaselineAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double messageLabelFirstBaselineAnchorLayoutConstraintConstant;
- (id)buttonAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100075da0
- (void)reloadData;	// IMP=0x0000000100075870
- (void)loadConstraints;	// IMP=0x00000001000751a0
- (void)handleActionForButtonSender:(id)arg1 event:(id)arg2;	// IMP=0x000000010007505c
- (void)commonInit;	// IMP=0x0000000100074db0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100074d58

@end
