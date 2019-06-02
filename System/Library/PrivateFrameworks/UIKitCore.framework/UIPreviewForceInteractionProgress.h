/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIInteractionProgress.h>
#import <UIKitCore/_UIForceLevelClassifierDelegate.h>

@class _UITouchForceObservable, _UIForceLevelClassifier, NSObservation, NSString;

@interface UIPreviewForceInteractionProgress : UIInteractionProgress <_UIForceLevelClassifierDelegate> {

	_UITouchForceObservable* _observable;
	long long _targetState;
	long long _minimumState;
	BOOL _updateMinimumStateWithTargetState;
	_UIForceLevelClassifier* _classifier;
	NSObservation* _classifierObservation;
	BOOL _enteredMinimumState;
	BOOL _didEnd;
	NSObservation* _progressObservation;
	NSObservation* _targetStateUpdateObservation;
	NSObservation* _gestureBeganObservation;
	BOOL _completesAtTargetState;

}

@property (assign,setter=_setTargetState:,nonatomic) long long _targetState;                                                                                       //@synthesize targetState=_targetState - In the implementation block
@property (assign,setter=_setClassifierShouldRespectSystemGestureTouchFiltering:,nonatomic) BOOL _classifierShouldRespectSystemGestureTouchFiltering; 
@property (assign,nonatomic) BOOL completesAtTargetState;                                                                                                          //@synthesize completesAtTargetState=_completesAtTargetState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)enteredMinimumState;
-(BOOL)didEnd;
-(id)initWithView:(id)arg1 targetState:(long long)arg2 ;
-(void)_setGestureBeginObservable:(id)arg1 ;
-(void)_forceLevelClassifier:(id)arg1 currentForceLevelDidChange:(long long)arg2 ;
-(void)_forceLevelClassifierDidReset:(id)arg1 ;
-(id)initWithGestureRecognizer:(id)arg1 ;
-(void)setCompletesAtTargetState:(BOOL)arg1 ;
-(BOOL)completesAtTargetState;
-(id)initWithView:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3 ;
-(id)_initWithObservable:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3 ;
-(id)initWithGestureRecognizer:(id)arg1 minimumRequiredState:(long long)arg2 ;
-(void)_setTargetState:(long long)arg1 ;
-(void)_gestureRecognizerBegan:(BOOL)arg1 ;
-(id)_initWithObservable:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3 useLinearClassifier:(BOOL)arg4 ;
-(void)_installProgressObserver;
-(id)_initWithView:(id)arg1 targetState:(long long)arg2 minimumRequiredState:(long long)arg3 useLinearClassifier:(BOOL)arg4 ;
-(void)_setClassifierShouldRespectSystemGestureTouchFiltering:(BOOL)arg1 ;
-(BOOL)_classifierShouldRespectSystemGestureTouchFiltering;
-(long long)_targetState;
@end

