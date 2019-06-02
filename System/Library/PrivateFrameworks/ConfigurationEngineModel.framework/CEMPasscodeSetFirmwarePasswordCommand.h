/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMCommandBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface CEMPasscodeSetFirmwarePasswordCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadCurrentPassword;
	NSString* _payloadNewPassword;
	NSNumber* _payloadAllowOroms;

}

@property (nonatomic,copy) NSString * payloadCurrentPassword;              //@synthesize payloadCurrentPassword=_payloadCurrentPassword - In the implementation block
@property (nonatomic,copy) NSString * payloadNewPassword;                  //@synthesize payloadNewPassword=_payloadNewPassword - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowOroms;                   //@synthesize payloadAllowOroms=_payloadAllowOroms - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 withCurrentPassword:(id)arg2 withNewPassword:(id)arg3 withAllowOroms:(id)arg4 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withNewPassword:(id)arg2 ;
-(BOOL)mustBeSupervised;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(int)executionLevel;
-(void)setPayloadCurrentPassword:(NSString *)arg1 ;
-(void)setPayloadNewPassword:(NSString *)arg1 ;
-(void)setPayloadAllowOroms:(NSNumber *)arg1 ;
-(NSString *)payloadCurrentPassword;
-(NSString *)payloadNewPassword;
-(NSNumber *)payloadAllowOroms;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

