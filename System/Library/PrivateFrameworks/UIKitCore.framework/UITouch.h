/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIResponderForwardable.h>

@protocol _UITouchPhaseChangeDelegate;
@class UIWindow, UIView, NSMutableArray, NSArray, NSNumber, NSString, UIResponder;

@interface UITouch : NSObject <_UIResponderForwardable> {

	double _movementMagnitudeSquared;
	long long _phase;
	unsigned long long _tapCount;
	long long _edgeType;
	unsigned long long _edgeAim;
	unsigned _touchIdentifier;
	UIWindow* _window;
	UIView* _view;
	UIView* _warpedIntoView;
	NSMutableArray* _gestureRecognizers;
	NSMutableArray* _forwardingRecord;
	CGPoint _locationInWindow;
	CGPoint _previousLocationInWindow;
	CGPoint _preciseLocationInWindow;
	CGPoint _precisePreviousLocationInWindow;
	double _previousPressure;
	unsigned char _pathIndex;
	unsigned char _pathIdentity;
	double _pathMajorRadius;
	double _majorRadiusTolerance;
	double _pressure;
	double _maxObservedPressure;
	float _zGradient;
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
		unsigned _abandonForwardingRecord : 1;
		unsigned _deliversUpdatesInTouchesMovedIsValid : 1;
		unsigned _deliversUpdatesInTouchesMoved : 1;
		unsigned _isPredictedTouch : 1;
		unsigned _didDispatchAsEnded : 1;
	}  _touchFlags;
	BOOL _eaten;
	BOOL _needsForceUpdate;
	BOOL _hasForceUpdate;
	double _timestamp;
	long long _forceCorrelationToken;
	double _maximumPossiblePressure;
	unsigned long long _senderID;
	IOHIDEventRef _hidEvent;
	double _altitudeAngle;
	long long _type;
	id<_UITouchPhaseChangeDelegate> __phaseChangeDelegate;
	UIWindow* __windowServerHitTestWindow;
	double _azimuthAngleInCADisplay;
	double _azimuthAngleInWindow;
	double _initialTouchTimestamp;
	CGSize _displacement;

}

