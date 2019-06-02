/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAutoRotatingWindow.h>
#import <UIKitCore/_UIScreenBasedObject.h>

@class NSDictionary, UIScreen, NSString;

@interface UITextEffectsWindow : UIAutoRotatingWindow <_UIScreenBasedObject> {

	BOOL _inDealloc;
	unsigned long long _activeEffectsCount;
	double _defaultWindowLevel;
	CGPoint _hostedWindowOffset;
	NSDictionary* _perScreenOptions;
	UIScreen* __intendedScreen;
	unsigned long long _activeRemoteViewCount;
	unsigned long long _windowLevelCount;
	double _windowLevelStack[5];
	CGSize _hostedSceneSize;
	BOOL _manualHostingOverride;
	UIEdgeInsets _hostedSafeInsets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) UIScreen * _intendedScreen; 
@property (readonly) NSDictionary * _options; 
@property (readonly) unsigned contextID; 
@property (assign,nonatomic) double defaultWindowLevel;                  //@synthesize defaultWindowLevel=_defaultWindowLevel - In the implementation block
@property (assign,nonatomic) CGPoint hostedWindowOffset;                 //@synthesize hostedWindowOffset=_hostedWindowOffset - In the implementation block
@property (nonatomic,readonly) CGRect hostedFrame; 
@property (assign,nonatomic) CGSize hostedSceneSize;                     //@synthesize hostedSceneSize=_hostedSceneSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hostedSafeInsets;              //@synthesize hostedSafeInsets=_hostedSafeInsets - In the implementation block
+(id)activeTextEffectsWindowForScreen:(id)arg1 ;
+(id)sharedTextEffectsWindowAboveStatusBar;
+(id)sharedTextEffectsWindowForScreen:(id)arg1 ;
+(id)sharedTextEffectsWindow;
+(id)_sharedTextEffectsWindowforScreen:(id)arg1 aboveStatusBar:(BOOL)arg2 allowHosted:(BOOL)arg3 matchesStatusBarOrientationOnAccess:(BOOL)arg4 shouldCreateIfNecessary:(BOOL)arg5 ;
+(void)releaseSharedInstances;
+(void)raiseTextEffectsWindowsForShowNotificationCenter;
+(void)lowerTextEffectsWindowsForHideNotificationCenter;
-(void)dealloc;
-(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromWindow:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(BOOL)_isTextEffectsWindow;
-(long long)interfaceOrientation;
-(void)sendSubviewToBack:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
-(NSDictionary *)_options;
-(void)bringSubviewToFront:(id)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromWindow:(id)arg2 ;
-(void)_sceneBoundsDidChange;
-(void)_updateTransformLayer;
-(BOOL)isInternalWindow;
-(BOOL)_canAffectStatusBarAppearance;
-(CGRect)convertRect:(CGRect)arg1 toWindow:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toWindow:(id)arg2 ;
-(unsigned)contextID;
-(CGRect)actualSceneBounds;
-(id)_initWithFrame:(CGRect)arg1 attached:(BOOL)arg2 ;
-(void)_createSystemGestureGateGestureRecognizerIfNeeded;
-(CGRect)_sceneReferenceBounds;
-(id)_initWithScreen:(id)arg1 options:(id)arg2 ;
-(BOOL)_matchingOptions:(id)arg1 ;
-(UIScreen *)_intendedScreen;
-(CGRect)actualSceneFrame;
-(void)_didRemoveSubview:(id)arg1 ;
-(void)updateForOrientation:(long long)arg1 ;
-(UIEdgeInsets)hostedSafeInsets;
-(CGRect)actualSceneBoundsForLandscape:(BOOL)arg1 ;
-(BOOL)_shouldTextEffectsWindowBeHostedForView:(id)arg1 ;
-(id)aboveStatusBarWindow;
-(void)_setWindowLevel:(double)arg1 ;
-(CGRect)hostedFrame;
-(void)_restoreWindowLevel;
-(BOOL)_isFullscreen;
-(void)_matchDeviceOrientation;
-(id)_initBasicWithScreen:(id)arg1 options:(id)arg2 ;
-(void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
-(CGRect)_sceneBounds;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg1 ;
-(BOOL)_shouldTintStatusBar;
-(void)_willSnapshot;
-(void)_didSnapshot;
-(void)_updateTransformLayerForClassicPresentation;
-(void)_configureContextOptions:(id)arg1 ;
-(void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2 ;
-(BOOL)_shouldResizeWithScene;
-(CGPoint)hostedWindowOffset;
-(CGSize)hostedSceneSize;
-(void)setDefaultWindowLevel:(double)arg1 ;
-(double)defaultWindowLevel;
-(void)_commonTextEffectsInit;
-(BOOL)enableRemoteHosting;
-(CGPoint)_forHostedProcessConvertPoint:(CGPoint)arg1 forWindow:(id)arg2 wasFromWindow:(BOOL)arg3 ;
-(CGRect)_forHostedProcessConvertRect:(CGRect)arg1 forWindow:(id)arg2 wasFromWindow:(BOOL)arg3 ;
-(void)delayHideWindow;
-(void)sortSubviews;
-(void)updateForOrientation:(long long)arg1 forceResetTransform:(BOOL)arg2 ;
-(CGRect)actualSceneFrameForOrientation:(long long)arg1 ;
-(void)setHostedSafeInsets:(UIEdgeInsets)arg1 ;
-(void)setEnableRemoteHosting:(BOOL)arg1 ;
-(void)resetTransform;
-(void)updateSubviewOrdering;
-(void)setHostedWindowOffset:(CGPoint)arg1 ;
-(void)setHostedSceneSize:(CGSize)arg1 ;
@end

