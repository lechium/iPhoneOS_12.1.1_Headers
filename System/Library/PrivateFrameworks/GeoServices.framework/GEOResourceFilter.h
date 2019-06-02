/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOResourceFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE2* _scales;
	SCD_Struct_GE2* _scenarios;

}

@property (nonatomic,readonly) unsigned long long scalesCount; 
@property (nonatomic,readonly) int* scales; 
@property (nonatomic,readonly) unsigned long long scenariosCount; 
@property (nonatomic,readonly) int* scenarios; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)scalesCount;
-(void)clearScales;
-(int)scaleAtIndex:(unsigned long long)arg1 ;
-(void)addScale:(int)arg1 ;
-(unsigned long long)scenariosCount;
-(void)clearScenarios;
-(int)scenarioAtIndex:(unsigned long long)arg1 ;
-(void)addScenario:(int)arg1 ;
-(int*)scales;
-(void)setScales:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)scalesAsString:(int)arg1 ;
-(int)StringAsScales:(id)arg1 ;
-(int*)scenarios;
-(void)setScenarios:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)scenariosAsString:(int)arg1 ;
-(int)StringAsScenarios:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
