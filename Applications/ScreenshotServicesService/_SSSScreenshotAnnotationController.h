//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_SSSScreenshotContentOverlayController.h"

#import "AKControllerDelegateProtocol.h"

@class AKController, AKPageModelController, NSString, _SSSScreenshotAnnotationControllerAKOverlayContainerView;

@interface _SSSScreenshotAnnotationController : _SSSScreenshotContentOverlayController <AKControllerDelegateProtocol>
{
    AKController *_akController;	// 8 = 0x8
    AKPageModelController *_pageModelController;	// 16 = 0x10
    _SSSScreenshotAnnotationControllerAKOverlayContainerView *_overlayView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010002a894
- (void)updateDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(_Bool)arg3 forAnnotationController:(id)arg4;	// IMP=0x000000010002a700
- (void)uninstallDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;	// IMP=0x000000010002a6a0
- (void)installDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;	// IMP=0x000000010002a640
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;	// IMP=0x000000010002a5c4
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;	// IMP=0x000000010002a570
- (id)undoManagerForAnnotationController:(id)arg1;	// IMP=0x000000010002a51c
- (id)newContentSnapshotPDFDataIncludingAdornments:(_Bool)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;	// IMP=0x0000000100029fec
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;	// IMP=0x0000000100029ed0
- (struct CGRect)visibleRectOfOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;	// IMP=0x0000000100029d00
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;	// IMP=0x0000000100029c60
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;	// IMP=0x0000000100029c5c
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;	// IMP=0x0000000100029c58
- (void)_undoNotificationReceived;	// IMP=0x0000000100029ba4
- (id)annotationKitController;	// IMP=0x0000000100029b94
- (void)endedEditingWithOverlay;	// IMP=0x0000000100029b7c
- (void)enteredEditingWithOverlay;	// IMP=0x0000000100029b20
- (void)updateUndoState;	// IMP=0x0000000100029ad8
- (void)setGesturesEnabled:(_Bool)arg1;	// IMP=0x0000000100029a78
- (id)rotationGestureRecognizer;	// IMP=0x0000000100029a60
- (id)panGestureRecognizer;	// IMP=0x0000000100029a48
- (id)longPressGestureRecognizer;	// IMP=0x0000000100029a30
- (id)doubleTapGestureRecognizer;	// IMP=0x0000000100029a18
- (id)tapGestureRecognizer;	// IMP=0x0000000100029a00
- (id)gestureRecognizers;	// IMP=0x0000000100029888
- (struct CGRect)rectToCenterAboveKeyboard;	// IMP=0x0000000100029544
- (id)overlayView;	// IMP=0x0000000100029534
- (void)setScreenshot:(id)arg1;	// IMP=0x00000001000291cc
- (void)setActive:(_Bool)arg1;	// IMP=0x00000001000290c0
- (void)_prepareAKController;	// IMP=0x0000000100028f2c
- (void)dealloc;	// IMP=0x0000000100028ea8
- (id)init;	// IMP=0x0000000100028e2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

