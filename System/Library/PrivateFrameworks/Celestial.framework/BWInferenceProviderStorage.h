/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWInferenceStorage.h>

@class NSArray, NSMutableDictionary, NSString;

@interface BWInferenceProviderStorage : NSObject <BWInferenceStorage> {

	NSArray* _requirementsNeedingPixelBuffers;
	NSMutableDictionary* _pixelBufferByRequirement;
	NSArray* _requirementsNeedingPixelBufferPools;
	NSMutableDictionary* _pixelBufferPoolByRequirement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BWInferenceProviderStorage * inferenceStorage; 
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBufferPools;              //@synthesize requirementsNeedingPixelBufferPools=_requirementsNeedingPixelBufferPools - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBuffers;                  //@synthesize requirementsNeedingPixelBuffers=_requirementsNeedingPixelBuffers - In the implementation block
+(void)initialize;
-(id)initWithRequirementsNeedingPixelBuffers:(id)arg1 requirementsNeedingPixelBufferPools:(id)arg2 ;
-(opaqueCMSampleBufferRef)newSampleBufferSatisfyingRequirement:(id)arg1 withPropagationSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(opaqueCMSampleBufferRef)newSampleBufferSatisfyingCloneRequirement:(id)arg1 ;
-(id)newMetadataDictionarySatisfyingRequirement:(id)arg1 ;
-(CVBufferRef)pixelBufferForRequirement:(id)arg1 ;
-(id)pixelBufferPoolForRequirement:(id)arg1 ;
-(void)setPixelBuffer:(CVBufferRef)arg1 forRequirement:(id)arg2 ;
-(void)setPixelBufferPool:(id)arg1 forRequirement:(id)arg2 ;
-(BWInferenceProviderStorage *)inferenceStorage;
-(NSArray *)requirementsNeedingPixelBufferPools;
-(NSArray *)requirementsNeedingPixelBuffers;
-(void)dealloc;
-(void)clear;
@end

