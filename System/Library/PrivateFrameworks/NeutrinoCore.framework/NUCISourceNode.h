/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceNode.h>

@class CIImage;

@interface NUCISourceNode : NUSourceNode {

	CIImage* _image;
	long long _orientation;

}
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(BOOL)supportsPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)resolvedNodeWithCachedInputs:(NSDictionary*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(long long)sourceOrientation;
-(id)_evaluateImageProperties:(out id*)arg1 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)initWithImage:(id)arg1 identifier:(id)arg2 orientation:(long long)arg3 ;
-(id)initWithImage:(id)arg1 settings:(id)arg2 orientation:(long long)arg3 ;
-(id)initWithSettings:(id)arg1 ;
-(SCD_Struct_NU5)pixelSize;
@end

