/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, CEMAnyPayload;

@interface RMPCheckInProtocolCapabilitiesRequest : CEMPayloadBase {

	NSString* _messageType;
	NSString* _UDID;
	CEMAnyPayload* _clientCapabilities;

}

@property (nonatomic,copy) NSString * messageType;                          //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,copy) NSString * UDID;                                 //@synthesize UDID=_UDID - In the implementation block
@property (nonatomic,copy) CEMAnyPayload * clientCapabilities;              //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)request;
-(void)setMessageType:(NSString *)arg1 ;
-(void)setClientCapabilities:(CEMAnyPayload *)arg1 ;
-(CEMAnyPayload *)clientCapabilities;
-(NSString *)messageType;
-(NSString *)UDID;
-(id)serialize;
-(BOOL)loadFromDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setUDID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

