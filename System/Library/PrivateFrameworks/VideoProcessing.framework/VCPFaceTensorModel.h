/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPFaceTensorModel : NSObject {

	int _numBlendshapePlusOne;
	int _numComponents;
	int _numIdentities;
	float* _transformedCoeff;
	float* _blendShapeDelta;
	int _numVertices;
	float* _meanBlendshape;
	float* _tensorCoeff;
	float* _componentsBlendshape;
	int* _blendshapeComponentIndex;

}

@property (readonly) int numVertices;                            //@synthesize numVertices=_numVertices - In the implementation block
@property (readonly) float* meanBlendshape;                      //@synthesize meanBlendshape=_meanBlendshape - In the implementation block
@property (readonly) float* tensorCoeff;                         //@synthesize tensorCoeff=_tensorCoeff - In the implementation block
@property (readonly) float* componentsBlendshape;                //@synthesize componentsBlendshape=_componentsBlendshape - In the implementation block
@property (readonly) int* blendshapeComponentIndex;              //@synthesize blendshapeComponentIndex=_blendshapeComponentIndex - In the implementation block
-(int)numVertices;
-(id)initWithModelFile:(_sFILE*)arg1 ;
-(float*)meanBlendshape;
-(float*)componentsBlendshape;
-(void)calculateMesh:(float*)arg1 numVertices:(int)arg2 blendshapes:(float*)arg3 outputMesh:(float*)arg4 ;
-(void)calculateModelBlendshapes:(float*)arg1 outputBlendshapes:(float*)arg2 ;
-(float*)tensorCoeff;
-(int*)blendshapeComponentIndex;
-(void)dealloc;
@end

