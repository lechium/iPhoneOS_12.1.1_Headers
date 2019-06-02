/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMROriginProtobuf, NSString, NSData;

@interface NMROriginInfo : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMROriginProtobuf* _protobuf;

}

@property (assign,nonatomic) int uniqueIdentifier; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSData * deviceInfoData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisplayName:(NSString *)arg1 ;
-(id)protobufData;
-(id)initWithProtobuf:(id)arg1 ;
-(id)protobuf;
-(id)initWithProtobufData:(id)arg1 ;
-(NSData *)deviceInfoData;
-(void)setDeviceInfoData:(NSData *)arg1 ;
-(id)init;
-(NSString *)description;
-(int)uniqueIdentifier;
-(void)setUniqueIdentifier:(int)arg1 ;
-(NSString *)displayName;
@end

