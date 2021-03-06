/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
@class CVADisparityPostprocessingRequest;

@interface CVAMattingRequest : NSObject {

	CVADisparityPostprocessingRequest* _disparityPostprocessingRequest;
	CVBufferRef _segmentationPixelBuffer;
	CVBufferRef _destinationAlphaMattePixelBuffer;

}

@property (readonly) CVADisparityPostprocessingRequest * disparityPostprocessingRequest;              //@synthesize disparityPostprocessingRequest=_disparityPostprocessingRequest - In the implementation block
@property (readonly) CVBufferRef segmentationPixelBuffer;                                             //@synthesize segmentationPixelBuffer=_segmentationPixelBuffer - In the implementation block
@property (readonly) CVBufferRef destinationAlphaMattePixelBuffer;                                    //@synthesize destinationAlphaMattePixelBuffer=_destinationAlphaMattePixelBuffer - In the implementation block
-(id)initWithDisparityPostprocessingRequest:(id)arg1 segmentationPixelBuffer:(CVBufferRef)arg2 destinationAlphaMattePixelBuffer:(CVBufferRef)arg3 error:(id*)arg4 ;
-(CVBufferRef)segmentationPixelBuffer;
-(id)initWithDisparityPostprocessingRequest:(id)arg1 destinationAlphaMattePixelBuffer:(CVBufferRef)arg2 ;
-(CVADisparityPostprocessingRequest *)disparityPostprocessingRequest;
-(CVBufferRef)destinationAlphaMattePixelBuffer;
-(void)dealloc;
@end

