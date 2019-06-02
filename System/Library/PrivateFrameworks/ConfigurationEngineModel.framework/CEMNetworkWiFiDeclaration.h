/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString, CEMNetworkWiFiDeclaration_EAPClientConfiguration, NSArray, CEMNetworkWiFiDeclaration_QoSMarkingPolicy;

@interface CEMNetworkWiFiDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAutoJoin;
	NSString* _payloadSSIDSTR;
	NSNumber* _payloadHIDDENNETWORK;
	NSString* _payloadProxyType;
	NSString* _payloadEncryptionType;
	NSString* _payloadPassword;
	NSString* _payloadPayloadCertificateUUID;
	CEMNetworkWiFiDeclaration_EAPClientConfiguration* _payloadEAPClientConfiguration;
	NSString* _payloadDisplayedOperatorName;
	NSString* _payloadDomainName;
	NSArray* _payloadRoamingConsortiumOIs;
	NSNumber* _payloadServiceProviderRoamingEnabled;
	NSNumber* _payloadIsHotspot;
	NSString* _payloadHESSID;
	NSArray* _payloadNAIRealmNames;
	NSArray* _payloadMCCAndMNCs;
	NSNumber* _payloadCaptiveBypass;
	CEMNetworkWiFiDeclaration_QoSMarkingPolicy* _payloadQoSMarkingPolicy;
	NSString* _payloadInterface;
	NSArray* _payloadSetupModes;
	NSNumber* _payloadPriority;
	NSNumber* _payloadEnableIPv6;
	NSString* _payloadNONEXISTENT;
	NSNumber* _payloadTLSCertificateRequired;
	NSString* _payloadProxyServer;
	NSNumber* _payloadProxyServerPort;
	NSString* _payloadProxyUsername;
	NSString* _payloadProxyPassword;
	NSString* _payloadProxyPACURL;
	NSNumber* _payloadProxyPACFallbackAllowed;

}

