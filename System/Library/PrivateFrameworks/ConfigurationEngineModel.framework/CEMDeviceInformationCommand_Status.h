/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMDeviceInformationCommand_StatusQueryResponses, CEMDeviceInformationCommand_StatusErrorResponses;

@interface CEMDeviceInformationCommand_Status : CEMPayloadBase {

	CEMDeviceInformationCommand_StatusQueryResponses* _statusQueryResponses;
	CEMDeviceInformationCommand_StatusErrorResponses* _statusErrorResponses;

}

@property (nonatomic,copy) CEMDeviceInformationCommand_StatusQueryResponses * statusQueryResponses;              //@synthesize statusQueryResponses=_statusQueryResponses - In the implementation block
@property (nonatomic,copy) CEMDeviceInformationCommand_StatusErrorResponses * statusErrorResponses;              //@synthesize statusErrorResponses=_statusErrorResponses - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithQueryResponses:(id)arg1 withErrorResponses:(id)arg2 ;
+(id)buildRequiredOnlyWithQueryResponses:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusQueryResponses:(CEMDeviceInformationCommand_StatusQueryResponses *)arg1 ;
-(void)setStatusErrorResponses:(CEMDeviceInformationCommand_StatusErrorResponses *)arg1 ;
-(CEMDeviceInformationCommand_StatusQueryResponses *)statusQueryResponses;
-(CEMDeviceInformationCommand_StatusErrorResponses *)statusErrorResponses;
@end

