/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ARPlaneData, AVDepthData, ARCamera, NSArray, ARLightEstimate, ARPointCloud, ARFrameTimingData, ARWorldTrackingErrorData, NSDictionary, ARWorldTrackingState, NSDate, ARRawSceneUnderstandingData, ARFaceData;

@interface ARFrame : NSObject <NSSecureCoding, NSCopying> {

	ARPlaneData* _cachedHorizontalPlaneData;
	ARPlaneData* _cachedVerticalPlaneData;
	unsigned long long _transformFlags;
	BOOL _shouldRestrictFrameRate;
	double _timestamp;
	CVBufferRef _capturedImage;
	AVDepthData* _capturedDepthData;
	double _capturedDepthDataTimestamp;
	ARCamera* _camera;
	NSArray* _anchors;
	ARLightEstimate* _lightEstimate;
	long long _worldMappingStatus;
	double _currentCaptureTimestamp;
	ARPointCloud* _featurePoints;
	ARPointCloud* _referenceFeaturePoints;
	NSArray* _cachedPointClouds;
	long long _worldAlignment;
	ARFrameTimingData* _timingData;
	ARWorldTrackingErrorData* _worldTrackingErrorData;
	NSDictionary* _worldTrackingStateDetails;
	ARWorldTrackingState* _worldTrackingState;
	long long _renderFramesPerSecond;
	NSDate* _captureDate;
	ARRawSceneUnderstandingData* _rawSceneUnderstandingData;
	ARFaceData* _faceData;
	SCD_Struct_AR16 _referenceOriginTransform;
	SCD_Struct_AR16 _referenceOriginDelta;
	SCD_Struct_AR16 _sessionOriginTransform;
	SCD_Struct_AR16 _worldAlignmentTransform;

}

