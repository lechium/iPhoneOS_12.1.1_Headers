//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface TouchIDAlertHeaderView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    UILabel *_messageLabel;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010001b2ac
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010001b190
- (void)layoutSubviews;	// IMP=0x000000010001aefc
@property(copy) NSString *title;
- (void)shakeTitleView;	// IMP=0x000000010001abac
@property(copy) NSString *message;
@property(retain) UIImage *image;

@end

