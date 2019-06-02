/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class HKQuantity;

@interface _HKWorkoutGoalFilter : _HKFilter {

	HKQuantity* _comparisonQuantity;
	unsigned long long _goalType;
	unsigned long long _operatorType;

}

@property (nonatomic,readonly) HKQuantity * comparisonQuantity;              //@synthesize comparisonQuantity=_comparisonQuantity - In the implementation block
@property (nonatomic,readonly) unsigned long long goalType;                  //@synthesize goalType=_goalType - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorType;              //@synthesize operatorType=_operatorType - In the implementation block
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)filterWithComparisonQuantity:(id)arg1 goalType:(unsigned long long)arg2 operatorType:(unsigned long long)arg3 ;
+(BOOL)supportsSecureCoding;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(unsigned long long)goalType;
-(unsigned long long)operatorType;
-(HKQuantity *)comparisonQuantity;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

