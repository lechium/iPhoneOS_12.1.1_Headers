/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUNavigationController.h>

@interface SKUINavigationController : SUNavigationController
-(BOOL)_topViewControllerPrefersNavigationBarBackgroundViewHidden;
-(void)_scheduleConfigurationOfNavigationBar;
-(void)_configureNavigationBarForViewController:(id)arg1 shouldIgnoreTransitionCoordinator:(BOOL)arg2 ;
-(id)_accessibilityButtonBackgroundDefaultTintColor;
-(void)_configureNavigationBar:(id)arg1 withTintColor:(id)arg2 tintAdjustmentMode:(long long)arg3 titleTextTintColor:(id)arg4 shouldTintTitleText:(BOOL)arg5 accessibilityButtonBackgroundTintColor:(id)arg6 ;
-(void)_setNavigationPalette:(id)arg1 hidesPaletteShadow:(BOOL)arg2 ;
-(void)_viewControllerNeedsNavigationBarAppearanceUpdate:(id)arg1 ;
-(id)description;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(void)attachPalette:(id)arg1 isPinned:(BOOL)arg2 ;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
@end

