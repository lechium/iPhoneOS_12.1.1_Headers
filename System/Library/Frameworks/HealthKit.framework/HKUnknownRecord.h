/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKMedicalRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HKUnknownRecordType;

@interface HKUnknownRecord : HKMedicalRecord <NSSecureCoding, NSCopying> {

	NSString* _displayName;

}

@property (copy,readonly) HKUnknownRecordType * unknownRecordType; 
@property (copy,readonly) NSString * displayName; 
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)defaultDisplayString;
+(id)unknownRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 displayName:(id)arg10 ;
+(id)unknownRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 displayName:(id)arg9 ;
+(BOOL)supportsSecureCoding;
-(id)fallbackDisplayString;
-(id)_validateConfiguration;
-(void)_setDisplayName:(id)arg1 ;
-(HKUnknownRecordType *)unknownRecordType;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
@end

