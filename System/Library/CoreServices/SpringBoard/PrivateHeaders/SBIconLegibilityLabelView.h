//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UILegibilityView.h"

#import "SBIconLabelView.h"

@class SBIconLabelImageParameters, UIImage;

@interface SBIconLegibilityLabelView : _UILegibilityView <SBIconLabelView>
{
    SBIconLabelImageParameters *_imageParameters;	// 8 = 0x8
}

@property(retain, nonatomic) SBIconLabelImageParameters *imageParameters; // @synthesize imageParameters=_imageParameters;
- (void).cxx_destruct;	// IMP=0x0000000100246cc4
- (void)_checkInImages;	// IMP=0x0000000100246be0
- (void)dealloc;	// IMP=0x0000000100246b90
- (void)updateIconLabelWithSettings:(id)arg1 imageParameters:(id)arg2;	// IMP=0x00000001002468b4
- (id)initWithSettings:(id)arg1;	// IMP=0x0000000100246890

// Remaining properties
@property(retain, nonatomic) UIImage *image;

@end

