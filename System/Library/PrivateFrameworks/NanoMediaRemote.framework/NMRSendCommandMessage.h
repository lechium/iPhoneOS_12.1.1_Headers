/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRSendCommandMessageProtobuf, NSString, NSDictionary, NSNumber, NSDate;

@interface NMRSendCommandMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRSendCommandMessageProtobuf* _protobuf;

}

@property (nonatomic,readonly) unsigned command; 
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSDictionary * options; 
@property (nonatomic,readonly) NSNumber * originIdentifier; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithCommand:(unsigned)arg1 bundleID:(id)arg2 options:(id)arg3 originIdentifier:(id)arg4 ;
-(id)protobufData;
-(NSDate *)serializationDate;
-(unsigned)command;
-(NSNumber *)originIdentifier;
-(id)initWithProtobufData:(id)arg1 ;
-(id)initWithCommand:(unsigned)arg1 bundleID:(id)arg2 options:(id)arg3 originIdentifier:(id)arg4 ;
-(NSDictionary *)options;
-(NSString *)bundleID;
@end

