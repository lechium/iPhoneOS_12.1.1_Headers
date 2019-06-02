/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDMediaLayout.h>

@class TSDInfoGeometry;

@interface TSDMovieLayout : TSDMediaLayout {

	TSDInfoGeometry* mDynamicInfoGeometry;

}
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(id)initWithInfo:(id)arg1 ;
-(BOOL)supportsRotation;
-(void)processChangedProperty:(int)arg1 ;
-(id)computeLayoutGeometry;
-(id)layoutGeometryFromInfo;
-(void)takeRotationFromTracker:(id)arg1 ;
-(id)i_computeWrapPath;
-(void)p_createDynamicCopies;
-(void)p_destroyDynamicCopies;
-(CGRect)computeAlignmentFrameInRoot:(BOOL)arg1 ;
-(id)movieInfo;
-(CGRect)fullReflectionFrame;
-(CGRect)fullReflectionBoundsForRect:(CGRect)arg1 ;
-(void)dealloc;
@end

