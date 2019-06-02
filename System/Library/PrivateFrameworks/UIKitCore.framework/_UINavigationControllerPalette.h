/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIBarBackground, UINavigationController, UIViewController, NSArray, UIView;

@interface _UINavigationControllerPalette : UIView {

	_UIBarBackground* _backgroundView;
	double _backgroundUnderlapHeight;
	struct {
		unsigned isAttached : 1;
		unsigned attachmentIsChanging : 1;
		unsigned restartPaletteTransitionIfNecessary : 1;
		unsigned pinned : 1;
		unsigned pinningBarShadowIsHidden : 1;
		unsigned paletteShadowIsHidden : 1;
		unsigned shouldHideWhenScrolling : 1;
		unsigned pinningBarShadowWasHidden : 1;
	}  _paletteFlags;
	BOOL __paletteOverridesPinningBar;
	BOOL _visibleWhenPinningBarIsHidden;
	BOOL __palettePinningBarHidden;
	UINavigationController* _navController;
	unsigned long long _boundaryEdge;
	UIViewController* __unpinnedController;
	id __pinningBar;
	NSArray* __constraints;
	NSArray* __backgroundConstraints;
	double __heightWhenUnscrolled;
	long long __visibilityState;
	CGSize __size;
	UIEdgeInsets _preferredContentInsets;

}

