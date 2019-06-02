/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivityAchievements/ActivityAchievements-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSArray, NSSet, HKUnit, NSDateComponents;

@interface ACHTemplate : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_AC9 _packedVisibilityStart;
	SCD_Struct_AC9 _packedVisibilityEnd;
	SCD_Struct_AC9 _packedAvailabilityStart;
	SCD_Struct_AC9 _packedAvailabilityEnd;
	unsigned char _minimumEngineVersion;
	unsigned char _creatorDevice;
	unsigned char _earnLimit;
	unsigned char _duplicateRemovalStrategy;
	unsigned char _earnDateStrategy;
	BOOL _displaysEarnedInstanceCount;
	unsigned long long _key;
	NSString* _uniqueName;
	unsigned long long _version;
	NSDate* _createdDate;
	NSString* _sourceName;
	NSString* _predicate;
	NSString* _valueExpression;
	NSString* _progressExpression;
	NSString* _goalExpression;
	unsigned long long _triggers;
	NSString* _visibilityPredicate;
	NSString* _availabilityPredicate;
	NSArray* _availableCountryCodes;
	NSString* _alertabilityPredicate;
	NSSet* _alertDates;
	unsigned long long _duplicateRemovalCalendarUnit;
	HKUnit* _canonicalUnit;
	unsigned long long _displayOrder;

}

