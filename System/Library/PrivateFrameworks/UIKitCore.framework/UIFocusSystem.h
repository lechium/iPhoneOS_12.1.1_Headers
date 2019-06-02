/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusEnvironmentInternal.h>
#import <UIKitCore/_UIFocusEnvironmentPrivate.h>

@protocol UIFocusItem, _UIFocusSystemDelegate, _UIFocusHapticFeedbackGenerator;
@class NSArray, _UIFocusUpdateRequest, _UIFocusAnimationCoordinatorManager, _UIFocusSoundGenerator, UIView, UIFocusAnimationCoordinator, UIResponder, NSString;

@interface UIFocusSystem : NSObject <_UIFocusEnvironmentInternal, _UIFocusEnvironmentPrivate> {

	_UIFocusUpdateRequest* _pendingFocusUpdateRequest;
	struct {
		unsigned shouldIgnoreFocusUpdateIfNeeded : 1;
		unsigned isPendingFocusRestoration : 1;
		unsigned delegateRespondsToPreferredFocusEnvironments : 1;
		unsigned delegateRespondsToPrefersDeferralForFocusUpdateInContext : 1;
		unsigned delegateRespondsToShouldRestoreFocusInContext : 1;
		unsigned delegateRespondsToDidFinishUpdatingFocusInContext : 1;
		unsigned delegateRespondsToFocusMapContainer : 1;
		unsigned delegateRespondsToFocusItemContainer : 1;
	}  _flags;
	BOOL _enabled;
	id<UIFocusItem> _focusedItem;
	_UIFocusAnimationCoordinatorManager* _focusAnimationCoordinatorManager;
	id<_UIFocusSystemDelegate> _delegate;
	id<UIFocusItem> _previousFocusedItem;
	_UIFocusSoundGenerator* _focusSoundGenerator;
	id<_UIFocusHapticFeedbackGenerator> _focusHapticFeedbackGenerator;

}

