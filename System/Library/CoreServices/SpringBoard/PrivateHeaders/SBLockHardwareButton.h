//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSSet, NSString, SBApplication, SBButtonDownGestureRecognizer, SBHomeHardwareButton, SBLockHardwareButtonActions, SBLongPressGestureRecognizer, SBTapGestureRecognizer, UIGestureRecognizer;

@interface SBLockHardwareButton : NSObject <UIGestureRecognizerDelegate>
{
    SBApplication *_lastLockButtonEventRecipient;	// 8 = 0x8
    unsigned long long _aggdStartTime;	// 16 = 0x10
    SBLockHardwareButtonActions *_buttonActions;	// 24 = 0x18
    NSSet *_gestureRecognizers;	// 32 = 0x20
    SBButtonDownGestureRecognizer *_buttonDownGestureRecognizer;	// 40 = 0x28
    SBTapGestureRecognizer *_singlePressGestureRecognizer;	// 48 = 0x30
    SBLongPressGestureRecognizer *_longPressGestureRecognizer;	// 56 = 0x38
    UIGestureRecognizer *_screenshotGestureRecognizer;	// 64 = 0x40
    SBHomeHardwareButton *_homeHardwareButton;	// 72 = 0x48
}

@property(nonatomic) __weak SBHomeHardwareButton *homeHardwareButton; // @synthesize homeHardwareButton=_homeHardwareButton;
@property(nonatomic) __weak UIGestureRecognizer *screenshotGestureRecognizer; // @synthesize screenshotGestureRecognizer=_screenshotGestureRecognizer;
@property(retain, nonatomic) SBLongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) SBTapGestureRecognizer *singlePressGestureRecognizer; // @synthesize singlePressGestureRecognizer=_singlePressGestureRecognizer;
@property(retain, nonatomic) SBButtonDownGestureRecognizer *buttonDownGestureRecognizer; // @synthesize buttonDownGestureRecognizer=_buttonDownGestureRecognizer;
@property(retain, nonatomic) NSSet *gestureRecognizers; // @synthesize gestureRecognizers=_gestureRecognizers;
@property(retain, nonatomic) SBLockHardwareButtonActions *buttonActions; // @synthesize buttonActions=_buttonActions;
- (void).cxx_destruct;	// IMP=0x000000010045c5dc
- (void)_reportAggdLoggingForButtonEventIsDownEvent:(_Bool)arg1;	// IMP=0x000000010045c388
- (_Bool)_shouldHandleVolumeAndPowerButtonPriorities;	// IMP=0x000000010045c37c
- (void)_sendButtonUpEventToAppForRecognizer:(id)arg1;	// IMP=0x000000010045c294
- (_Bool)_tryToSendButtonDownEventsToAppForRecognizer:(id)arg1;	// IMP=0x000000010045c124
- (void)cancelLongPress;	// IMP=0x000000010045c030
- (void)longPress:(id)arg1;	// IMP=0x000000010045bde4
- (void)singlePress:(id)arg1;	// IMP=0x000000010045badc
- (void)buttonDown:(id)arg1;	// IMP=0x000000010045b774
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000010045b470
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000010045b468
- (_Bool)reverseFadeOutIfNeeded;	// IMP=0x000000010045b450
@property(readonly, nonatomic) _Bool isButtonDown;
- (void)screenshotRecognizerDidRecognize:(id)arg1;	// IMP=0x000000010045b3d4
- (void)_createGestureRecognizers;	// IMP=0x000000010045b048
- (id)initWithScreenshotGestureRecognizer:(id)arg1 homeHardwareButton:(id)arg2 buttonActions:(id)arg3 createGestures:(_Bool)arg4;	// IMP=0x000000010045af44
- (id)initWithScreenshotGestureRecognizer:(id)arg1 homeHardwareButton:(id)arg2;	// IMP=0x000000010045ae90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

