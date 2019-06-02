/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, NSString, GEOTimezone;

@interface GEOPDMessageLink : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _hoursOfOperations;
	NSString* _messageId;
	NSString* _messageUrl;
	NSString* _navBackgroundColor;
	NSString* _navTintColor;
	int _responseTime;
	GEOTimezone* _timezone;
	BOOL _isVerified;
	SCD_Struct_GE22 _has;

}

@property (nonatomic,readonly) BOOL hasMessageId; 
@property (nonatomic,retain) NSString * messageId;                            //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageUrl; 
@property (nonatomic,retain) NSString * messageUrl;                           //@synthesize messageUrl=_messageUrl - In the implementation block
@property (assign,nonatomic) BOOL hasResponseTime; 
@property (assign,nonatomic) int responseTime;                                //@synthesize responseTime=_responseTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * hoursOfOperations;              //@synthesize hoursOfOperations=_hoursOfOperations - In the implementation block
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) GEOTimezone * timezone;                          //@synthesize timezone=_timezone - In the implementation block
@property (assign,nonatomic) BOOL hasIsVerified; 
@property (assign,nonatomic) BOOL isVerified;                                 //@synthesize isVerified=_isVerified - In the implementation block
@property (nonatomic,readonly) BOOL hasNavBackgroundColor; 
@property (nonatomic,retain) NSString * navBackgroundColor;                   //@synthesize navBackgroundColor=_navBackgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL hasNavTintColor; 
@property (nonatomic,retain) NSString * navTintColor;                         //@synthesize navTintColor=_navTintColor - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)hoursOfOperationType;
+(id)messageLinkForPlaceData:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addHoursOfOperation:(id)arg1 ;
-(void)setMessageId:(NSString *)arg1 ;
-(void)setMessageUrl:(NSString *)arg1 ;
-(unsigned long long)hoursOfOperationsCount;
-(void)clearHoursOfOperations;
-(id)hoursOfOperationAtIndex:(unsigned long long)arg1 ;
-(void)setTimezone:(GEOTimezone *)arg1 ;
-(void)setNavBackgroundColor:(NSString *)arg1 ;
-(void)setNavTintColor:(NSString *)arg1 ;
-(BOOL)hasMessageId;
-(BOOL)hasMessageUrl;
-(int)responseTime;
-(void)setResponseTime:(int)arg1 ;
-(void)setHasResponseTime:(BOOL)arg1 ;
-(BOOL)hasResponseTime;
-(id)responseTimeAsString:(int)arg1 ;
-(int)StringAsResponseTime:(id)arg1 ;
-(BOOL)hasTimezone;
-(void)setIsVerified:(BOOL)arg1 ;
-(void)setHasIsVerified:(BOOL)arg1 ;
-(BOOL)hasIsVerified;
-(BOOL)hasNavBackgroundColor;
-(BOOL)hasNavTintColor;
-(NSString *)messageId;
-(NSString *)messageUrl;
-(NSMutableArray *)hoursOfOperations;
-(void)setHoursOfOperations:(NSMutableArray *)arg1 ;
-(GEOTimezone *)timezone;
-(NSString *)navBackgroundColor;
-(NSString *)navTintColor;
-(BOOL)isVerified;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

