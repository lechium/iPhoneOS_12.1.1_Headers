//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRCameraReader, NSArray, NSError, NSString;

@protocol CRCameraReaderDelegate <NSObject>
- (void)cameraReader:(CRCameraReader *)arg1 didFailWithError:(NSError *)arg2;
- (void)cameraReaderDidEnd:(CRCameraReader *)arg1;
- (void)cameraReaderDidCancel:(CRCameraReader *)arg1;

@optional
- (_Bool)cameraReader:(CRCameraReader *)arg1 shouldReturnQRCode:(NSString *)arg2;
- (void)cameraReader:(CRCameraReader *)arg1 didRecognizedNewObjects:(NSArray *)arg2;
- (void)cameraReaderDidFindTarget:(CRCameraReader *)arg1 withCorners:(NSArray *)arg2;
- (void)cameraReader:(CRCameraReader *)arg1 didRecognizeObjects:(NSArray *)arg2;
- (void)cameraReaderDidFindTarget:(CRCameraReader *)arg1;
- (void)cameraReaderDidDisplayMessage:(CRCameraReader *)arg1;
@end

