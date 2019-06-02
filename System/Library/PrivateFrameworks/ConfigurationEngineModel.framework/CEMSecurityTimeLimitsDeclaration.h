/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, CEMSecurityTimeLimitsDeclaration_TimeLimits, NSString;

@interface CEMSecurityTimeLimitsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadFamilyControlsEnabled;
	CEMSecurityTimeLimitsDeclaration_TimeLimits* _payloadTimeLimits;

}

@property (nonatomic,copy) NSNumber * payloadFamilyControlsEnabled;                                      //@synthesize payloadFamilyControlsEnabled=_payloadFamilyControlsEnabled - In the implementation block
@property (nonatomic,copy) CEMSecurityTimeLimitsDeclaration_TimeLimits * payloadTimeLimits;              //@synthesize payloadTimeLimits=_payloadTimeLimits - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withFamilyControlsEnabled:(id)arg2 withTimeLimits:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withFamilyControlsEnabled:(id)arg2 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadFamilyControlsEnabled:(NSNumber *)arg1 ;
-(void)setPayloadTimeLimits:(CEMSecurityTimeLimitsDeclaration_TimeLimits *)arg1 ;
-(NSNumber *)payloadFamilyControlsEnabled;
-(CEMSecurityTimeLimitsDeclaration_TimeLimits *)payloadTimeLimits;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

