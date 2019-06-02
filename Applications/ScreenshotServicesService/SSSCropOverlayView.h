//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface SSSCropOverlayView : UIView
{
    NSArray *_cornerViews;	// 8 = 0x8
    NSArray *_grabberViews;	// 16 = 0x10
    NSArray *_lineViews;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000274d8
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000001000272bc
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000001000270f4
- (id)_viewsToHitTest;	// IMP=0x00000001000270cc
- (struct SSSCropOverlayGrabPosition)grabPositionForLocation:(struct CGPoint)arg1;	// IMP=0x0000000100026fec
- (void)layoutSubviews;	// IMP=0x0000000100026c64
- (struct CGRect)_frameForGrabberAtEdge:(unsigned long long)arg1 inSize:(struct CGSize)arg2 dimension:(double)arg3;	// IMP=0x0000000100026bac
- (struct CGRect)_frameForLineAtEdge:(unsigned long long)arg1 inSize:(struct CGSize)arg2 dimension:(double)arg3;	// IMP=0x0000000100026b38
- (struct CGRect)_frameForViewInCorner:(unsigned long long)arg1 inSize:(struct CGSize)arg2 cornerSize:(struct CGSize)arg3;	// IMP=0x0000000100026aa0
- (id)_orderedRectEdges;	// IMP=0x000000010002696c
- (id)_orderedRectCorners;	// IMP=0x0000000100026838
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000001000267d8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000263f0

@end
