//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UITapGestureRecognizer;

@interface SidebarContentDimmingView : UIView <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_dismissRecognizer;	// 8 = 0x8
    UIView *_dimmingView;	// 16 = 0x10
    UIView *_passthroughView;	// 24 = 0x18
    id <SidebarContentDimmingViewDelegate> _delegate;	// 32 = 0x20
}

@property(nonatomic) __weak id <SidebarContentDimmingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *passthroughView; // @synthesize passthroughView=_passthroughView;
- (void).cxx_destruct;	// IMP=0x000000010008cddc
- (void)_dismissRecognized:(id)arg1;	// IMP=0x000000010008cd40
- (void)setTransparent:(_Bool)arg1;	// IMP=0x000000010008cd18
- (void)setDimmedContentFrame:(struct CGRect)arg1;	// IMP=0x000000010008cd00
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000010008cbc8
- (id)initWithFrame:(struct CGRect)arg1 dimmedContentFrame:(struct CGRect)arg2;	// IMP=0x000000010008ca2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

