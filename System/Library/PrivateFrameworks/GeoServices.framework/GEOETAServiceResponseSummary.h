/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOETAServiceResponseSummary : PBCodable <NSCopying> {

	GEOSessionID _responseUuid;
	NSMutableArray* _routeInfos;
	int _status;
	BOOL _resultsApplied;
	SCD_Struct_GE23 _has;

}

@property (assign,nonatomic) BOOL hasResultsApplied; 
@property (assign,nonatomic) BOOL resultsApplied;                      //@synthesize resultsApplied=_resultsApplied - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                               //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasResponseUuid; 
@property (assign,nonatomic) GEOSessionID responseUuid;                //@synthesize responseUuid=_responseUuid - In the implementation block
@property (nonatomic,retain) NSMutableArray * routeInfos;              //@synthesize routeInfos=_routeInfos - In the implementation block
+(Class)routeInfoType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)addRouteInfo:(id)arg1 ;
-(unsigned long long)routeInfosCount;
-(void)clearRouteInfos;
-(id)routeInfoAtIndex:(unsigned long long)arg1 ;
-(BOOL)resultsApplied;
-(void)setResultsApplied:(BOOL)arg1 ;
-(void)setHasResultsApplied:(BOOL)arg1 ;
-(BOOL)hasResultsApplied;
-(void)setResponseUuid:(GEOSessionID)arg1 ;
-(void)setHasResponseUuid:(BOOL)arg1 ;
-(BOOL)hasResponseUuid;
-(GEOSessionID)responseUuid;
-(NSMutableArray *)routeInfos;
-(void)setRouteInfos:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
@end

