/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOLocation;

@interface GEOAddressCorrectionAddress : PBCodable <NSCopying> {

	NSString* _addressID;
	GEOLocation* _addressLocation;

}

@property (nonatomic,readonly) BOOL hasAddressLocation; 
@property (nonatomic,retain) GEOLocation * addressLocation;              //@synthesize addressLocation=_addressLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressID; 
@property (nonatomic,retain) NSString * addressID;                       //@synthesize addressID=_addressID - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setAddressID:(NSString *)arg1 ;
-(BOOL)hasAddressID;
-(NSString *)addressID;
-(void)setAddressLocation:(GEOLocation *)arg1 ;
-(BOOL)hasAddressLocation;
-(GEOLocation *)addressLocation;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