@property (nonatomic,copy) NSNumber * payloadAutoJoin;                                                                    //@synthesize payloadAutoJoin=_payloadAutoJoin - In the implementation block
@property (nonatomic,copy) NSString * payloadSSIDSTR;                                                                     //@synthesize payloadSSIDSTR=_payloadSSIDSTR - In the implementation block
@property (nonatomic,copy) NSNumber * payloadHIDDENNETWORK;                                                               //@synthesize payloadHIDDENNETWORK=_payloadHIDDENNETWORK - In the implementation block
@property (nonatomic,copy) NSString * payloadProxyType;                                                                   //@synthesize payloadProxyType=_payloadProxyType - In the implementation block
@property (nonatomic,copy) NSString * payloadEncryptionType;                                                              //@synthesize payloadEncryptionType=_payloadEncryptionType - In the implementation block
@property (nonatomic,copy) NSString * payloadPassword;                                                                    //@synthesize payloadPassword=_payloadPassword - In the implementation block
@property (nonatomic,copy) NSString * payloadPayloadCertificateUUID;                                                      //@synthesize payloadPayloadCertificateUUID=_payloadPayloadCertificateUUID - In the implementation block
@property (nonatomic,copy) CEMNetworkWiFiDeclaration_EAPClientConfiguration * payloadEAPClientConfiguration;              //@synthesize payloadEAPClientConfiguration=_payloadEAPClientConfiguration - In the implementation block
@property (nonatomic,copy) NSString * payloadDisplayedOperatorName;                                                       //@synthesize payloadDisplayedOperatorName=_payloadDisplayedOperatorName - In the implementation block
@property (nonatomic,copy) NSString * payloadDomainName;                                                                  //@synthesize payloadDomainName=_payloadDomainName - In the implementation block
@property (nonatomic,copy) NSArray * payloadRoamingConsortiumOIs;                                                         //@synthesize payloadRoamingConsortiumOIs=_payloadRoamingConsortiumOIs - In the implementation block
@property (nonatomic,copy) NSNumber * payloadServiceProviderRoamingEnabled;                                               //@synthesize payloadServiceProviderRoamingEnabled=_payloadServiceProviderRoamingEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * payloadIsHotspot;                                                                   //@synthesize payloadIsHotspot=_payloadIsHotspot - In the implementation block
@property (nonatomic,copy) NSString * payloadHESSID;                                                                      //@synthesize payloadHESSID=_payloadHESSID - In the implementation block
@property (nonatomic,copy) NSArray * payloadNAIRealmNames;                                                                //@synthesize payloadNAIRealmNames=_payloadNAIRealmNames - In the implementation block
@property (nonatomic,copy) NSArray * payloadMCCAndMNCs;                                                                   //@synthesize payloadMCCAndMNCs=_payloadMCCAndMNCs - In the implementation block
@property (nonatomic,copy) NSNumber * payloadCaptiveBypass;                                                               //@synthesize payloadCaptiveBypass=_payloadCaptiveBypass - In the implementation block
@property (nonatomic,copy) CEMNetworkWiFiDeclaration_QoSMarkingPolicy * payloadQoSMarkingPolicy;                          //@synthesize payloadQoSMarkingPolicy=_payloadQoSMarkingPolicy - In the implementation block
@property (nonatomic,copy) NSString * payloadInterface;                                                                   //@synthesize payloadInterface=_payloadInterface - In the implementation block
@property (nonatomic,copy) NSArray * payloadSetupModes;                                                                   //@synthesize payloadSetupModes=_payloadSetupModes - In the implementation block
@property (nonatomic,copy) NSNumber * payloadPriority;                                                                    //@synthesize payloadPriority=_payloadPriority - In the implementation block
@property (nonatomic,copy) NSNumber * payloadEnableIPv6;                                                                  //@synthesize payloadEnableIPv6=_payloadEnableIPv6 - In the implementation block
@property (nonatomic,copy) NSString * payloadNONEXISTENT;                                                                 //@synthesize payloadNONEXISTENT=_payloadNONEXISTENT - In the implementation block
@property (nonatomic,copy) NSNumber * payloadTLSCertificateRequired;                                                      //@synthesize payloadTLSCertificateRequired=_payloadTLSCertificateRequired - In the implementation block
@property (nonatomic,copy) NSString * payloadProxyServer;                                                                 //@synthesize payloadProxyServer=_payloadProxyServer - In the implementation block
@property (nonatomic,copy) NSNumber * payloadProxyServerPort;                                                             //@synthesize payloadProxyServerPort=_payloadProxyServerPort - In the implementation block
@property (nonatomic,copy) NSString * payloadProxyUsername;                                                               //@synthesize payloadProxyUsername=_payloadProxyUsername - In the implementation block
@property (nonatomic,copy) NSString * payloadProxyPassword;                                                               //@synthesize payloadProxyPassword=_payloadProxyPassword - In the implementation block
@property (nonatomic,copy) NSString * payloadProxyPACURL;                                                                 //@synthesize payloadProxyPACURL=_payloadProxyPACURL - In the implementation block
@property (nonatomic,copy) NSNumber * payloadProxyPACFallbackAllowed;                                                     //@synthesize payloadProxyPACFallbackAllowed=_payloadProxyPACFallbackAllowed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg1 withAutoJoin:(id)arg2 withSSIDSTR:(id)arg3 withHIDDENNETWORK:(id)arg4 withProxyType:(id)arg5 withEncryptionType:(id)arg6 withPassword:(id)arg7 withPayloadCertificateUUID:(id)arg8 withEAPClientConfiguration:(id)arg9 withDisplayedOperatorName:(id)arg10 withDomainName:(id)arg11 withRoamingConsortiumOIs:(id)arg12 withServiceProviderRoamingEnabled:(id)arg13 withIsHotspot:(id)arg14 withHESSID:(id)arg15 withNAIRealmNames:(id)arg16 withMCCAndMNCs:(id)arg17 withCaptiveBypass:(id)arg18 withQoSMarkingPolicy:(id)arg19 withInterface:(id)arg20 withSetupModes:(id)arg21 withPriority:(id)arg22 withEnableIPv6:(id)arg23 withNONEXISTENT:(id)arg24 withTLSCertificateRequired:(id)arg25 withProxyServer:(id)arg26 withProxyServerPort:(id)arg27 withProxyUsername:(id)arg28 withProxyPassword:(id)arg29 withProxyPACURL:(id)arg30 withProxyPACFallbackAllowed:(id)arg31 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadPassword:(NSString *)arg1 ;
-(NSString *)payloadPassword;
-(void)setPayloadProxyServer:(NSString *)arg1 ;
-(NSString *)payloadProxyServer;
-(void)setPayloadProxyType:(NSString *)arg1 ;
-(void)setPayloadProxyServerPort:(NSNumber *)arg1 ;
-(void)setPayloadProxyUsername:(NSString *)arg1 ;
-(void)setPayloadProxyPassword:(NSString *)arg1 ;
-(void)setPayloadProxyPACURL:(NSString *)arg1 ;
-(void)setPayloadProxyPACFallbackAllowed:(NSNumber *)arg1 ;
-(NSString *)payloadProxyType;
-(NSNumber *)payloadProxyServerPort;
-(NSString *)payloadProxyUsername;
-(NSString *)payloadProxyPassword;
-(NSString *)payloadProxyPACURL;
-(NSNumber *)payloadProxyPACFallbackAllowed;
-(void)setPayloadPayloadCertificateUUID:(NSString *)arg1 ;
-(NSString *)payloadPayloadCertificateUUID;
-(void)setPayloadAutoJoin:(NSNumber *)arg1 ;
-(void)setPayloadSSIDSTR:(NSString *)arg1 ;
-(void)setPayloadHIDDENNETWORK:(NSNumber *)arg1 ;
-(void)setPayloadEncryptionType:(NSString *)arg1 ;
-(void)setPayloadEAPClientConfiguration:(CEMNetworkWiFiDeclaration_EAPClientConfiguration *)arg1 ;
-(void)setPayloadDisplayedOperatorName:(NSString *)arg1 ;
-(void)setPayloadDomainName:(NSString *)arg1 ;
-(void)setPayloadRoamingConsortiumOIs:(NSArray *)arg1 ;
-(void)setPayloadServiceProviderRoamingEnabled:(NSNumber *)arg1 ;
-(void)setPayloadIsHotspot:(NSNumber *)arg1 ;
-(void)setPayloadHESSID:(NSString *)arg1 ;
-(void)setPayloadNAIRealmNames:(NSArray *)arg1 ;
-(void)setPayloadMCCAndMNCs:(NSArray *)arg1 ;
-(void)setPayloadCaptiveBypass:(NSNumber *)arg1 ;
-(void)setPayloadQoSMarkingPolicy:(CEMNetworkWiFiDeclaration_QoSMarkingPolicy *)arg1 ;
-(void)setPayloadInterface:(NSString *)arg1 ;
-(void)setPayloadSetupModes:(NSArray *)arg1 ;
-(void)setPayloadPriority:(NSNumber *)arg1 ;
-(void)setPayloadEnableIPv6:(NSNumber *)arg1 ;
-(void)setPayloadNONEXISTENT:(NSString *)arg1 ;
-(void)setPayloadTLSCertificateRequired:(NSNumber *)arg1 ;
-(NSNumber *)payloadAutoJoin;
-(NSString *)payloadSSIDSTR;
-(NSNumber *)payloadHIDDENNETWORK;
-(NSString *)payloadEncryptionType;
-(CEMNetworkWiFiDeclaration_EAPClientConfiguration *)payloadEAPClientConfiguration;
-(NSString *)payloadDisplayedOperatorName;
-(NSString *)payloadDomainName;
-(NSArray *)payloadRoamingConsortiumOIs;
-(NSNumber *)payloadServiceProviderRoamingEnabled;
-(NSNumber *)payloadIsHotspot;
-(NSString *)payloadHESSID;
-(NSArray *)payloadNAIRealmNames;
-(NSArray *)payloadMCCAndMNCs;
-(NSNumber *)payloadCaptiveBypass;
-(CEMNetworkWiFiDeclaration_QoSMarkingPolicy *)payloadQoSMarkingPolicy;
-(NSString *)payloadInterface;
-(NSArray *)payloadSetupModes;
-(NSNumber *)payloadPriority;
-(NSNumber *)payloadEnableIPv6;
-(NSString *)payloadNONEXISTENT;
-(NSNumber *)payloadTLSCertificateRequired;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

