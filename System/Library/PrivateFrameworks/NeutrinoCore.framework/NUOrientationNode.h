/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUTransformNode.h>

@class NUImageTransform;

@interface NUOrientationNode : NUTransformNode {

	long long _orientation;
	NUImageTransform* _transform;

}

@property (retain) NUImageTransform * transform;              //@synthesize transform=_transform - In the implementation block
@property (readonly) long long orientation;                   //@synthesize orientation=_orientation - In the implementation block
+(id)applyOrientation:(long long)arg1 to:(id)arg2 ;
-(id)resolvedNodeWithCachedInputs:(NSDictionary*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(id)_evaluateVideo:(out id*)arg1 ;
-(BOOL)requiresVideoComposition;
-(id)_evaluateImage:(out id*)arg1 ;
-(BOOL)canPropagateOriginalDepthData;
-(id)initWithSettings:(id)arg1 inputs:(NSDictionary*)arg2 ;
-(id)initWithOrientation:(long long)arg1 input:(id)arg2 ;
-(BOOL)isGeometryNode;
-(long long)outputImageOrientation:(long long)arg1 ;
-(id)_evaluateDepthData:(out id*)arg1 ;
-(id)_evaluatePortraitEffectsMatte:(out id*)arg1 ;
-(id)_transformWithError:(out id*)arg1 ;
-(void)setTransform:(NUImageTransform *)arg1 ;
-(NUImageTransform *)transform;
-(long long)orientation;
@end

