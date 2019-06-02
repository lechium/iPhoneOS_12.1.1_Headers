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

@class NSArray, NSString;

@interface CEMSystemAirPlayDestinationsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSArray* _payloadWhitelist;
	NSArray* _payloadPasswords;

}

@property (nonatomic,copy) NSArray * payloadWhitelist;              //@synthesize payloadWhitelist=_payloadWhitelist - In the implementation block
@property (nonatomic,copy) NSArray * payloadPasswords;              //@synthesize payloadPasswords=_payloadPasswords - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withWhitelist:(id)arg2 withPasswords:(id)arg3 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadWhitelist:(NSArray *)arg1 ;
-(void)setPayloadPasswords:(NSArray *)arg1 ;
-(NSArray *)payloadWhitelist;
-(NSArray *)payloadPasswords;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

