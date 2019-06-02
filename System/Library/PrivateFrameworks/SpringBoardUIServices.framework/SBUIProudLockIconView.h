/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, SBUICAPackageView, NSSet, LAUIPearlGlyphView, SBUIFaceIDCoachingView, SBUIFaceIDCameraGlyphView, _UILegibilitySettings, UIColor;

@interface SBUIProudLockIconView : UIView {

	long long _state;
	UIView* _iconContainerView;
	SBUICAPackageView* _lockView;
	NSSet* _imageLayers;
	NSSet* _shadowImageLayers;
	NSSet* _shadowFilterLayers;
	LAUIPearlGlyphView* _lazy_pearlGlyphView;
	id _pearlGlyphViewSharedResources;
	SBUIFaceIDCoachingView* _lazy_faceIDCoachingView;
	BOOL _performingIncomingLayout;
	SBUIFaceIDCameraGlyphView* _cameraCoveredView;
	_UILegibilitySettings* _legibilitySettings;
	double _durationOnCameraCoveredGlyphBeforeCoaching;
	UIColor* _contentColor;

}

@property (nonatomic,retain) UIColor * contentColor;                                         //@synthesize contentColor=_contentColor - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                     //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) double durationOnCameraCoveredGlyphBeforeCoaching;              //@synthesize durationOnCameraCoveredGlyphBeforeCoaching=_durationOnCameraCoveredGlyphBeforeCoaching - In the implementation block
@property (assign,nonatomic) long long state;                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) SBUIFaceIDCameraGlyphView * cameraCoveredView;                //@synthesize cameraCoveredView=_cameraCoveredView - In the implementation block
-(id)fileNameForCurrentDevice;
-(void)_forEachLayerInHierarchy:(id)arg1 perform:(/*^block*/id)arg2 ;
-(void)_transitionToState:(long long)arg1 animated:(BOOL)arg2 options:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 options:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_configureShadowFromLegibilitySettings:(id)arg1 ;
-(id)_faceIDCoachingView;
-(SBUIFaceIDCameraGlyphView *)cameraCoveredView;
-(CGSize)_smallLockSize;
-(double)_lockToCoachingSpacing;
-(void)_resetPearlGlyphView;
-(void)_resetfaceIDCoachingView;
-(void)_resetCameraGlyphView;
-(id)_activeViewsForState:(long long)arg1 ;
-(id)_pearlGlyphView;
-(id)_alphaAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4 forIncomingViews:(BOOL)arg5 ;
-(double)_alphaForActiveViewForState:(long long)arg1 ;
-(CGAffineTransform)_incomingTransformForActiveView:(id)arg1 forState:(long long)arg2 ;
-(id)_transformAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4 forIncomingViews:(BOOL)arg5 ;
-(CGAffineTransform)_outgoingTransformForView:(id)arg1 fromState:(long long)arg2 ;
-(CGAffineTransform)_transformForActiveView:(id)arg1 forState:(long long)arg2 ;
-(id)_layoutAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4 ;
-(id)_defaultAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4 ;
-(CGAffineTransform)_zoomedTransform;
-(double)_scaleAmountForZoom;
-(CGSize)_smallLockSizeForTextSize:(id)arg1 ;
-(double)durationOnCameraCoveredGlyphBeforeCoaching;
-(void)setDurationOnCameraCoveredGlyphBeforeCoaching:(double)arg1 ;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)state;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setState:(long long)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setContentColor:(UIColor *)arg1 ;
-(UIColor *)contentColor;
@end