@property (setter=_setFocusAnimationCoordinatorManager:,getter=_focusAnimationCoordinatorManager,nonatomic,retain) _UIFocusAnimationCoordinatorManager * focusAnimationCoordinatorManager;              //@synthesize focusAnimationCoordinatorManager=_focusAnimationCoordinatorManager - In the implementation block
@property (assign,setter=_setDelegate:,getter=_delegate,nonatomic,__weak) id<_UIFocusSystemDelegate> delegate;                                                                                          //@synthesize delegate=_delegate - In the implementation block
@property (getter=_focusedView,nonatomic,__weak,readonly) UIView * focusedView; 
@property (getter=_currentFocusAnimationCoordinator,nonatomic,readonly) UIFocusAnimationCoordinator * currentFocusAnimationCoordinator; 
@property (getter=_previousFocusedItem,nonatomic,__weak,readonly) id<UIFocusItem> previousFocusedItem;                                                                                                  //@synthesize previousFocusedItem=_previousFocusedItem - In the implementation block
@property (getter=_hostFocusSystem,nonatomic,__weak,readonly) UIFocusSystem * hostFocusSystem; 
@property (getter=_preferredFirstResponderFocusSystem,nonatomic,__weak,readonly) UIFocusSystem * preferredFirstResponderFocusSystem; 
@property (getter=_preferredFirstResponder,nonatomic,__weak,readonly) UIResponder * preferredFirstResponder; 
@property (setter=_setFocusSoundGenerator:,getter=_focusSoundGenerator,nonatomic,retain) _UIFocusSoundGenerator * focusSoundGenerator;                                                                  //@synthesize focusSoundGenerator=_focusSoundGenerator - In the implementation block
@property (setter=_setFocusHapticFeedbackGenerator:,getter=_focusHapticFeedbackGenerator,nonatomic,retain) id<_UIFocusHapticFeedbackGenerator> focusHapticFeedbackGenerator;                            //@synthesize focusHapticFeedbackGenerator=_focusHapticFeedbackGenerator - In the implementation block
@property (assign,setter=_setEnabled:,getter=_isEnabled,nonatomic) BOOL enabled;                                                                                                                        //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,__weak,readonly) id<UIFocusItem> focusedItem;                                                                                                                                      //@synthesize focusedItem=_focusedItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (getter=_isEligibleForFocusInteraction,nonatomic,readonly) BOOL eligibleForFocusInteraction; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) long long preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
@property (getter=_focusMapContainer,nonatomic,__weak,readonly) id<_UIFocusRegionContainer> focusMapContainer; 
+(id)focusSystemForEnvironment:(id)arg1 ;
+(id)_allFocusSystems;
+(BOOL)environment:(id)arg1 containsEnvironment:(id)arg2 ;
+(void)registerURL:(id)arg1 forSoundIdentifier:(id)arg2 ;
-(id)init;
-(id)_delegate;
-(void)setNeedsFocusUpdate;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)updateFocusIfNeeded;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(NSArray *)preferredFocusEnvironments;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(id<UIFocusItemContainer>)focusItemContainer;
-(void)_setDelegate:(id)arg1 ;
-(BOOL)_isEnabled;
-(void)_setEnabled:(BOOL)arg1 ;
-(BOOL)_isEligibleForFocusInteraction;
-(void)_requestFocusUpdate:(id)arg1 ;
-(id)_focusedView;
-(void)requestFocusUpdateToEnvironment:(id)arg1 ;
-(id)_focusMapContainer;
-(id<UIFocusItem>)focusedItem;
-(void)_setEnabled:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)_uiktest_updateFocusToItem:(id)arg1 ;
-(id)_hostFocusSystem;
-(BOOL)_debug_isEnvironmentEligibleForFocusUpdate:(id)arg1 debugReport:(id)arg2 ;
-(id)_preferredFirstResponderFocusSystem;
-(id)_simulatedProgrammaticFocusUpdateToEnvironment:(id)arg1 ;
-(BOOL)_updateFocusImmediatelyWithContext:(id)arg1 ;
-(id)_previousFocusedItem;
-(id)_initWithFocusEnabled:(BOOL)arg1 ;
-(id)_contextForUpdateToEnvironment:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)_shouldRestoreFocusInContext:(id)arg1 ;
-(BOOL)_updateFocusWithContext:(id)arg1 report:(id)arg2 ;
-(void)_setNeedsFocusRestoration;
-(BOOL)_requiresFocusedItemToHaveContainingView;
-(id)_focusAnimationCoordinatorManager;
-(id)_validatedPendingFocusUpdateRequest;
-(BOOL)_isEnvironmentEligibleForFocusUpdate:(id)arg1 shouldResetFocus:(BOOL*)arg2 debugReport:(id)arg3 ;
-(BOOL)_prefersDeferralForFocusUpdateInContext:(id)arg1 ;
-(void)_sendWillUpdateFocusNotificationsInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_sendDidUpdateFocusNotificationsInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)_focusSoundGenerator;
-(id)_focusHapticFeedbackGenerator;
-(void)_didFinishUpdatingFocusInContext:(id)arg1 ;
-(void)_sendNotificationsForFocusUpdateInContext:(id)arg1 withAnimationCoordinator:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)_postsFocusUpdateNotifications;
-(id)_preferredFirstResponderFocusSystemForFocusedItem:(id)arg1 ;
-(id)_preferredFirstResponder;
-(id)_init;
-(id)_currentFocusAnimationCoordinator;
-(void)_focusEnvironmentWillDisappear:(id)arg1 ;
-(void)_performWithoutFocusUpdates:(/*^block*/id)arg1 ;
-(void)_cancelPendingFocusRestoration;
-(void)_uiktest_setPreviousFocusedItem:(id)arg1 ;
-(void)_setFocusAnimationCoordinatorManager:(id)arg1 ;
-(void)_setFocusSoundGenerator:(id)arg1 ;
-(void)_setFocusHapticFeedbackGenerator:(id)arg1 ;
@end

