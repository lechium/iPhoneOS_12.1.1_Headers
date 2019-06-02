/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOProactiveItem : PBCodable <NSCopying> {

	int _proactiveItemType;
	int _timeSinceStart;
	BOOL _deleted;
	BOOL _edited;
	BOOL _shared;
	BOOL _tapped;
	BOOL _visible;
	SCD_Struct_GE75 _has;

}

@property (assign,nonatomic) BOOL hasProactiveItemType; 
@property (assign,nonatomic) int proactiveItemType;                  //@synthesize proactiveItemType=_proactiveItemType - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceStart; 
@property (assign,nonatomic) int timeSinceStart;                     //@synthesize timeSinceStart=_timeSinceStart - In the implementation block
@property (assign,nonatomic) BOOL hasVisible; 
@property (assign,nonatomic) BOOL visible;                           //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL hasTapped; 
@property (assign,nonatomic) BOOL tapped;                            //@synthesize tapped=_tapped - In the implementation block
@property (assign,nonatomic) BOOL hasShared; 
@property (assign,nonatomic) BOOL shared;                            //@synthesize shared=_shared - In the implementation block
@property (assign,nonatomic) BOOL hasEdited; 
@property (assign,nonatomic) BOOL edited;                            //@synthesize edited=_edited - In the implementation block
@property (assign,nonatomic) BOOL hasDeleted; 
@property (assign,nonatomic) BOOL deleted;                           //@synthesize deleted=_deleted - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setShared:(BOOL)arg1 ;
-(void)setHasShared:(BOOL)arg1 ;
-(BOOL)hasShared;
-(BOOL)shared;
-(void)setTimeSinceStart:(int)arg1 ;
-(void)setHasTimeSinceStart:(BOOL)arg1 ;
-(BOOL)hasTimeSinceStart;
-(int)timeSinceStart;
-(int)proactiveItemType;
-(void)setProactiveItemType:(int)arg1 ;
-(void)setHasProactiveItemType:(BOOL)arg1 ;
-(BOOL)hasProactiveItemType;
-(id)proactiveItemTypeAsString:(int)arg1 ;
-(int)StringAsProactiveItemType:(id)arg1 ;
-(void)setHasVisible:(BOOL)arg1 ;
-(BOOL)hasVisible;
-(void)setHasTapped:(BOOL)arg1 ;
-(BOOL)hasTapped;
-(void)setEdited:(BOOL)arg1 ;
-(void)setHasEdited:(BOOL)arg1 ;
-(BOOL)hasEdited;
-(void)setDeleted:(BOOL)arg1 ;
-(void)setHasDeleted:(BOOL)arg1 ;
-(BOOL)hasDeleted;
-(BOOL)tapped;
-(BOOL)edited;
-(BOOL)deleted;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)visible;
-(void)copyTo:(id)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(void)setTapped:(BOOL)arg1 ;
@end

