/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>
#import <libobjc.A.dylib/HKMedicalRecordCodings.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSDate, HKFHIRIdentifier, HKSemanticDate;

@interface HKMedicalRecord : HKSample <HKMedicalRecordCodings, NSSecureCoding, NSCopying> {

	BOOL _enteredInError;
	NSString* _note;
	NSDate* _modifiedDate;
	HKFHIRIdentifier* _FHIRIdentifier;
	long long _extractionVersion;
	HKSemanticDate* _sortDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * indexKeywords; 
@property (nonatomic,readonly) NSArray * medicalRecordCodings; 
@property (nonatomic,readonly) NSArray * medicalRecordPreferredSystems; 
@property (readonly) NSDate * startDate; 
@property (readonly) NSDate * endDate; 
@property (nonatomic,copy,readonly) NSString * note;                                 //@synthesize note=_note - In the implementation block
@property (nonatomic,readonly) BOOL enteredInError;                                  //@synthesize enteredInError=_enteredInError - In the implementation block
@property (nonatomic,copy,readonly) NSDate * modifiedDate;                           //@synthesize modifiedDate=_modifiedDate - In the implementation block
@property (nonatomic,copy,readonly) HKFHIRIdentifier * FHIRIdentifier;               //@synthesize FHIRIdentifier=_FHIRIdentifier - In the implementation block
@property (nonatomic,readonly) long long extractionVersion;                          //@synthesize extractionVersion=_extractionVersion - In the implementation block
@property (nonatomic,copy,readonly) HKSemanticDate * sortDate;                       //@synthesize sortDate=_sortDate - In the implementation block
+(id)_newMedicalRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 config:(/*^block*/id)arg10 ;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)defaultDisplayString;
+(id)_sortDateIntervalFromStartDateComponents:(id)arg1 endDateComponents:(id)arg2 error:(out id*)arg3 ;
+(BOOL)supportsSecureCoding;
-(NSArray *)indexKeywords;
-(NSArray *)medicalRecordCodings;
-(NSArray *)medicalRecordPreferredSystems;
-(id)fallbackDisplayString;
-(HKSemanticDate *)sortDate;
-(id)_validateConfiguration;
-(NSString *)note;
-(BOOL)enteredInError;
-(NSDate *)modifiedDate;
-(long long)extractionVersion;
-(HKFHIRIdentifier *)FHIRIdentifier;
-(void)_setNote:(id)arg1 ;
-(void)_setEnteredInError:(BOOL)arg1 ;
-(void)_setModifiedDate:(id)arg1 ;
-(void)_setFHIRIdentifier:(id)arg1 ;
-(void)_setExtractionVersion:(long long)arg1 ;
-(void)_setSortDate:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
