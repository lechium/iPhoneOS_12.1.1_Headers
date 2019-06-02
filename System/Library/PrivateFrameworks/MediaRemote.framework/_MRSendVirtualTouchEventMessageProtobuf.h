/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRVirtualTouchEventProtobuf;

@interface _MRSendVirtualTouchEventMessageProtobuf : PBCodable <NSCopying> {

	unsigned long long _virtualDeviceID;
	_MRVirtualTouchEventProtobuf* _event;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasVirtualDeviceID; 
@property (assign,nonatomic) unsigned long long virtualDeviceID;                //@synthesize virtualDeviceID=_virtualDeviceID - In the implementation block
@property (nonatomic,readonly) BOOL hasEvent; 
@property (nonatomic,retain) _MRVirtualTouchEventProtobuf * event;              //@synthesize event=_event - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setVirtualDeviceID:(unsigned long long)arg1 ;
-(void)setHasVirtualDeviceID:(BOOL)arg1 ;
-(BOOL)hasVirtualDeviceID;
-(unsigned long long)virtualDeviceID;
-(BOOL)hasEvent;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_MRVirtualTouchEventProtobuf *)event;
-(void)setEvent:(_MRVirtualTouchEventProtobuf *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

