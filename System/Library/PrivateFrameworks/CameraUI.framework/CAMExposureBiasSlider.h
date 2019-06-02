/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAMExposureBiasSliderThumb, UIView;

@interface CAMExposureBiasSlider : UIView {

	BOOL _suspendTrackFadeOut;
	float _exposureBiasMin;
	float _exposureBiasMax;
	float _exposureBiasValue;
	CAMExposureBiasSliderThumb* __thumbView;
	UIView* __minTrackView;
	UIView* __maxTrackView;
	UIView* __minTrackMaskView;
	UIView* __maxTrackMaskView;
	double __lastInteractionTime;

}

@property (nonatomic,retain,readonly) CAMExposureBiasSliderThumb * _thumbView;              //@synthesize _thumbView=__thumbView - In the implementation block
@property (nonatomic,retain,readonly) UIView * _minTrackView;                               //@synthesize _minTrackView=__minTrackView - In the implementation block
@property (nonatomic,retain,readonly) UIView * _maxTrackView;                               //@synthesize _maxTrackView=__maxTrackView - In the implementation block
@property (nonatomic,retain,readonly) UIView * _minTrackMaskView;                           //@synthesize _minTrackMaskView=__minTrackMaskView - In the implementation block
@property (nonatomic,retain,readonly) UIView * _maxTrackMaskView;                           //@synthesize _maxTrackMaskView=__maxTrackMaskView - In the implementation block
@property (nonatomic,readonly) double _lastInteractionTime;                                 //@synthesize _lastInteractionTime=__lastInteractionTime - In the implementation block
@property (assign,nonatomic) float exposureBiasMin;                                         //@synthesize exposureBiasMin=_exposureBiasMin - In the implementation block
@property (assign,nonatomic) float exposureBiasMax;                                         //@synthesize exposureBiasMax=_exposureBiasMax - In the implementation block
@property (assign,nonatomic) float exposureBiasValue;                                       //@synthesize exposureBiasValue=_exposureBiasValue - In the implementation block
@property (assign,nonatomic) BOOL suspendTrackFadeOut;                                      //@synthesize suspendTrackFadeOut=_suspendTrackFadeOut - In the implementation block
@property (nonatomic,readonly) double thumbMaxExtension; 
-(void)setExposureBiasMin:(float)arg1 ;
-(void)setExposureBiasMax:(float)arg1 ;
-(void)setExposureBiasValue:(float)arg1 ;
-(void)_updateForChangedNormalizedExposureValue;
-(void)updateLastInteractionTime;
-(float)_normalizedExposureValue;
-(CGPoint)_sunCenterForNormalizedValue:(float)arg1 ;
-(float)exposureBiasMin;
-(float)exposureBiasMax;
-(float)exposureBiasValue;
-(void)_cancelDelayedDim;
-(void)_scheduleDelayedDim;
-(void)_animateTrackAlpha:(double)arg1 withDuration:(double)arg2 ;
-(double)_trackAlpha;
-(BOOL)suspendTrackFadeOut;
-(void)_dimTrackForInactivity;
-(double)thumbMaxExtension;
-(void)setSuspendTrackFadeOut:(BOOL)arg1 ;
-(void)forceTrackDimmed;
-(CAMExposureBiasSliderThumb *)_thumbView;
-(UIView *)_minTrackMaskView;
-(UIView *)_maxTrackMaskView;
-(double)_lastInteractionTime;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(UIView *)_minTrackView;
-(UIView *)_maxTrackView;
@end

