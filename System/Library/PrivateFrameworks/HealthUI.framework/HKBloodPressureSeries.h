/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeries.h>

@class _HKStretchableImage, HKBloodPressureSeriesPresentationStyle;

@interface HKBloodPressureSeries : HKGraphSeries {

	_HKStretchableImage* _stretchableSystolicSelectedImage;
	_HKStretchableImage* _stretchableSystolicUnselectedImage;
	_HKStretchableImage* _stretchableDiastolicSelectedImage;
	_HKStretchableImage* _stretchableDiastolicUnselectedImage;
	HKBloodPressureSeriesPresentationStyle* _unselectedPresentationStyle;
	HKBloodPressureSeriesPresentationStyle* _selectedPresentationStyle;

}

@property (nonatomic,retain) HKBloodPressureSeriesPresentationStyle * unselectedPresentationStyle;              //@synthesize unselectedPresentationStyle=_unselectedPresentationStyle - In the implementation block
@property (nonatomic,retain) HKBloodPressureSeriesPresentationStyle * selectedPresentationStyle;                //@synthesize selectedPresentationStyle=_selectedPresentationStyle - In the implementation block
+(id)dataLabelForUpArrow:(BOOL)arg1 foregroundColor:(id)arg2 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK9)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(BOOL)supportsMultiTouchSelection;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(BOOL)blockCoordinateIsVisibleInsideOfChartRect:(CGRect)arg1 blockCoordinate:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2 ;
-(id)_generateStretchableImageWithPresentationStyle:(id)arg1 arrowsUp:(BOOL)arg2 ;
-(void)_drawMinMaxCoordinate:(id)arg1 withStretchableImage:(id)arg2 context:(CGContextRef)arg3 contextBounds:(CGRect)arg4 ;
-(void)setSelectedPresentationStyle:(HKBloodPressureSeriesPresentationStyle *)arg1 ;
-(void)setUnselectedPresentationStyle:(HKBloodPressureSeriesPresentationStyle *)arg1 ;
-(HKBloodPressureSeriesPresentationStyle *)unselectedPresentationStyle;
-(HKBloodPressureSeriesPresentationStyle *)selectedPresentationStyle;
@end
