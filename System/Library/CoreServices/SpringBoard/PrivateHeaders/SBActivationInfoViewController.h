//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, UIButton, UITextView, UIView;

@interface SBActivationInfoViewController : UIViewController
{
    NSString *_meid;	// 8 = 0x8
    NSString *_imei;	// 16 = 0x10
    NSString *_iccid;	// 24 = 0x18
    NSString *_csn;	// 32 = 0x20
    _Bool _isOnBootstrap;	// 40 = 0x28
    double _alertHeight;	// 48 = 0x30
    UIView *_containerView;	// 56 = 0x38
    UITextView *_textView;	// 64 = 0x40
    UIButton *_regulatoryInfoButton;	// 72 = 0x48
}

@property(readonly, nonatomic) UIButton *regulatoryInfoButton; // @synthesize regulatoryInfoButton=_regulatoryInfoButton;
- (void).cxx_destruct;	// IMP=0x0000000100388728
- (id)_formattedString:(id)arg1 withSpaceAfterDigits:(unsigned long long)arg2;	// IMP=0x0000000100388630
- (id)_formattedCSN;	// IMP=0x0000000100388614
- (id)_formattedIMEI;	// IMP=0x0000000100388548
- (id)_formattedICCID;	// IMP=0x000000010038852c
- (void)_simStatusChanged:(id)arg1;	// IMP=0x00000001003882c0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100388270
- (void)loadView;	// IMP=0x0000000100387ee8
- (void)_updateTextView;	// IMP=0x00000001003874d0
- (void)dealloc;	// IMP=0x0000000100387454
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100387178

@end
