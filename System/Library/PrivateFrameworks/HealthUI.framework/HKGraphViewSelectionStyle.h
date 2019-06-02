/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKStrokeStyle;

@interface HKGraphViewSelectionStyle : NSObject {

	double _unselectedSeriesAlpha;
	HKStrokeStyle* _selectedPointLineStrokeStyle;
	HKStrokeStyle* _touchPointLineStrokeStyle;

}

@property (assign,nonatomic) double unselectedSeriesAlpha;                              //@synthesize unselectedSeriesAlpha=_unselectedSeriesAlpha - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * selectedPointLineStrokeStyle;              //@synthesize selectedPointLineStrokeStyle=_selectedPointLineStrokeStyle - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * touchPointLineStrokeStyle;                 //@synthesize touchPointLineStrokeStyle=_touchPointLineStrokeStyle - In the implementation block
-(void)setUnselectedSeriesAlpha:(double)arg1 ;
-(void)setSelectedPointLineStrokeStyle:(HKStrokeStyle *)arg1 ;
-(HKStrokeStyle *)selectedPointLineStrokeStyle;
-(HKStrokeStyle *)touchPointLineStrokeStyle;
-(double)unselectedSeriesAlpha;
-(void)setTouchPointLineStrokeStyle:(HKStrokeStyle *)arg1 ;
@end

