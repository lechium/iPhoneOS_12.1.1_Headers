/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMApplicationSettingsManagedDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowOpenFromManagedToUnmanaged;
	NSNumber* _payloadAllowOpenFromUnmanagedToManaged;
	NSNumber* _payloadForceAirDropUnmanaged;
	NSNumber* _payloadAllowManagedAppsCloudSync;

}

@property (nonatomic,copy) NSNumber * payloadAllowOpenFromManagedToUnmanaged;              //@synthesize payloadAllowOpenFromManagedToUnmanaged=_payloadAllowOpenFromManagedToUnmanaged - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowOpenFromUnmanagedToManaged;              //@synthesize payloadAllowOpenFromUnmanagedToManaged=_payloadAllowOpenFromUnmanagedToManaged - In the implementation block
@property (nonatomic,copy) NSNumber * payloadForceAirDropUnmanaged;                        //@synthesize payloadForceAirDropUnmanaged=_payloadForceAirDropUnmanaged - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowManagedAppsCloudSync;                    //@synthesize payloadAllowManagedAppsCloudSync=_payloadAllowManagedAppsCloudSync - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withAllowOpenFromManagedToUnmanaged:(id)arg2 withAllowOpenFromUnmanagedToManaged:(id)arg3 withForceAirDropUnmanaged:(id)arg4 withAllowManagedAppsCloudSync:(id)arg5 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowOpenFromManagedToUnmanaged:(NSNumber *)arg1 ;
-(void)setPayloadAllowOpenFromUnmanagedToManaged:(NSNumber *)arg1 ;
-(void)setPayloadForceAirDropUnmanaged:(NSNumber *)arg1 ;
-(void)setPayloadAllowManagedAppsCloudSync:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowOpenFromManagedToUnmanaged;
-(NSNumber *)payloadAllowOpenFromUnmanagedToManaged;
-(NSNumber *)payloadForceAirDropUnmanaged;
-(NSNumber *)payloadAllowManagedAppsCloudSync;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

