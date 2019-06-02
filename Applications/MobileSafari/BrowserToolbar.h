//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_SFToolbar.h"

#import "CAAnimationDelegate.h"
#import "_SFBarRegistrationObserving.h"

@class CALayer, NSArray, NSMutableDictionary, NSString, UIToolbar;

@interface BrowserToolbar : _SFToolbar <CAAnimationDelegate, _SFBarRegistrationObserving>
{
    id <_SFBarRegistrationToken> _barRegistration;	// 8 = 0x8
    NSArray *_currentItems;	// 16 = 0x10
    NSMutableDictionary *_defaultItemsForToolbarSize;	// 24 = 0x18
    CALayer *_linkImageContainerLayer;	// 32 = 0x20
    id <BrowserToolbarDelegate> _browserDelegate;	// 40 = 0x28
    UIToolbar *_replacementToolbar;	// 48 = 0x30
}

@property(retain, nonatomic) UIToolbar *replacementToolbar; // @synthesize replacementToolbar=_replacementToolbar;
@property(nonatomic) __weak id <BrowserToolbarDelegate> browserDelegate; // @synthesize browserDelegate=_browserDelegate;
- (void).cxx_destruct;	// IMP=0x000000010006f970
- (void)cancelLinkAnimations;	// IMP=0x000000010006f87c
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000010006f7a4
- (void)animateLinkImage:(struct CGImage *)arg1 flipped:(_Bool)arg2 fromRect:(struct CGRect)arg3 toLayer:(id)arg4 orButton:(long long)arg5 inView:(id)arg6 afterLinkImageDisappears:(CDUnknownBlockType)arg7 afterButtonBounces:(CDUnknownBlockType)arg8;	// IMP=0x000000010006efc4
- (id)_pulseAnimationWithInitalTransform:(struct CATransform3D)arg1;	// IMP=0x000000010006edac
- (id)_bounceAnimationWithInitalTransform:(struct CATransform3D)arg1;	// IMP=0x000000010006eba4
- (id)_toolbarItemAnimationTemplate;	// IMP=0x000000010006eac0
- (id)_layerForButton:(long long)arg1;	// IMP=0x000000010006e9cc
- (id)_fadeOutAnimation;	// IMP=0x000000010006e870
- (id)_scalingAnimationToFitLayerWithSize:(struct CGSize)arg1 intoItemWithSize:(struct CGSize)arg2 startingFromTransform:(struct CATransform3D)arg3;	// IMP=0x000000010006e6ac
- (id)_slightRotationAnimationStartingFromTransform:(struct CATransform3D)arg1 withRelativeAngle:(double)arg2;	// IMP=0x000000010006e53c
- (id)_ballisticMovementAnimationFromPoint:(struct CGPoint)arg1 throughPoint:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3;	// IMP=0x000000010006e3b8
- (void)didCompleteBarRegistrationWithToken:(id)arg1;	// IMP=0x000000010006e118
- (id)_accessibilityIdentifierForPlacement:(long long)arg1;	// IMP=0x000000010006e0d4
- (void)setItems:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010006e018
- (void)dealloc;	// IMP=0x000000010006dfcc
- (_Bool)isMinibar;	// IMP=0x000000010006dfc4
- (id)popoverSourceInfoForBarItem:(long long)arg1;	// IMP=0x000000010006dfac
- (void)updateTintColor;	// IMP=0x000000010006df64
- (void)setReplacementToolbar:(id)arg1 tintStyle:(unsigned long long)arg2 withAnimationDelay:(double)arg3;	// IMP=0x000000010006db88
- (void)_updateItemsForReplacementToolbar;	// IMP=0x000000010006d980
- (void)layoutSubviews;	// IMP=0x000000010006d8cc
- (double)_contentMargin;	// IMP=0x000000010006d85c
@property(readonly, nonatomic) NSArray *defaultItems;
- (id)initWithPlacement:(long long)arg1;	// IMP=0x000000010006d154

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
