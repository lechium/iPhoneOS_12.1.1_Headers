/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <FrontBoardServices/FBSMutableSceneSettings.h>
#import <UIKit/UIApplicationSceneSettings.h>

@class NSNumber, BSCornerRadiusConfiguration, NSString;

@interface UIMutableApplicationSceneSettings : FBSMutableSceneSettings <UIApplicationSceneSettings>

@property (assign,nonatomic) BOOL underLock; 
@property (assign,nonatomic) int statusBarStyleOverridesToSuppress; 
@property (assign,nonatomic) unsigned long long deactivationReasons; 
@property (assign,nonatomic) long long userInterfaceStyle; 
@property (nonatomic,retain) NSNumber * forcedStatusBarStyle; 
@property (assign,nonatomic) BOOL forcedStatusBarForegroundTransparent; 
@property (assign,nonatomic) BOOL deviceOrientationEventsEnabled; 
@property (assign,nonatomic) BOOL canShowAlerts; 
@property (assign,nonatomic) BOOL idleModeEnabled; 
@property (assign,nonatomic) BOOL statusBarDisabled; 
@property (assign,nonatomic) UIEdgeInsets peripheryInsets; 
@property (assign,nonatomic) long long statusBarParts; 
@property (assign,nonatomic) CGRect statusBarAvoidanceFrame; 
@property (assign,nonatomic) double systemMinimumMargin; 
@property (assign,nonatomic) UIEdgeInsets safeAreaInsetsPortrait; 
@property (assign,nonatomic) double homeAffordanceOverlayAllowance; 
@property (assign,nonatomic) UIEdgeInsets safeAreaInsetsLandscapeLeft; 
@property (assign,nonatomic) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; 
@property (assign,nonatomic) UIEdgeInsets safeAreaInsetsLandscapeRight; 
@property (assign,nonatomic) long long deviceOrientation; 
@property (assign,nonatomic) unsigned long long artworkSubtype; 
@property (nonatomic,retain) BSCornerRadiusConfiguration * cornerRadiusConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEffectivelyBackgrounded;
-(BOOL)fb_isUnderLock;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)canShowAlerts;
-(long long)userInterfaceStyle;
-(UIEdgeInsets)safeAreaInsetsPortrait;
-(double)homeAffordanceOverlayAllowance;
-(unsigned long long)deactivationReasons;
-(long long)deviceOrientation;
-(BOOL)underLock;
-(long long)statusBarParts;
-(CGRect)statusBarAvoidanceFrame;
-(BOOL)forcedStatusBarForegroundTransparent;
-(BOOL)isUISubclass;
-(UIEdgeInsets)safeAreaInsetsLandscapeLeft;
-(UIEdgeInsets)safeAreaInsetsPortraitUpsideDown;
-(UIEdgeInsets)safeAreaInsetsLandscapeRight;
-(UIEdgeInsets)peripheryInsets;
-(double)systemMinimumMargin;
-(Class)canvasClass;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)deviceOrientationEventsEnabled;
-(void)setDeviceOrientationEventsEnabled:(BOOL)arg1 ;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(int)statusBarStyleOverridesToSuppress;
-(NSNumber *)forcedStatusBarStyle;
-(BOOL)idleModeEnabled;
-(BOOL)statusBarDisabled;
-(unsigned long long)artworkSubtype;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
-(void)setUnderLock:(BOOL)arg1 ;
-(void)setStatusBarStyleOverridesToSuppress:(int)arg1 ;
-(void)setDeactivationReasons:(unsigned long long)arg1 ;
-(void)setForcedStatusBarStyle:(NSNumber *)arg1 ;
-(void)setForcedStatusBarForegroundTransparent:(BOOL)arg1 ;
-(void)setPeripheryInsets:(UIEdgeInsets)arg1 ;
-(void)setStatusBarParts:(long long)arg1 ;
-(void)setStatusBarAvoidanceFrame:(CGRect)arg1 ;
-(void)setSystemMinimumMargin:(double)arg1 ;
-(void)setSafeAreaInsetsPortrait:(UIEdgeInsets)arg1 ;
-(void)setHomeAffordanceOverlayAllowance:(double)arg1 ;
-(void)setSafeAreaInsetsLandscapeLeft:(UIEdgeInsets)arg1 ;
-(void)setSafeAreaInsetsPortraitUpsideDown:(UIEdgeInsets)arg1 ;
-(void)setSafeAreaInsetsLandscapeRight:(UIEdgeInsets)arg1 ;
-(void)setCornerRadiusConfiguration:(BSCornerRadiusConfiguration *)arg1 ;
-(void)setCanShowAlerts:(BOOL)arg1 ;
-(void)setIdleModeEnabled:(BOOL)arg1 ;
-(void)setStatusBarDisabled:(BOOL)arg1 ;
-(void)setDeviceOrientation:(long long)arg1 ;
-(void)setArtworkSubtype:(unsigned long long)arg1 ;
@end

