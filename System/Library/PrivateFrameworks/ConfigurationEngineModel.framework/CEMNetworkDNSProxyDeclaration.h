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

@class NSString, CEMAnyPayload;

@interface CEMNetworkDNSProxyDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadAppBundleIdentifier;
	NSString* _payloadProviderBundleIdentifier;
	CEMAnyPayload* _payloadProviderConfiguration;

}

@property (nonatomic,copy) NSString * payloadAppBundleIdentifier;                     //@synthesize payloadAppBundleIdentifier=_payloadAppBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * payloadProviderBundleIdentifier;                //@synthesize payloadProviderBundleIdentifier=_payloadProviderBundleIdentifier - In the implementation block
@property (nonatomic,copy) CEMAnyPayload * payloadProviderConfiguration;              //@synthesize payloadProviderConfiguration=_payloadProviderConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withAppBundleIdentifier:(id)arg2 withProviderBundleIdentifier:(id)arg3 withProviderConfiguration:(id)arg4 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withAppBundleIdentifier:(id)arg2 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAppBundleIdentifier:(NSString *)arg1 ;
-(void)setPayloadProviderBundleIdentifier:(NSString *)arg1 ;
-(void)setPayloadProviderConfiguration:(CEMAnyPayload *)arg1 ;
-(NSString *)payloadAppBundleIdentifier;
-(NSString *)payloadProviderBundleIdentifier;
-(CEMAnyPayload *)payloadProviderConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

