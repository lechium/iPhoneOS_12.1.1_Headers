/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKHealthStore, NSMutableDictionary, NSDate, HKQuantity;

@interface FIActivitySettingsController : NSObject <NSCopying> {

	HKHealthStore* _healthStore;
	NSMutableDictionary* _dirtyPropertiesMap;
	NSDate* _dateOfBirth;
	HKQuantity* _height;
	HKQuantity* _weight;
	long long _biologicalSex;
	long long _wheelchairUse;
	/*^block*/id _updateHandler;

}

@property (nonatomic,retain) NSDate * dateOfBirth;                     //@synthesize dateOfBirth=_dateOfBirth - In the implementation block
@property (nonatomic,retain) HKQuantity * height;                      //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) HKQuantity * weight;                      //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) long long biologicalSex;                  //@synthesize biologicalSex=_biologicalSex - In the implementation block
@property (assign,nonatomic) long long wheelchairUse;                  //@synthesize wheelchairUse=_wheelchairUse - In the implementation block
@property (nonatomic,readonly) HKQuantity * leanBodyMass; 
@property (nonatomic,copy) id updateHandler;                           //@synthesize updateHandler=_updateHandler - In the implementation block
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)_setUncommitedValue:(id)arg1 forPropertyKey:(id)arg2 ;
-(BOOL)_logAndNilError:(id*)arg1 operationDescription:(id)arg2 ;
-(BOOL)_commitValue:(id)arg1 forPropertyKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)_hasDirtyPropertyForPropertyKey:(id)arg1 ;
-(void)populateExistingCharacteristics;
-(BOOL)commmitWithError:(id*)arg1 ;
-(HKQuantity *)leanBodyMass;
-(long long)biologicalSex;
-(long long)wheelchairUse;
-(void)setWheelchairUse:(long long)arg1 ;
-(void)setBiologicalSex:(long long)arg1 ;
-(NSDate *)dateOfBirth;
-(void)setDateOfBirth:(NSDate *)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHeight:(HKQuantity *)arg1 ;
-(HKQuantity *)height;
-(HKQuantity *)weight;
-(void)setWeight:(HKQuantity *)arg1 ;
@end
