/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMSecurityInformationCommand_StatusSecurityInfo;

@interface CEMSecurityInformationCommand_Status : CEMPayloadBase {

	CEMSecurityInformationCommand_StatusSecurityInfo* _statusSecurityInfo;

}

@property (nonatomic,copy) CEMSecurityInformationCommand_StatusSecurityInfo * statusSecurityInfo;              //@synthesize statusSecurityInfo=_statusSecurityInfo - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithSecurityInfo:(id)arg1 ;
+(id)buildRequiredOnlyWithSecurityInfo:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusSecurityInfo:(CEMSecurityInformationCommand_StatusSecurityInfo *)arg1 ;
-(CEMSecurityInformationCommand_StatusSecurityInfo *)statusSecurityInfo;
@end

