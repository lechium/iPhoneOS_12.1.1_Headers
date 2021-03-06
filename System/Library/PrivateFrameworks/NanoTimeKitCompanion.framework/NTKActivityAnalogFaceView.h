/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>
#import <libobjc.A.dylib/NTKActivityFaceViewFactoryDelegate.h>

@class NTKActivityFaceViewFactory, HKRingsView, NTKDateComplicationController, NTKActivityDateComplicationLabel, UIView, UILabel, NTKActivityDialView, NTKFaceViewTapControl, NSMutableDictionary, NSString;

@interface NTKActivityAnalogFaceView : NTKAnalogFaceView <NTKActivityFaceViewFactoryDelegate> {

	NTKActivityFaceViewFactory* _faceViewFactory;
	HKRingsView* _ringsView;
	NTKDateComplicationController* _dateComplicationController;
	NTKActivityDateComplicationLabel* _dateComplicationLabel;
	UIView* _activityContainerView;
	UILabel* _energyLabel;
	UILabel* _briskMinutesLabel;
	UILabel* _standHoursLabel;
	NTKActivityDialView* _dialView;
	NTKFaceViewTapControl* _tapToLaunchButton;
	NSMutableDictionary* _faceColorsToSchemes;
	BOOL _isDetailedDensity;
	double _contentScale;
	double _activityViewsAlpha;
	BOOL _wristRaiseAnimationPending;
	BOOL _snapshotContentViewsLoaded;
	double _lastEnergyPercentage;
	double _lastBriskPercentage;
	double _lastSedentaryPercentage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2 ;
+(void)_prewarmForDevice:(id)arg1 ;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_prepareWristRaiseAnimation;
-(void)_performWristRaiseAnimation;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_cleanupAfterEditing;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(double)_verticalPaddingForStatusBar;
-(id)_additionalPrelaunchApplicationIdentifiers;
-(void)_loadLayoutRules;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyShowsCanonicalContent;
-(void)_applyShowsLockedUI;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(void)_prepareForEditing;
-(void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2 ;
-(void)_cleanupAfterZoom;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(long long)_complicationPickerStyleForSlot:(id)arg1 ;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)slotUsesCurvedText:(id)arg1 ;
-(id)_keylineViewForComplicationSlot:(id)arg1 ;
-(CGPoint)_timeTravelStatusModuleCenter;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(CGPoint)_contentCenterOffset;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(void)setDataMode:(long long)arg1 ;
-(void)_loadChronoViewsIfNecessary;
-(void)_applyEntryModel:(id)arg1 byFraction:(double)arg2 updateLabels:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)_applyCurrentEntryModelByFraction:(double)arg1 updateLabels:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_enumerateActivityLabels:(/*^block*/id)arg1 ;
-(void)_launchButtonPressed:(id)arg1 ;
-(id)_highlightImage;
-(void)_applyCurrentEntryModelAnimated:(BOOL)arg1 ;
-(void)_dateComplicationPressed:(id)arg1 ;
-(void)_addOrRemoveChronoViewsIfNecessary;
-(void)_enumerateChronoViews:(/*^block*/id)arg1 ;
-(BOOL)_slotSupportsCurvedText:(id)arg1 ;
-(void)_showChronoDetailByFraction:(double)arg1 fillRings:(BOOL)arg2 ;
-(id)_cachedSchemeForFaceColor:(unsigned long long)arg1 ;
-(id)_accentColorForFaceColor:(unsigned long long)arg1 ;
-(double)_handAlphaForEditMode:(long long)arg1 ;
-(double)_dialAlphaForEditMode:(long long)arg1 ;
-(double)_dialScaleForEditMode:(long long)arg1 ;
-(double)_ringAlphaForEditMode:(long long)arg1 ;
-(void)_setActivityViewsAlpha:(double)arg1 includeDateComplication:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_enumerateRingGroups:(/*^block*/id)arg1 ;
-(void)applyEntryModel:(id)arg1 animated:(BOOL)arg2 ;
-(void)applyEntryModelWithUnfilledRings:(id)arg1 ;
-(void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 ;
-(void)_curvedComplicationCircleRadius:(double*)arg1 centerAngle:(double*)arg2 maxAngularWidth:(double*)arg3 circleCenter:(CGPoint*)arg4 interior:(BOOL*)arg5 forSlot:(id)arg6 ;
-(id)_curvedPickerMaskForSlot:(id)arg1 ;
-(long long)_keylineStyleForComplicationSlot:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

