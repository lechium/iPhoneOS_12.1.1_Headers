//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CFXCameraViewController, CFXFrame, CFXMediaItem;

@protocol CFXCameraViewControllerDelegate <NSObject>

@optional
- (void)cameraViewControllerPresentationRectWasDoubleTapped:(CFXCameraViewController *)arg1;
- (void)cameraViewControllerEffectsButtonWasTapped:(CFXCameraViewController *)arg1;
- (void)cameraViewControllerDoneButtonWasTapped:(CFXCameraViewController *)arg1;
- (void)cameraViewControllerDidStopCaptureSession:(CFXCameraViewController *)arg1;
- (void)cameraViewControllerDidStartCaptureSession:(CFXCameraViewController *)arg1;
- (void)cameraViewController:(CFXCameraViewController *)arg1 didRenderFrame:(CFXFrame *)arg2;
- (void)cameraViewController:(CFXCameraViewController *)arg1 didChangeEffectsState:(long long)arg2;
- (void)cameraViewController:(CFXCameraViewController *)arg1 didCaptureMediaItem:(CFXMediaItem *)arg2;
@end

