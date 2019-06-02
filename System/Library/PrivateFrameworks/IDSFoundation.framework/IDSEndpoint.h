/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class IDSURI, NSDictionary, NSData, NSDate, IDSAccountKeyHistory, NSString, IDSMPPublicLegacyIdentity, IDSPublicDeviceIdentity, IDSEndpointCapabilities;

@interface IDSEndpoint : NSObject <NSSecureCoding> {

	IDSURI* _URI;
	NSDictionary* _clientData;
	NSData* _pushToken;
	NSData* _sessionToken;
	NSDate* _expireDate;
	NSDate* _refreshDate;
	IDSAccountKeyHistory* _accountKeyHistory;
	NSString* _anonymizedSenderID;
	BOOL _verifiedBusiness;
	IDSMPPublicLegacyIdentity* _publicMessageProtectionIdentity;
	IDSPublicDeviceIdentity* _devicePublicIdentity;
	IDSEndpointCapabilities* _capabilities;
	NSString* _senderCorrelationIdentifier;

}

@property (nonatomic,readonly) NSDictionary * clientData;                                                       //@synthesize clientData=_clientData - In the implementation block
@property (nonatomic,readonly) NSData * sessionToken;                                                           //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,readonly) NSDate * expireDate;                                                             //@synthesize expireDate=_expireDate - In the implementation block
@property (nonatomic,readonly) NSDate * refreshDate;                                                            //@synthesize refreshDate=_refreshDate - In the implementation block
@property (nonatomic,readonly) IDSAccountKeyHistory * accountKeyHistory;                                        //@synthesize accountKeyHistory=_accountKeyHistory - In the implementation block
@property (nonatomic,readonly) NSString * anonymizedSenderID;                                                   //@synthesize anonymizedSenderID=_anonymizedSenderID - In the implementation block
@property (nonatomic,readonly) BOOL verifiedBusiness;                                                           //@synthesize verifiedBusiness=_verifiedBusiness - In the implementation block
@property (nonatomic,readonly) NSString * senderCorrelationIdentifier;                                          //@synthesize senderCorrelationIdentifier=_senderCorrelationIdentifier - In the implementation block
@property (nonatomic,retain,readonly) IDSURI * URI;                                                             //@synthesize URI=_URI - In the implementation block
@property (nonatomic,retain,readonly) NSData * pushToken;                                                       //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,retain,readonly) IDSMPPublicLegacyIdentity * publicMessageProtectionIdentity;              //@synthesize publicMessageProtectionIdentity=_publicMessageProtectionIdentity - In the implementation block
@property (nonatomic,retain,readonly) IDSPublicDeviceIdentity * devicePublicIdentity;                           //@synthesize devicePublicIdentity=_devicePublicIdentity - In the implementation block
@property (nonatomic,retain,readonly) IDSEndpointCapabilities * capabilities;                                   //@synthesize capabilities=_capabilities - In the implementation block
+(id)publicAccountIdentityFromKeyHistory:(id)arg1 ;
+(id)publicDeviceIdentityFromClientData:(id)arg1 accountPublicIdentity:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(NSDate *)expireDate;
-(IDSPublicDeviceIdentity *)devicePublicIdentity;
-(id)initWithURI:(id)arg1 clientData:(id)arg2 pushToken:(id)arg3 sessionToken:(id)arg4 expireDate:(id)arg5 refreshDate:(id)arg6 accountKeyHistory:(id)arg7 anonymizedSenderID:(id)arg8 verifiedBusiness:(BOOL)arg9 senderCorrelationIdentifier:(id)arg10 ;
-(id)initWithURI:(id)arg1 clientData:(id)arg2 pushToken:(id)arg3 sessionToken:(id)arg4 expireDate:(id)arg5 refreshDate:(id)arg6 accountKeyHistory:(id)arg7 anonymizedSenderID:(id)arg8 verifiedBusiness:(BOOL)arg9 serializedPublicMessageProtectionIdentity:(id)arg10 senderCorrelationIdentifier:(id)arg11 ;
-(NSString *)anonymizedSenderID;
-(BOOL)verifiedBusiness;
-(IDSAccountKeyHistory *)accountKeyHistory;
-(id)initWithURI:(id)arg1 clientData:(id)arg2 pushToken:(id)arg3 sessionToken:(id)arg4 expireDate:(id)arg5 refreshDate:(id)arg6 accountKeyHistory:(id)arg7 ;
-(IDSMPPublicLegacyIdentity *)publicMessageProtectionIdentity;
-(NSDate *)refreshDate;
-(NSData *)sessionToken;
-(IDSURI *)URI;
-(IDSEndpointCapabilities *)capabilities;
-(NSString *)senderCorrelationIdentifier;
-(NSData *)pushToken;
-(BOOL)isEqualToEndpoint:(id)arg1 ;
-(NSDictionary *)clientData;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
