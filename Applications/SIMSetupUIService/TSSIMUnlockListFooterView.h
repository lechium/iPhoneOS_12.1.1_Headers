//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface TSSIMUnlockListFooterView : UIView
{
    UIButton *_continueButton;	// 8 = 0x8
    long long _mode;	// 16 = 0x10
    id <TSSIMUnlockListFooterViewDelegate> _delegate;	// 24 = 0x18
}

@property(nonatomic) __weak id <TSSIMUnlockListFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;	// IMP=0x0000000100007b58
- (void)_continueButtonPressed:(id)arg1;	// IMP=0x0000000100007ad0
- (void)layoutSubviews;	// IMP=0x00000001000074d0
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100007460

@end
