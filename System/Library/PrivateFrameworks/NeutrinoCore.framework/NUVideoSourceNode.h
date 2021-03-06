/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceNode.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURL, AVAsset, NSArray, NSDictionary;

@interface NUVideoSourceNode : NUSourceNode {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _loaded;
	NSURL* _URL;
	AVAsset* _asset;
	SCD_Struct_NU5 _size;
	SCD_Struct_NU6 _cleanAperture;
	long long _orientation;
	NSArray* _metadata;
	NSDictionary* _colorProperties;
	SCD_Struct_NU7 _livePhotoKeyFrameTime;

}

@property (readonly) SCD_Struct_NU6 cleanAperture; 
-(BOOL)load:(out id*)arg1 ;
-(SCD_Struct_NU6)cleanAperture;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(BOOL)supportsPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)resolvedNodeWithCachedInputs:(NSDictionary*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)preparedNodeWithSourceNode:(id)arg1 sourceSettings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_settingsForPipelineState:(id)arg1 ownedFrame:(BOOL)arg2 ;
-(long long)sourceOrientation;
-(id)_evaluateImageProperties:(out id*)arg1 ;
-(id)_evaluateVideoProperties:(out id*)arg1 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(id)asset:(out id*)arg1 ;
-(id)_evaluateVideo:(out id*)arg1 ;
-(id)_evaluateVideoComposition:(out id*)arg1 ;
-(BOOL)requiresVideoComposition;
-(BOOL)requiresAudioMix;
-(BOOL)_load:(out id*)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(SCD_Struct_NU5)pixelSize;
-(id)initWithURL:(id)arg1 ;
@end

