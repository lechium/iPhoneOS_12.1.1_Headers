/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAImageTransform.h>

@protocol IPAQuadGeometry;
@interface IPAPerspectiveTransform : IPAImageTransform {

	Matrix4d _projectionTransform;
	Matrix4d _viewingTransform;
	id<IPAQuadGeometry> _intrinsicGeometry;
	BOOL _isInverse;

}
-(id)inverseTransform;
-(id)intrinsicGeometry;
-(Vector2d)mapVector:(Vector2d)arg1 ;
-(BOOL)canAlignToPixelsExactly;
-(id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 projectionTransform:(const Matrix4d*)arg3 viewingTransform:(const Matrix4d*)arg4 ;
@end
