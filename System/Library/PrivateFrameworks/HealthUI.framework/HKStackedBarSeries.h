/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKBarSeries.h>

@class NSArray;

@interface HKStackedBarSeries : HKBarSeries {

	NSArray* _selectedFillStyles;
	NSArray* _unselectedFillStyles;

}

@property (nonatomic,copy) NSArray * selectedFillStyles;                //@synthesize selectedFillStyles=_selectedFillStyles - In the implementation block
@property (nonatomic,copy) NSArray * unselectedFillStyles;              //@synthesize unselectedFillStyles=_unselectedFillStyles - In the implementation block
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK9)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(void)_drawPaths:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(CGRect)arg4 context:(CGContextRef)arg5 ;
-(void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(CGAffineTransform)arg3 context:(CGContextRef)arg4 axisRect:(CGRect)arg5 ;
-(NSArray *)unselectedFillStyles;
-(NSArray *)selectedFillStyles;
-(void)setUnselectedFillStyles:(NSArray *)arg1 ;
-(void)setSelectedFillStyles:(NSArray *)arg1 ;
@end

