/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/_CRKImageLoaderDelegate.h>
#import <libobjc.A.dylib/INUIImageLoaderDelegate.h>
#import <UIKit/UICoordinateSpace.h>
#import <UIKitCore/_UITraitEnvironmentInternal.h>
#import <UIKitCore/_UIFocusEnvironmentInternal.h>
#import <UIKitCore/_UIFocusRegionContainer.h>
#import <UIKit/UIFocusItemContainer.h>
#import <UIKitCore/_UIFocusEnvironmentPrivate.h>
#import <UIKit/UITraitEnvironment.h>

@protocol UIFocusEnvironment;
@class NSDictionary, NSArray, _UIScreenFixedCoordinateSpace, UITraitCollection, _UIDisplayEdgeInfoProvider, FBSDisplayConfiguration, CARSessionStatus, UISoftwareDimmingWindow, _UIFocusScrollManager, _UIFocusMovementPerformer, _UIScreenFocusSystemManager, UIFocusSystem, _UIDragManager, _UIInteractiveHighlightEnvironment, _UIScreenBoundingPathUtilities, UIWindow, NSString, UIScreenMode, UIView;

@interface UIScreen : NSObject <_CRKImageLoaderDelegate, INUIImageLoaderDelegate, UICoordinateSpace, _UITraitEnvironmentInternal, _UIFocusEnvironmentInternal, _UIFocusRegionContainer, UIFocusItemContainer, _UIFocusEnvironmentPrivate, UITraitEnvironment> {

	CGRect _unjailedReferenceBounds;
	CGRect _referenceBounds;
	long long _interfaceOrientation;
	double _scale;
	long long _gamut;
	long long _userInterfaceIdiom;
	unsigned long long _artworkSubtype;
	NSDictionary* _capabilities;
	NSArray* _availableDisplayModes;
	double _pointsPerInch;
	_UIScreenFixedCoordinateSpace* _fixedCoordinateSpace;
	UITraitCollection* _contentSizeCategoryTraits;
	_UIDisplayEdgeInfoProvider* _displayEdgeInfoProvider;
	FBSDisplayConfiguration* __displayConfiguration;
	CARSessionStatus* _currentCarSessionStatus;
	struct {
		unsigned bitsPerComponent : 4;
		unsigned initialized : 1;
		unsigned connected : 1;
		unsigned hasSetOverscanCompensation : 1;
		unsigned overscanCompensation : 2;
		unsigned wantsWideContentMargins : 1;
		unsigned queriedDeviceContentMargins : 1;
		unsigned hasCalculatedPointsPerInch : 1;
		unsigned rightHandDrive : 1;
		unsigned carPlayNightModeSupported : 1;
		unsigned carPlayNightModeEnabled : 1;
	}  _screenFlags;
	SCD_Struct_UI57 _carPlayHumanPresenceStatus;
	BOOL _performingSystemSnapshot;
	BOOL _wantsSoftwareDimming;
	BOOL _captured;
	BOOL __UIIBAlwaysProvidePeripheryInsets;
	BOOL _mainScreen;
	float _lastNotifiedBacklightLevel;
	UITraitCollection* _defaultTraitCollection;
	UITraitCollection* _overrideTraitCollection;
	UITraitCollection* _lastNotifiedTraitCollection;
	UISoftwareDimmingWindow* _softwareDimmingWindow;
	_UIFocusScrollManager* _focusScrollManager;
	_UIFocusMovementPerformer* _focusMovementPerformer;
	_UIScreenFocusSystemManager* _focusSystemManager;
	UIFocusSystem* _focusSystem;
	_UIDragManager* _dragManager;
	_UIInteractiveHighlightEnvironment* _interactiveHighlightEnvironment;
	_UIScreenBoundingPathUtilities* _boundingPathUtilities;
	UIWindow*<UIFocusEnvironment> __focusedWindow;

}

