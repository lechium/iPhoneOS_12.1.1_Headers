/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeries.h>

@class HKStrokeStyle, HKFillStyle;

@interface HKActivityGoalSeries : HKGraphSeries {

	HKStrokeStyle* _strokeStyle;
	HKFillStyle* _fillStyle;

}
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK9)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(BOOL)supportsMultiTouchSelection;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(CGRect)arg1 blockCoordinate:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2 ;
-(void)_enumerateCoordinateListByRemovingOffscreenPoints:(id)arg1 withTransform:(CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 axisRect:(CGRect)arg4 block:(/*^block*/id)arg5 ;
-(void)_enumerateCoordinateList:(id)arg1 withTransform:(CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 axisRect:(CGRect)arg4 block:(/*^block*/id)arg5 ;
-(id)initWithStrokeStyle:(id)arg1 fillStyle:(id)arg2 ;
@end

