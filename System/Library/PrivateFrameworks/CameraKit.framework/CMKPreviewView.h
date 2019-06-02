/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, CMKVideoPreviewView, CMKFocusPointView, CMKFocusView, CMKFocusLockView, CMKFocusSplitAttachmentView, CMKFocusLockAttachmentView, CMKFocusAttachmentView, CMKExposureBiasSlider, NSMutableDictionary, CMKCaptureController;

@interface CMKPreviewView : UIView {

	UIView* _maskingContainerView;
	UIView* _previewContainer;
	CMKVideoPreviewView* _videoPreviewView;
	UIView* _focusContainerView;
	CMKFocusPointView* _focusView;
	CMKFocusPointView* _exposureView;
	CMKFocusView* _continuousAutoFocusView;
	CMKFocusLockView* _lockFocusView;
	CMKFocusSplitAttachmentView* _splitFocusAndExposureAttachment;
	CMKFocusLockAttachmentView* _lockFocusAttachment;
	CMKFocusAttachmentView* _dismissFocusAttachment;
	CMKExposureBiasSlider* _exposureBiasSlider;
	UIView* _facesContainerView;
	NSMutableDictionary* _faceIDsToViews;
	UIView* _dimmingView;
	double _dimmingStrength;
	unsigned _canShowFocus : 1;
	unsigned _controlsAreVisible : 1;
	BOOL _square;
	BOOL _showSplitFocusAndExposureAttachment;
	BOOL _splitFocusAndExposure;
	BOOL _showLockFocusAttachment;
	BOOL _showExposureBiasSliderOnChange;
	BOOL _hideExposureBiasSlider;
	BOOL __showExposureBiasSlider;
	float _exposureBiasMin;
	float _exposureBiasMax;
	float _exposureBiasValue;
	int __exposureBiasSide;
	CMKCaptureController* __sharedCameraController;
	CGRect _lastFocusFrame;
	CGRect _lastExposureFrame;

}

