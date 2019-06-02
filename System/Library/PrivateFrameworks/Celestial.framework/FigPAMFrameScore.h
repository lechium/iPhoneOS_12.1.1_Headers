/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSMutableArray, FigUtlFaceDetection;

@interface FigPAMFrameScore : NSObject {

	NSMutableArray* _frameScoreInputs;
	FigPAMFrameScoreWeightsStruct _weights;
	FigUtlFaceDetection* _faceDetection;

}
+(BOOL)computeFrameScoreFeatureVector:(float)arg1 afScore:(float)arg2 face:(const SCD_Struct_Fi99*)arg3 result:(float*)arg4 ;
+(float)computeFrameScoreInnerProduct:(const float*)arg1 weights:(const FigPAMFrameScoreWeightsStruct*)arg2 ;
+(int)featureCount;
-(void)setWeights:(FigPAMFrameScoreWeightsStruct)arg1 ;
-(BOOL)processImage:(CVBufferRef)arg1 pts:(SCD_Struct_BW2)arg2 metadata:(id)arg3 useFocusRegion:(BOOL)arg4 faceRectangles:(const CGRect*)arg5 faceRectangleCount:(int)arg6 toImageTransform:(CGAffineTransform)arg7 orientation:(int)arg8 ;
-(id)computeFrameScores:(int)arg1 ;
-(id)initWithMaxImageWidth:(int)arg1 height:(int)arg2 pixelFormat:(unsigned)arg3 ;
-(BOOL)detectFace:(int)arg1 image:(CVBufferRef)arg2 meta:(id)arg3 useFocusRegion:(BOOL)arg4 faceRectangles:(const CGRect*)arg5 faceRectangleCount:(int)arg6 toImageTransform:(CGAffineTransform)arg7 result:(SCD_Struct_Fi99*)arg8 ;
-(id)computeFeatureVectors:(int)arg1 ;
-(FigPAMFrameScoreWeightsStruct)weights;
-(id)init;
-(void)dealloc;
-(void)reset;
@end

