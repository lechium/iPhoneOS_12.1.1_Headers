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

@class NSString, NSNumber;

@interface _HKEmergencyContact : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSNumber* _nameRecordID;
	NSString* _nameContactIdentifier;
	NSString* _phoneNumber;
	NSNumber* _phoneNumberPropertyID;
	NSString* _phoneNumberContactIdentifier;
	NSString* _phoneNumberLabel;
	NSString* _relationship;

}

@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSNumber * nameRecordID;                            //@synthesize nameRecordID=_nameRecordID - In the implementation block
@property (nonatomic,copy) NSString * nameContactIdentifier;                     //@synthesize nameContactIdentifier=_nameContactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSNumber * phoneNumberPropertyID;                   //@synthesize phoneNumberPropertyID=_phoneNumberPropertyID - In the implementation block
@property (nonatomic,copy) NSString * phoneNumberContactIdentifier;              //@synthesize phoneNumberContactIdentifier=_phoneNumberContactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * phoneNumberLabel;                          //@synthesize phoneNumberLabel=_phoneNumberLabel - In the implementation block
@property (nonatomic,copy) NSString * relationship;                              //@synthesize relationship=_relationship - In the implementation block
+(id)nameForContact:(id)arg1 ;
+(id)emergencyContactWithContact:(id)arg1 property:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)relationship;
-(NSNumber *)nameRecordID;
-(void)setNameContactIdentifier:(NSString *)arg1 ;
-(NSNumber *)phoneNumberPropertyID;
-(void)setPhoneNumberContactIdentifier:(NSString *)arg1 ;
-(void)setNameRecordID:(NSNumber *)arg1 ;
-(void)setPhoneNumberPropertyID:(NSNumber *)arg1 ;
-(void)setRelationship:(NSString *)arg1 ;
-(NSString *)phoneNumberLabel;
-(void)setPhoneNumberLabel:(NSString *)arg1 ;
-(NSString *)nameContactIdentifier;
-(NSString *)phoneNumberContactIdentifier;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)phoneNumber;
@end

