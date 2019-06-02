//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKController, NSArray, PKInk, SSSScreenshot, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer, UIView;

@interface _SSSScreenshotContentOverlayController : NSObject
{
    _Bool _gesturesEnabled;	// 8 = 0x8
    _Bool _active;	// 9 = 0x9
    SSSScreenshot *_screenshot;	// 16 = 0x10
    id <_SSSScreenshotContentOverlayControllerDelegate> _delegate;	// 24 = 0x18
    PKInk *_ink;	// 32 = 0x20
}

@property(retain, nonatomic) PKInk *ink; // @synthesize ink=_ink;
@property(nonatomic) __weak id <_SSSScreenshotContentOverlayControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool gesturesEnabled; // @synthesize gesturesEnabled=_gesturesEnabled;
@property(nonatomic) __weak SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
- (void).cxx_destruct;	// IMP=0x0000000100021a14
@property(readonly, nonatomic) NSArray *gestureRecognizers;
@property(readonly, nonatomic) UIView *overlayView;
@property(readonly, nonatomic) UIRotationGestureRecognizer *rotationGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property(readonly, nonatomic) struct CGRect rectToCenterAboveKeyboard;
@property(readonly, nonatomic) AKController *annotationKitController;
- (void)endedEditingWithOverlay;	// IMP=0x00000001000217c8
- (void)enteredEditingWithOverlay;	// IMP=0x00000001000217c4
- (void)updateUndoState;	// IMP=0x00000001000217c0

@end

