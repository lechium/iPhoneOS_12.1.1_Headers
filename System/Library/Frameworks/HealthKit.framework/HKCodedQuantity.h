/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HKMedicalCoding, NSNumber;

@interface HKCodedQuantity : NSObject <NSSecureCoding, NSCopying> {

	NSString* _rawValue;
	HKMedicalCoding* _comparatorCoding;
	HKMedicalCoding* _unitCoding;

}

@property (nonatomic,copy,readonly) NSNumber * numberValue; 
@property (nonatomic,copy,readonly) NSString * value; 
@property (nonatomic,copy,readonly) NSString * rawValue;                             //@synthesize rawValue=_rawValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedValue; 
@property (nonatomic,readonly) double doubleValue; 
@property (nonatomic,copy,readonly) HKMedicalCoding * comparatorCoding;              //@synthesize comparatorCoding=_comparatorCoding - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalCoding * unitCoding;                    //@synthesize unitCoding=_unitCoding - In the implementation block
+(id)_numberFormatter;
+(id)codedQuantityWithValue:(id)arg1 unitCoding:(id)arg2 ;
+(id)codedQuantityWithValue:(id)arg1 comparatorCoding:(id)arg2 unitCoding:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(id)initWithRawValue:(id)arg1 comparatorCoding:(id)arg2 unitCoding:(id)arg3 ;
-(HKMedicalCoding *)comparatorCoding;
-(HKMedicalCoding *)unitCoding;
-(NSString *)localizedValue;
-(NSNumber *)numberValue;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(double)doubleValue;
-(NSString *)rawValue;
@end

