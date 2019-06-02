/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol CVADisparityPostprocessingResult <NSObject>
@property (readonly) CVBufferRef postprocessedDisparityPixelBuffer; 
@property (readonly) float focusDisparity; 
@property (readonly) float deltaCanonicalDisparity; 
@property (readonly) float backgroundDisparitySum; 
@property (readonly) float backgroundDisparitySumVariance; 
@property (readonly) float backgroundDisparityRatio; 
@property (readonly) float invalidDisparityRatio; 
@property (readonly) float invalidDisparityRatioVariance; 
@property (readonly) float backgroundSeparationLikelihood; 
@property (readonly) float closeCanonicalDisparityAverage; 
@property (readonly) NSArray * faceCanonicalDisparityAverage; 
@property (readonly) NSArray * faceInvalidDisparityRatio; 
@property (readonly) float foregroundRatio; 
@property (readonly) float erodedForegroundRatio; 
@required
-(CVBufferRef)postprocessedDisparityPixelBuffer;
-(float)focusDisparity;
-(float)deltaCanonicalDisparity;
-(float)backgroundDisparitySum;
-(float)invalidDisparityRatio;
-(float)closeCanonicalDisparityAverage;
-(NSArray *)faceCanonicalDisparityAverage;
-(float)erodedForegroundRatio;
-(float)foregroundRatio;
-(float)backgroundDisparitySumVariance;
-(float)backgroundDisparityRatio;
-(float)invalidDisparityRatioVariance;
-(float)backgroundSeparationLikelihood;
-(NSArray *)faceInvalidDisparityRatio;

@end