@property (nonatomic,readonly) BOOL supportsScreenshotEditViewController; 
@property (readonly) double _gkScale; 
@property (readonly) CGRect _gkBounds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long ck_screenSizeCategory; 
@property (readonly) unsigned long long screenSizeCategory; 
@property (getter=isUserInterfaceIdiomPad,nonatomic,readonly) BOOL userInterfaceIdiomPad; 
@property (nonatomic,readonly) CGSize is_scaledSize; 
@property (setter=_setSoftwareDimmingWindow:,nonatomic,retain) UISoftwareDimmingWindow * _softwareDimmingWindow;                                                       //@synthesize softwareDimmingWindow=_softwareDimmingWindow - In the implementation block
@property (assign,setter=_setLastNotifiedBacklightLevel:,nonatomic) float _lastNotifiedBacklightLevel;                                                                 //@synthesize lastNotifiedBacklightLevel=_lastNotifiedBacklightLevel - In the implementation block
@property (nonatomic,retain) FBSDisplayConfiguration * displayConfiguration; 
@property (assign,setter=_setCaptured:,getter=isCaptured,nonatomic) BOOL captured;                                                                                     //@synthesize captured=_captured - In the implementation block
@property (setter=_setDefaultTraitCollection:,getter=_defaultTraitCollection,nonatomic,retain) UITraitCollection * defaultTraitCollection;                             //@synthesize defaultTraitCollection=_defaultTraitCollection - In the implementation block
@property (setter=_setOverrideTraitCollection:,getter=_overrideTraitCollection,nonatomic,retain) UITraitCollection * overrideTraitCollection;                          //@synthesize overrideTraitCollection=_overrideTraitCollection - In the implementation block
@property (setter=_setLastNotifiedTraitCollection:,getter=_lastNotifiedTraitCollection,nonatomic,retain) UITraitCollection * lastNotifiedTraitCollection;              //@synthesize lastNotifiedTraitCollection=_lastNotifiedTraitCollection - In the implementation block
@property (getter=_focusSystem,nonatomic,readonly) UIFocusSystem * focusSystem;                                                                                        //@synthesize focusSystem=_focusSystem - In the implementation block
@property (assign,setter=_setUIIBAlwaysProvidePeripheryInsets:,nonatomic) BOOL _UIIBAlwaysProvidePeripheryInsets;                                                      //@synthesize _UIIBAlwaysProvidePeripheryInsets=__UIIBAlwaysProvidePeripheryInsets - In the implementation block
@property (setter=_setBoundingPathUtilities:,getter=_boundingPathUtilities,nonatomic,retain) _UIScreenBoundingPathUtilities * boundingPathUtilities;                   //@synthesize boundingPathUtilities=_boundingPathUtilities - In the implementation block
@property (getter=_interactiveHighlightEnvironment,nonatomic,readonly) _UIInteractiveHighlightEnvironment * interactiveHighlightEnvironment;                           //@synthesize interactiveHighlightEnvironment=_interactiveHighlightEnvironment - In the implementation block
@property (getter=_dragManager,nonatomic,readonly) _UIDragManager * dragManager;                                                                                       //@synthesize dragManager=_dragManager - In the implementation block
@property (assign,setter=_setMainScreen:,getter=_isMainScreen,nonatomic) BOOL mainScreen;                                                                              //@synthesize mainScreen=_mainScreen - In the implementation block
@property (getter=_focusSystemManager,nonatomic,readonly) _UIScreenFocusSystemManager * focusSystemManager;                                                            //@synthesize focusSystemManager=_focusSystemManager - In the implementation block
@property (getter=_focusScrollManager,nonatomic,readonly) _UIFocusScrollManager * focusScrollManager;                                                                  //@synthesize focusScrollManager=_focusScrollManager - In the implementation block
@property (getter=_focusMovementPerformer,nonatomic,readonly) _UIFocusMovementPerformer * focusMovementPerformer;                                                      //@synthesize focusMovementPerformer=_focusMovementPerformer - In the implementation block
@property (assign,setter=_setFocusedWindow:,nonatomic) UIWindow*<UIFocusEnvironment> _focusedWindow;                                                                   //@synthesize _focusedWindow=__focusedWindow - In the implementation block
@property (nonatomic,readonly) UIWindow * _preferredFocusedWindow; 
@property (assign,setter=_setPerformingSystemSnapshot:,getter=_isPerformingSystemSnapshot,nonatomic) BOOL _performingSystemSnapshot;                                   //@synthesize performingSystemSnapshot=_performingSystemSnapshot - In the implementation block
@property (nonatomic,readonly) CGRect _referenceBounds;                                                                                                                //@synthesize referenceBounds=_referenceBounds - In the implementation block
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) double scale;                                                                                                                           //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availableModes; 
@property (nonatomic,readonly) UIScreenMode * preferredMode; 
@property (nonatomic,retain) UIScreenMode * currentMode; 
@property (assign,nonatomic) long long overscanCompensation; 
@property (nonatomic,readonly) UIEdgeInsets overscanCompensationInsets; 
@property (nonatomic,readonly) UIScreen * mirroredScreen; 
@property (assign,nonatomic) double brightness; 
@property (assign,nonatomic) BOOL wantsSoftwareDimming;                                                                                                                //@synthesize wantsSoftwareDimming=_wantsSoftwareDimming - In the implementation block
@property (readonly) id<UICoordinateSpace> coordinateSpace; 
@property (readonly) id<UICoordinateSpace> fixedCoordinateSpace; 
@property (nonatomic,readonly) CGRect nativeBounds; 
@property (nonatomic,readonly) double nativeScale; 
@property (readonly) long long maximumFramesPerSecond; 
@property (nonatomic,__weak,readonly) id<UIFocusItem> focusedItem; 
@property (nonatomic,__weak,readonly) UIView * focusedView; 
@property (nonatomic,readonly) BOOL supportsFocus; 
@property (nonatomic,readonly) CGRect applicationFrame; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (getter=_isEligibleForFocusInteraction,nonatomic,readonly) BOOL eligibleForFocusInteraction; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) long long preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
@property (getter=_focusMapContainer,nonatomic,__weak,readonly) id<_UIFocusRegionContainer> focusMapContainer; 
+(CGAffineTransform)nc_transformForScreenOriginRotation:(double)arg1 ;
+(CGAffineTransform)nc_transformForInterfaceOrientation:(long long)arg1 ;
+(CGAffineTransform)nc_counterTransformForActiveInterfaceOrientation;
+(BOOL)hk_currentDeviceHas4InchScreen;
+(BOOL)hk_currentDeviceHas4Point7InchScreen;
+(BOOL)hk_currentDeviceHas5Point8InchScreen;
+(BOOL)vcui_isNarrow;
+(UIEdgeInsets)cn_mainScreenPeripheryInsets;
+(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
+(void)initialize;
+(id)mainScreen;
+(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
+(id)_carScreen;
+(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
+(id)_screenWithDisplayName:(id)arg1 ;
+(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
+(id)_screenWithFBSDisplayIdentity:(id)arg1 ;
+(void)_prepareScreensForAppResume;
+(void)_prepareCarScreensForResume;
+(id)_screenForScene:(id)arg1 ;
+(CGAffineTransform)transformToRotateScreen:(double)arg1 ;
+(CGAffineTransform)transformForScreenOriginRotation:(double)arg1 ;
+(id)screens;
+(void)_enumerateScreensWithBlock:(/*^block*/id)arg1 ;
+(void)_FBSDisplayConfigurationConnected:(id)arg1 andNotify:(BOOL)arg2 ;
+(void)_FBSDisplayIdentityDisconnected:(id)arg1 ;
+(void)_FBSDisplayConfigurationConnected:(id)arg1 forInitialDisplayContext:(id)arg2 andNotify:(BOOL)arg3 forceMain:(BOOL)arg4 ;
+(void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 ;
+(void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 andPost:(BOOL)arg3 ;
+(void)_FBSDisplayConfigurationConnected:(id)arg1 andNotify:(BOOL)arg2 forceMain:(BOOL)arg3 ;
+(void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 forSceneDestruction:(id)arg2 ;
+(BOOL)_shouldDisableJail;
+(id)__createPlugInScreenForFBSDisplay:(id)arg1 ;
+(id)_screenWithDisplayID:(id)arg1 ;
+(id)_screenWithIntegerDisplayID:(unsigned)arg1 ;
+(void)_FBSDisplayDidPossiblyConnect:(id)arg1 ;
+(void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 ;
+(BOOL)_isProbablyBeingRecorded;
+(id)__displayConfigurationsIncludingMain:(BOOL)arg1 ;
-(CGRect)nc_bounds;
-(BOOL)supportsScreenshotEditViewController;
-(CGSize)pu_workImageSize;
-(double)_gkScale;
-(CGRect)_gkBounds;
-(id)traitCollectionForImageLoader:(id)arg1 image:(id)arg2 ;
-(id)traitCollectionForImageLoader:(id)arg1 ;
-(unsigned long long)ck_screenSizeCategory;
-(BOOL)__ck_isFullscreen;
-(unsigned long long)screenSizeCategory;
-(BOOL)isUserInterfaceIdiomPad;
-(CGSize)is_scaledSize;
-(id)_mapkit_display;
-(void)dealloc;
-(CGRect)bounds;
-(BOOL)_isCarScreen;
-(double)scale;
-(NSString *)description;
-(UITraitCollection *)traitCollection;
-(void)setNeedsFocusUpdate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)preferredFocusedView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)updateFocusIfNeeded;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(NSArray *)preferredFocusEnvironments;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(id<UIFocusItemContainer>)focusItemContainer;
-(BOOL)supportsFocus;
-(BOOL)_isMainScreen;
-(CGRect)_applicationFrame;
-(long long)_userInterfaceIdiom;
-(CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(BOOL)arg3 ;
-(id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)_scale;
-(BOOL)_wantsWideContentMargins;
-(id)_displayEdgeInfoProvider;
-(CGRect)_mainSceneBoundsForInterfaceOrientation:(long long)arg1 ;
-(id)snapshotViewAfterScreenUpdates:(BOOL)arg1 ;
-(UIEdgeInsets)overscanCompensationInsets;
-(UIEdgeInsets)_peripheryInsets;
-(CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 ;
-(CGRect)_referenceBounds;
-(UIView *)focusedView;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(CGRect)_interfaceOrientedMainSceneBounds;
-(id)_name;
-(void)_computeMetrics:(BOOL)arg1 ;
-(id)displayIdentity;
-(FBSDisplayConfiguration *)displayConfiguration;
-(void)_updateDisplayConfiguration:(id)arg1 ;
-(BOOL)_isMainScreenPointer;
-(void)_setInterfaceOrientation:(long long)arg1 ;
-(BOOL)_isRotatable;
-(BOOL)_isPerformingSystemSnapshot;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(long long)overscanCompensation;
-(void)setOverscanCompensation:(long long)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(id<UICoordinateSpace>)coordinateSpace;
-(id)_focusScrollManager;
-(id)_capabilityForKey:(id)arg1 ;
-(void)_setNeedsNonDeferredFocusUpdate;
-(id)_preferredFocusRegionCoordinateSpace;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(id)snapshot;
-(id<UICoordinateSpace>)fixedCoordinateSpace;
-(id)_defaultTraitCollection;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(id)_focusMapContainer;
-(id)_lastNotifiedTraitCollection;
-(id)_overrideTraitCollection;
-(id<UIFocusItem>)focusedItem;
-(long long)_interfaceOrientation;
-(CGRect)_boundsForInterfaceOrientation:(long long)arg1 ;
-(BOOL)_areListsLimited;
-(BOOL)_areMusicListsLimited;
-(void)_setLastNotifiedTraitCollection:(id)arg1 ;
-(CGRect)applicationFrame;
-(BOOL)_hasStatusBar;
-(CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ;
-(id)_interactiveHighlightEnvironment;
-(id)snapshotView;
-(UIScreenMode *)currentMode;
-(unsigned)_seed;
-(double)_rotation;
-(id)_dragManager;
-(id)_focusMovementPerformer;
-(id)focusItemsInRect:(CGRect)arg1 ;
-(id)_focusSystem;
-(UIWindow *)_preferredFocusedWindow;
-(void)_ensureFocusSystemIsLoaded;
-(void)setFocusEnabled:(BOOL)arg1 ;
-(double)_maximumSupportedScale;
-(double)_pointsPerInch;
-(long long)gamut;
-(id)initWithDisplayConfiguration:(id)arg1 ;
-(id)initWithDisplayConfiguration:(id)arg1 forceMainScreen:(BOOL)arg2 ;
-(void)_connectScreen;
-(id)_displayID;
-(unsigned)_integerDisplayID;
-(void)_computeMetrics;
-(BOOL)_supportsDeferredFocus;
-(void)_setArtworkSubtype:(unsigned long long)arg1 ;
-(void)_disconnectScreen;
-(void)_beginObservingBacklightLevelNotifications;
-(void)_accessibilityForceTouchEnabledChanged:(id)arg1 ;
-(void)_handleEffectiveUserInterfaceStyleChanged:(id)arg1 ;
-(void)_handleForcedUserInterfaceLayoutDirectionChanged:(id)arg1 ;
-(void)_clearCarPlayHumanPresenceState;
-(void)_fetchInitialCarPlayHumanPresenceStatusIfNeeded;
-(void)_externalDeviceNightModeDidChange:(id)arg1 ;
-(void)_limitedUIDidChange:(id)arg1 ;
-(void)_endObservingBacklightLevelNotifications;
-(void)_setSoftwareDimmingWindow:(id)arg1 ;
-(BOOL)isCaptured;
-(void)_setCaptured:(BOOL)arg1 ;
-(NSArray *)availableModes;
-(void)_updateAvailableDisplayModes;
-(void)_updateTraits;
-(BOOL)_hasWindows;
-(CGRect)_applicationFrameWithoutOverscanForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(BOOL)arg3 ;
-(CGRect)_overrideReferenceBounds;
-(BOOL)_isExternal;
-(CGRect)_mainSceneReferenceBounds;
-(BOOL)_UIIBAlwaysProvidePeripheryInsets;
-(UIEdgeInsets)_displayPeripheryInsets;
-(double)_refreshRate;
-(UIScreenMode *)preferredMode;
-(BOOL)_isOverscanned;
-(void)_setCarPlayHumanPresenceInRange:(BOOL)arg1 ;
-(void)_updateUserInterfaceIdiom;
-(void)_updateCapabilities;
-(void)_setUserInterfaceIdiom:(long long)arg1 ;
-(id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(CGRect)arg2 ;
-(long long)_effectiveUserInterfaceStyle;
-(long long)_forceTouchCapability;
-(double)_traitCollectionDisplayCornerRadius;
-(BOOL)_isCarPlayNightModeSupported;
-(BOOL)_isCarPlayNightModeEnabled;
-(id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1 ;
-(void)_setDefaultTraitCollection:(id)arg1 ;
-(void)_setDefaultTraitCollection:(id)arg1 notify:(BOOL)arg2 ;
-(void)_willTransitionToTraitCollection:(id)arg1 ;
-(void)_notifyTraitsChangedAndPropagateToAllWindows;
-(id)_capabilities;
-(BOOL)_isForceTouchCapable;
-(double)_displayCornerRadius;
-(double)nativeScale;
-(BOOL)_isUserInterfaceLimited:(unsigned long long)arg1 ;
-(UISoftwareDimmingWindow *)_softwareDimmingWindow;
-(float)_lastNotifiedBacklightLevel;
-(void)_setLastNotifiedBacklightLevel:(float)arg1 ;
-(void)_postBrightnessDidChangeNotificationIfAppropriate;
-(BOOL)_supportsBrightness;
-(float)rawBrightnessForBacklightLevel:(float)arg1 ;
-(id)_lazySoftwareDimmingWindow;
-(CGRect)_nativeDisplayBounds;
-(double)_nativeScaleWithLevel:(unsigned long long)arg1 ;
-(id)_focusSystemManager;
-(BOOL)_supportsDragging;
-(void)setDisplayConfiguration:(FBSDisplayConfiguration *)arg1 ;
-(CGRect)_unjailedReferenceBounds;
-(CGRect)_unjailedReferenceBoundsInPixels;
-(CGRect)_unjailedReferenceBoundsForInterfaceOrientation:(long long)arg1 ;
-(id)_boundingPathUtilities;
-(double)_touchRadiusScaleFactor;
-(long long)_imageOrientation;
-(long long)maximumFramesPerSecond;
-(UIScreen *)mirroredScreen;
-(int)bitsPerComponent;
-(void)setBitsPerComponent:(int)arg1 ;
-(void)setCurrentMode:(UIScreenMode *)arg1 ;
-(int)screenType;
-(BOOL)_supportsCarPlayHumanPresence;
-(BOOL)_isCarPlayHumanPresenceInRange;
-(BOOL)_expectsSecureRendering;
-(void)_prepareForWindow;
-(void)_setScale:(double)arg1 ;
-(BOOL)_isValidInterfaceOrientation:(long long)arg1 ;
-(unsigned long long)_artworkSubtype;
-(id)_launchImageTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(CGRect)arg2 ;
-(void)_setOverrideTraitCollection:(id)arg1 ;
-(void)_setCapability:(id)arg1 forKey:(id)arg2 ;
-(void)_setExternalDeviceShouldInputText:(BOOL)arg1 ;
-(id)fbsDisplay;
-(BOOL)_isWorkspaceCapable;
-(long long)_workspaceCapableScreenType;
-(BOOL)_isSoftKeyboardLimited;
-(BOOL)_isRightHandDrive;
-(id)_display;
-(CGRect)_mainSceneFrame;
-(CGPoint)_mainSceneOrigin;
-(void)setBrightness:(double)arg1 ;
-(double)brightness;
-(id)_snapshotExcludingWindows:(id)arg1 withRect:(CGRect)arg2 ;
-(CGRect)nativeBounds;
-(double)_nativeScale;
-(void)_setPerformingSystemSnapshot:(BOOL)arg1 ;
-(BOOL)wantsSoftwareDimming;
-(void)setWantsSoftwareDimming:(BOOL)arg1 ;
-(void)_setUIIBAlwaysProvidePeripheryInsets:(BOOL)arg1 ;
-(void)_setBoundingPathUtilities:(id)arg1 ;
-(void)_setMainScreen:(BOOL)arg1 ;
-(UIWindow*<UIFocusEnvironment>)_focusedWindow;
-(void)_setFocusedWindow:(id)arg1 ;
@end

