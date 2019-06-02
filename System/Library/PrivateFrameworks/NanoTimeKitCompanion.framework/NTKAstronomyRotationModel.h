/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKAstronomyRotationModelObserver, NURotatable;
#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class CADisplayLink;

@interface NTKAstronomyRotationModel : NSObject {

	CADisplayLink* _displayLink;
	const NTKAstronomyInteractionSettings* _interactionSettings;
	id<NTKAstronomyRotationModelObserver> _observer;
	id<NURotatable> _rotatable;
	long long _state;
	CLLocationCoordinate2D _landingCoordinate;
	 _accumulatedPushVector;
	float _effectivePushDeceleration;
	float _effectivePullAcceleration;
	double _pushStartTime;
	double _pullStartTime;
	double _previousDisplayLinkCallbackTime;
	BOOL _isPulling;

}

@property (nonatomic,readonly) const NTKAstronomyInteractionSettings* interactionSettings;              //@synthesize interactionSettings=_interactionSettings - In the implementation block
@property (assign,nonatomic,__weak) id<NURotatable> rotatable;                                          //@synthesize rotatable=_rotatable - In the implementation block
@property (assign,nonatomic,__weak) id<NTKAstronomyRotationModelObserver> observer;                     //@synthesize observer=_observer - In the implementation block
@property (assign,getter=isPulling,nonatomic) BOOL pulling;                                             //@synthesize isPulling=_isPulling - In the implementation block
-(void)push:;
-(void)_handleDisplayLink;
-(const NTKAstronomyInteractionSettings*)interactionSettings;
-(BOOL)isAtHomeCoordinate;
-(BOOL)isPulling;
-(void)setPulling:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)setObserver:(id<NTKAstronomyRotationModelObserver>)arg1 ;
-(id<NTKAstronomyRotationModelObserver>)observer;
-(void)_update;
-(id<NURotatable>)rotatable;
-(void)setRotatable:(id<NURotatable>)arg1 ;
@end
