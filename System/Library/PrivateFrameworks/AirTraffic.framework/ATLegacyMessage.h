/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError, NSDictionary, NSData;

@interface ATLegacyMessage : NSObject {

	unsigned long long _messageType;
	unsigned _messageId;
	NSString* _name;
	NSString* _dataClass;
	NSError* _result;
	NSDictionary* _params;
	NSData* _payload;
	double _timestamp;
	NSData* _sig;
	unsigned _session;

}

@property (assign,nonatomic) unsigned long long messageType;              //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) unsigned messageId;                          //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,retain) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * dataClass;                        //@synthesize dataClass=_dataClass - In the implementation block
@property (nonatomic,retain) NSError * result;                            //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                   //@synthesize params=_params - In the implementation block
@property (nonatomic,retain) NSData * payload;                            //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) double timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSData * sig;                                //@synthesize sig=_sig - In the implementation block
@property (assign,nonatomic) unsigned sessionNumber;                      //@synthesize session=_session - In the implementation block
+(id)messageFromDictionary:(id)arg1 ;
+(id)_messageTypeString:(unsigned long long)arg1 ;
+(unsigned)nextSessionNumber;
+(id)messageFromHeader:(id)arg1 withParams:(id)arg2 andPayload:(id)arg3 ;
+(id)messageWithName:(id)arg1 parameters:(id)arg2 ;
+(id)messageWithName:(id)arg1 parameters:(id)arg2 session:(unsigned)arg3 ;
+(void)setSessionNumber:(unsigned)arg1 ;
+(unsigned)currentSessionNumber;
+(id)messageFromData:(id)arg1 ;
-(void)setMessageId:(unsigned)arg1 ;
-(unsigned)messageId;
-(void)setMessageType:(unsigned long long)arg1 ;
-(unsigned long long)messageType;
-(NSString *)dataClass;
-(id)partialResponseWithParameters:(id)arg1 ;
-(id)responseWithResultError:(id)arg1 parameters:(id)arg2 ;
-(void)setSig:(NSData *)arg1 ;
-(void)setDataClass:(NSString *)arg1 ;
-(unsigned)sessionNumber;
-(void)setSessionNumber:(unsigned)arg1 ;
-(void)setResult:(NSError *)arg1 ;
-(NSData *)sig;
-(id)parameterForKey:(id)arg1 ;
-(id)dictionary;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(double)timestamp;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)parameters;
-(void)setTimestamp:(double)arg1 ;
-(NSError *)result;
-(id)data;
-(NSData *)payload;
-(void)setPayload:(NSData *)arg1 ;
-(void)setParameters:(NSDictionary *)arg1 ;
@end

