/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKAVListingFaceBaseView.h>

@class NTKDigitialUtilitarianFaceViewComplicationFactory, UITapGestureRecognizer;

@interface NTKVideoFaceView : NTKAVListingFaceBaseView {

	NTKDigitialUtilitarianFaceViewComplicationFactory* _faceViewComplicationFactory;
	unsigned long long _theme;
	UITapGestureRecognizer* _tapToPlayGesture;
	unsigned _isUsingDefaultListing : 1;
	unsigned _isComplicationColorApplied : 1;
	unsigned _isComplicationColorGray : 1;

}
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_cleanupAfterEditing;
-(id)_detachedComplicationDisplays;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(void)_loadLayoutRules;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_prepareForEditing;
-(double)_timeTravelYAdjustment;
-(void)_updatePaused;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(long long)_complicationPickerStyleForSlot:(id)arg1 ;
-(double)_keylineCornerRadiusForComplicationSlot:(id)arg1 ;
-(id)_posterImageView;
-(id)_nextListing;
-(void)_performPreloadVideoTask;
-(id)_onDeckPosterImageView;
-(void)_selectDefaultListing;
-(double)keylineStyleForComplicationSlot:(id)arg1 ;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(id)_complicationForegroundColor;
-(void)_handleTapToPlayVideoGesture:(id)arg1 ;
-(id)_posterImageViewWithTheme:(unsigned long long)arg1 ;
-(id)_defaultListing;
-(BOOL)_shouldDelayBeforePlayingNextVideo;
-(double)_minimumBreathingScaleForComplicationSlot:(id)arg1 ;
-(id)_viewForEditOption:(id)arg1 ;
-(double)_rightSideMarginForDigitalTimeHeroPosition;
-(void)videoPlayerViewDidBeginPlaying:(id)arg1 ;
-(void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1 ;
-(void)dealloc;
-(void)didAddSubview:(id)arg1 ;
@end
