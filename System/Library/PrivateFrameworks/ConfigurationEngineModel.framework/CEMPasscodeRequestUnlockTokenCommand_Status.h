/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSData;

@interface CEMPasscodeRequestUnlockTokenCommand_Status : CEMPayloadBase {

	NSData* _statusUnlockToken;

}

@property (nonatomic,copy) NSData * statusUnlockToken;              //@synthesize statusUnlockToken=_statusUnlockToken - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildRequiredOnly;
+(id)buildWithUnlockToken:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusUnlockToken:(NSData *)arg1 ;
-(NSData *)statusUnlockToken;
@end

