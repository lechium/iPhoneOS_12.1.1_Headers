/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class BWInferenceProviderStorage, NSArray;


@protocol BWInferenceStorage <NSObject>
@property (nonatomic,readonly) BWInferenceProviderStorage * inferenceStorage; 
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBufferPools; 
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBuffers; 
@required
-(CVBufferRef)pixelBufferForRequirement:(id)arg1;
-(id)pixelBufferPoolForRequirement:(id)arg1;
-(void)setPixelBuffer:(CVBufferRef)arg1 forRequirement:(id)arg2;
-(void)setPixelBufferPool:(id)arg1 forRequirement:(id)arg2;
-(BWInferenceProviderStorage *)inferenceStorage;
-(NSArray *)requirementsNeedingPixelBufferPools;
-(NSArray *)requirementsNeedingPixelBuffers;
-(void)clear;

@end

