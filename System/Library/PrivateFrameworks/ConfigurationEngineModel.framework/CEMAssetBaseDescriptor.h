/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMAssetBaseDescriptor : CEMPayloadBase {

	NSString* _payloadTitle;
	NSString* _payloadDescription;

}

@property (nonatomic,copy) NSString * payloadTitle;                    //@synthesize payloadTitle=_payloadTitle - In the implementation block
@property (nonatomic,copy) NSString * payloadDescription;              //@synthesize payloadDescription=_payloadDescription - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithTitle:(id)arg1 withDescription:(id)arg2 ;
+(id)buildRequiredOnlyWithTitle:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadTitle:(NSString *)arg1 ;
-(void)setPayloadDescription:(NSString *)arg1 ;
-(NSString *)payloadTitle;
-(NSString *)payloadDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

