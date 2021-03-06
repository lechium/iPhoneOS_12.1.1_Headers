//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextViewDelegate.h"

@class NAUILayoutConstraintSet, NSAttributedString, NSString, UILabel, UITextView;

@interface HSSetupTroubleshootingTipCell : UITableViewCell <UITextViewDelegate>
{
    id <HSSetupTroubleshootingTipCellDelegate> _delegate;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UITextView *_bodyTextView;	// 24 = 0x18
    NAUILayoutConstraintSet *_constraintSet;	// 32 = 0x20
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x000000010000ff94
@property(retain, nonatomic) NAUILayoutConstraintSet *constraintSet; // @synthesize constraintSet=_constraintSet;
@property(retain, nonatomic) UITextView *bodyTextView; // @synthesize bodyTextView=_bodyTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HSSetupTroubleshootingTipCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100010ff8
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x0000000100010e24
@property(retain, nonatomic) NSAttributedString *attributedBodyString;
@property(retain, nonatomic) NSString *titleString;
- (void)updateConstraints;	// IMP=0x0000000100010bc0
- (void)prepareForReuse;	// IMP=0x0000000100010b6c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010000ff9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

