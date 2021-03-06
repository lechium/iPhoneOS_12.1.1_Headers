//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "SBDashBoardWallpaperOverlayHosting.h"
#import "SBFLegibilitySettingsProviderDelegate.h"
#import "SBFWallpaperConfigurationManagerDelegate.h"
#import "SBFWallpaperViewInternalObserver.h"
#import "SBUIActiveOrientationObserver.h"
#import "SBWallpaperServerDelegate.h"
#import "UIWindowDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSHashTable, NSMutableSet, NSString, SBComposedWallpaperSpecification, SBFFileCache, SBFWallpaperConfigurationManager, SBFWallpaperView, SBWallpaperAggdLogger, SBWallpaperControllerCoordinator, SBWallpaperPreviewSnapshotCache, SBWallpaperStyleInfo, UIImage, UIView, UIView<SBDashBoardWallpaperOverlay>, UIWindow;

@interface SBWallpaperController : NSObject <SBFLegibilitySettingsProviderDelegate, SBFWallpaperViewInternalObserver, SBUIActiveOrientationObserver, _UISettingsKeyObserver, SBFWallpaperConfigurationManagerDelegate, BSDescriptionProviding, SBWallpaperServerDelegate, UIWindowDelegate, SBDashBoardWallpaperOverlayHosting>
{
    UIWindow *_wallpaperWindow;	// 8 = 0x8
    UIView *_wallpaperContainerView;	// 16 = 0x10
    UIView *_wallpaperOverlayContainerView;	// 24 = 0x18
    long long _orientation;	// 32 = 0x20
    SBFWallpaperView *_lockscreenWallpaperView;	// 40 = 0x28
    SBFWallpaperView *_homescreenWallpaperView;	// 48 = 0x30
    SBFWallpaperView *_sharedWallpaperView;	// 56 = 0x38
    NSHashTable *_lockscreenObservers;	// 64 = 0x40
    NSHashTable *_homescreenObservers;	// 72 = 0x48
    NSMutableSet *_suspendColorSamplingReasons;	// 80 = 0x50
    NSMutableSet *_suspendWallpaperAnimationReasons;	// 88 = 0x58
    NSMutableSet *_requireWallpaperReasons;	// 96 = 0x60
    NSMutableSet *_hideHomescreenWallpaperReasons;	// 104 = 0x68
    NSMutableSet *_hideLockscreenWallpaperReasons;	// 112 = 0x70
    long long _displayedVariant;	// 120 = 0x78
    double _lockscreenOnlyWallpaperAlpha;	// 128 = 0x80
    NSHashTable *_lockscreenBlurViews;	// 136 = 0x88
    NSHashTable *_homescreenBlurViews;	// 144 = 0x90
    long long _disallowRasterizationBlockCount;	// 152 = 0x98
    NSMutableSet *_disallowRasterizationReasonsHomeVariant;	// 160 = 0xa0
    NSMutableSet *_disallowRasterizationReasonsLockVariant;	// 168 = 0xa8
    UIImage *_homescreenLightForegroundBlurImage;	// 176 = 0xb0
    struct CGRect _homescreenLightForegroundBlurImageDisplayRect;	// 184 = 0xb8
    _Bool _creatingHomescreenLightForegroundBlurImage;	// 216 = 0xd8
    _Bool _isSuspendingMotionEffectsForBlur;	// 217 = 0xd9
    SBWallpaperPreviewSnapshotCache *_previewCache;	// 224 = 0xe0
    long long _activeOrientationSource;	// 232 = 0xe8
    _Bool _coalescingGeometryChanges;	// 240 = 0xf0
    long long _locationsWithCoalescedGeometryChanges;	// 248 = 0xf8
    SBWallpaperControllerCoordinator *_coordinator;	// 256 = 0x100
    NSMutableSet *_homescreenStyleChangeDelayReasons;	// 264 = 0x108
    SBFFileCache *_downloadedWallpaperCache;	// 272 = 0x110
    SBFWallpaperConfigurationManager *_wallpaperConfigurationManager;	// 280 = 0x118
    UIView<SBDashBoardWallpaperOverlay> *_wallpaperOverlay;	// 288 = 0x120
    double _homescreenWallpaperScale;	// 296 = 0x128
    double _lockscreenWallpaperScale;	// 304 = 0x130
    SBComposedWallpaperSpecification *_overriddenComposedWallpaperSpecification;	// 312 = 0x138
    SBWallpaperStyleInfo *_homescreenStyleInfo;	// 320 = 0x140
    SBWallpaperStyleInfo *_lockscreenStyleInfo;	// 328 = 0x148
    SBWallpaperAggdLogger *_wallpaperAggdLogger;	// 336 = 0x150
}

