/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VideoCaptureServer
@required
-(void)onCaptureScreenFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_AV56)arg2 droppedFrames:(int)arg3 orientation:(int)arg4;
-(void)handleCaptureEvent:(id)arg1;
-(void)onCaptureVideoFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_AV56)arg2 preview:(BOOL)arg3 shouldEnqueueFrame:(BOOL)arg4 droppedFrames:(int)arg5 switching:(BOOL)arg6 orientation:(int)arg7 camera:(int)arg8 videoMirrored:(BOOL)arg9;
-(void)handleCaptureEvent:(id)arg1 subType:(id)arg2;
-(void)onCaptureFramerateChange:(unsigned)arg1;

@end

