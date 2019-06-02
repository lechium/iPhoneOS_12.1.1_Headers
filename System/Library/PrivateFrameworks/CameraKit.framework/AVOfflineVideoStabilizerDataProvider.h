/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVOfflineVideoStabilizerDataProvider <NSObject>
@required
-(CVBufferRef)copySourcePixelBufferForFrameNumber:(long long)arg1 outputSampleTime:(SCD_Struct_CM13*)arg2 stabilizer:(id)arg3;
-(id)copySourceStabilizationMetadataForFrameNumber:(long long)arg1 outputSampleTime:(SCD_Struct_CM13*)arg2 stabilizer:(id)arg3;

@end

