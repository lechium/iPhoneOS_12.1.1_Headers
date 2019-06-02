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

@class NSString;

@interface _MRAVOutputDeviceSourceInfoProtobuf : PBCodable <NSCopying> {

	NSString* _routingContextUID;
	BOOL _multipleBuiltInDevices;
	SCD_Struct_MR4 _has;

}

@property (nonatomic,readonly) BOOL hasRoutingContextUID; 
@property (nonatomic,retain) NSString * routingContextUID;                //@synthesize routingContextUID=_routingContextUID - In the implementation block
@property (assign,nonatomic) BOOL hasMultipleBuiltInDevices; 
@property (assign,nonatomic) BOOL multipleBuiltInDevices;                 //@synthesize multipleBuiltInDevices=_multipleBuiltInDevices - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)multipleBuiltInDevices;
-(void)setMultipleBuiltInDevices:(BOOL)arg1 ;
-(BOOL)hasRoutingContextUID;
-(void)setHasMultipleBuiltInDevices:(BOOL)arg1 ;
-(BOOL)hasMultipleBuiltInDevices;
-(NSString *)routingContextUID;
-(void)setRoutingContextUID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

