/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate;

@interface CMWorkout : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* fSessionId;
	long long fType;
	long long fLocationType;
	NSDate* fStartDate;
	NSDate* fEndDate;
	BOOL fIsUserInitiated;
	BOOL _isUserInitiated;

}

@property (nonatomic,readonly) BOOL isUserInitiated;                //@synthesize isUserInitiated=_isUserInitiated - In the implementation block
@property (nonatomic,readonly) NSUUID * sessionId; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long locationType; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
+(id)workoutName:(long long)arg1 ;
+(BOOL)workoutIsTypeWalking:(long long)arg1 ;
+(BOOL)workoutIsTypeRunning:(long long)arg1 ;
+(long long)workoutLocationTypeFromCMWorkoutType:(long long)arg1 ;
+(id)workoutLocationName:(long long)arg1 ;
+(int)CLMotionActivityTypeFromCMWorkoutType:(long long)arg1 ;
+(long long)CMWorkoutTypeFromCLMotionActivityType:(int)arg1 ;
+(long long)CMWorkoutLocationTypeFromCMSwimWorkoutLocation:(long long)arg1 ;
+(long long)CMSwimWorkoutLocationFromCMWorkoutLocationType:(long long)arg1 ;
+(BOOL)workoutIsTypePedestrian:(long long)arg1 ;
+(BOOL)isAvailable;
+(BOOL)supportsSecureCoding;
-(id)initWithSessionId:(id)arg1 type:(long long)arg2 locationType:(long long)arg3 ;
-(id)initWithSessionId:(id)arg1 type:(long long)arg2 locationType:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(NSUUID *)sessionId;
-(long long)locationType;
-(void)setWorkoutType:(long long)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setLocationType:(long long)arg1 ;
-(id)initWithSessionId:(id)arg1 type:(long long)arg2 ;
-(void)setIsUserInitiated:(BOOL)arg1 ;
-(BOOL)isUserInitiated;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
@end

