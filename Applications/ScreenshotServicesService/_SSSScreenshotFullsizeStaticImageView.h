//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage, UIImageView;

@interface _SSSScreenshotFullsizeStaticImageView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    _Bool _useTrilinearMinificationFilter;	// 16 = 0x10
    struct CGSize _sizeMultiplier;	// 24 = 0x18
    struct SSSCropInfo _cropInfo;	// 40 = 0x28
}

@property(nonatomic) _Bool useTrilinearMinificationFilter; // @synthesize useTrilinearMinificationFilter=_useTrilinearMinificationFilter;
@property(nonatomic) struct CGSize sizeMultiplier; // @synthesize sizeMultiplier=_sizeMultiplier;
@property(nonatomic) struct SSSCropInfo cropInfo; // @synthesize cropInfo=_cropInfo;
- (void).cxx_destruct;	// IMP=0x00000001000149bc
@property(retain, nonatomic) UIImage *image;
- (void)layoutSubviews;	// IMP=0x0000000100014790
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000146ec

@end

