/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVAsset, AVVideoComposition, NUImageGeometry;


@protocol NULivePhotoRenderResult <NURenderResult>
@property (readonly) AVAsset * video; 
@property (readonly) AVVideoComposition * videoComposition; 
@property (readonly) CGImageRef photo; 
@property (readonly) SCD_Struct_NU7 photoTime; 
@property (readonly) NUImageGeometry * videoGeometry; 
@required
-(CGImageRef)photo;
-(AVAsset *)video;
-(NUImageGeometry *)videoGeometry;
-(AVVideoComposition *)videoComposition;
-(SCD_Struct_NU7)photoTime;

@end

