/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSDate, NSSet;

@interface NMSMessagePersistentContext : NSObject <NSSecureCoding> {

	BOOL _fromRequest;
	BOOL _sendAcked;
	BOOL _processAcked;
	unsigned short _messageID;
	NSString* _idsIdentifier;
	NSDictionary* _userInfo;
	NSDictionary* _idsOptions;
	NSDate* _date;
	NSSet* _targetDeviceIDs;

}

@property (assign,nonatomic) unsigned short messageID;                           //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                             //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                            //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * idsOptions;                          //@synthesize idsOptions=_idsOptions - In the implementation block
@property (nonatomic,retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (assign,getter=isFromRequest,nonatomic) BOOL fromRequest;              //@synthesize fromRequest=_fromRequest - In the implementation block
@property (assign,nonatomic) BOOL sendAcked;                                     //@synthesize sendAcked=_sendAcked - In the implementation block
@property (assign,nonatomic) BOOL processAcked;                                  //@synthesize processAcked=_processAcked - In the implementation block
@property (nonatomic,copy) NSSet * targetDeviceIDs;                              //@synthesize targetDeviceIDs=_targetDeviceIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned short)messageID;
-(void)setIdsOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)idsOptions;
-(void)setTargetDeviceIDs:(NSSet *)arg1 ;
-(NSSet *)targetDeviceIDs;
-(void)setSendAcked:(BOOL)arg1 ;
-(BOOL)processAcked;
-(void)setProcessAcked:(BOOL)arg1 ;
-(BOOL)sendAcked;
-(NSString *)idsIdentifier;
-(void)setMessageID:(unsigned short)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(BOOL)isFromRequest;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)date;
-(void)setFromRequest:(BOOL)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
@end