@property (assign,setter=_setPathIndex:,nonatomic) unsigned char _pathIndex;                                                    //@synthesize pathIndex=_pathIndex - In the implementation block
@property (assign,setter=_setPathIdentity:,nonatomic) unsigned char _pathIdentity;                                              //@synthesize pathIdentity=_pathIdentity - In the implementation block
@property (nonatomic,readonly) double _pressure;                                                                                //@synthesize pressure=_pressure - In the implementation block
@property (assign,setter=_setZGradient:,nonatomic) float _zGradient;                                                            //@synthesize zGradient=_zGradient - In the implementation block
@property (assign,setter=_setEdgeType:,nonatomic) long long _edgeType;                                                          //@synthesize edgeType=_edgeType - In the implementation block
@property (assign,setter=_setEdgeAim:,nonatomic) unsigned long long _edgeAim;                                                   //@synthesize edgeAim=_edgeAim - In the implementation block
@property (assign,setter=_setEaten:,getter=_isEaten,nonatomic) BOOL _eaten;                                                     //@synthesize eaten=_eaten - In the implementation block
@property (assign,setter=_setDisplacement:,nonatomic) CGSize _displacement;                                                     //@synthesize displacement=_displacement - In the implementation block
@property (setter=_setPhaseChangeDelegate:,nonatomic,retain) id<_UITouchPhaseChangeDelegate> _phaseChangeDelegate;              //@synthesize _phaseChangeDelegate=__phaseChangeDelegate - In the implementation block
@property (setter=_setWindowServerHitTestWindow:,nonatomic,retain) UIWindow * _windowServerHitTestWindow;                       //@synthesize _windowServerHitTestWindow=__windowServerHitTestWindow - In the implementation block
@property (assign,setter=_setType:,nonatomic) long long type;                                                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double azimuthAngle; 
@property (assign,setter=_setAzimuthAngleInCADisplay:,nonatomic) double azimuthAngleInCADisplay;                                //@synthesize azimuthAngleInCADisplay=_azimuthAngleInCADisplay - In the implementation block
@property (nonatomic,readonly) double azimuthAngleInWindow;                                                                     //@synthesize azimuthAngleInWindow=_azimuthAngleInWindow - In the implementation block
@property (assign,setter=_setAltitudeAngle:,nonatomic) double altitudeAngle;                                                    //@synthesize altitudeAngle=_altitudeAngle - In the implementation block
@property (assign,setter=_setIsPredictedTouch:,nonatomic) BOOL _isPredictedTouch; 
@property (assign,setter=_setNeedsForceUpdate:,nonatomic) BOOL _needsForceUpdate;                                               //@synthesize needsForceUpdate=_needsForceUpdate - In the implementation block
@property (assign,setter=_setHasForceUpdate:,nonatomic) BOOL _hasForceUpdate;                                                   //@synthesize hasForceUpdate=_hasForceUpdate - In the implementation block
@property (assign,setter=_setForceCorrelationToken:,nonatomic) long long _forceCorrelationToken;                                //@synthesize forceCorrelationToken=_forceCorrelationToken - In the implementation block
@property (assign,setter=_setMaximumPossiblePressure:,nonatomic) double _maximumPossiblePressure;                               //@synthesize maximumPossiblePressure=_maximumPossiblePressure - In the implementation block
@property (nonatomic,readonly) double _unclampedForce; 
@property (assign,setter=_setSenderID:,nonatomic) unsigned long long _senderID;                                                 //@synthesize senderID=_senderID - In the implementation block
@property (assign,setter=_setHidEvent:,nonatomic) IOHIDEventRef _hidEvent;                                                      //@synthesize hidEvent=_hidEvent - In the implementation block
@property (assign,nonatomic) double initialTouchTimestamp;                                                                      //@synthesize initialTouchTimestamp=_initialTouchTimestamp - In the implementation block
@property (assign,nonatomic) double timestamp;                                                                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long phase; 
@property (assign,nonatomic) unsigned long long tapCount; 
@property (assign,nonatomic) BOOL isTap; 
@property (assign,nonatomic) BOOL sentTouchesEnded; 
@property (assign,nonatomic) double majorRadius;                                                                                //@synthesize pathMajorRadius=_pathMajorRadius - In the implementation block
@property (assign,nonatomic) double majorRadiusTolerance;                                                                       //@synthesize majorRadiusTolerance=_majorRadiusTolerance - In the implementation block
@property (nonatomic,retain) UIWindow * window; 
@property (nonatomic,retain) UIView * view; 
@property (nonatomic,retain) UIView * warpedIntoView; 
@property (nonatomic,readonly) BOOL _respectsCharge; 
@property (nonatomic,copy,readonly) NSArray * gestureRecognizers; 
@property (nonatomic,readonly) double force; 
@property (nonatomic,readonly) double maximumPossibleForce; 
@property (nonatomic,readonly) NSNumber * estimationUpdateIndex; 
@property (nonatomic,readonly) long long estimatedProperties; 
@property (nonatomic,readonly) long long estimatedPropertiesExpectingUpdates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setForwardablePhase:,nonatomic) long long _forwardablePhase; 
@property (setter=_setResponder:,nonatomic,retain) UIResponder * _responder; 
+(id)_createTouchesWithGSEvent:(GSEventRef)arg1 phase:(long long)arg2 view:(id)arg3 ;
-(CGPoint)locationInNode:(id)arg1 ;
-(CGPoint)previousLocationInNode:(id)arg1 ;
-(CGPoint)pu_locationInPresentationLayerOfView:(id)arg1 ;
-(void)dealloc;
-(UIWindow *)window;
-(NSString *)description;
-(UIView *)view;
-(CGPoint)locationInView:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(long long)type;
-(NSArray *)gestureRecognizers;
-(double)timestamp;
-(id)_clone;
-(id)_gestureRecognizers;
-(CGPoint)previousLocationInView:(id)arg1 ;
-(long long)phase;
-(void)setWindow:(UIWindow *)arg1 ;
-(long long)info;
-(unsigned long long)tapCount;
-(unsigned)_touchIdentifier;
-(unsigned long long)_senderID;
-(double)force;
-(IOHIDEventRef)_hidEvent;
-(void)setTimestamp:(double)arg1 ;
-(void)setPhase:(long long)arg1 ;
-(void)_loadStateFromTouch:(id)arg1 ;
-(id)_phaseDescription;
-(void)setIsDelayed:(BOOL)arg1 ;
-(BOOL)isDelayed;
-(void)setSentTouchesEnded:(BOOL)arg1 ;
-(id)_rehitTest;
-(CGPoint)_locationInWindow:(id)arg1 ;
-(void)_addGestureRecognizer:(id)arg1 ;
-(void)_removeGestureRecognizer:(id)arg1 ;
-(long long)_compareIndex:(id)arg1 ;
-(BOOL)_isStationaryRelativeToTouches:(id)arg1 ;
-(CGPoint)_locationInSceneReferenceSpace;
-(long long)_edgeType;
-(unsigned long long)_edgeAim;
-(BOOL)_edgeForcePending;
-(BOOL)_edgeForceActive;
-(UIWindow *)_windowServerHitTestWindow;
-(BOOL)_mightBeConsideredForForceSystemGesture;
-(CGPoint)_previousLocationInSceneReferenceSpace;
-(void)_setLocationInWindow:(CGPoint)arg1 resetPrevious:(BOOL)arg2 ;
-(void)setTapCount:(unsigned long long)arg1 ;
-(unsigned char)_pathIndex;
-(unsigned char)_pathIdentity;
-(float)_pathMajorRadius;
-(void)_setPhaseChangeDelegate:(id)arg1 ;
-(double)_distanceFrom:(id)arg1 inView:(id)arg2 ;
-(UIResponder *)_responder;
-(double)majorRadius;
-(float)_zGradient;
-(void)setMajorRadius:(double)arg1 ;
-(void)_setType:(long long)arg1 ;
-(double)_unclampedForce;
-(double)_maximumPossiblePressure;
-(double)maximumPossibleForce;
-(void)_setEaten:(BOOL)arg1 ;
-(BOOL)_isEaten;
-(void)_setForwardablePhase:(long long)arg1 ;
-(void)_setResponder:(id)arg1 ;
-(BOOL)sentTouchesEnded;
-(id)_forwardingRecord;
-(SEL)_responderSelectorForPhase:(long long)arg1 ;
-(BOOL)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3 ;
-(BOOL)_shouldDeliverTouchForTouchesMoved;
-(BOOL)_isFirstTouchForView;
-(double)initialTouchTimestamp;
-(void)_setPreviousTouch:(id)arg1 ;
-(BOOL)_isAbandoningForwardingRecord;
-(void)_abandonForwardingRecord;
-(id)_mutableForwardingRecord;
-(long long)_forwardablePhase;
-(void)_clonePropertiesToTouch:(id)arg1 ;
-(void)_setHidEvent:(IOHIDEventRef)arg1 ;
-(void)_updateMovementMagnitudeFromLocation:(CGPoint)arg1 toLocation:(CGPoint)arg2 ;
-(double)azimuthAngleInCADisplay;
-(void)_computeAzimuthAngleInWindow;
-(CGVector)azimuthUnitVectorInView:(id)arg1 ;
-(BOOL)_supportsForce;
-(double)_standardForceAmount;
-(double)_pressure;
-(void)_setIsFirstTouchForView:(BOOL)arg1 ;
-(id<_UITouchPhaseChangeDelegate>)_phaseChangeDelegate;
-(void)_setLocation:(CGPoint)arg1 preciseLocation:(CGPoint)arg2 inWindowResetPreviousLocation:(BOOL)arg3 ;
-(CGPoint)_previousLocationInWindow:(id)arg1 ;
-(void)_setAltitudeAngle:(double)arg1 ;
-(void)_setAzimuthAngleInCADisplay:(double)arg1 ;
-(BOOL)isTap;
-(CGPoint)preciseLocationInView:(id)arg1 ;
-(CGPoint)precisePreviousLocationInView:(id)arg1 ;
-(void)_setIsPredictedTouch:(BOOL)arg1 ;
-(BOOL)_isPredictedTouch;
-(double)azimuthAngle;
-(double)azimuthAngleInView:(id)arg1 ;
-(double)altitudeAngle;
-(NSNumber *)estimationUpdateIndex;
-(long long)estimatedProperties;
-(long long)estimatedPropertiesExpectingUpdates;
-(void)_setTouchIdentifier:(unsigned)arg1 ;
-(void)setIsTap:(BOOL)arg1 ;
-(void)setMajorRadiusTolerance:(double)arg1 ;
-(void)_setPressure:(double)arg1 resetPrevious:(BOOL)arg2 ;
-(void)_clearGestureRecognizers;
-(void)_updateWithChildEvent:(IOHIDEventRef)arg1 ;
-(UIView *)warpedIntoView;
-(void)setWarpedIntoView:(UIView *)arg1 ;
-(BOOL)_respectsCharge;
-(void)_updateMovementMagnitudeForLocation:(CGPoint)arg1 ;
-(void)_willBeDispatchedAsEnded;
-(void)_setPathIndex:(unsigned char)arg1 ;
-(void)_setPathIdentity:(unsigned char)arg1 ;
-(CGSize)_displacement;
-(void)_setDisplacement:(CGSize)arg1 ;
-(void)_setEdgeType:(long long)arg1 ;
-(void)_setEdgeAim:(unsigned long long)arg1 ;
-(double)majorRadiusTolerance;
-(void)_setZGradient:(float)arg1 ;
-(long long)_forceCorrelationToken;
-(void)_setForceCorrelationToken:(long long)arg1 ;
-(BOOL)_needsForceUpdate;
-(void)_setNeedsForceUpdate:(BOOL)arg1 ;
-(BOOL)_hasForceUpdate;
-(void)_setHasForceUpdate:(BOOL)arg1 ;
-(void)_setMaximumPossiblePressure:(double)arg1 ;
-(void)_setSenderID:(unsigned long long)arg1 ;
-(void)_setWindowServerHitTestWindow:(id)arg1 ;
-(double)azimuthAngleInWindow;
-(void)setInitialTouchTimestamp:(double)arg1 ;
@end

