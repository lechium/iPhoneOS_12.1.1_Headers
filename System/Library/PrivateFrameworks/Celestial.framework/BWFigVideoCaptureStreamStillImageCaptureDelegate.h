/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWFigVideoCaptureStreamStillImageCaptureDelegate <NSObject>
@required
-(void)captureStreamWillBeginStillImageCapture:(id)arg1;
-(void)captureStream:(id)arg1 stillImageCaptureError:(int)arg2;
-(void)captureStream:(id)arg1 didCapturePreBracketedEV0ImageWithPTS:(SCD_Struct_BW2)arg2;
-(void)captureStream:(id)arg1 didCompleteStillImageCaptureWithPTS:(SCD_Struct_BW2)arg2 referenceFrameBracketedCaptureSequenceNumber:(id)arg3;

@end

