/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKDigitalFaceView.h>
#import <libobjc.A.dylib/NTKTimeView.h>
#import <libobjc.A.dylib/PUICCrownInputSequencerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NTKDigitialUtilitarianFaceViewComplicationFactory, NTKColorCurve, NTKDigitalTimeLabel, NTKDigitalTimeLabelStyle, UIView, NTKBezierPathView, NTKSolarDiskView, UIImageView, UILabel, NSDictionary, NTKSolarTimeModel, NTKFloatCurve, NTKSolarPath, UITapGestureRecognizer, NTKComplicationController, NTKDateComplicationLabel, NTKLayoutRule, NSDateFormatter, NSMutableSet, NSTimer, NSString;

@interface NTKSolarFaceView : NTKDigitalFaceView <NTKTimeView, PUICCrownInputSequencerDelegate, UIGestureRecognizerDelegate> {

	NTKDigitialUtilitarianFaceViewComplicationFactory* _faceViewComplicationFactory;
	NTKColorCurve* _preNoonComplicationColorCurve;
	NTKColorCurve* _postNoonComplicationColorCurve;
	NTKDigitalTimeLabel* _digitalTimeLabel;
	NTKDigitalTimeLabelStyle* _digitalTimeLabelDefaultStyle;
	NTKDigitalTimeLabelStyle* _digitalTimeLabelSmallInUpperRightCornerStyle;
	UIView* _solarContentView;
	UIView* _solarPathObjectContainerView;
	NTKBezierPathView* _solarBezierPathView;
	NTKSolarDiskView* _solarDiskView;
	UIView* _solarDiskHaloParentView;
	UIImageView* _solarDiskHaloView;
	UIView* _solarDiskHaloMaskView;
	NTKColorCurve* _preNoonSolarDiskColorCurve;
	NTKColorCurve* _postNoonSolarDiskColorCurve;
	double _solarDiskOverridePercentage;
	UILabel* _waypointLabel;
	NSDictionary* _waypoints;
	NSDictionary* _waypointViews;
	UIView* _horizonView;
	UIImageView* _horizonGradientView;
	UIView* _horizonGradientContainerView;
	NTKColorCurve* _preNoonHorizonGradientColorCurve;
	NTKColorCurve* _postNoonHorizonGradientColorCurve;
	UIView* _belowHorizonView;
	NTKSolarTimeModel* _solarTimeModel;
	double _currentSolarDiskPercentage;
	NTKFloatCurve* _preNoonHorizonHeightCurve;
	NTKFloatCurve* _postNoonHorizonHeightCurve;
	NTKSolarPath* _solarPath;
	UITapGestureRecognizer* _viewModeTapGesture;
	long long _previousViewMode;
	NSNumber* _clockTimerToken;
	NTKComplicationController* _dateComplicationController;
	NTKDateComplicationLabel* _dateComplicationLabel;
	NTKLayoutRule* _dateComplicationLayoutRule;
	NSString* _locationManagerToken;
	UILabel* _scrubLabel;
	UILabel* _overrideDateLabel;
	NSDateFormatter* _overrideDateFormatter;
	/*^block*/id _waypointSettleAnimationBlock;
	UIView* _zoomMaskView;
	CGPoint _digitalTimeLabelZoomEndingCenter;
	CGPoint _dateLabelZoomEndingCenter;
	CGPoint _solarDiskViewZoomEndingCenter;
	UIView* _borrowedTimeViewFromClockIcon;
	UIView* _borrowedCircleViewFromClockIcon;
	NSMutableSet* _animatingReasons;
	NSTimer* _wheelDelayTimer;
	NSTimer* _buttonPressTimer;
	double _labelFontLineHeight;
	unsigned _isContentLoaded : 1;
	unsigned _isSolarPathUpdateNeeded : 1;
	unsigned _isLocationAwareInteractiveModeEnabled : 1;
	unsigned _isHandlingHardwareEvents : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isFrozen,nonatomic) BOOL frozen; 
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_layoutTimeLabelForViewMode:(long long)arg1 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_loadSnapshotContentViews;
-(void)_handleViewModeTapGesture:(id)arg1 ;
-(void)_unloadSnapshotContentViews;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)setViewMode:(long long)arg1 ;
-(void)_cleanupAfterEditing;
-(id)_detachedComplicationDisplays;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_needsForegroundContainerView;
-(void)_loadLayoutRules;
-(BOOL)_usesCustomZoom;
-(void)_applyDataMode;
-(void)_becameActiveFace;
-(void)_becameInactiveFace;
-(void)_applyShowContentForUnadornedSnapshot;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_prepareForEditing;
-(void)_layoutForegroundContainerView;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2 ;
-(void)_cleanupAfterZoom;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(long long)_complicationPickerStyleForSlot:(id)arg1 ;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(double)keylineStyleForComplicationSlot:(id)arg1 ;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(void)_startClockUpdates;
-(void)_stopClockUpdates;
-(BOOL)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2 ;
-(double)_minimumBreathingScaleForComplicationSlot:(id)arg1 ;
-(void)_bringForegroundViewsToFront;
-(void)_disableCrown;
-(void)_updateDigitalTimeLabelStylesForBounds:(CGRect)arg1 ;
-(void)_asyncUpdateLocale;
-(BOOL)_canEnterInteractiveMode;
-(void)_enableCrown;
-(void)_updateLocale;
-(void)_updateWaypoints;
-(void)_timeZoneChanged:(id)arg1 ;
-(void)_updateColorCurves;
-(double)_solarDiskRestPercentage;
-(void)_updateSolarHaloWithPercentage:(double)arg1 ;
-(void)_updateSolarHorizonGradientAlphaWithPercentage:(double)arg1 ;
-(void)_updateSolarHorizonGradientColorWithPercentage:(double)arg1 ;
-(void)_updateComplicationColorWithPercentage:(double)arg1 ;
-(void)_setViewMode:(long long)arg1 animated:(BOOL)arg2 ;
-(id)_createSolarBezierPath;
-(void)_setSolarBezierPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)_layoutLegacyDateComplication;
-(void)_layoutHorizonForViewMode:(long long)arg1 ;
-(void)_layoutSolarPathAndContainerForViewMode:(long long)arg1 ;
-(void)_layoutSolarDiskViewForViewMode:(long long)arg1 ;
-(void)_updateWaypointLabelForCrownMovement;
-(void)_solarDiskPercentageChanged:(double)arg1 ;
-(void)_updateSolarPathForChangedDate:(id)arg1 ;
-(void)_updateTimeScrubbingContent;
-(double)_solarDiskIdealizedDatePercentage;
-(void)_animateSolarDiskFromPercentage:(double)arg1 toPercentage:(double)arg2 reason:(id)arg3 ;
-(BOOL)_solarPathRequiresUpdateForChangedLocation:(id)arg1 ;
-(void)_updateSolarPathForChangedLocation:(id)arg1 ;
-(double)_percentageForWaypoint:(long long)arg1 ;
-(long long)_waypointForPercentage:(double)arg1 withSmallThreshold:(double)arg2 largeThreshold:(double)arg3 ;
-(CGPoint)_pointOnSolarPathForPercentage:(double)arg1 ;
-(void)_updateSolarHorizonGradientAlphaWithSolarDiskCenter:(CGPoint)arg1 ;
-(void)_updateSolarDiskHaloViewPosition;
-(void)_beginAnimatingForReason:(id)arg1 ;
-(void)_endAnimatingForReason:(id)arg1 ;
-(void)_animateSolarDiskToRestPercentageIfNeeded;
-(id)_createWaypointView;
-(void)_transitionToViewMode:(long long)arg1 ;
-(void)_prepareForSettingViewMode:(long long)arg1 ;
-(void)_interpolateFromViewMode:(long long)arg1 toViewMode:(long long)arg2 progress:(double)arg3 ;
-(void)_updateToViewMode:(long long)arg1 ;
-(void)_cleanupAfterSettingViewMode:(long long)arg1 ;
-(id)_digitalTimeLabelStyleForViewMode:(long long)arg1 ;
-(void)_wheelDelayTimerFired;
-(void)_buttonPressTimerFired;
-(void)_sharedLocationManagerUpdatedLocation:(id)arg1 error:(id)arg2 ;
-(long long)_waypointBetweenPreviousOffset:(double)arg1 currentOffset:(double)arg2 ;
-(id)_waypointLabelTextForPercentage:(double)arg1 ;
-(BOOL)_isAnimatingForReason:(id)arg1 ;
-(void)_adjustUIForBoundsChange;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)_isAnimating;
-(void)setTimeOffset:(double)arg1 ;
-(BOOL)_wheelChangedWithEvent:(id)arg1 ;
@end

