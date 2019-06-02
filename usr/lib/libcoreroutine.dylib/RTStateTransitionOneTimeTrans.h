/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RTStateTransitionOneTimeTrans : NSObject <NSSecureCoding> {

	double _start_s;
	double _stop_s;
	unsigned long long _motionActivityType;

}

@property (assign,nonatomic) double start_s;                                     //@synthesize start_s=_start_s - In the implementation block
@property (assign,nonatomic) double stop_s;                                      //@synthesize stop_s=_stop_s - In the implementation block
@property (assign,nonatomic) unsigned long long motionActivityType;              //@synthesize motionActivityType=_motionActivityType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithStart:(double)arg1 stop:(double)arg2 motionActivityType:(unsigned long long)arg3 ;
-(double)start_s;
-(void)setStart_s:(double)arg1 ;
-(double)stop_s;
-(void)setStop_s:(double)arg1 ;
-(unsigned long long)motionActivityType;
-(void)setMotionActivityType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

