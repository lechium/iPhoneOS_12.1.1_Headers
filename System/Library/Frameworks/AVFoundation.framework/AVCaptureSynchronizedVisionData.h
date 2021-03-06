/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedVisionDataInternal;

@interface AVCaptureSynchronizedVisionData : AVCaptureSynchronizedData {

	AVCaptureSynchronizedVisionDataInternal* _internal;

}

@property (readonly) CVBufferRef visionDataPixelBuffer; 
@property (readonly) BOOL visionDataWasDropped; 
@property (readonly) long long droppedReason; 
-(BOOL)visionDataWasDropped;
-(CVBufferRef)visionDataPixelBuffer;
-(id)_initWithVisionDataPixelBuffer:(CVBufferRef)arg1 timestamp:(SCD_Struct_AV5)arg2 visionDataWasDropped:(BOOL)arg3 droppedReason:(long long)arg4 ;
-(long long)droppedReason;
-(void)dealloc;
@end

