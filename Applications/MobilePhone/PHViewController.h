//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, UIView<PHContentUnavailable>;

@interface PHViewController : UIViewController
{
    _Bool _contentUnavailable;	// 8 = 0x8
    UIView<PHContentUnavailable> *_contentUnavailableView;	// 16 = 0x10
    NSString *_contentUnavailableViewTitle;	// 24 = 0x18
    long long _whitePointAdaptivityStyle;	// 32 = 0x20
}

@property(nonatomic) long long whitePointAdaptivityStyle; // @synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle;
@property(copy, nonatomic) NSString *contentUnavailableViewTitle; // @synthesize contentUnavailableViewTitle=_contentUnavailableViewTitle;
@property(retain, nonatomic) UIView<PHContentUnavailable> *contentUnavailableView; // @synthesize contentUnavailableView=_contentUnavailableView;
@property(nonatomic) _Bool contentUnavailable; // @synthesize contentUnavailable=_contentUnavailable;
- (void).cxx_destruct;	// IMP=0x000000010008c358
- (long long)preferredWhitePointAdaptivityStyle;	// IMP=0x000000010008c308
- (void)makeUIForDefaultPNG;	// IMP=0x000000010008c234
- (void)setContentUnavailable:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010008bd98
- (void)didReceiveMemoryWarning;	// IMP=0x000000010008bc90
@property(readonly, nonatomic, getter=isForceTouchAvailable) _Bool forceTouchAvailable;
- (void)dealloc;	// IMP=0x000000010008bbc4
- (void)commonInit;	// IMP=0x000000010008b9b0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010008b958
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010008b8d4
- (id)init;	// IMP=0x000000010008b87c

@end