+ (id)sharedInstance;	// IMP=0x0000000100246cd8
@property(retain, nonatomic) SBWallpaperAggdLogger *wallpaperAggdLogger; // @synthesize wallpaperAggdLogger=_wallpaperAggdLogger;
@property(readonly, nonatomic) SBWallpaperStyleInfo *lockscreenStyleInfo; // @synthesize lockscreenStyleInfo=_lockscreenStyleInfo;
@property(readonly, nonatomic) SBWallpaperStyleInfo *homescreenStyleInfo; // @synthesize homescreenStyleInfo=_homescreenStyleInfo;
@property(retain, nonatomic) SBFWallpaperView *sharedWallpaperView; // @synthesize sharedWallpaperView=_sharedWallpaperView;
@property(retain, nonatomic) SBFWallpaperView *homescreenWallpaperView; // @synthesize homescreenWallpaperView=_homescreenWallpaperView;
@property(retain, nonatomic) SBFWallpaperView *lockscreenWallpaperView; // @synthesize lockscreenWallpaperView=_lockscreenWallpaperView;
@property(copy, nonatomic) SBComposedWallpaperSpecification *overriddenComposedWallpaperSpecification; // @synthesize overriddenComposedWallpaperSpecification=_overriddenComposedWallpaperSpecification;
@property(readonly, nonatomic) long long activeOrientationSource; // @synthesize activeOrientationSource=_activeOrientationSource;
@property(nonatomic) double lockscreenWallpaperScale; // @synthesize lockscreenWallpaperScale=_lockscreenWallpaperScale;
@property(nonatomic) double homescreenWallpaperScale; // @synthesize homescreenWallpaperScale=_homescreenWallpaperScale;
- (void).cxx_destruct;	// IMP=0x0000000100250e28
- (id)relinquishHostingOfWallpaperOverlay;	// IMP=0x0000000100250c54
- (void)startHostingWallpaperOverlay:(id)arg1;	// IMP=0x0000000100250ae0
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x0000000100250aa4
- (void)wallpaperServer:(id)arg1 fetchThumbnailDataForVariant:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100250900
- (void)wallpaperConfigurationManager:(id)arg1 didChangeWallpaperConfigurationForVariants:(long long)arg2;	// IMP=0x00000001002508dc
- (void)wallpaperViewDidChangeWantsRasterization:(id)arg1;	// IMP=0x0000000100250864
- (void)wallpaperView:(id)arg1 didChangeZoomFactor:(double)arg2;	// IMP=0x00000001002507c0
- (void)wallpaperViewDidInvalidateGeometry:(id)arg1;	// IMP=0x000000010025071c
- (void)wallpaperViewDidInvalidateBlurs:(id)arg1;	// IMP=0x0000000100250660
- (void)providerLegibilitySettingsChanged:(id)arg1;	// IMP=0x0000000100250564
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;	// IMP=0x000000010025023c
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;	// IMP=0x0000000100250238
- (void)_forceUpdateToSpringBoardInterfaceOrientationWithAnimationDuration:(double)arg1;	// IMP=0x0000000100250108
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x000000010024fb6c
- (void)orientationSource:(long long)arg1 didRotateFromInterfaceOrientation:(long long)arg2;	// IMP=0x000000010024fb04
- (void)orientationSource:(long long)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;	// IMP=0x000000010024f90c
- (void)orientationSource:(long long)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;	// IMP=0x000000010024f908
- (_Bool)_isAcceptingOrientationChangesFromSource:(long long)arg1;	// IMP=0x000000010024f898
- (void)setActiveOrientationSource:(long long)arg1 andUpdateToOrientation:(long long)arg2 usingCrossfadeToBlack:(_Bool)arg3;	// IMP=0x000000010024f4e8
- (void)_noteSignificantTimeChanged:(id)arg1;	// IMP=0x000000010024f424
- (void)_saveWallpaperAggdKeysForLocations:(long long)arg1 withConfiguration:(id)arg2;	// IMP=0x000000010024f2f4
- (id)succinctDescriptionBuilder;	// IMP=0x000000010024f278
- (id)succinctDescription;	// IMP=0x000000010024f224
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010024ee50
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000010024edfc
@property(readonly, copy) NSString *description;
- (void)_reloadWallpaperAndFlushCaches:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010024ea78
- (void)_updateRasterizationState;	// IMP=0x000000010024e950
- (void)_endDisallowRasterizationBlock;	// IMP=0x000000010024e840
- (void)_beginDisallowRasterizationBlock;	// IMP=0x000000010024e818
- (id)_getImageInRect:(struct CGRect)arg1 withZoomFactor:(double)arg2 forVariant:(long long)arg3 style:(inout long long *)arg4;	// IMP=0x000000010024e28c
- (id)_newFakeBlurViewForVariant:(long long)arg1 style:(long long)arg2 transformOptions:(unsigned long long)arg3;	// IMP=0x000000010024e0d8
- (void)_createHomescreenLightForegroundBlurImageIfNecessary;	// IMP=0x000000010024dbc0
- (void)_updateBlurGeneration;	// IMP=0x000000010024db00
- (id)_sourceForFakeBlurView:(id)arg1;	// IMP=0x000000010024dac4
- (void)_unregisterFakeBlurView:(id)arg1;	// IMP=0x000000010024da38
- (void)_registerFakeBlurView:(id)arg1;	// IMP=0x000000010024d9b0
- (void)_suspendOrResumeWallpaperAnimation;	// IMP=0x000000010024d920
- (void)_suspendOrResumeColorSampling;	// IMP=0x000000010024d890
- (id)_blurViewsForVariant:(long long)arg1;	// IMP=0x000000010024d86c
- (id)_observersForVariant:(long long)arg1;	// IMP=0x000000010024d848
- (id)_activeWallpaperView;	// IMP=0x000000010024d810
- (id)_wallpaperViewForVariant:(long long)arg1;	// IMP=0x000000010024d7b4
- (void)_updateBlurImagesForVariant:(long long)arg1;	// IMP=0x000000010024d61c
- (void)_reconfigureBlurViewsForVariant:(long long)arg1;	// IMP=0x000000010024d4cc
- (void)_handleWallpaperGeometryChangedForVariant:(long long)arg1;	// IMP=0x000000010024d31c
- (void)_handleWallpaperLegibilitySettingsChanged:(id)arg1 forVariant:(long long)arg2;	// IMP=0x000000010024d190
- (void)_handleWallpaperChangedForVariant:(long long)arg1;	// IMP=0x000000010024cec8
- (_Bool)_updateEffectViewForVariant:(long long)arg1 withFactory:(id)arg2;	// IMP=0x000000010024c73c
- (_Bool)_updateEffectViewForVariant:(long long)arg1 oldState:(CDStruct_059c2b36 *)arg2 newState:(CDStruct_059c2b36 *)arg3 oldEffectView:(id *)arg4 newEffectView:(id *)arg5;	// IMP=0x000000010024c160
- (void)_updateMotionEffectsForState:(CDStruct_059c2b36)arg1;	// IMP=0x000000010024c0fc
- (_Bool)_shouldSuspendMotionEffectsForState:(CDStruct_059c2b36)arg1;	// IMP=0x000000010024c008
- (void)_endSuspendingMotionEffectsForBlurIfNeeded;	// IMP=0x000000010024bfbc
- (void)_beginSuspendingMotionEffectsForBlurIfNeeded;	// IMP=0x000000010024bf6c
- (void)_updateScreenBlanked;	// IMP=0x000000010024bf04
- (void)_accessibilityReduceTransparencyChanged:(id)arg1;	// IMP=0x000000010024bec8
- (void)_motionEffectsChanged;	// IMP=0x000000010024be88
- (id)_newWallpaperEffectViewForVariant:(long long)arg1 transitionState:(CDStruct_059c2b36)arg2;	// IMP=0x000000010024bdb8
- (void)_clearWallpaperEffectView:(id)arg1;	// IMP=0x000000010024bda8
- (void)_clearWallpaperView:(id)arg1;	// IMP=0x000000010024bd14
- (id)_makeAndInsertWallpaperViewWithConfiguration:(id)arg1 forVariant:(long long)arg2 shared:(_Bool)arg3 options:(unsigned long long)arg4;	// IMP=0x000000010024bcb8
- (void)_updateSeparateWallpaperForVariants:(long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000010024b8e4
- (void)_updateSharedWallpaperWithOptions:(unsigned long long)arg1;	// IMP=0x000000010024b690
- (_Bool)_isWallpaperView:(id)arg1 displayingWallpaperWithConfiguration:(id)arg2 forVariant:(long long)arg3;	// IMP=0x000000010024b630
- (void)_updateWallpaperForLocations:(long long)arg1 options:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010024b4e0
- (long long)variantsThatDarkenWallpaperToEnsureLegibilityForWallpaperType:(long long)arg1;	// IMP=0x000000010024b4cc
- (_Bool)variantsShareWallpaper;	// IMP=0x000000010024b47c
@property(readonly, nonatomic) SBFWallpaperConfigurationManager *wallpaperConfigurationManager;
- (void)_checkForComposedWallpapersAtLaunch;	// IMP=0x000000010024b3bc
- (void)_background_setWallpaperForLocations:(long long)arg1 fromImage:(id)arg2 name:(id)arg3;	// IMP=0x000000010024b1f4
- (void)_rebuildComposedWallpapers;	// IMP=0x000000010024aefc
- (id)_homeScreenWallpaperSpecificationFromProfile;	// IMP=0x000000010024ae68
- (id)_lockScreenWallpaperSpecificationFromProfile;	// IMP=0x000000010024ae38
- (void)_updateWallpaperParallax;	// IMP=0x000000010024ac80
- (void)_batterySaverModeChanged:(id)arg1;	// IMP=0x000000010024aaf8
- (void)_updateWallpaperHidden;	// IMP=0x000000010024a820
- (_Bool)_isWallpaperHiddenForVariant:(long long)arg1;	// IMP=0x000000010024a7a0
- (void)_setWallpaperHidden:(_Bool)arg1 variant:(long long)arg2 reason:(id)arg3;	// IMP=0x000000010024a700
- (_Bool)_setDisallowRasterization:(_Bool)arg1 withReason:(id)arg2 reasons:(id)arg3;	// IMP=0x000000010024a664
- (_Bool)_isRasterizationDisallowedForCurrentVariant;	// IMP=0x000000010024a5ec
- (id)_window;	// IMP=0x000000010024a5dc
@property(readonly, nonatomic) SBFFileCache *downloadedWallpaperCache;
- (id)vendWallpaperViewForConfiguration:(id)arg1 forVariant:(long long)arg2 shared:(_Bool)arg3 options:(unsigned long long)arg4;	// IMP=0x0000000100249d38
- (unsigned long long)_bestStaticWallpaperViewInitializationOptionsForVariant:(long long)arg1 shared:(_Bool)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000100249cb0
- (void)setDisallowsRasterization:(_Bool)arg1 forVariant:(long long)arg2 withReason:(id)arg3;	// IMP=0x0000000100249c04
- (id)previewCache;	// IMP=0x0000000100249bf4
- (struct CGRect)homescreenLightForegroundBlurImageContentsRectForWallpaperRelativeRect:(struct CGRect)arg1;	// IMP=0x000000010024990c
- (id)homescreenLightForegroundBlurImage;	// IMP=0x00000001002498d8
- (double)contrastInRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3 forVariant:(long long)arg4;	// IMP=0x000000010024980c
- (double)contrastForVariant:(long long)arg1;	// IMP=0x00000001002497a4
- (double)contrastInRect:(struct CGRect)arg1 forVariant:(long long)arg2;	// IMP=0x000000010024970c
- (id)averageColorInRect:(struct CGRect)arg1 forVariant:(long long)arg2 withSmudgeRadius:(double)arg3;	// IMP=0x000000010024961c
- (id)averageColorInRect:(struct CGRect)arg1 forVariant:(long long)arg2;	// IMP=0x000000010024960c
- (id)averageColorForVariant:(long long)arg1;	// IMP=0x00000001002495b8
- (id)legibilitySettingsForVariant:(long long)arg1;	// IMP=0x00000001002494f8
@property(readonly, nonatomic) id <SBFIrisWallpaperView> irisWallpaperView;
- (void)resumeWallpaperAnimationForReason:(id)arg1;	// IMP=0x0000000100249410
- (void)suspendWallpaperAnimationForReason:(id)arg1;	// IMP=0x00000001002493d0
- (void)resumeColorSamplingForReason:(id)arg1;	// IMP=0x0000000100249390
- (void)suspendColorSamplingForReason:(id)arg1;	// IMP=0x0000000100249350
- (void)removeObserver:(id)arg1 forVariant:(long long)arg2;	// IMP=0x00000001002492e4
- (void)addObserver:(id)arg1 forVariant:(long long)arg2;	// IMP=0x0000000100249278
- (_Bool)shouldDelayHomescreenStyleUpdates;	// IMP=0x0000000100249248
- (void)endDelayingHomescreenStyleChangesForReason:(id)arg1 animationFactory:(id)arg2;	// IMP=0x00000001002490cc
- (void)beginDelayingHomescreenStyleChangesForReason:(id)arg1;	// IMP=0x0000000100248f84
- (void)endRequiringWithReason:(id)arg1;	// IMP=0x0000000100248e84
- (void)beginRequiringWithReason:(id)arg1;	// IMP=0x0000000100248e44
- (_Bool)removeWallpaperStyleForPriority:(long long)arg1 forVariant:(long long)arg2 withAnimationFactory:(id)arg3;	// IMP=0x0000000100248ce8
- (_Bool)setWallpaperStyleTransitionState:(CDStruct_059c2b36)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4;	// IMP=0x0000000100248988
- (_Bool)setWallpaperStyle:(long long)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4;	// IMP=0x000000010024894c
- (id)wallpaperStyleInfoForVariant:(long long)arg1;	// IMP=0x00000001002488fc
@property(readonly, nonatomic) CDStruct_059c2b36 currentHomescreenStyleTransitionState;
- (void)setLockscreenOnlyWallpaperAlpha:(double)arg1;	// IMP=0x00000001002486fc
- (void)setLockscreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2;	// IMP=0x0000000100248650
- (void)setHomescreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2;	// IMP=0x0000000100248590
@property(nonatomic) double windowLevel;
- (void)setLockscreenWallpaperContentsRect:(struct CGRect)arg1;	// IMP=0x0000000100248470
- (void)updateIrisWallpaperForLockedState;	// IMP=0x00000001002483ec
- (_Bool)updateIrisWallpaperForUnlockedState;	// IMP=0x0000000100248338
- (void)setVariant:(long long)arg1 withOutAnimationFactory:(id)arg2 inAnimationFactory:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100247798
@property(nonatomic) long long variant;
- (void)dealloc;	// IMP=0x0000000100247678
- (id)initWithOrientation:(long long)arg1 variant:(long long)arg2;	// IMP=0x0000000100246d60
- (_Bool)removeHomescreenStyleForBundleIdentifier:(id)arg1 withPriority:(long long)arg2 animationFactory:(id)arg3;	// IMP=0x0000000100251180
- (_Bool)setHomescreenStyleTransitionState:(CDStruct_059c2b36)arg1 forBundleIdentifier:(id)arg2 withPriority:(long long)arg3 animationFactory:(id)arg4;	// IMP=0x00000001002510ec
- (_Bool)setHomescreenStyle:(long long)arg1 forBundleIdentifier:(id)arg2 withPriority:(long long)arg3 animationFactory:(id)arg4;	// IMP=0x0000000100251070

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