@property (assign,nonatomic) unsigned long long key;                                       //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * uniqueName;                                        //@synthesize uniqueName=_uniqueName - In the implementation block
@property (assign,nonatomic) unsigned long long version;                                   //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned char minimumEngineVersion;                           //@synthesize minimumEngineVersion=_minimumEngineVersion - In the implementation block
@property (nonatomic,retain) NSDate * createdDate;                                         //@synthesize createdDate=_createdDate - In the implementation block
@property (assign,nonatomic) unsigned char creatorDevice;                                  //@synthesize creatorDevice=_creatorDevice - In the implementation block
@property (nonatomic,retain) NSString * sourceName;                                        //@synthesize sourceName=_sourceName - In the implementation block
@property (nonatomic,retain) NSString * predicate;                                         //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSString * valueExpression;                                   //@synthesize valueExpression=_valueExpression - In the implementation block
@property (nonatomic,retain) NSString * progressExpression;                                //@synthesize progressExpression=_progressExpression - In the implementation block
@property (nonatomic,retain) NSString * goalExpression;                                    //@synthesize goalExpression=_goalExpression - In the implementation block
@property (assign,nonatomic) unsigned long long triggers;                                  //@synthesize triggers=_triggers - In the implementation block
@property (assign,nonatomic) unsigned char earnLimit;                                      //@synthesize earnLimit=_earnLimit - In the implementation block
@property (nonatomic,retain) NSString * visibilityPredicate;                               //@synthesize visibilityPredicate=_visibilityPredicate - In the implementation block
@property (nonatomic,retain) NSDateComponents * visibilityStart; 
@property (nonatomic,retain) NSDateComponents * visibilityEnd; 
@property (nonatomic,retain) NSString * availabilityPredicate;                             //@synthesize availabilityPredicate=_availabilityPredicate - In the implementation block
@property (nonatomic,retain) NSDateComponents * availabilityStart; 
@property (nonatomic,retain) NSDateComponents * availabilityEnd; 
@property (nonatomic,retain) NSArray * availableCountryCodes;                              //@synthesize availableCountryCodes=_availableCountryCodes - In the implementation block
@property (nonatomic,retain) NSString * alertabilityPredicate;                             //@synthesize alertabilityPredicate=_alertabilityPredicate - In the implementation block
@property (nonatomic,retain) NSSet * alertDates;                                           //@synthesize alertDates=_alertDates - In the implementation block
@property (assign,nonatomic) unsigned char duplicateRemovalStrategy;                       //@synthesize duplicateRemovalStrategy=_duplicateRemovalStrategy - In the implementation block
@property (assign,nonatomic) unsigned long long duplicateRemovalCalendarUnit;              //@synthesize duplicateRemovalCalendarUnit=_duplicateRemovalCalendarUnit - In the implementation block
@property (assign,nonatomic) unsigned char earnDateStrategy;                               //@synthesize earnDateStrategy=_earnDateStrategy - In the implementation block
@property (nonatomic,retain) HKUnit * canonicalUnit;                                       //@synthesize canonicalUnit=_canonicalUnit - In the implementation block
@property (assign,nonatomic) unsigned long long displayOrder;                              //@synthesize displayOrder=_displayOrder - In the implementation block
@property (assign,nonatomic) BOOL displaysEarnedInstanceCount;                             //@synthesize displaysEarnedInstanceCount=_displaysEarnedInstanceCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setValueExpression:(NSString *)arg1 ;
-(NSString *)valueExpression;
-(void)setSourceName:(NSString *)arg1 ;
-(NSString *)sourceName;
-(unsigned long long)displayOrder;
-(void)setDisplayOrder:(unsigned long long)arg1 ;
-(unsigned char)creatorDevice;
-(NSDate *)createdDate;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(HKUnit *)canonicalUnit;
-(unsigned long long)triggers;
-(void)setTriggers:(unsigned long long)arg1 ;
-(void)setUniqueName:(NSString *)arg1 ;
-(NSString *)progressExpression;
-(NSString *)goalExpression;
-(NSDateComponents *)availabilityStart;
-(NSDateComponents *)availabilityEnd;
-(unsigned char)earnLimit;
-(void)setCreatorDevice:(unsigned char)arg1 ;
-(id)initWithCodable:(id)arg1 ;
-(NSArray *)availableCountryCodes;
-(unsigned char)duplicateRemovalStrategy;
-(unsigned char)earnDateStrategy;
-(void)setMinimumEngineVersion:(unsigned char)arg1 ;
-(void)setProgressExpression:(NSString *)arg1 ;
-(void)setGoalExpression:(NSString *)arg1 ;
-(void)setEarnLimit:(unsigned char)arg1 ;
-(void)setVisibilityPredicate:(NSString *)arg1 ;
-(void)setVisibilityStart:(NSDateComponents *)arg1 ;
-(void)setVisibilityEnd:(NSDateComponents *)arg1 ;
-(void)setAvailabilityPredicate:(NSString *)arg1 ;
-(void)setAvailabilityStart:(NSDateComponents *)arg1 ;
-(void)setAvailabilityEnd:(NSDateComponents *)arg1 ;
-(void)setAvailableCountryCodes:(NSArray *)arg1 ;
-(void)setAlertabilityPredicate:(NSString *)arg1 ;
-(void)setAlertDates:(NSSet *)arg1 ;
-(void)setDuplicateRemovalStrategy:(unsigned char)arg1 ;
-(void)setDuplicateRemovalCalendarUnit:(unsigned long long)arg1 ;
-(void)setEarnDateStrategy:(unsigned char)arg1 ;
-(void)setCanonicalUnit:(HKUnit *)arg1 ;
-(void)setDisplaysEarnedInstanceCount:(BOOL)arg1 ;
-(unsigned long long)duplicateRemovalCalendarUnit;
-(NSString *)visibilityPredicate;
-(NSDateComponents *)visibilityStart;
-(NSDateComponents *)visibilityEnd;
-(unsigned char)minimumEngineVersion;
-(NSString *)availabilityPredicate;
-(NSString *)alertabilityPredicate;
-(NSSet *)alertDates;
-(BOOL)displaysEarnedInstanceCount;
-(id)_displayStringForAvailableCountryCodes:(id)arg1 ;
-(id)_displayStringForAlertDates:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(unsigned long long)key;
-(void)setKey:(unsigned long long)arg1 ;
-(void)setPredicate:(NSString *)arg1 ;
-(NSString *)predicate;
-(NSString *)uniqueName;
@end

