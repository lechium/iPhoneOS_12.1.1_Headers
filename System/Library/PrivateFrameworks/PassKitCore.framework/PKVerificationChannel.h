/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKVerificationChannel : NSObject <NSCopying, NSSecureCoding> {

	BOOL _requiresUserInteraction;
	NSString* _identifier;
	unsigned long long _type;
	NSString* _organizationName;
	NSString* _contactPoint;
	NSString* _sourceAddress;
	NSString* _typeDescription;

}

@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * typeDescription;                                  //@synthesize typeDescription=_typeDescription - In the implementation block
@property (nonatomic,copy) NSString * organizationName;                                 //@synthesize organizationName=_organizationName - In the implementation block
@property (assign,nonatomic) BOOL requiresUserInteraction;                              //@synthesize requiresUserInteraction=_requiresUserInteraction - In the implementation block
@property (nonatomic,copy) NSString * contactPoint;                                     //@synthesize contactPoint=_contactPoint - In the implementation block
@property (nonatomic,copy) NSString * sourceAddress;                                    //@synthesize sourceAddress=_sourceAddress - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeDescriptionUnlocalized; 
+(id)verificationChannelWithDictionary:(id)arg1 andOrganizationName:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)setOrganizationName:(NSString *)arg1 ;
-(void)setRequiresUserInteraction:(BOOL)arg1 ;
-(void)setContactPoint:(NSString *)arg1 ;
-(void)setSourceAddress:(NSString *)arg1 ;
-(NSString *)typeDescriptionUnlocalized;
-(BOOL)needsServerRequest;
-(NSString *)organizationName;
-(BOOL)requiresUserInteraction;
-(NSString *)sourceAddress;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)contactPoint;
-(void)setTypeDescription:(NSString *)arg1 ;
-(NSString *)typeDescription;
@end

