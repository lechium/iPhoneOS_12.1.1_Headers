/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _HKFactorization, _HKDimension, NSString;

@interface HKUnit : NSObject <NSSecureCoding, NSCopying> {

	_HKFactorization* _dimensionReduction;
	_HKFactorization* _baseUnitReduction;
	os_unfair_lock_s _dimensionReductionLock;
	double _reducedProportionalSize;
	double _scaleOffset;

}

@property (nonatomic,readonly) _HKFactorization * _baseUnits; 
@property (nonatomic,readonly) _HKDimension * dimension; 
@property (nonatomic,readonly) double scaleOffset;                         //@synthesize scaleOffset=_scaleOffset - In the implementation block
@property (readonly) NSString * unitString; 
+(id)_nullUnit;
+(id)_foundationBaseUnits;
+(id)_prefixStringForMetricPrefix:(long long)arg1 ;
+(id)moleUnitWithMolarMass:(double)arg1 ;
+(id)moles;
+(id)pascalUnit;
+(id)secondUnitWithMetricPrefix:(long long)arg1 ;
+(id)siemenUnit;
+(id)hertzUnit;
+(id)_internationalUnitWithMassEquivalent;
+(id)_internationalUnitWithVolumeEquivalent;
+(id)equivalentsUnit;
+(id)ounceUnit;
+(id)smallCalorieUnit;
+(id)kilojoulesUnit;
+(id)largeCalorieUnit;
+(id)moleUnitWithMetricPrefix:(long long)arg1 molarMass:(double)arg2 ;
+(id)fluidOunceUSUnit;
+(id)fluidOunceImperialUnit;
+(id)pintUSUnit;
+(id)pintImperialUnit;
+(id)cupUSUnit;
+(id)cupImperialUnit;
+(id)pascalUnitWithMetricPrefix:(long long)arg1 ;
+(id)centimeterOfWaterUnit;
+(id)atmosphereUnit;
+(id)milliseconds;
+(id)dayUnit;
+(id)calorieUnit;
+(id)kelvinUnit;
+(id)siemenUnitWithMetricPrefix:(long long)arg1 ;
+(id)hertzUnitWithMetricPrefix:(long long)arg1 ;
+(id)perMilleUnit;
+(id)titerUnit;
+(id)_internationalUnitWithMetricPrefix:(long long)arg1 massEquivalent:(double)arg2 ;
+(id)_internationalUnitWithMassEquivalent:(double)arg1 ;
+(id)_internationalUnitWithMetricPrefix:(long long)arg1 volumeEquivalent:(double)arg2 ;
+(id)_internationalUnitWithVolumeEquivalent:(double)arg1 ;
+(id)equivalentsUnitWithMolarMass:(double)arg1 valence:(long long)arg2 ;
+(id)unitFromMassFormatterUnit:(long long)arg1 ;
+(long long)massFormatterUnitFromUnit:(id)arg1 ;
+(id)unitFromLengthFormatterUnit:(long long)arg1 ;
+(long long)lengthFormatterUnitFromUnit:(id)arg1 ;
+(id)unitFromEnergyFormatterUnit:(long long)arg1 ;
+(BOOL)_isValidUnitString:(id)arg1 ;
+(id)_heightUnitForLocale:(id)arg1 ;
+(id)_distanceUnitForLocale:(id)arg1 ;
+(id)_personMassUnitForLocale:(id)arg1 ;
+(id)_temperatureUnitForLocale:(id)arg1 ;
+(id)_foodEnergyUnitForLocale:(id)arg1 ;
+(id)meterUnitWithMetricPrefix:(long long)arg1 ;
+(id)minuteUnit;
+(id)unitFromString:(id)arg1 ;
+(id)literUnit;
+(id)internationalUnit;
+(id)degreeCelsiusUnit;
+(id)gramUnitWithMetricPrefix:(long long)arg1 ;
+(id)meterUnit;
+(id)kilocalorieUnit;
+(id)mileUnit;
+(id)yardUnit;
+(id)hourUnit;
+(id)countUnit;
+(id)_countPerMinuteUnit;
+(id)footUnit;
+(id)degreeFahrenheitUnit;
+(id)percentUnit;
+(id)inchUnit;
+(id)gramUnit;
+(id)literUnitWithMetricPrefix:(long long)arg1 ;
+(id)_countPerSecondUnit;
+(id)secondUnit;
+(id)millimeterOfMercuryUnit;
+(long long)energyFormatterUnitFromUnit:(id)arg1 ;
+(id)decibelHearingLevelUnit;
+(id)poundUnit;
+(id)stoneUnit;
+(id)jouleUnitWithMetricPrefix:(long long)arg1 ;
+(id)decibelSPLUnit;
+(id)jouleUnit;
+(BOOL)supportsSecureCoding;
-(BOOL)_isCompatibleWithUnit:(id)arg1 ;
-(id)_dimensionReduction;
-(_HKFactorization *)_baseUnits;
-(id)unitDividedByUnit:(id)arg1 ;
-(double)_convertToBaseUnit:(double)arg1 ;
-(double)_convertFromBaseUnit:(double)arg1 ;
-(void)_reduceIfNecessaryWithCycleSet:(id)arg1 ;
-(id)_computeBaseUnitReductionAndProportionalSize:(out double*)arg1 withCycleSet:(id)arg2 ;
-(double)_reducedProportionalSize;
-(double)scaleOffset;
-(id)unitMultipliedByUnit:(id)arg1 ;
-(id)unitRaisedToPower:(long long)arg1 ;
-(id)reciprocalUnit;
-(BOOL)_isCompatibleWithDimension:(id)arg1 ;
-(id)_baseUnitReductionAndProportionalSize:(out double*)arg1 withCycleSet:(id)arg2 ;
-(id)_baseUnitReduction;
-(NSString *)unitString;
-(double)_valueByConvertingValue:(double)arg1 toUnit:(id)arg2 ;
-(BOOL)_isMetricDistance;
-(id)_foundationUnit;
-(BOOL)isNull;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_HKDimension *)dimension;
-(id)_init;
@end

