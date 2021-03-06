//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface PinnableBanner : UIView
{
    _Bool _pinnedToTop;	// 8 = 0x8
    _Bool _initiallyBehindNavigationBar;	// 9 = 0x9
}

+ (double)pinAnimationDelay;	// IMP=0x000000010007bf40
+ (double)unpinAnimationDelay;	// IMP=0x000000010007bf38
+ (double)unpinAnimationDuration;	// IMP=0x000000010007bf30
@property(nonatomic, getter=isInitiallyBehindNavigationBar) _Bool initiallyBehindNavigationBar; // @synthesize initiallyBehindNavigationBar=_initiallyBehindNavigationBar;
@property(nonatomic, getter=isPinnedToTop) _Bool pinnedToTop; // @synthesize pinnedToTop=_pinnedToTop;

@end

