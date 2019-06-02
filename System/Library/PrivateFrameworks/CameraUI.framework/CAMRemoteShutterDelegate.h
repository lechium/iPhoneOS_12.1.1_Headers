/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMRemoteShutterDelegate <NSObject>
@required
-(void)remoteShutter:(id)arg1 takePhotoWithCountdown:(unsigned long long)arg2;
-(void)remoteShutterCancelCountdown:(id)arg1;
-(BOOL)remoteShutterBeginBurstCapture:(id)arg1;
-(BOOL)remoteShutterEndBurstCapture:(id)arg1;
-(void)remoteShutter:(id)arg1 setMode:(long long)arg2;
-(void)remoteShutter:(id)arg1 focusOn:(CGPoint)arg2;
-(BOOL)remoteShutterStartCapture:(id)arg1;
-(BOOL)remoteShutterStopCapture:(id)arg1;
-(void)remoteShutter:(id)arg1 setFlashMode:(long long)arg2;
-(void)remoteShutter:(id)arg1 setHDRMode:(long long)arg2;
-(void)remoteShutter:(id)arg1 setIrisMode:(long long)arg2;
-(void)remoteShutter:(id)arg1 setZoomAmount:(double)arg2;
-(void)remoteShutter:(id)arg1 setCaptureDevice:(long long)arg2;

@end

