//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIStackView;

@interface DNDBuddyButtonView : UIView
{
    id <DNDBuddyButtonViewDelegate> _delegate;	// 8 = 0x8
    UIStackView *_buttonStackView;	// 16 = 0x10
}

+ (double)heightForButtonCount:(unsigned long long)arg1 availableWidth:(double)arg2;	// IMP=0x0000000100002690
@property(retain, nonatomic) UIStackView *buttonStackView; // @synthesize buttonStackView=_buttonStackView;
@property(nonatomic) __weak id <DNDBuddyButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100002828
- (void)_forwardButtonTapAtIndex:(unsigned long long)arg1;	// IMP=0x000000010000271c
- (id)initWithFrame:(struct CGRect)arg1 buttonTitles:(id)arg2;	// IMP=0x0000000100001ba8

@end