@property (nonatomic,readonly) double currentCaptureTimestamp;                                     //@synthesize currentCaptureTimestamp=_currentCaptureTimestamp - In the implementation block
@property (assign,nonatomic) CVBufferRef capturedImage;                                            //@synthesize capturedImage=_capturedImage - In the implementation block
@property (nonatomic,copy) NSArray * anchors;                                                      //@synthesize anchors=_anchors - In the implementation block
@property (nonatomic,retain) ARLightEstimate * lightEstimate;                                      //@synthesize lightEstimate=_lightEstimate - In the implementation block
@property (assign,nonatomic) long long worldMappingStatus;                                         //@synthesize worldMappingStatus=_worldMappingStatus - In the implementation block
@property (nonatomic,retain) ARPointCloud * featurePoints;                                         //@synthesize featurePoints=_featurePoints - In the implementation block
@property (nonatomic,retain) ARPointCloud * referenceFeaturePoints;                                //@synthesize referenceFeaturePoints=_referenceFeaturePoints - In the implementation block
@property (nonatomic,retain) NSArray * cachedPointClouds;                                          //@synthesize cachedPointClouds=_cachedPointClouds - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR16 referenceOriginTransform;                             //@synthesize referenceOriginTransform=_referenceOriginTransform - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR16 referenceOriginDelta;                                 //@synthesize referenceOriginDelta=_referenceOriginDelta - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR16 sessionOriginTransform;                               //@synthesize sessionOriginTransform=_sessionOriginTransform - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR16 worldAlignmentTransform;                              //@synthesize worldAlignmentTransform=_worldAlignmentTransform - In the implementation block
@property (assign,nonatomic) long long worldAlignment;                                             //@synthesize worldAlignment=_worldAlignment - In the implementation block
@property (nonatomic,retain) ARFrameTimingData * timingData;                                       //@synthesize timingData=_timingData - In the implementation block
@property (nonatomic,retain) ARWorldTrackingErrorData * worldTrackingErrorData;                    //@synthesize worldTrackingErrorData=_worldTrackingErrorData - In the implementation block
@property (nonatomic,copy) NSDictionary * worldTrackingStateDetails;                               //@synthesize worldTrackingStateDetails=_worldTrackingStateDetails - In the implementation block
@property (nonatomic,retain) ARWorldTrackingState * worldTrackingState;                            //@synthesize worldTrackingState=_worldTrackingState - In the implementation block
@property (assign,nonatomic) long long renderFramesPerSecond;                                      //@synthesize renderFramesPerSecond=_renderFramesPerSecond - In the implementation block
@property (assign,nonatomic) BOOL shouldRestrictFrameRate;                                         //@synthesize shouldRestrictFrameRate=_shouldRestrictFrameRate - In the implementation block
@property (nonatomic,retain) NSDate * captureDate;                                                 //@synthesize captureDate=_captureDate - In the implementation block
@property (nonatomic,retain) ARRawSceneUnderstandingData * rawSceneUnderstandingData;              //@synthesize rawSceneUnderstandingData=_rawSceneUnderstandingData - In the implementation block
@property (nonatomic,retain) ARFaceData * faceData;                                                //@synthesize faceData=_faceData - In the implementation block
@property (nonatomic,retain) AVDepthData * capturedDepthData;                                      //@synthesize capturedDepthData=_capturedDepthData - In the implementation block
@property (assign,nonatomic) double capturedDepthDataTimestamp;                                    //@synthesize capturedDepthDataTimestamp=_capturedDepthDataTimestamp - In the implementation block
@property (nonatomic,readonly) double timestamp;                                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) ARCamera * camera;                                             //@synthesize camera=_camera - In the implementation block
@property (nonatomic,readonly) ARPointCloud * rawFeaturePoints; 
+(BOOL)supportsSecureCoding;
-(ARCamera *)camera;
-(void)setCaptureDate:(NSDate *)arg1 ;
-(NSDate *)captureDate;
-(void)setTimingData:(ARFrameTimingData *)arg1 ;
-(ARFrameTimingData *)timingData;
-(void)setFaceData:(ARFaceData *)arg1 ;
-(ARFaceData *)faceData;
-(ARWorldTrackingState *)worldTrackingState;
-(double)currentCaptureTimestamp;
-(SCD_Struct_AR16)worldAlignmentTransform;
-(ARLightEstimate *)lightEstimate;
-(ARPointCloud *)featurePoints;
-(long long)worldMappingStatus;
-(long long)worldAlignment;
-(void)setWorldTrackingState:(ARWorldTrackingState *)arg1 ;
-(void)setWorldMappingStatus:(long long)arg1 ;
-(void)setLightEstimate:(ARLightEstimate *)arg1 ;
-(SCD_Struct_AR16)referenceOriginTransform;
-(id)hitTest:(CGPoint)arg1 types:(unsigned long long)arg2 ;
-(id)initWithCamera:(id)arg1 timestamp:(double)arg2 ;
-(id)_hitTestFromOrigin:(unsigned long long)arg1 ;
-(BOOL)sessionOriginTransformAvailable;
-(BOOL)worldAlignmentTransformAvailable;
-(id)_hitTestEstimatedPlanesFromOrigin:(long long)arg1 ;
-(id)_horizontalPlaneEstimateFromFeaturePoint:fromOrigin:withDirection:;
-(id)initWithTimestamp:(double)arg1 context:(id)arg2 ;
-(CGAffineTransform)displayTransformForOrientation:(long long)arg1 viewportSize:(CGSize)arg2 ;
-(ARPointCloud *)rawFeaturePoints;
-(void)setReferenceOriginTransform:(SCD_Struct_AR16)arg1 ;
-(BOOL)referenceOriginTransformAvailable;
-(BOOL)referenceOriginTransformUpdated;
-(void)setReferenceOriginTransformUpdated:(BOOL)arg1 ;
-(BOOL)referenceOriginChanged;
-(void)setReferenceOriginChanged:(BOOL)arg1 ;
-(void)setReferenceOriginDelta:(SCD_Struct_AR16)arg1 ;
-(BOOL)referenceOriginDeltaAvailable;
-(void)setSessionOriginTransform:(SCD_Struct_AR16)arg1 ;
-(void)setWorldAlignmentTransform:(SCD_Struct_AR16)arg1 ;
-(SCD_Struct_AR16)gravityAlignedReferenceOriginTransform;
-(void)setCapturedDepthData:(AVDepthData *)arg1 ;
-(double)capturedDepthDataTimestamp;
-(void)setCapturedDepthDataTimestamp:(double)arg1 ;
-(void)setFeaturePoints:(ARPointCloud *)arg1 ;
-(ARPointCloud *)referenceFeaturePoints;
-(void)setReferenceFeaturePoints:(ARPointCloud *)arg1 ;
-(NSArray *)cachedPointClouds;
-(void)setCachedPointClouds:(NSArray *)arg1 ;
-(SCD_Struct_AR16)referenceOriginDelta;
-(SCD_Struct_AR16)sessionOriginTransform;
-(ARWorldTrackingErrorData *)worldTrackingErrorData;
-(void)setWorldTrackingErrorData:(ARWorldTrackingErrorData *)arg1 ;
-(NSDictionary *)worldTrackingStateDetails;
-(void)setWorldTrackingStateDetails:(NSDictionary *)arg1 ;
-(long long)renderFramesPerSecond;
-(void)setRenderFramesPerSecond:(long long)arg1 ;
-(BOOL)shouldRestrictFrameRate;
-(void)setShouldRestrictFrameRate:(BOOL)arg1 ;
-(ARRawSceneUnderstandingData *)rawSceneUnderstandingData;
-(void)setRawSceneUnderstandingData:(ARRawSceneUnderstandingData *)arg1 ;
-(NSArray *)anchors;
-(void)setAnchors:(NSArray *)arg1 ;
-(CVBufferRef)capturedImage;
-(AVDepthData *)capturedDepthData;
-(void)setWorldAlignment:(long long)arg1 ;
-(void)setCapturedImage:(CVBufferRef)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
@end

