/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIFocusSystem, _UIFocusInputDeviceInfo, UIFocusAnimationCoordinator;


@protocol _UIFocusUpdateRequesting <NSObject>
@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem; 
@property (nonatomic,readonly) BOOL shouldPlayFocusSound; 
@property (nonatomic,readonly) BOOL requiresNextFocusedItem; 
@property (nonatomic,readonly) BOOL requiresEnvironmentValidation; 
@property (nonatomic,readonly) BOOL allowsFocusingCurrentItem; 
@property (nonatomic,readonly) BOOL allowsDeferral; 
@property (nonatomic,readonly) BOOL allowsFocusRestoration; 
@property (nonatomic,readonly) BOOL shouldPerformHapticFeedback; 
@property (nonatomic,readonly) _UIFocusInputDeviceInfo * inputDeviceInfo; 
@property (nonatomic,readonly) UIFocusAnimationCoordinator * animationCoordinator; 
@required
-(UIFocusAnimationCoordinator *)animationCoordinator;
-(BOOL)allowsFocusRestoration;
-(UIFocusSystem *)focusSystem;
-(BOOL)allowsDeferral;
-(BOOL)shouldPlayFocusSound;
-(BOOL)shouldPerformHapticFeedback;
-(BOOL)requiresNextFocusedItem;
-(_UIFocusInputDeviceInfo *)inputDeviceInfo;
-(BOOL)allowsFocusingCurrentItem;
-(BOOL)requiresEnvironmentValidation;

@end
