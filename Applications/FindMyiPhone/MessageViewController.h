//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMIPCommandViewController.h"

#import "UITextViewDelegate.h"

@class MessageTextView, NSLayoutConstraint, NSString, UILabel, UIScrollView;

@interface MessageViewController : FMIPCommandViewController <UITextViewDelegate>
{
    UILabel *_messageDescriptionLabel;	// 8 = 0x8
    MessageTextView *_messageTextView;	// 16 = 0x10
    UILabel *_footNoteLabel;	// 24 = 0x18
    UIScrollView *_scrollView;	// 32 = 0x20
    NSLayoutConstraint *_messageTextViewHeightConstraint;	// 40 = 0x28
}

@property(retain, nonatomic) NSLayoutConstraint *messageTextViewHeightConstraint; // @synthesize messageTextViewHeightConstraint=_messageTextViewHeightConstraint;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *footNoteLabel; // @synthesize footNoteLabel=_footNoteLabel;
@property(retain, nonatomic) MessageTextView *messageTextView; // @synthesize messageTextView=_messageTextView;
@property(retain, nonatomic) UILabel *messageDescriptionLabel; // @synthesize messageDescriptionLabel=_messageDescriptionLabel;
- (void).cxx_destruct;	// IMP=0x000000010008955c
- (void)textViewDidChange:(id)arg1;	// IMP=0x000000010008931c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100089240
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000891b0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000887a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