@property (nonatomic,readonly) int _exposureBiasSide;                                                      //@synthesize _exposureBiasSide=__exposureBiasSide - In the implementation block
@property (assign,setter=_setShowExposureBiasSlider:,nonatomic) BOOL _showExposureBiasSlider;              //@synthesize _showExposureBiasSlider=__showExposureBiasSlider - In the implementation block
@property (assign,nonatomic,__weak) CMKCaptureController * _sharedCameraController;                        //@synthesize _sharedCameraController=__sharedCameraController - In the implementation block
@property (nonatomic,retain,readonly) CMKVideoPreviewView * videoPreviewView;                              //@synthesize videoPreviewView=_videoPreviewView - In the implementation block
@property (assign,getter=isSquare,nonatomic) BOOL square;                                                  //@synthesize square=_square - In the implementation block
@property (assign,nonatomic) double dimmingStrength;                                                       //@synthesize dimmingStrength=_dimmingStrength - In the implementation block
@property (nonatomic,readonly) CGRect lastFocusFrame;                                                      //@synthesize lastFocusFrame=_lastFocusFrame - In the implementation block
@property (nonatomic,readonly) CGRect lastExposureFrame;                                                   //@synthesize lastExposureFrame=_lastExposureFrame - In the implementation block
@property (nonatomic,readonly) double lastFocusFadeOutTime; 
@property (nonatomic,readonly) double lastExposureFadeOutTime; 
@property (assign,nonatomic) BOOL showSplitFocusAndExposureAttachment;                                     //@synthesize showSplitFocusAndExposureAttachment=_showSplitFocusAndExposureAttachment - In the implementation block
@property (assign,nonatomic) BOOL splitFocusAndExposure;                                                   //@synthesize splitFocusAndExposure=_splitFocusAndExposure - In the implementation block
@property (assign,nonatomic) BOOL showLockFocusAttachment;                                                 //@synthesize showLockFocusAttachment=_showLockFocusAttachment - In the implementation block
@property (assign,nonatomic) float exposureBiasMin;                                                        //@synthesize exposureBiasMin=_exposureBiasMin - In the implementation block
@property (assign,nonatomic) float exposureBiasMax;                                                        //@synthesize exposureBiasMax=_exposureBiasMax - In the implementation block
@property (assign,nonatomic) float exposureBiasValue;                                                      //@synthesize exposureBiasValue=_exposureBiasValue - In the implementation block
@property (assign,nonatomic) BOOL showExposureBiasSliderOnChange;                                          //@synthesize showExposureBiasSliderOnChange=_showExposureBiasSliderOnChange - In the implementation block
@property (assign,nonatomic) BOOL hideExposureBiasSlider;                                                  //@synthesize hideExposureBiasSlider=_hideExposureBiasSlider - In the implementation block
-(void)focusDidEnd;
-(void)setDimmingStrength:(double)arg1 ;
-(void)removeAllFocusViewsLeavingActivePointViews:(BOOL)arg1 ;
-(void)setShowSplitFocusAndExposureAttachment:(BOOL)arg1 ;
-(void)setShowLockFocusAttachment:(BOOL)arg1 ;
-(void)showLockFocusAtPoint:(CGPoint)arg1 ;
-(void)updateFocusPoint:(CGPoint)arg1 ;
-(void)updateExposurePoint:(CGPoint)arg1 ;
-(void)showFocusAtPoint:(CGPoint)arg1 ;
-(BOOL)splitFocusAndExposure;
-(void)animateFocusLock;
-(void)setShouldShowFocus:(BOOL)arg1 ;
-(void)setFocusViewsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)fadeOutFaceTrackingViews;
-(void)removeContinuousAutoFocusView;
-(void)showContinuousAutoFocusView;
-(void)showFaceTrackingViewsForFaces:(id)arg1 ;
-(id)splitFocusAndExposureAttachment;
-(void)updateFocusViewsLastInteractionTime;
-(void)setSplitFocusAndExposure:(BOOL)arg1 ;
-(id)lockFocusAttachment;
-(void)dismissFocusViews;
-(id)dismissFocusAttachment;
-(void)animateFocusLockScaleDown;
-(CGPoint)currentFocusPoint;
-(id)exposurePointView;
-(CGPoint)currentExposurePoint;
-(void)suspendFocusViewFadeOut;
-(void)resumeFocusViewFadeOutResetPending:(BOOL)arg1 ;
-(void)setShowExposureBiasSliderOnChange:(BOOL)arg1 ;
-(void)setHideExposureBiasSlider:(BOOL)arg1 ;
-(id)focusPointView;
-(double)lastFocusFadeOutTime;
-(CGRect)lastFocusFrame;
-(double)lastExposureFadeOutTime;
-(CGRect)lastExposureFrame;
-(BOOL)_allowSplitFocusAndExposure;
-(void)_attachAttachment:(id)arg1 toFocusView:(id)arg2 position:(int)arg3 ;
-(void)_updateSplitFocusAndExposureAttachment;
-(BOOL)_allowFocusLockAttachments;
-(void)_updateLockFocusAttachment;
-(BOOL)_enableExposureBias;
-(BOOL)_allowDismissFocusAttachment;
-(void)_showFocusAtPoint:(CGPoint)arg1 startAnimating:(BOOL)arg2 ;
-(void)_createFocusViewIfNeeded;
-(void)_updateFocusFrameForPoint:(CGPoint)arg1 ;
-(void)_setShowExposureBiasSlider:(BOOL)arg1 ;
-(void)_updateExposureFrameForPoint:(CGPoint)arg1 ;
-(BOOL)_shouldDismissFocusViewsOnFocusDidEnd;
-(BOOL)showExposureBiasSliderOnChange;
-(void)setDimmingStrength:(double)arg1 duration:(double)arg2 ;
-(BOOL)_shouldVendAttachment:(id)arg1 ;
-(BOOL)hideExposureBiasSlider;
-(void)_setExposureBiasSliderAlpha:(double)arg1 animationDuration:(double)arg2 ;
-(id)exposureBiasSlider;
-(void)resetFocusViewFadeOutSuspensions;
-(double)dimmingStrength;
-(BOOL)showSplitFocusAndExposureAttachment;
-(BOOL)showLockFocusAttachment;
-(BOOL)_showExposureBiasSlider;
-(CMKCaptureController *)_sharedCameraController;
-(void)set_sharedCameraController:(CMKCaptureController *)arg1 ;
-(BOOL)isSquare;
-(void)setExposureBiasMin:(float)arg1 ;
-(void)setExposureBiasMax:(float)arg1 ;
-(void)setExposureBiasValue:(float)arg1 ;
-(float)exposureBiasMin;
-(float)exposureBiasMax;
-(float)exposureBiasValue;
-(void)setControlsAreVisible:(BOOL)arg1 ;
-(CMKVideoPreviewView *)videoPreviewView;
-(void)_layoutExposureBiasSlider;
-(void)_createExposureBiasSlider;
-(void)setExposureBiasSide:(int)arg1 animated:(BOOL)arg2 ;
-(int)_exposureBiasSide;
-(void)setSquare:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSquare:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
@end

