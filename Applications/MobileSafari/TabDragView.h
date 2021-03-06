//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TabBarItemView, TabDragViewItemView, _UIBackdropView;

@interface TabDragView : UIView
{
    double _tabHeight;	// 8 = 0x8
    _UIBackdropView *_backdropView;	// 16 = 0x10
    UIView *_shadowView;	// 24 = 0x18
    double _cornerRadius;	// 32 = 0x20
    _Bool _hasDarkBackground;	// 40 = 0x28
    TabBarItemView *_tabBarItemView;	// 48 = 0x30
    TabDragViewItemView *_tabDragItemView;	// 56 = 0x38
    unsigned long long _presentationType;	// 64 = 0x40
    unsigned long long _mediaCaptureDeviceIcon;	// 72 = 0x48
    struct CGSize _contentsSize;	// 80 = 0x50
}

@property(nonatomic) unsigned long long mediaCaptureDeviceIcon; // @synthesize mediaCaptureDeviceIcon=_mediaCaptureDeviceIcon;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) unsigned long long presentationType; // @synthesize presentationType=_presentationType;
@property(nonatomic) _Bool hasDarkBackground; // @synthesize hasDarkBackground=_hasDarkBackground;
@property(nonatomic) struct CGSize contentsSize; // @synthesize contentsSize=_contentsSize;
@property(readonly, nonatomic) TabDragViewItemView *tabDragItemView; // @synthesize tabDragItemView=_tabDragItemView;
@property(readonly, nonatomic) TabBarItemView *tabBarItemView; // @synthesize tabBarItemView=_tabBarItemView;
- (void).cxx_destruct;	// IMP=0x0000000100126cec
- (void)layoutSubviews;	// IMP=0x0000000100126a34
- (void)_updatePresentationType;	// IMP=0x0000000100126830
- (id)initWithTabBar:(id)arg1;	// IMP=0x0000000100126498

@end

