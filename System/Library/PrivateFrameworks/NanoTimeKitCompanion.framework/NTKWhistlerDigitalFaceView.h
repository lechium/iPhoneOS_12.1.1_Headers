/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKFaceView.h>

@class NTKTimeModuleView, NTKLayoutRule;

@interface NTKWhistlerDigitalFaceView : NTKFaceView {

	NTKTimeModuleView* _timeModuleView;
	NTKLayoutRule* _timeLayoutRuleNormal;
	NTKLayoutRule* _timeLayoutRuleEditing;
	BOOL _is24HourMode;

}
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_needsForegroundContainerView;
-(void)_loadLayoutRules;
-(BOOL)_supportsTimeScrubbing;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_layoutForegroundContainerView;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_cleanupAfterZoom;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(void)_scrubToDate:(id)arg1 animated:(BOOL)arg2 ;
-(long long)_keylineStyleForComplicationSlot:(id)arg1 ;
-(long long)complicationFamilyForSlot:(id)arg1 ;
-(double)_minimumBreathingScaleForComplicationSlot:(id)arg1 ;
-(BOOL)complicationDisplayWrapperView:(id)arg1 shouldStartCustomDataAnimationFromEarlierView:(id)arg2 laterView:(id)arg3 isForward:(BOOL)arg4 ;
-(void)complicationDisplayWrapperView:(id)arg1 startCustomDataAnimationFromEarlierView:(id)arg2 laterView:(id)arg3 isForward:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_updateLocale;
-(void)_loadLayoutRulesForState:(long long)arg1 withTopGap:(double)arg2 largeModuleHeight:(double)arg3 ;
-(void)dealloc;
@end

