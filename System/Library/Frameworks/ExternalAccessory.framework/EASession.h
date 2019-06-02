/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EAAccessory, NSString, NSInputStream, NSOutputStream;

@interface EASession : NSObject {

	EAAccessory* _accessory;
	unsigned _sessionID;
	NSString* _protocolString;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	BOOL _openCompleted;
	int _sock;
	BOOL _useSocketInterfaceForEASession;
	NSString* _eaSessionUUIDFromCoreAccessories;

}

@property (nonatomic,readonly) EAAccessory * accessory;                    //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSString * protocolString;                  //@synthesize protocolString=_protocolString - In the implementation block
@property (nonatomic,readonly) NSInputStream * inputStream;                //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
-(NSString *)protocolString;
-(id)initWithAccessory:(id)arg1 forProtocol:(id)arg2 ;
-(NSOutputStream *)outputStream;
-(id)_shortDescription;
-(unsigned)_sessionID;
-(void)_handleIncomingEAData:(id)arg1 ;
-(id)EASessionUUID;
-(void)_streamClosed;
-(void)_endStreams;
-(BOOL)isOpenCompleted;
-(void)setOpenCompleted:(BOOL)arg1 ;
-(NSInputStream *)inputStream;
-(EAAccessory *)accessory;
-(id)init;
-(void)dealloc;
-(id)description;
@end
