//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

#import "SBCountedMapValue.h"

@class NSString, SBIconLabelImageParameters;

@interface SBIconLabelLegibilityImage : UIImage <SBCountedMapValue>
{
    SBIconLabelImageParameters *_parameters;	// 8 = 0x8
}

+ (void)checkinLegibilityImage:(id)arg1;	// IMP=0x00000001003a5108
+ (id)checkoutLegibilityImageWithLabelImage:(id)arg1 parameters:(id)arg2;	// IMP=0x00000001003a4f80
+ (_Bool)needsLegibilityImageForParameters:(id)arg1;	// IMP=0x00000001003a4f38
+ (struct CGRect)_legibilityImageRectForLabelImage:(id)arg1 style:(long long)arg2;	// IMP=0x00000001003a4ecc
+ (double)_strengthForLegibilityStyle:(long long)arg1;	// IMP=0x00000001003a4e1c
+ (id)_legibilityImageForIconLabelImage:(id)arg1 parameters:(id)arg2;	// IMP=0x00000001003a4a8c
+ (id)_legibilityImagePool;	// IMP=0x00000001003a4934
+ (id)_legibilityImageCountedMap;	// IMP=0x00000001003a48b4
+ (struct CGSize)_maxLegibilityImageSizeForLabelSize:(struct CGSize)arg1;	// IMP=0x00000001003a4890
@property(readonly, copy) SBIconLabelImageParameters *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;	// IMP=0x00000001003a5190
- (_Bool)isIconLabelLegibilityImage;	// IMP=0x00000001003a5178
- (id)countedMapKey;	// IMP=0x00000001003a48a8
- (id)_initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3 parameters:(id)arg4;	// IMP=0x00000001003a47dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
