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

@class NSNumber, NSArray, NSString;

@interface CEMSystemDashboardDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadWhiteListEnabled;
	NSArray* _payloadWhiteList;

}

@property (nonatomic,copy) NSNumber * payloadWhiteListEnabled;              //@synthesize payloadWhiteListEnabled=_payloadWhiteListEnabled - In the implementation block
@property (nonatomic,copy) NSArray * payloadWhiteList;                      //@synthesize payloadWhiteList=_payloadWhiteList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withWhiteListEnabled:(id)arg2 withWhiteList:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withWhiteListEnabled:(id)arg2 withWhiteList:(id)arg3 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadWhiteListEnabled:(NSNumber *)arg1 ;
-(NSNumber *)payloadWhiteListEnabled;
-(void)setPayloadWhiteList:(NSArray *)arg1 ;
-(NSArray *)payloadWhiteList;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

