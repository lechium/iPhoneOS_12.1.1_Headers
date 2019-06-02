/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEORPDetails, GEORPNotification, NSString, GEORPResolution;

@interface GEORPProblemStatus : PBCodable <NSCopying> {

	double _creationDate;
	GEORPDetails* _details;
	GEORPNotification* _notification;
	NSString* _problemId;
	GEORPResolution* _problemResolution;
	int _problemState;
	SCD_Struct_GE22 _has;

}

@property (nonatomic,readonly) BOOL hasProblemId; 
@property (nonatomic,retain) NSString * problemId;                             //@synthesize problemId=_problemId - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) BOOL hasProblemState; 
@property (assign,nonatomic) int problemState;                                 //@synthesize problemState=_problemState - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemResolution; 
@property (nonatomic,retain) GEORPResolution * problemResolution;              //@synthesize problemResolution=_problemResolution - In the implementation block
@property (nonatomic,readonly) BOOL hasNotification; 
@property (nonatomic,retain) GEORPNotification * notification;                 //@synthesize notification=_notification - In the implementation block
@property (nonatomic,readonly) BOOL hasDetails; 
@property (nonatomic,retain) GEORPDetails * details;                           //@synthesize details=_details - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(BOOL)hasCreationDate;
-(NSString *)problemId;
-(void)setProblemId:(NSString *)arg1 ;
-(BOOL)hasProblemId;
-(void)setProblemResolution:(GEORPResolution *)arg1 ;
-(void)setNotification:(GEORPNotification *)arg1 ;
-(void)setDetails:(GEORPDetails *)arg1 ;
-(int)problemState;
-(void)setProblemState:(int)arg1 ;
-(void)setHasProblemState:(BOOL)arg1 ;
-(BOOL)hasProblemState;
-(id)problemStateAsString:(int)arg1 ;
-(int)StringAsProblemState:(id)arg1 ;
-(BOOL)hasProblemResolution;
-(BOOL)hasNotification;
-(BOOL)hasDetails;
-(GEORPResolution *)problemResolution;
-(GEORPDetails *)details;
-(double)creationDate;
-(void)setCreationDate:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(GEORPNotification *)notification;
-(void)copyTo:(id)arg1 ;
@end
