/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSDictionary, NSArray, NSDate;

@interface WFNetworkProfile : NSObject <NSMutableCopying> {

	BOOL _hidden;
	BOOL _managed;
	BOOL _captive;
	BOOL _adhoc;
	BOOL _HS20Network;
	BOOL _HS20NetworkProvisioned;
	BOOL _autoJoinEnabled;
	BOOL _autoLoginEnabled;
	BOOL _carPlay;
	BOOL _carrierBased;
	BOOL _canExposeIMSI;
	BOOL _fetchedPassword;
	BOOL _requiresPassword;
	SecIdentityRef _TLSIdentity;
	NSString* _password;
	NSDictionary* _scanAttributes;
	NSArray* _certificateChain;
	NSString* _username;
	NSString* _bssid;
	NSString* _ssid;
	NSString* _HS20AccountName;
	NSString* _HS20Badge;
	long long _carPlayType;
	NSString* _carPlayUUID;
	NSString* _policyUUID;
	long long _securityMode;
	NSDate* _addedDate;
	NSDate* _lastAutoJoinDate;
	NSString* _originatorBundleIdentifier;
	NSString* _previousPassword;
	NSDictionary* _enterpriseProfile;

}

@property (nonatomic,retain) NSDictionary * enterpriseProfile;                                         //@synthesize enterpriseProfile=_enterpriseProfile - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                              //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,retain) NSString * bssid;                                                         //@synthesize bssid=_bssid - In the implementation block
@property (nonatomic,retain) NSString * ssid;                                                          //@synthesize ssid=_ssid - In the implementation block
@property (assign,nonatomic) long long securityMode;                                                   //@synthesize securityMode=_securityMode - In the implementation block
@property (nonatomic,retain) NSDictionary * scanAttributes;                                            //@synthesize scanAttributes=_scanAttributes - In the implementation block
@property (assign,getter=isAdhoc,nonatomic) BOOL adhoc;                                                //@synthesize adhoc=_adhoc - In the implementation block
@property (assign,getter=isCaptive,nonatomic) BOOL captive;                                            //@synthesize captive=_captive - In the implementation block
@property (assign,getter=isHS20Network,nonatomic) BOOL HS20Network;                                    //@synthesize HS20Network=_HS20Network - In the implementation block
@property (assign,getter=isAutoJoinEnabled,nonatomic) BOOL autoJoinEnabled;                            //@synthesize autoJoinEnabled=_autoJoinEnabled - In the implementation block
@property (assign,getter=isCarPlay,nonatomic) BOOL carPlay;                                            //@synthesize carPlay=_carPlay - In the implementation block
@property (assign,nonatomic) long long carPlayType;                                                    //@synthesize carPlayType=_carPlayType - In the implementation block
@property (nonatomic,copy) NSString * carPlayUUID;                                                     //@synthesize carPlayUUID=_carPlayUUID - In the implementation block
@property (nonatomic,copy) NSString * policyUUID;                                                      //@synthesize policyUUID=_policyUUID - In the implementation block
@property (nonatomic,copy) NSString * originatorBundleIdentifier;                                      //@synthesize originatorBundleIdentifier=_originatorBundleIdentifier - In the implementation block
@property (assign,getter=isHS20NetworkProvisioned,nonatomic) BOOL HS20NetworkProvisioned;              //@synthesize HS20NetworkProvisioned=_HS20NetworkProvisioned - In the implementation block
@property (assign,getter=isCarrierBased,nonatomic) BOOL carrierBased;                                  //@synthesize carrierBased=_carrierBased - In the implementation block
@property (nonatomic,retain) NSString * HS20AccountName;                                               //@synthesize HS20AccountName=_HS20AccountName - In the implementation block
@property (nonatomic,retain) NSString * HS20Badge;                                                     //@synthesize HS20Badge=_HS20Badge - In the implementation block
@property (assign,nonatomic) BOOL canExposeIMSI;                                                       //@synthesize canExposeIMSI=_canExposeIMSI - In the implementation block
@property (assign,nonatomic) SecIdentityRef TLSIdentity;                                               //@synthesize TLSIdentity=_TLSIdentity - In the implementation block
@property (assign,nonatomic) BOOL fetchedPassword;                                                     //@synthesize fetchedPassword=_fetchedPassword - In the implementation block
@property (assign,nonatomic) BOOL requiresPassword;                                                    //@synthesize requiresPassword=_requiresPassword - In the implementation block
@property (nonatomic,readonly) NSArray * certificateChain;                                             //@synthesize certificateChain=_certificateChain - In the implementation block
@property (nonatomic,readonly) NSString * username;                                                    //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * password;                                                    //@synthesize password=_password - In the implementation block
@property (getter=isManaged,nonatomic,readonly) BOOL managed;                                          //@synthesize managed=_managed - In the implementation block
@property (getter=isAutoLoginEnabled,nonatomic,readonly) BOOL autoLoginEnabled;                        //@synthesize autoLoginEnabled=_autoLoginEnabled - In the implementation block
@property (nonatomic,readonly) BOOL requiresUsernameAndPassword; 
@property (nonatomic,readonly) NSDate * addedDate;                                                     //@synthesize addedDate=_addedDate - In the implementation block
@property (nonatomic,readonly) NSDate * lastAutoJoinDate;                                              //@synthesize lastAutoJoinDate=_lastAutoJoinDate - In the implementation block
@property (nonatomic,readonly) BOOL userProvidedPassword; 
@property (nonatomic,readonly) NSString * previousPassword;                                            //@synthesize previousPassword=_previousPassword - In the implementation block
+(BOOL)networkProfileRepresentSameNetwork:(id)arg1 toNetworkProfile:(id)arg2 ;
-(void)setSsid:(NSString *)arg1 ;
-(void)setCarPlay:(BOOL)arg1 ;
-(void)setBssid:(NSString *)arg1 ;
-(NSDate *)addedDate;
-(id)initWithNetwork:(id)arg1 ;
-(NSArray *)certificateChain;
-(long long)securityMode;
-(void)setSecurityMode:(long long)arg1 ;
-(BOOL)requiresPassword;
-(BOOL)isManaged;
-(NSString *)bssid;
-(NSDictionary *)enterpriseProfile;
-(NSDictionary *)scanAttributes;
-(void)setEnterpriseProfile:(NSDictionary *)arg1 ;
-(void)setScanAttributes:(NSDictionary *)arg1 ;
-(BOOL)isAdhoc;
-(BOOL)isCaptive;
-(void)setCaptive:(BOOL)arg1 ;
-(BOOL)isHS20Network;
-(void)setHS20Network:(BOOL)arg1 ;
-(BOOL)isHS20NetworkProvisioned;
-(void)setHS20NetworkProvisioned:(BOOL)arg1 ;
-(BOOL)isAutoJoinEnabled;
-(void)setAutoJoinEnabled:(BOOL)arg1 ;
-(BOOL)isAutoLoginEnabled;
-(SecIdentityRef)TLSIdentity;
-(void)setTLSIdentity:(SecIdentityRef)arg1 ;
-(NSString *)originatorBundleIdentifier;
-(void)setOriginatorBundleIdentifier:(NSString *)arg1 ;
-(BOOL)isCarrierBased;
-(NSString *)HS20AccountName;
-(NSString *)HS20Badge;
-(BOOL)userProvidedPassword;
-(NSString *)previousPassword;
-(NSString *)policyUUID;
-(id)initWithNetworkRef:(WiFiNetworkRef)arg1 ;
-(id)networkAttributes;
-(BOOL)isCarPlay;
-(BOOL)isEnterprise;
-(BOOL)canAttemptJoin;
-(BOOL)requiresTLSIdentityOnly;
-(NSString *)carPlayUUID;
-(BOOL)canExposeIMSI;
-(long long)carPlayType;
-(void)setRequiresPassword:(BOOL)arg1 ;
-(void)setAdhoc:(BOOL)arg1 ;
-(void)setCarPlayType:(long long)arg1 ;
-(void)setPolicyUUID:(NSString *)arg1 ;
-(void)setCarPlayUUID:(NSString *)arg1 ;
-(void)setCarrierBased:(BOOL)arg1 ;
-(void)setHS20AccountName:(NSString *)arg1 ;
-(void)setHS20Badge:(NSString *)arg1 ;
-(void)setCanExposeIMSI:(BOOL)arg1 ;
-(void)setFetchedPassword:(BOOL)arg1 ;
-(BOOL)profileContainsCarrierEAPType:(id)arg1 ;
-(BOOL)profileContainsEAPSIM:(id)arg1 ;
-(BOOL)profileContainsEAPAKA:(id)arg1 ;
-(BOOL)requiresUsernameAndPassword;
-(BOOL)fetchedPassword;
-(BOOL)TLSProfileCanJoin;
-(BOOL)isEqualToNetwork:(id)arg1 ;
-(NSDate *)lastAutoJoinDate;
-(NSString *)ssid;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)username;
-(NSString *)password;
@end

