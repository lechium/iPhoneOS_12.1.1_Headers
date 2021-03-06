/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@interface TKVibrationRecorderRippleRingLayer : CAShapeLayer {

	double _creationTimestamp;
	double _ringSpeed;
	CGPoint _normalizedRingLocation;

}

@property (nonatomic,readonly) CGPoint normalizedRingLocation;              //@synthesize normalizedRingLocation=_normalizedRingLocation - In the implementation block
@property (nonatomic,readonly) double ringSpeed;                            //@synthesize ringSpeed=_ringSpeed - In the implementation block
-(double)timeIntervalSinceCreation;
-(void)configureWithTimeIntervalSinceCreation:(double)arg1 normalizedRingLocation:(CGPoint)arg2 ringSpeed:(double)arg3 ;
-(CGPoint)normalizedRingLocation;
-(double)ringSpeed;
-(id)init;
-(void)reset;
@end

