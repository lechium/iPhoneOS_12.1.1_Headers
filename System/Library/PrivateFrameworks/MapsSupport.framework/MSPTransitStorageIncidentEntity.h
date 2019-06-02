/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitIncidentEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, PBUnknownFields, NSString;

@interface MSPTransitStorageIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_MS8* _nextStopsMuids;
	unsigned long long _muid;
	SCD_Struct_MS3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasNextStopIDs; 
@property (nonatomic,readonly) NSSet * nextStopIDs; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                               //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) unsigned long long nextStopsMuidsCount; 
@property (nonatomic,readonly) unsigned long long* nextStopsMuids; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(NSSet *)nextStopIDs;
-(BOOL)hasNextStopIDs;
-(id)initWithIncidentEntity:(id)arg1 ;
-(unsigned long long)nextStopsMuidsCount;
-(unsigned long long*)nextStopsMuids;
-(void)clearNextStopsMuids;
-(void)addNextStopsMuids:(unsigned long long)arg1 ;
-(unsigned long long)nextStopsMuidsAtIndex:(unsigned long long)arg1 ;
-(void)setNextStopsMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
