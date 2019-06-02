/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSArray;

@interface RMPEventRequest : CEMPayloadBase {

	NSString* _requestType;
	NSString* _UDID;
	NSString* _userShortName;
	NSArray* _messages;

}

@property (nonatomic,copy) NSString * requestType;                //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) NSString * UDID;                       //@synthesize UDID=_UDID - In the implementation block
@property (nonatomic,copy) NSString * userShortName;              //@synthesize userShortName=_userShortName - In the implementation block
@property (nonatomic,copy) NSArray * messages;                    //@synthesize messages=_messages - In the implementation block
+(id)requestWithUDID:(id)arg1 withUserShortName:(id)arg2 withMessages:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(NSString *)requestType;
-(void)setRequestType:(NSString *)arg1 ;
-(NSString *)UDID;
-(NSArray *)messages;
-(void)setMessages:(NSArray *)arg1 ;
-(id)serialize;
-(void)setUDID:(NSString *)arg1 ;
-(NSString *)userShortName;
-(void)setUserShortName:(NSString *)arg1 ;
-(BOOL)loadEventFromDictionary:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

