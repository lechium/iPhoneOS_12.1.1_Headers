/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTCheckpointTrace.h>

@class NSString, CUTCheckpointRange;

@interface IDSIncomingMessageCheckpointTrace : CUTCheckpointTrace {

	NSString* _guid;
	NSString* _service;
	long long _command;
	CUTCheckpointRange* _storeInMessageStore;
	CUTCheckpointRange* _decryption;
	CUTCheckpointRange* _sendToClient;

}

@property (nonatomic,retain) NSString * guid;                                         //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) NSString * service;                                    //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) long long command;                                     //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * storeInMessageStore;              //@synthesize storeInMessageStore=_storeInMessageStore - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * decryption;                       //@synthesize decryption=_decryption - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * sendToClient;                     //@synthesize sendToClient=_sendToClient - In the implementation block
-(NSString *)service;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(id)_reportMetadata;
-(id)initWithService:(id)arg1 command:(long long)arg2 uniqueIdentifier:(id)arg3 ;
-(CUTCheckpointRange *)storeInMessageStore;
-(CUTCheckpointRange *)decryption;
-(CUTCheckpointRange *)sendToClient;
-(long long)command;
@end

