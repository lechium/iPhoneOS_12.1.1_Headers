//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconImageView.h"

#import "CCUIControlCenterObserver.h"

@class NSString;

@interface SBLiveIconImageView : SBIconImageView <CCUIControlCenterObserver>
{
    unsigned long long _pauseCauses;	// 8 = 0x8
}

+ (void)_applicationDidExit:(id)arg1;	// IMP=0x0000000100434bb0
+ (void)_displayDidDeactivate:(id)arg1;	// IMP=0x0000000100434ad4
+ (void)_displayWillActivate:(id)arg1;	// IMP=0x00000001004349dc
+ (void)initialize;	// IMP=0x00000001004348dc
- (void)controlCenterDidFinishTransition;	// IMP=0x0000000100435ac0
- (void)controlCenterWillBeginTransition;	// IMP=0x0000000100435ab0
- (void)controlCenterDidDismiss;	// IMP=0x0000000100435aac
- (void)controlCenterWillPresent;	// IMP=0x0000000100435aa8
- (void)_notificationCenterDidDisappear:(id)arg1;	// IMP=0x0000000100435a98
- (void)_notificationCenterWillAppear:(id)arg1;	// IMP=0x0000000100435a88
- (_Bool)_shouldPauseForNotificationCenter;	// IMP=0x00000001004359d0
- (void)_spotlightWillDismiss:(id)arg1;	// IMP=0x00000001004359c0
- (void)_spotlightWillAppear:(id)arg1;	// IMP=0x00000001004359b0
- (void)_significantAnimationDidEnd:(id)arg1;	// IMP=0x00000001004359a0
- (void)_significantAnimationWillBegin:(id)arg1;	// IMP=0x0000000100435990
- (void)_activeDisplayChanged:(id)arg1;	// IMP=0x0000000100435964
- (void)_didEndScrolling:(id)arg1;	// IMP=0x00000001004358d4
- (void)_willBeginScrolling:(id)arg1;	// IMP=0x0000000100435820
- (void)didMoveToSuperview;	// IMP=0x0000000100435648
- (void)didMoveToWindow;	// IMP=0x00000001004355c8
- (id)snapshot;	// IMP=0x0000000100435570
- (void)prepareForReuse;	// IMP=0x000000010043550c
- (void)updateImageAnimated:(_Bool)arg1;	// IMP=0x00000001004354bc
- (void)updateUnanimated;	// IMP=0x00000001004354b8
- (void)updateAnimatingState;	// IMP=0x00000001004354b4
- (void)setPaused:(_Bool)arg1;	// IMP=0x000000010043544c
- (void)_removePauseCause:(unsigned long long)arg1;	// IMP=0x00000001004353f0
- (void)_addPauseCause:(unsigned long long)arg1;	// IMP=0x0000000100435394
- (_Bool)_isPausedForCause:(unsigned long long)arg1;	// IMP=0x0000000100435378
- (id)_stringForPauseCause:(unsigned long long)arg1;	// IMP=0x0000000100435270
- (_Bool)isAnimationAllowed;	// IMP=0x0000000100435258
- (void)setIcon:(id)arg1 location:(int)arg2 animated:(_Bool)arg3;	// IMP=0x000000010043508c
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000100434e44
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100434c80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

