//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconListView.h"

@class UIView;

@interface SBStarkRootIconListView : SBIconListView
{
    struct UIEdgeInsets _insets;	// 96 = 0x60
    UIView *_lastFocusedView;	// 128 = 0x80
}

+ (unsigned long long)iconColumnsForInterfaceOrientation:(long long)arg1;	// IMP=0x00000001000da364
+ (unsigned long long)maxVisibleIconRowsInterfaceOrientation:(long long)arg1;	// IMP=0x00000001000da354
+ (unsigned long long)iconRowsForInterfaceOrientation:(long long)arg1;	// IMP=0x00000001000da344
+ (unsigned long long)iconColumnsForScreenWidth:(double)arg1;	// IMP=0x00000001000da2a8
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (void).cxx_destruct;	// IMP=0x00000001000da4c8
- (int)iconLocation;	// IMP=0x00000001000da490
- (double)sideIconInset;	// IMP=0x00000001000da47c
- (double)bottomIconInset;	// IMP=0x00000001000da468
- (double)topIconInset;	// IMP=0x00000001000da458
- (Class)baseIconViewClass;	// IMP=0x00000001000da444

@end

