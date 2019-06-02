/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSObserver.h>

@protocol _UIForceLevelClassifierDelegate;
@class NSObservationSource, NSMutableDictionary, NSArray, NSString;

@interface _UIForceLevelClassifier : NSObject <NSObserver> {

	NSObservationSource* _progressTouchForceObservable;
	NSMutableDictionary* _cachedProgressObservables;
	NSArray* _delegateObservations;
	BOOL _respectsSystemGestureTouchFiltering;
	long long _currentForceLevel;
	id<_UIForceLevelClassifierDelegate> _delegate;
	double _currentTouchForceMultiplier;

}

@property (assign,nonatomic) double currentTouchForceMultiplier;                               //@synthesize currentTouchForceMultiplier=_currentTouchForceMultiplier - In the implementation block
@property (assign,nonatomic) BOOL respectsSystemGestureTouchFiltering;                         //@synthesize respectsSystemGestureTouchFiltering=_respectsSystemGestureTouchFiltering - In the implementation block
@property (assign,nonatomic,__weak) id<_UIForceLevelClassifierDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long currentForceLevel;                                    //@synthesize currentForceLevel=_currentForceLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<_UIForceLevelClassifierDelegate>)arg1 ;
-(id<_UIForceLevelClassifierDelegate>)delegate;
-(void)reset;
-(void)receiveObservedValue:(id)arg1 ;
-(long long)currentForceLevel;
-(void)setCurrentTouchForceMultiplier:(double)arg1 ;
-(void)_accessibilityForceSensitivityChanged:(id)arg1 ;
-(void)touchForceMultiplierDidChange;
-(BOOL)respectsSystemGestureTouchFiltering;
-(void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(CGPoint)arg3 ;
-(BOOL)wantsUnclampedForceValues;
-(id)observableForProgressToForceLevel:(long long)arg1 minimumRequiredForceLevel:(long long)arg2 ;
-(id)observableForProgressToForceLevel:(long long)arg1 ;
-(void)_notifyDelegateOfProgress:(double)arg1 toForceLevel:(long long)arg2 ;
-(void)setCurrentForceLevel:(long long)arg1 ;
-(double)currentTouchForceMultiplier;
-(void)setRespectsSystemGestureTouchFiltering:(BOOL)arg1 ;
@end