@property (assign,nonatomic) UIViewController * _unpinnedController;                                                                           //@synthesize _unpinnedController=__unpinnedController - In the implementation block
@property (assign,setter=_setPinningBar:,nonatomic) id _pinningBar;                                                                            //@synthesize _pinningBar=__pinningBar - In the implementation block
@property (getter=_attachmentIsChanging,nonatomic,readonly) BOOL _attachmentIsChanging; 
@property (assign,setter=_setRestartPaletteTransitionIfNecessary:,nonatomic) BOOL _restartPaletteTransitionIfNecessary; 
@property (setter=_setConstraints:,nonatomic,retain) NSArray * _constraints;                                                                   //@synthesize _constraints=__constraints - In the implementation block
@property (assign,setter=_setSize:,nonatomic) CGSize _size;                                                                                    //@synthesize _size=__size - In the implementation block
@property (setter=_setBackgroundConstraints:,nonatomic,retain) NSArray * _backgroundConstraints;                                               //@synthesize _backgroundConstraints=__backgroundConstraints - In the implementation block
@property (assign,setter=_setPalettePinningBarHidden:,getter=_isPalettePinningBarHidden,nonatomic) BOOL _palettePinningBarHidden;              //@synthesize _palettePinningBarHidden=__palettePinningBarHidden - In the implementation block
@property (assign,setter=_setShouldHideWhenScrolling:,nonatomic) BOOL _shouldHideWhenScrolling; 
@property (assign,setter=_setHeightWhenUnscrolled:,nonatomic) double _heightWhenUnscrolled;                                                    //@synthesize _heightWhenUnscrolled=__heightWhenUnscrolled - In the implementation block
@property (assign,setter=_setVisibilityState:,nonatomic) long long _visibilityState;                                                           //@synthesize _visibilityState=__visibilityState - In the implementation block
@property (setter=_setBackgroundView:,nonatomic,retain) UIView * _backgroundView; 
@property (assign,setter=_setPaletteOverridesPinningBar:,nonatomic) BOOL _paletteOverridesPinningBar;                                          //@synthesize _paletteOverridesPinningBar=__paletteOverridesPinningBar - In the implementation block
@property (nonatomic,readonly) UINavigationController * navController;                                                                         //@synthesize navController=_navController - In the implementation block
@property (nonatomic,readonly) unsigned long long boundaryEdge;                                                                                //@synthesize boundaryEdge=_boundaryEdge - In the implementation block
@property (assign,getter=isPinned,nonatomic) BOOL pinned; 
@property (assign,nonatomic) BOOL pinningBarShadowWasHidden; 
@property (assign,nonatomic) BOOL pinningBarShadowIsHidden; 
@property (assign,nonatomic) BOOL paletteShadowIsHidden; 
@property (assign,getter=isVisibleWhenPinningBarIsHidden,nonatomic) BOOL visibleWhenPinningBarIsHidden;                                        //@synthesize visibleWhenPinningBarIsHidden=_visibleWhenPinningBarIsHidden - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredContentInsets;                                                                              //@synthesize preferredContentInsets=_preferredContentInsets - In the implementation block
-(void)__ck_setPaletteFrame:(CGRect)arg1 ;
-(void)SKUI_beginHidingPaletteShadow;
-(void)SKUI_endHidingPaletteShadow;
-(void)resetBackgroundConstraints;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UIView *)_backgroundView;
-(NSArray *)_constraints;
-(void)didMoveToSuperview;
-(CGSize)_size;
-(BOOL)_paletteOverridesPinningBar;
-(BOOL)_supportsSpecialSearchBarTransitions;
-(BOOL)paletteShadowIsHidden;
-(void)_propagateBackgroundToContents;
-(void)_setBackgroundView:(id)arg1 ;
-(void)_setVisualAltitude:(double)arg1 ;
-(void)_setVisualAltitudeBias:(CGSize)arg1 ;
-(void)_updateBackgroundView;
-(id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2 ;
-(void)_updateLayoutForCurrentConfiguration;
-(BOOL)_shouldHideWhenScrolling;
-(UINavigationController *)navController;
-(BOOL)_shouldUpdateBackground;
-(BOOL)pinningBarShadowIsHidden;
-(id)_attachedPinningTopBar;
-(BOOL)isAttached;
-(unsigned long long)boundaryEdge;
-(void)_setBackgroundConstraints:(id)arg1 ;
-(void)_updateBackgroundConstraintsIfNecessary;
-(void)_setConstraints:(id)arg1 ;
-(void)_setTopConstraintConstant:(double)arg1 ;
-(void)_setSize:(CGSize)arg1 ;
-(void)_disableConstraints;
-(void)_enableConstraints;
-(void)_resetConstraintConstants:(double)arg1 ;
-(void)_resetHeightConstraintConstant;
-(void)_resetVisibilityStateIfNecessary;
-(void)_configureConstraintsForBackground:(id)arg1 ;
-(void)_setupBackgroundViewIfNecessary;
-(void)_configurePaletteConstraintsForBoundary;
-(void)_setAttachmentIsChanging:(BOOL)arg1 ;
-(BOOL)_attachmentIsChanging;
-(void)_setRestartPaletteTransitionIfNecessary:(BOOL)arg1 ;
-(BOOL)_restartPaletteTransitionIfNecessary;
-(void)setPinningBarShadowIsHidden:(BOOL)arg1 ;
-(BOOL)pinningBarShadowWasHidden;
-(void)setPinningBarShadowWasHidden:(BOOL)arg1 ;
-(void)setPaletteShadowIsHidden:(BOOL)arg1 ;
-(void)_setAttached:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(BOOL)isPinned;
-(void)setPinned:(BOOL)arg1 ;
-(BOOL)paletteIsHidden;
-(void)_setPalettePinningBarHidden:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 isAnimating:(BOOL)arg2 ;
-(void)_setLeftConstraintConstant:(double)arg1 ;
-(void)_setShouldHideWhenScrolling:(BOOL)arg1 ;
-(void)_setPaletteOverridesPinningBar:(BOOL)arg1 ;
-(BOOL)isVisibleWhenPinningBarIsHidden;
-(void)setVisibleWhenPinningBarIsHidden:(BOOL)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(void)setPreferredContentInsets:(UIEdgeInsets)arg1 ;
-(UIViewController *)_unpinnedController;
-(void)set_unpinnedController:(UIViewController *)arg1 ;
-(id)_pinningBar;
-(void)_setPinningBar:(id)arg1 ;
-(NSArray *)_backgroundConstraints;
-(BOOL)_isPalettePinningBarHidden;
-(double)_heightWhenUnscrolled;
-(void)_setHeightWhenUnscrolled:(double)arg1 ;
-(long long)_visibilityState;
-(void)_setVisibilityState:(long long)arg1 ;
@end
