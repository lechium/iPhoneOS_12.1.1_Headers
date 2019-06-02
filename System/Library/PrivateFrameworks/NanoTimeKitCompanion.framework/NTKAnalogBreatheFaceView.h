/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKAnalogVideoFaceView.h>

@class NSDictionary;

@interface NTKAnalogBreatheFaceView : NTKAnalogVideoFaceView {

	NSDictionary* _editOptionDataSources;
	BOOL _shouldApplyTransform;
	unsigned long long _currentVideoStyle;

}

@property (assign,nonatomic) unsigned long long currentVideoStyle;              //@synthesize currentVideoStyle=_currentVideoStyle - In the implementation block
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_configureReusableTimeView:(id)arg1 ;
-(void)_prepareTimeViewForReuse:(id)arg1 ;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(id)imageForEditOption:(id)arg1 ;
-(id)_complicationsForegroundColor;
-(id)_complicationsPlatterColor;
-(id)_tapHighlightImage;
-(void)_customizeVideoPlayerOnSetup;
-(void)_handleEitherScreenWake;
-(BOOL)_shouldAnimateComplicationsOnTap;
-(void)_faceViewWasTapped;
-(void)videoDidFinishPlayingToEnd;
-(void)videoDidBeginPlayingQueuedVideo;
-(void)customizeFaceViewForListing:(id)arg1 changeEvent:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)_backlightDidTurnOff;
-(void)_applyVideoPlayerTransform;
-(void)_updateDialSize;
-(void)setupDataSources;
-(unsigned long long)currentVideoStyle;
-(void)setCurrentVideoStyle:(unsigned long long)arg1 ;
-(void)_takeBacklightAssertion;
-(void)_releaseBacklightAssertion;
@end

