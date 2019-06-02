/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSPersonNameComponents;

@interface _NSPersonNameComponentsData : NSObject <NSCopying, NSSecureCoding> {

	NSString* _givenName;
	NSString* _familyName;
	NSString* _middleName;
	NSString* _namePrefix;
	NSString* _nameSuffix;
	NSString* _nickname;
	NSPersonNameComponents* _phoneticRepresentation;

}

@property (copy) NSString * givenName;                                         //@synthesize givenName=_givenName - In the implementation block
@property (copy) NSString * familyName;                                        //@synthesize familyName=_familyName - In the implementation block
@property (copy) NSString * middleName;                                        //@synthesize middleName=_middleName - In the implementation block
@property (copy) NSString * namePrefix;                                        //@synthesize namePrefix=_namePrefix - In the implementation block
@property (copy) NSString * nameSuffix;                                        //@synthesize nameSuffix=_nameSuffix - In the implementation block
@property (copy) NSString * nickname;                                          //@synthesize nickname=_nickname - In the implementation block
@property (copy) NSPersonNameComponents * phoneticRepresentation;              //@synthesize phoneticRepresentation=_phoneticRepresentation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)_freeIvars;
-(void)setNamePrefix:(NSString *)arg1 ;
-(void)setNameSuffix:(NSString *)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)givenName;
-(NSString *)middleName;
-(NSString *)namePrefix;
-(NSString *)nameSuffix;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(NSPersonNameComponents *)phoneticRepresentation;
-(void)setPhoneticRepresentation:(NSPersonNameComponents *)arg1 ;
-(void)setGivenName:(NSString *)arg1 ;
-(void)setFamilyName:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)familyName;
@end

