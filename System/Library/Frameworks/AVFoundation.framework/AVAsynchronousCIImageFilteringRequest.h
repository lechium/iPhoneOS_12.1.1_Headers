/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVAsynchronousCIImageFilteringRequestInternal, CIImage;

@interface AVAsynchronousCIImageFilteringRequest : NSObject <NSCopying> {

	AVAsynchronousCIImageFilteringRequestInternal* _internal;

}

@property (nonatomic,readonly) CGSize renderSize; 
@property (nonatomic,readonly) SCD_Struct_AV5 compositionTime; 
@property (nonatomic,readonly) CIImage * sourceImage; 
-(void)_willDeallocOrFinalize;
-(SCD_Struct_AV5)compositionTime;
-(id)initUsingCompositingRequest:(id)arg1 sourceFrame:(CVBufferRef)arg2 cancellationTest:(/*^block*/id)arg3 defaultCIContextProvider:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(CGSize)renderSize;
-(CIImage *)sourceImage;
-(void)finishWithImage:(id)arg1 context:(id)arg2 ;
-(void)finishWithError:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

