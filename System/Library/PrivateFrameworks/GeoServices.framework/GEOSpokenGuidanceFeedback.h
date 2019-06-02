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

@interface GEOSpokenGuidanceFeedback : PBCodable <NSCopying> {

	int _spokenGuidanceIndex;
	BOOL _shortPrompt;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasSpokenGuidanceIndex; 
@property (assign,nonatomic) int spokenGuidanceIndex;                  //@synthesize spokenGuidanceIndex=_spokenGuidanceIndex - In the implementation block
@property (assign,nonatomic) BOOL hasShortPrompt; 
@property (assign,nonatomic) BOOL shortPrompt;                         //@synthesize shortPrompt=_shortPrompt - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)spokenGuidanceIndex;
-(void)setSpokenGuidanceIndex:(int)arg1 ;
-(void)setHasSpokenGuidanceIndex:(BOOL)arg1 ;
-(BOOL)hasSpokenGuidanceIndex;
-(void)setShortPrompt:(BOOL)arg1 ;
-(void)setHasShortPrompt:(BOOL)arg1 ;
-(BOOL)hasShortPrompt;
-(BOOL)shortPrompt;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

