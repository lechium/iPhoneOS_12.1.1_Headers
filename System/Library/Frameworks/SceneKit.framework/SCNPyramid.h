/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNPyramid : SCNGeometry {

	double _pyramidwidth;
	double _pyramidheight;
	double _pyramidlength;
	long long _pyramidwidthSegmentCount;
	long long _pyramidheightSegmentCount;
	long long _pyramidlengthSegmentCount;
	long long _pyramidprimitiveType;

}

@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) double length; 
@property (assign,nonatomic) long long widthSegmentCount; 
@property (assign,nonatomic) long long heightSegmentCount; 
@property (assign,nonatomic) long long lengthSegmentCount; 
+(id)pyramidWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 ;
+(BOOL)supportsSecureCoding;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(void)setPrimitiveType:(long long)arg1 ;
-(id)presentationGeometry;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(void)_setupObjCModelFrom:(id)arg1 ;
-(_C3DGeometry*)__createCFObject;
-(void)_syncObjCModel:(_C3DParametricGeometry*)arg1 ;
-(id)initPresentationParametricGeometryWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(long long)widthSegmentCount;
-(long long)heightSegmentCount;
-(id)initWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(long long)lengthSegmentCount;
-(id)presentationPyramid;
-(long long)primitiveType;
-(void)setWidthSegmentCount:(long long)arg1 ;
-(void)setHeightSegmentCount:(long long)arg1 ;
-(void)setLengthSegmentCount:(long long)arg1 ;
-(double)length;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(double)height;
-(void)setLength:(double)arg1 ;
@end

