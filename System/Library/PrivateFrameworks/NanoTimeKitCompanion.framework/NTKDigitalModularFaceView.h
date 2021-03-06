/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKFaceView.h>
#import <libobjc.A.dylib/NTKTimeModuleViewTapClient.h>

@class NTKTimeModuleView, NTKLayoutRule, CLKTimeFormatter, NSDateComponentsFormatter, NSString;

@interface NTKDigitalModularFaceView : NTKFaceView <NTKTimeModuleViewTapClient> {

	NTKTimeModuleView* _timeModuleView;
	NTKLayoutRule* _timeLayoutRuleNormal;
	NTKLayoutRule* _timeLayoutRuleEditing;
	unsigned long long _faceColor;
	BOOL _is24HourMode;
	CLKTimeFormatter* _dateFormatter;
	NSDateComponentsFormatter* _dayOffsetDateFormatter;
	NSDateComponentsFormatter* _subdayOffsetDateFormatter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2 ;
+(void)_performIfNonRichModuleView:(id)arg1 actions:(/*^block*/id)arg2 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_needsForegroundContainerView;
-(void)_loadLayoutRules;
-(BOOL)_supportsTimeScrubbing;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_layoutForegroundContainerView;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_cleanupAfterZoom;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(void)_scrubToDate:(id)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_wantsTimeTravelStatusModule;
-(CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_layoutTimeTravelCaptionView:(id)arg1 ;
-(void)performTapAction;
-(long long)_keylineStyleForComplicationSlot:(id)arg1 ;
-(long long)complicationFamilyForSlot:(id)arg1 ;
-(double)_minimumBreathingScaleForComplicationSlot:(id)arg1 ;
-(double)_timeTravelStatusModuleCaptionConstraintPadding;
-(void)_layoutTimeTravelStatusModule:(id)arg1 ;
-(void)_updateLocale;
-(void)_loadLayoutRulesForState:(long long)arg1 withTopGap:(double)arg2 largeModuleHeight:(double)arg3 ;
-(void)_applyFaceColor:(unsigned long long)arg1 toModuleView:(id)arg2 ;
-(void)_enumerateModuleViewsWithBlock:(/*^block*/id)arg1 ;
-(id)_complicationSlotsForRow:(unsigned long long)arg1 ;
-(id)_moduleViewForComplicationSlot:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

