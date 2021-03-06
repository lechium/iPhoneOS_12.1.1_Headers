/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLComputePipelineState;
@class NSString;

@interface CVAFilterColorAlphaToFgBg : NSObject {

	id<MTLComputePipelineState> _splitFgBgKernel_rgba;
	id<MTLComputePipelineState> _splitBgKernel_rgba;
	NSString* _label;

}

@property (readonly) NSString * label;              //@synthesize label=_label - In the implementation block
-(id)initWithDevice:(id)arg1 library:(id)arg2 error:(id*)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 srcColorTex:(id)arg2 srcAlphaTex:(id)arg3 dstForegroundTex:(id)arg4 dstBackgroundTex:(id)arg5 ;
-(NSString *)label;
@end

