/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDNanoSyncDescription.h>

@class NSString, HDIDSMessageCenter, IDSDevice, NSData, NSDictionary;

@interface HDIDSOutgoingResponse : NSObject <HDNanoSyncDescription> {

	BOOL _doNotCompress;
	BOOL _forceLocalDelivery;
	BOOL _sent;
	unsigned short _requestMessageID;
	unsigned short _messageID;
	NSString* _requestIdsIdentifier;
	HDIDSMessageCenter* _messageCenter;
	IDSDevice* _toDevice;
	NSString* _idsIdentifier;
	NSData* _data;
	unsigned long long _priority;
	double _sendTimeout;
	NSDictionary* _persistentUserInfo;
	id _pbResponse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * requestIdsIdentifier;                   //@synthesize requestIdsIdentifier=_requestIdsIdentifier - In the implementation block
@property (nonatomic,retain) HDIDSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (assign,nonatomic) unsigned short requestMessageID;                 //@synthesize requestMessageID=_requestMessageID - In the implementation block
@property (getter=isSent) BOOL sent;                                          //@synthesize sent=_sent - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                        //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain) IDSDevice * toDevice;                            //@synthesize toDevice=_toDevice - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                          //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) id pbResponse;                                   //@synthesize pbResponse=_pbResponse - In the implementation block
@property (nonatomic,retain) NSData * data;                                   //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                     //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double sendTimeout;                              //@synthesize sendTimeout=_sendTimeout - In the implementation block
@property (nonatomic,retain) NSDictionary * persistentUserInfo;               //@synthesize persistentUserInfo=_persistentUserInfo - In the implementation block
@property (assign,nonatomic) BOOL doNotCompress;                              //@synthesize doNotCompress=_doNotCompress - In the implementation block
@property (assign,nonatomic) BOOL forceLocalDelivery;                         //@synthesize forceLocalDelivery=_forceLocalDelivery - In the implementation block
-(unsigned short)messageID;
-(IDSDevice *)toDevice;
-(id)nanoSyncDescription;
-(NSString *)idsIdentifier;
-(void)configureWithActivationRestore:(id)arg1 syncStore:(id)arg2 ;
-(id)pbResponse;
-(void)configureWithStatus:(id)arg1 syncStore:(id)arg2 ;
-(void)setPbResponse:(id)arg1 ;
-(void)setPersistentUserInfo:(NSDictionary *)arg1 ;
-(HDIDSMessageCenter *)messageCenter;
-(void)setMessageCenter:(HDIDSMessageCenter *)arg1 ;
-(NSDictionary *)persistentUserInfo;
-(double)sendTimeout;
-(BOOL)doNotCompress;
-(BOOL)forceLocalDelivery;
-(void)setMessageID:(unsigned short)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(unsigned short)requestMessageID;
-(BOOL)isSent;
-(void)setSent:(BOOL)arg1 ;
-(void)setSendTimeout:(double)arg1 ;
-(void)setDoNotCompress:(BOOL)arg1 ;
-(void)setForceLocalDelivery:(BOOL)arg1 ;
-(void)setToDevice:(IDSDevice *)arg1 ;
-(void)setRequestMessageID:(unsigned short)arg1 ;
-(NSString *)requestIdsIdentifier;
-(void)setRequestIdsIdentifier:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)setPriority:(unsigned long long)arg1 ;
-(unsigned long long)priority;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)send;
@end

