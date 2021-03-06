/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ASCodableDatabaseCompetitionScore : PBCodable <NSCopying> {

	SCD_Struct_AS2* _scores;

}

@property (nonatomic,readonly) unsigned long long scoresCount; 
@property (nonatomic,readonly) long long* scores; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addScores:(long long)arg1 ;
-(void)clearScores;
-(unsigned long long)scoresCount;
-(long long)scoresAtIndex:(unsigned long long)arg1 ;
-(long long*)scores;
-(void)setScores:(long long*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

