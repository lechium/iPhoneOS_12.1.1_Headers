//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIView;

@interface DragOverlayViewController : UIViewController
{
    struct CGPoint _draggingViewCenterPoint;	// 8 = 0x8
    UIView *_sourceView;	// 24 = 0x18
    UIView *_draggingView;	// 32 = 0x20
}

@property(readonly, nonatomic) UIView *draggingView; // @synthesize draggingView=_draggingView;
- (void).cxx_destruct;	// IMP=0x000000010008d1e0
- (void)viewWillLayoutSubviews;	// IMP=0x000000010008d168
- (void)updateInteractionWithPoint:(struct CGPoint)arg1;	// IMP=0x000000010008d0d0
- (void)beginInteractionWithSourceView:(id)arg1 startPoint:(struct CGPoint)arg2;	// IMP=0x000000010008cf70

@end

