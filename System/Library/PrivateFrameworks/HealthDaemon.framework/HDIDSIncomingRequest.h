/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDNanoSyncDescription.h>

@class IDSDevice, NSString, NSData, HDIDSOutgoingResponse, HDIDSMessageCenter;

@interface HDIDSIncomingRequest : NSObject <HDNanoSyncDescription> {

	BOOL _expectsResponse;
	unsigned short _messageID;
	IDSDevice* _fromDevice;
	NSString* _idsIdentifier;
	NSData* _data;
	unsigned long long _priority;
	HDIDSOutgoingResponse* _response;
	HDIDSMessageCenter* _messageCenter;
	id _pbRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) HDIDSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (nonatomic,retain) IDSDevice * fromDevice;                                 //@synthesize fromDevice=_fromDevice - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                               //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                                 //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                            //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) BOOL expectsResponse;                                   //@synthesize expectsResponse=_expectsResponse - In the implementation block
@property (nonatomic,retain) id pbRequest;                                           //@synthesize pbRequest=_pbRequest - In the implementation block
@property (nonatomic,retain) HDIDSOutgoingResponse * response;                       //@synthesize response=_response - In the implementation block
-(void)setResponse:(HDIDSOutgoingResponse *)arg1 ;
-(unsigned short)messageID;
-(IDSDevice *)fromDevice;
-(id)nanoSyncDescription;
-(id)pbRequest;
-(NSString *)idsIdentifier;
-(BOOL)expectsResponse;
-(void)setPbRequest:(id)arg1 ;
-(HDIDSMessageCenter *)messageCenter;
-(void)setMessageCenter:(HDIDSMessageCenter *)arg1 ;
-(void)setMessageID:(unsigned short)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setFromDevice:(IDSDevice *)arg1 ;
-(void)setExpectsResponse:(BOOL)arg1 ;
-(void)configureResponse;
-(void)dealloc;
-(NSString *)description;
-(void)setPriority:(unsigned long long)arg1 ;
-(unsigned long long)priority;
-(NSData *)data;
-(HDIDSOutgoingResponse *)response;
-(void)setData:(NSData *)arg1 ;
@end

