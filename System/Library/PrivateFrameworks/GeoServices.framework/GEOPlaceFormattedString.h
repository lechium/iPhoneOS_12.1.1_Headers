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

@class GEOFormattedString;

@interface GEOPlaceFormattedString : PBCodable <NSCopying> {

	GEOFormattedString* _contactHome;
	GEOFormattedString* _contactOther;
	GEOFormattedString* _contactWork;
	GEOFormattedString* _custom;
	GEOFormattedString* _home;
	GEOFormattedString* _pointOfInterest;
	GEOFormattedString* _streetAddress;
	GEOFormattedString* _unknown;
	GEOFormattedString* _work;

}

@property (nonatomic,readonly) BOOL hasHome; 
@property (nonatomic,retain) GEOFormattedString * home;                         //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) BOOL hasWork; 
@property (nonatomic,retain) GEOFormattedString * work;                         //@synthesize work=_work - In the implementation block
@property (nonatomic,readonly) BOOL hasContactWork; 
@property (nonatomic,retain) GEOFormattedString * contactWork;                  //@synthesize contactWork=_contactWork - In the implementation block
@property (nonatomic,readonly) BOOL hasContactHome; 
@property (nonatomic,retain) GEOFormattedString * contactHome;                  //@synthesize contactHome=_contactHome - In the implementation block
@property (nonatomic,readonly) BOOL hasContactOther; 
@property (nonatomic,retain) GEOFormattedString * contactOther;                 //@synthesize contactOther=_contactOther - In the implementation block
@property (nonatomic,readonly) BOOL hasPointOfInterest; 
@property (nonatomic,retain) GEOFormattedString * pointOfInterest;              //@synthesize pointOfInterest=_pointOfInterest - In the implementation block
@property (nonatomic,readonly) BOOL hasStreetAddress; 
@property (nonatomic,retain) GEOFormattedString * streetAddress;                //@synthesize streetAddress=_streetAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasUnknown; 
@property (nonatomic,retain) GEOFormattedString * unknown;                      //@synthesize unknown=_unknown - In the implementation block
@property (nonatomic,readonly) BOOL hasCustom; 
@property (nonatomic,retain) GEOFormattedString * custom;                       //@synthesize custom=_custom - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHome:(GEOFormattedString *)arg1 ;
-(void)setWork:(GEOFormattedString *)arg1 ;
-(void)setContactWork:(GEOFormattedString *)arg1 ;
-(void)setContactHome:(GEOFormattedString *)arg1 ;
-(void)setContactOther:(GEOFormattedString *)arg1 ;
-(void)setPointOfInterest:(GEOFormattedString *)arg1 ;
-(void)setStreetAddress:(GEOFormattedString *)arg1 ;
-(void)setUnknown:(GEOFormattedString *)arg1 ;
-(void)setCustom:(GEOFormattedString *)arg1 ;
-(BOOL)hasHome;
-(BOOL)hasWork;
-(BOOL)hasContactWork;
-(BOOL)hasContactHome;
-(BOOL)hasContactOther;
-(BOOL)hasPointOfInterest;
-(BOOL)hasStreetAddress;
-(BOOL)hasUnknown;
-(BOOL)hasCustom;
-(GEOFormattedString *)home;
-(GEOFormattedString *)work;
-(GEOFormattedString *)contactWork;
-(GEOFormattedString *)contactHome;
-(GEOFormattedString *)contactOther;
-(GEOFormattedString *)pointOfInterest;
-(GEOFormattedString *)streetAddress;
-(GEOFormattedString *)unknown;
-(GEOFormattedString *)custom;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

