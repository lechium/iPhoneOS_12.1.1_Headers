/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate;

@interface _HKDeepBreathingSessionConfiguration : NSObject <NSSecureCoding> {

	NSUUID* _UUID;
	NSDate* _startDate;
	double _sessionDuration;
	double _inhaleExhaleRatio;
	double _respirationsPerMinute;

}

@property (readonly) NSUUID * UUID;                                     //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                        //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) double sessionDuration;                    //@synthesize sessionDuration=_sessionDuration - In the implementation block
@property (assign,nonatomic) double inhaleExhaleRatio;                  //@synthesize inhaleExhaleRatio=_inhaleExhaleRatio - In the implementation block
@property (assign,nonatomic) double respirationsPerMinute;              //@synthesize respirationsPerMinute=_respirationsPerMinute - In the implementation block
+(id)sessionConfigurationWithStartDate:(id)arg1 sessionDuration:(double)arg2 inhaleExhaleRatio:(double)arg3 respirationsPerMinute:(double)arg4 ;
+(BOOL)supportsSecureCoding;
-(void)setSessionDuration:(double)arg1 ;
-(double)sessionDuration;
-(id)_initWithStartDate:(id)arg1 sessionDuration:(double)arg2 inhaleExhaleRatio:(double)arg3 respirationsPerMinute:(double)arg4 ;
-(double)inhaleExhaleRatio;
-(void)setInhaleExhaleRatio:(double)arg1 ;
-(double)respirationsPerMinute;
-(void)setRespirationsPerMinute:(double)arg1 ;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSUUID *)UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

