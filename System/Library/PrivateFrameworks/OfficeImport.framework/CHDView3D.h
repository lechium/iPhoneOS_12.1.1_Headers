/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CHDView3D : NSObject {

	int mRotationX;
	int mRotationY;
	int mDepthPercent;
	int mGapDepthPercent;
	int mHeightPercent;
	int mPerspective;
	BOOL mRightAngleAxes;
	BOOL mCluster;
	BOOL mAutoscale;

}
-(void)setCluster:(BOOL)arg1 ;
-(int)perspective;
-(void)setPerspective:(int)arg1 ;
-(void)setRotationX:(int)arg1 ;
-(void)setRotationY:(int)arg1 ;
-(void)setRightAngleAxes:(BOOL)arg1 ;
-(void)setDepthPercent:(int)arg1 ;
-(void)setGapDepthPercent:(int)arg1 ;
-(void)setHeightPercent:(int)arg1 ;
-(void)setAutoscale:(BOOL)arg1 ;
-(int)depthPercent;
-(int)gapDepthPercent;
-(int)rotationX;
-(int)heightPercent;
-(BOOL)isAutoscale;
-(int)rotationY;
-(BOOL)isRightAngleAxes;
-(BOOL)isCluster;
-(id)init;
-(id)description;
@end

