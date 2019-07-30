//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPageControl.h"

@class NSMutableArray, _UILegibilitySettings;

@interface SBDashBoardPageControl : UIPageControl
{
    _UILegibilitySettings *_sbLegibilitySettings;	// 8 = 0x8
    NSMutableArray *_legibilityViews;	// 16 = 0x10
    _Bool _cameraPageEnabled;	// 24 = 0x18
}

+ (struct CGSize)defaultSize;	// IMP=0x00000001004881e4
@property(nonatomic, getter=isCameraPageEnabled) _Bool cameraPageEnabled; // @synthesize cameraPageEnabled=_cameraPageEnabled;
- (void).cxx_destruct;	// IMP=0x0000000100488900
- (double)_indicatorSpacing;	// IMP=0x00000001004888e8
- (struct CGRect)_modernBounds;	// IMP=0x00000001004888d4
- (void)_transitionIndicator:(id)arg1 toEnabled:(_Bool)arg2 index:(long long)arg3;	// IMP=0x00000001004888c8
- (id)_indicatorViewEnabled:(_Bool)arg1 index:(long long)arg2;	// IMP=0x00000001004887cc
- (id)_currentPageIndicatorColor;	// IMP=0x00000001004887b8
- (id)_pageIndicatorColor;	// IMP=0x0000000100488798
- (id)_pageIndicatorImage:(_Bool)arg1;	// IMP=0x0000000100488624
- (id)_cameraIndicatorImage:(_Bool)arg1;	// IMP=0x0000000100488568
- (void)_setIndicatorImage:(id)arg1 toEnabled:(_Bool)arg2 index:(long long)arg3;	// IMP=0x0000000100488480
- (void)_updateLegibilityViews;	// IMP=0x0000000100488358
- (void)setLegibilitySettings:(id)arg1;	// IMP=0x00000001004882dc
- (struct CGSize)sizeForNumberOfPages:(long long)arg1;	// IMP=0x00000001004881ac
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010048812c

@end

