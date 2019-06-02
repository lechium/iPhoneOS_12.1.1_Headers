/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKUtilityComplicationFactoryDelegate;
#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class CLKDevice;

@interface NTKUtilityComplicationFactory : NSObject {

	BOOL _accommodatesTwoTopComplications;
	CLKDevice* _device;
	id<NTKUtilityComplicationFactoryDelegate> _delegate;
	double _normalSidePadding;
	double _normalVerticalPadding;
	double _deselectedKeylineSideInnerPadding;
	double _deselectedKeylineVerticalInnerPadding;
	double _deselectedKeylineCircularInnerPadding;
	double _selectedKeylineSideInnerPadding;
	double _selectedKeylineHeight;
	double _foregroundAlpha;
	double _foregroundImageAlpha;
	double _maxNormalLongWidth;
	double _crownIndicatorGap;
	double _dateKeylineMaxWidth;
	double _dateHorizontalCenterOffset;
	double _dateVerticalCenterOffset;
	long long _bottomCenterLayout;
	CGSize _normalCircularPadding;
	UIEdgeInsets _screenEdgeInsets;

}

@property (nonatomic,readonly) CLKDevice * device;                                                   //@synthesize device=_device - In the implementation block
@property (assign,nonatomic,__weak) id<NTKUtilityComplicationFactoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL accommodatesTwoTopComplications;                                   //@synthesize accommodatesTwoTopComplications=_accommodatesTwoTopComplications - In the implementation block
@property (assign,nonatomic) double normalSidePadding;                                               //@synthesize normalSidePadding=_normalSidePadding - In the implementation block
@property (assign,nonatomic) double normalVerticalPadding;                                           //@synthesize normalVerticalPadding=_normalVerticalPadding - In the implementation block
@property (assign,nonatomic) CGSize normalCircularPadding;                                           //@synthesize normalCircularPadding=_normalCircularPadding - In the implementation block
@property (assign,nonatomic) double deselectedKeylineSideInnerPadding;                               //@synthesize deselectedKeylineSideInnerPadding=_deselectedKeylineSideInnerPadding - In the implementation block
@property (assign,nonatomic) double deselectedKeylineVerticalInnerPadding;                           //@synthesize deselectedKeylineVerticalInnerPadding=_deselectedKeylineVerticalInnerPadding - In the implementation block
@property (assign,nonatomic) double deselectedKeylineCircularInnerPadding;                           //@synthesize deselectedKeylineCircularInnerPadding=_deselectedKeylineCircularInnerPadding - In the implementation block
@property (assign,nonatomic) double selectedKeylineSideInnerPadding;                                 //@synthesize selectedKeylineSideInnerPadding=_selectedKeylineSideInnerPadding - In the implementation block
@property (assign,nonatomic) double selectedKeylineHeight;                                           //@synthesize selectedKeylineHeight=_selectedKeylineHeight - In the implementation block
@property (assign,nonatomic) double foregroundAlpha;                                                 //@synthesize foregroundAlpha=_foregroundAlpha - In the implementation block
@property (assign,nonatomic) double foregroundImageAlpha;                                            //@synthesize foregroundImageAlpha=_foregroundImageAlpha - In the implementation block
@property (assign,nonatomic) double maxNormalLongWidth;                                              //@synthesize maxNormalLongWidth=_maxNormalLongWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets screenEdgeInsets;                                          //@synthesize screenEdgeInsets=_screenEdgeInsets - In the implementation block
@property (assign,nonatomic) double crownIndicatorGap;                                               //@synthesize crownIndicatorGap=_crownIndicatorGap - In the implementation block
@property (assign,nonatomic) double dateKeylineMaxWidth;                                             //@synthesize dateKeylineMaxWidth=_dateKeylineMaxWidth - In the implementation block
@property (assign,nonatomic) double dateHorizontalCenterOffset;                                      //@synthesize dateHorizontalCenterOffset=_dateHorizontalCenterOffset - In the implementation block
@property (assign,nonatomic) double dateVerticalCenterOffset;                                        //@synthesize dateVerticalCenterOffset=_dateVerticalCenterOffset - In the implementation block
@property (assign,nonatomic) long long bottomCenterLayout;                                           //@synthesize bottomCenterLayout=_bottomCenterLayout - In the implementation block
+(unsigned long long)placementForSlot:(long long)arg1 ;
+(void)curvedCircleRadius:(double*)arg1 centerAngle:(double*)arg2 maxAngularWidth:(double*)arg3 circleCenter:(CGPoint*)arg4 interior:(BOOL*)arg5 forSlot:(long long)arg6 forDevice:(id)arg7 ;
-(CLKDevice *)device;
-(id)initForDevice:(id)arg1 ;
-(void)setForegroundImageAlpha:(double)arg1 ;
-(id)newViewForComplication:(id)arg1 family:(long long)arg2 forSlot:(long long)arg3 ;
-(void)configureComplicationLayout:(id)arg1 forSlot:(long long)arg2 withBounds:(CGRect)arg3 ;
-(unsigned long long)keylineLabelAlignmentForSlot:(long long)arg1 ;
-(double)foregroundAlphaForEditing:(BOOL)arg1 ;
-(double)foregroundImageAlphaForEditing:(BOOL)arg1 ;
-(double)foregroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(double)foregroundImageAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(double)keylineCornerRadiusForSlot:(long long)arg1 ;
-(void)setBottomCenterLayout:(long long)arg1 ;
-(id)keylineViewForSlot:(long long)arg1 ;
-(id)curvedMaskForSlot:(long long)arg1 ;
-(void)setScreenEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setMaxNormalLongWidth:(double)arg1 ;
-(void)setNormalSidePadding:(double)arg1 ;
-(void)setNormalCircularPadding:(CGSize)arg1 ;
-(void)setCrownIndicatorGap:(double)arg1 ;
-(long long)layoutOverrideForComplicationType:(unsigned long long)arg1 inSlot:(long long)arg2 ;
-(id)_viewForDateComplication:(id)arg1 ;
-(void)_configureTopLeftLayout:(id)arg1 withBounds:(CGRect)arg2 variant:(BOOL)arg3 ;
-(void)_configureTopRightLayout:(id)arg1 withBounds:(CGRect)arg2 variant:(BOOL)arg3 ;
-(void)_configureBottomLeftLayout:(id)arg1 withBounds:(CGRect)arg2 variant:(BOOL)arg3 ;
-(void)_configureBottomRightLayout:(id)arg1 withBounds:(CGRect)arg2 variant:(BOOL)arg3 ;
-(void)_configureBottomCenterLayout:(id)arg1 withBounds:(CGRect)arg2 variant:(BOOL)arg3 ;
-(void)_configureTopRightAboveLayout:(id)arg1 withBounds:(CGRect)arg2 ;
-(void)_configureBottomRightAboveLayout:(id)arg1 withBounds:(CGRect)arg2 ;
-(void)_configureTopRightBelowLayout:(id)arg1 withBounds:(CGRect)arg2 ;
-(void)_configureBottomRightBelowLayout:(id)arg1 withBounds:(CGRect)arg2 ;
-(void)_configureBottomRightLongLayout:(id)arg1 withBounds:(CGRect)arg2 ;
-(void)_configureDateLayout:(id)arg1 withBounds:(CGRect)arg2 ;
-(void)_configureUpNextTopRightLayout:(id)arg1 withBounds:(CGRect)arg2 ;
-(id)_curvedImageForSlot:(long long)arg1 filled:(BOOL)arg2 ;
-(id)_curvedKeylineImageForSlot:(long long)arg1 ;
-(id)_curvedMaskImageForSlot:(long long)arg1 ;
-(double)_maxTopCornerWidthLeavingRoomForKeylines:(CGRect)arg1 ;
-(void)_configureLayout:(id)arg1 withNormalSize:(CGSize)arg2 editingSize:(CGSize)arg3 variant:(BOOL)arg4 addCircleOverrides:(BOOL)arg5 makeRuleBlock:(/*^block*/id)arg6 ;
-(double)_maxBottomCornerWidthLeavingRoomForKeylines:(CGRect)arg1 ;
-(double)_maxBottomCenterWidthLeavingRoomForKeylines:(CGRect)arg1 ;
-(double)_maxDateWidthLeavingRoomForKeylines;
-(double)_maxWidthForKeylineAndPadding;
-(BOOL)accommodatesTwoTopComplications;
-(void)setAccommodatesTwoTopComplications:(BOOL)arg1 ;
-(double)normalSidePadding;
-(double)normalVerticalPadding;
-(void)setNormalVerticalPadding:(double)arg1 ;
-(CGSize)normalCircularPadding;
-(double)deselectedKeylineSideInnerPadding;
-(void)setDeselectedKeylineSideInnerPadding:(double)arg1 ;
-(double)deselectedKeylineVerticalInnerPadding;
-(void)setDeselectedKeylineVerticalInnerPadding:(double)arg1 ;
-(double)deselectedKeylineCircularInnerPadding;
-(void)setDeselectedKeylineCircularInnerPadding:(double)arg1 ;
-(double)selectedKeylineSideInnerPadding;
-(void)setSelectedKeylineSideInnerPadding:(double)arg1 ;
-(double)selectedKeylineHeight;
-(void)setSelectedKeylineHeight:(double)arg1 ;
-(double)foregroundImageAlpha;
-(double)maxNormalLongWidth;
-(UIEdgeInsets)screenEdgeInsets;
-(double)crownIndicatorGap;
-(double)dateKeylineMaxWidth;
-(void)setDateKeylineMaxWidth:(double)arg1 ;
-(double)dateHorizontalCenterOffset;
-(void)setDateHorizontalCenterOffset:(double)arg1 ;
-(double)dateVerticalCenterOffset;
-(void)setDateVerticalCenterOffset:(double)arg1 ;
-(long long)bottomCenterLayout;
-(void)setDelegate:(id<NTKUtilityComplicationFactoryDelegate>)arg1 ;
-(id<NTKUtilityComplicationFactoryDelegate>)delegate;
-(double)foregroundAlpha;
-(void)setForegroundAlpha:(double)arg1 ;
@end
