//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBIconPageIndicatorImageSetResult, _UILegibilitySettings;

@interface SBIconPageIndicatorImageSetCache : NSObject
{
    _UILegibilitySettings *_legibilitySettings;	// 8 = 0x8
    SBIconPageIndicatorImageSetResult *_indicatorImageSetResults;	// 16 = 0x10
    SBIconPageIndicatorImageSetResult *_searchImageSetResults;	// 24 = 0x18
    SBIconPageIndicatorImageSetResult *_cameraImageSetResults;	// 32 = 0x20
}

+ (id)dashBoardPageIndicatorImageSetCache;	// IMP=0x00000001002f72bc
+ (id)homescreenPageIndicatorImageSetCache;	// IMP=0x00000001002f723c
- (void).cxx_destruct;	// IMP=0x00000001002f75c8
- (id)_emptyPageIndicatorSet;	// IMP=0x00000001002f7518
- (id)cameraIndicatorImageSetForLegibilitySettings:(id)arg1;	// IMP=0x00000001002f74cc
- (id)searchIndicatorImageSetForLegibilitySettings:(id)arg1;	// IMP=0x00000001002f7480
- (id)pageIndicatorImageSetForLegibilitySettings:(id)arg1;	// IMP=0x00000001002f7434
- (void)setLegibilitySettings:(id)arg1;	// IMP=0x00000001002f733c

@end
