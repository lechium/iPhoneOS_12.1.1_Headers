/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRVirtualTouchDeviceDescriptorProtobuf;

@interface _MRRegisterHIDDeviceMessageProtobuf : PBCodable <NSCopying> {

	_MRVirtualTouchDeviceDescriptorProtobuf* _deviceDescriptor;

}

@property (nonatomic,readonly) BOOL hasDeviceDescriptor; 
@property (nonatomic,retain) _MRVirtualTouchDeviceDescriptorProtobuf * deviceDescriptor;              //@synthesize deviceDescriptor=_deviceDescriptor - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDeviceDescriptor:(_MRVirtualTouchDeviceDescriptorProtobuf *)arg1 ;
-(_MRVirtualTouchDeviceDescriptorProtobuf *)deviceDescriptor;
-(BOOL)hasDeviceDescriptor;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

