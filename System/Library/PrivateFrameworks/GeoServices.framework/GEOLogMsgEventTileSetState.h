/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgEventTileSetState : PBCodable <NSCopying> {

	double _durationInOldState;
	double _newCoverage;
	double _oldCoverage;
	int _tileSetStateType;
	SCD_Struct_GE70 _has;

}

@property (assign,nonatomic) BOOL hasDurationInOldState; 
@property (assign,nonatomic) double durationInOldState;               //@synthesize durationInOldState=_durationInOldState - In the implementation block
@property (assign,nonatomic) BOOL hasTileSetStateType; 
@property (assign,nonatomic) int tileSetStateType;                    //@synthesize tileSetStateType=_tileSetStateType - In the implementation block
@property (assign,nonatomic) BOOL hasOldCoverage; 
@property (assign,nonatomic) double oldCoverage;                      //@synthesize oldCoverage=_oldCoverage - In the implementation block
@property (assign,nonatomic) BOOL hasNewCoverage; 
@property (assign,nonatomic) double newCoverage;                      //@synthesize newCoverage=_newCoverage - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDurationInOldState:(double)arg1 ;
-(void)setTileSetStateType:(int)arg1 ;
-(void)setNewCoverage:(double)arg1 ;
-(void)setOldCoverage:(double)arg1 ;
-(void)setHasDurationInOldState:(BOOL)arg1 ;
-(BOOL)hasDurationInOldState;
-(double)durationInOldState;
-(int)tileSetStateType;
-(void)setHasTileSetStateType:(BOOL)arg1 ;
-(BOOL)hasTileSetStateType;
-(id)tileSetStateTypeAsString:(int)arg1 ;
-(int)StringAsTileSetStateType:(id)arg1 ;
-(void)setHasOldCoverage:(BOOL)arg1 ;
-(BOOL)hasOldCoverage;
-(void)setHasNewCoverage:(BOOL)arg1 ;
-(BOOL)hasNewCoverage;
-(double)oldCoverage;
-(double)newCoverage;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

