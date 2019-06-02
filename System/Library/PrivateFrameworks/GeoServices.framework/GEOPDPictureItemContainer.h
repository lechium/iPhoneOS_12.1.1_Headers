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

@class PBUnknownFields, NSMutableArray;

@interface GEOPDPictureItemContainer : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _pictureItems;
	BOOL _allowFullScreenPhoto;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,retain) NSMutableArray * pictureItems;                  //@synthesize pictureItems=_pictureItems - In the implementation block
@property (assign,nonatomic) BOOL hasAllowFullScreenPhoto; 
@property (assign,nonatomic) BOOL allowFullScreenPhoto;                      //@synthesize allowFullScreenPhoto=_allowFullScreenPhoto - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)pictureItemType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSMutableArray *)pictureItems;
-(BOOL)allowFullScreenPhoto;
-(void)addPictureItem:(id)arg1 ;
-(unsigned long long)pictureItemsCount;
-(void)clearPictureItems;
-(id)pictureItemAtIndex:(unsigned long long)arg1 ;
-(void)setAllowFullScreenPhoto:(BOOL)arg1 ;
-(void)setHasAllowFullScreenPhoto:(BOOL)arg1 ;
-(BOOL)hasAllowFullScreenPhoto;
-(void)setPictureItems:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
