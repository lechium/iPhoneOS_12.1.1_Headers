/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, HKQuantity, NSString;

@interface FIUIWorkoutActivityType : NSObject <NSSecureCoding> {

	BOOL _isIndoor;
	unsigned long long _identifier;
	unsigned long long _auxiliaryTypeIdentifier;
	NSDictionary* _metadata;

}

@property (nonatomic,readonly) unsigned long long identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long auxiliaryTypeIdentifier;              //@synthesize auxiliaryTypeIdentifier=_auxiliaryTypeIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long effectiveTypeIdentifier; 
@property (nonatomic,readonly) BOOL isIndoor; 
@property (nonatomic,readonly) BOOL isCategorizedOtherWorkout; 
@property (nonatomic,readonly) NSDictionary * metadata;                                 //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) long long swimmingLocationType; 
@property (nonatomic,readonly) HKQuantity * lapLength; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
+(id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 metadata:(id)arg3 ;
+(id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 ;
+(id)supportedActivityTypesWithIsWheelchairUser:(BOOL)arg1 ;
+(id)wheelchairActivityTypes;
+(id)activityTypeWithWorkout:(id)arg1 ;
+(id)possibleActivityTypesForIdentifier:(unsigned long long)arg1 locationType:(long long)arg2 swimmingLocationType:(long long)arg3 wheelchairUser:(BOOL)arg4 ;
+(unsigned long long)mapWheelchairUserActivityType:(unsigned long long)arg1 isWheelchairUser:(BOOL)arg2 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isIndoor;
-(id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 metadata:(id)arg3 ;
-(id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 metadata:(id)arg3 auxiliaryTypeIdentifier:(unsigned long long)arg4 ;
-(unsigned long long)auxiliaryTypeIdentifier;
-(unsigned long long)effectiveTypeIdentifier;
-(BOOL)isCategorizedOtherWorkout;
-(id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 ;
-(id)localizedNameComponents;
-(id)activityTypeByAddingLapLength:(double)arg1 ;
-(BOOL)hasLocationTypePool;
-(id)activityTypePlistKey;
-(long long)swimmingLocationType;
-(HKQuantity *)lapLength;
-(unsigned long long)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)uniqueIdentifier;
-(id)localizedName;
-(NSDictionary *)metadata;
@end

