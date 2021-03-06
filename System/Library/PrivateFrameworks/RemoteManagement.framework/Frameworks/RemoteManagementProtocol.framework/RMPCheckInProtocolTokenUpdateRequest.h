/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSData, NSNumber;

@interface RMPCheckInProtocolTokenUpdateRequest : CEMPayloadBase {

	NSString* _messageType;
	NSString* _topic;
	NSString* _UDID;
	NSString* _userShortName;
	NSData* _token;
	NSString* _pushMagic;
	NSData* _unlockToken;
	NSNumber* _awaitingConfiguration;

}

@property (nonatomic,copy) NSString * messageType;                        //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,copy) NSString * topic;                              //@synthesize topic=_topic - In the implementation block
@property (nonatomic,copy) NSString * UDID;                               //@synthesize UDID=_UDID - In the implementation block
@property (nonatomic,copy) NSString * userShortName;                      //@synthesize userShortName=_userShortName - In the implementation block
@property (nonatomic,copy) NSData * token;                                //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSString * pushMagic;                          //@synthesize pushMagic=_pushMagic - In the implementation block
@property (nonatomic,copy) NSData * unlockToken;                          //@synthesize unlockToken=_unlockToken - In the implementation block
@property (nonatomic,copy) NSNumber * awaitingConfiguration;              //@synthesize awaitingConfiguration=_awaitingConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)request;
-(void)setMessageType:(NSString *)arg1 ;
-(NSString *)messageType;
-(NSString *)UDID;
-(void)setTopic:(NSString *)arg1 ;
-(id)serialize;
-(NSString *)topic;
-(BOOL)loadFromDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setUDID:(NSString *)arg1 ;
-(NSString *)userShortName;
-(void)setUserShortName:(NSString *)arg1 ;
-(NSString *)pushMagic;
-(void)setPushMagic:(NSString *)arg1 ;
-(NSData *)unlockToken;
-(void)setUnlockToken:(NSData *)arg1 ;
-(NSNumber *)awaitingConfiguration;
-(void)setAwaitingConfiguration:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)token;
-(void)setToken:(NSData *)arg1 ;
@end

