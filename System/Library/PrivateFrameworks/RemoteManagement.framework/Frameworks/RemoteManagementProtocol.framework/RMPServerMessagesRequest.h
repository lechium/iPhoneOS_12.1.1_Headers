/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementProtocol/RMPRemoteManagementRequest.h>
#import <libobjc.A.dylib/RMPRegisteredTypeProtocol.h>

@class NSArray, NSString;

@interface RMPServerMessagesRequest : RMPRemoteManagementRequest <RMPRegisteredTypeProtocol> {

	NSArray* _messages;

}

@property (nonatomic,copy) NSArray * messages;                      //@synthesize messages=_messages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)requestWithUUID:(id)arg1 withMessages:(id)arg2 ;
-(NSArray *)messages;
-(void)setMessages:(NSArray *)arg1 ;
-(id)serialize;
-(BOOL)loadRequestFromDictionary:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

