/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
#import <libobjc.A.dylib/BWInferenceFormatProvider.h>
#import <libobjc.A.dylib/BWInferencePixelBufferPoolProvider.h>

@class BWInferenceEngine, BWFigVideoCaptureDevice, NSString;

@interface BWInferenceNode : BWNode <BWInferenceFormatProvider, BWInferencePixelBufferPoolProvider> {

	BWInferenceEngine* _inferenceEngine;
	BWFigVideoCaptureDevice* _captureDevice;

}

@property (nonatomic,readonly) BWInferenceEngine * inferenceEngine;              //@synthesize inferenceEngine=_inferenceEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2 ;
-(id)liveOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2 ;
-(id)initWithCaptureDevice:(id)arg1 scheduler:(id)arg2 priority:(unsigned)arg3 ;
-(int)addInferenceOfType:(int)arg1 version:(SCD_Struct_BW85)arg2 configuration:(id)arg3 ;
-(int)addInferenceOfType:(int)arg1 version:(SCD_Struct_BW85)arg2 ;
-(BWInferenceEngine *)inferenceEngine;
-(id)inputFormatForAttachedMediaKey:(id)arg1 ;
-(id)inputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(id)outputFormatForAttachedMediaKey:(id)arg1 ;
-(id)outputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)nodeType;
@end

