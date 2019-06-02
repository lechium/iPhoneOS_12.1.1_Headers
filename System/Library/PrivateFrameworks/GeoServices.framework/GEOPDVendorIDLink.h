/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOPDVendorIDLink : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE2* _reservationTypes;
	NSString* _externalItemId;
	NSString* _vendorId;

}

@property (nonatomic,readonly) BOOL hasVendorId; 
@property (nonatomic,retain) NSString * vendorId;                                     //@synthesize vendorId=_vendorId - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalItemId; 
@property (nonatomic,retain) NSString * externalItemId;                               //@synthesize externalItemId=_externalItemId - In the implementation block
@property (nonatomic,readonly) unsigned long long reservationTypesCount; 
@property (nonatomic,readonly) int* reservationTypes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSString *)vendorId;
-(NSString *)externalItemId;
-(unsigned long long)reservationTypesCount;
-(int)reservationTypeAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasExternalItemId;
-(BOOL)hasVendorId;
-(void)setVendorId:(NSString *)arg1 ;
-(void)setExternalItemId:(NSString *)arg1 ;
-(void)clearReservationTypes;
-(void)addReservationType:(int)arg1 ;
-(int*)reservationTypes;
-(void)setReservationTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)reservationTypesAsString:(int)arg1 ;
-(int)StringAsReservationTypes:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
