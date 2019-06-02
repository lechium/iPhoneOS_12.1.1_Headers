/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIFocusUpdateRequesting.h>

@class UIFocusSystem, _UIFocusInputDeviceInfo, UIWindow, _UIFocusItemInfo, _UIFocusMovementInfo, NSString, UIFocusAnimationCoordinator;

@interface _UIFocusMovementRequest : NSObject <_UIFocusUpdateRequesting> {

	BOOL _shouldPerformHapticFeedback;
	UIFocusSystem* _focusSystem;
	_UIFocusInputDeviceInfo* _inputDeviceInfo;
	UIWindow* _window;
	_UIFocusItemInfo* _focusedItemInfo;
	_UIFocusMovementInfo* _movementInfo;

}

@property (nonatomic,__weak,readonly) UIWindow * window;                                        //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) _UIFocusItemInfo * focusedItemInfo;                                //@synthesize focusedItemInfo=_focusedItemInfo - In the implementation block
@property (nonatomic,retain) _UIFocusMovementInfo * movementInfo;                               //@synthesize movementInfo=_movementInfo - In the implementation block
@property (nonatomic,retain) _UIFocusInputDeviceInfo * inputDeviceInfo;                         //@synthesize inputDeviceInfo=_inputDeviceInfo - In the implementation block
@property (nonatomic,readonly) _UIFocusMovementRequest * fallbackRequest; 
@property (assign,nonatomic) BOOL shouldPerformHapticFeedback;                                  //@synthesize shouldPerformHapticFeedback=_shouldPerformHapticFeedback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem;                              //@synthesize focusSystem=_focusSystem - In the implementation block
@property (nonatomic,readonly) BOOL shouldPlayFocusSound; 
@property (nonatomic,readonly) BOOL requiresNextFocusedItem; 
@property (nonatomic,readonly) BOOL requiresEnvironmentValidation; 
@property (nonatomic,readonly) BOOL allowsFocusingCurrentItem; 
@property (nonatomic,readonly) BOOL allowsDeferral; 
@property (nonatomic,readonly) BOOL allowsFocusRestoration; 
@property (nonatomic,readonly) UIFocusAnimationCoordinator * animationCoordinator; 
-(id)init;
-(UIWindow *)window;
-(UIFocusAnimationCoordinator *)animationCoordinator;
-(id)initWithFocusSystem:(id)arg1 window:(id)arg2 ;
-(void)setMovementInfo:(_UIFocusMovementInfo *)arg1 ;
-(BOOL)allowsFocusRestoration;
-(UIFocusSystem *)focusSystem;
-(_UIFocusItemInfo *)focusedItemInfo;
-(void)setInputDeviceInfo:(_UIFocusInputDeviceInfo *)arg1 ;
-(void)setShouldPerformHapticFeedback:(BOOL)arg1 ;
-(_UIFocusMovementInfo *)movementInfo;
-(void)setFocusedItemInfo:(_UIFocusItemInfo *)arg1 ;
-(BOOL)allowsDeferral;
-(BOOL)shouldPlayFocusSound;
-(BOOL)shouldPerformHapticFeedback;
-(BOOL)requiresNextFocusedItem;
-(_UIFocusInputDeviceInfo *)inputDeviceInfo;
-(_UIFocusMovementRequest *)fallbackRequest;
-(BOOL)allowsFocusingCurrentItem;
-(BOOL)requiresEnvironmentValidation;
-(id)_requestByRedirectingRequestToFocusSystem:(id)arg1 ;
@end
