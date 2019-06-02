/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBAnalyticsEnvelopeContentTypeConfig : PBCodable <NSCopying> {

	unsigned long long _groupingTag;
	unsigned long long _seedTime;
	NSString* _contentHeaderName;
	NSString* _contentHeaderValue;
	NSString* _endpointURLString;
	unsigned _samplingCeiling;
	unsigned _samplingFloor;
	SCD_Struct_NT5 _has;

}

@property (nonatomic,readonly) BOOL hasEndpointURLString; 
@property (nonatomic,retain) NSString * endpointURLString;                //@synthesize endpointURLString=_endpointURLString - In the implementation block
@property (assign,nonatomic) BOOL hasSeedTime; 
@property (assign,nonatomic) unsigned long long seedTime;                 //@synthesize seedTime=_seedTime - In the implementation block
@property (nonatomic,readonly) BOOL hasContentHeaderName; 
@property (nonatomic,retain) NSString * contentHeaderName;                //@synthesize contentHeaderName=_contentHeaderName - In the implementation block
@property (nonatomic,readonly) BOOL hasContentHeaderValue; 
@property (nonatomic,retain) NSString * contentHeaderValue;               //@synthesize contentHeaderValue=_contentHeaderValue - In the implementation block
@property (assign,nonatomic) BOOL hasSamplingFloor; 
@property (assign,nonatomic) unsigned samplingFloor;                      //@synthesize samplingFloor=_samplingFloor - In the implementation block
@property (assign,nonatomic) BOOL hasSamplingCeiling; 
@property (assign,nonatomic) unsigned samplingCeiling;                    //@synthesize samplingCeiling=_samplingCeiling - In the implementation block
@property (assign,nonatomic) BOOL hasGroupingTag; 
@property (assign,nonatomic) unsigned long long groupingTag;              //@synthesize groupingTag=_groupingTag - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasEndpointURLString;
-(void)setHasSeedTime:(BOOL)arg1 ;
-(BOOL)hasSeedTime;
-(BOOL)hasContentHeaderName;
-(BOOL)hasContentHeaderValue;
-(void)setHasSamplingFloor:(BOOL)arg1 ;
-(BOOL)hasSamplingFloor;
-(void)setHasSamplingCeiling:(BOOL)arg1 ;
-(BOOL)hasSamplingCeiling;
-(void)setHasGroupingTag:(BOOL)arg1 ;
-(BOOL)hasGroupingTag;
-(NSString *)endpointURLString;
-(unsigned long long)seedTime;
-(NSString *)contentHeaderName;
-(NSString *)contentHeaderValue;
-(unsigned)samplingFloor;
-(unsigned)samplingCeiling;
-(unsigned long long)groupingTag;
-(void)setEndpointURLString:(NSString *)arg1 ;
-(void)setGroupingTag:(unsigned long long)arg1 ;
-(void)setSeedTime:(unsigned long long)arg1 ;
-(void)setContentHeaderName:(NSString *)arg1 ;
-(void)setContentHeaderValue:(NSString *)arg1 ;
-(void)setSamplingFloor:(unsigned)arg1 ;
-(void)setSamplingCeiling:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

