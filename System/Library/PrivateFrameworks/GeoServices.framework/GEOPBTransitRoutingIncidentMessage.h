/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOPBTransitRoutingIncidentMessage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE20* _transitIncidentIndexs;
	unsigned _routingIncidentMessageIndex;
	NSString* _routingMessage;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasRoutingIncidentMessageIndex; 
@property (assign,nonatomic) unsigned routingIncidentMessageIndex;                         //@synthesize routingIncidentMessageIndex=_routingIncidentMessageIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasRoutingMessage; 
@property (nonatomic,retain) NSString * routingMessage;                                    //@synthesize routingMessage=_routingMessage - In the implementation block
@property (nonatomic,readonly) unsigned long long transitIncidentIndexsCount; 
@property (nonatomic,readonly) unsigned* transitIncidentIndexs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setRoutingMessage:(NSString *)arg1 ;
-(unsigned long long)transitIncidentIndexsCount;
-(void)clearTransitIncidentIndexs;
-(unsigned)transitIncidentIndexAtIndex:(unsigned long long)arg1 ;
-(void)addTransitIncidentIndex:(unsigned)arg1 ;
-(void)setRoutingIncidentMessageIndex:(unsigned)arg1 ;
-(void)setHasRoutingIncidentMessageIndex:(BOOL)arg1 ;
-(BOOL)hasRoutingIncidentMessageIndex;
-(BOOL)hasRoutingMessage;
-(unsigned*)transitIncidentIndexs;
-(void)setTransitIncidentIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)routingIncidentMessageIndex;
-(NSString *)routingMessage;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

