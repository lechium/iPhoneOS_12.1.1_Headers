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

@class NSString, NTPBDate;

@interface NTPBReadingHistoryItem : PBCodable <NSCopying> {

	long long _maxVersionRead;
	long long _maxVersionSeen;
	NSString* _articleID;
	NSString* _deviceID;
	NTPBDate* _firstSeenDate;
	NTPBDate* _firstSeenDateOfMaxVersionSeen;
	unsigned _flags;
	NTPBDate* _lastVisitedDate;
	NSString* _sourceChannelTagID;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasArticleID; 
@property (nonatomic,retain) NSString * articleID;                                  //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) BOOL hasLastVisitedDate; 
@property (nonatomic,retain) NTPBDate * lastVisitedDate;                            //@synthesize lastVisitedDate=_lastVisitedDate - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) unsigned flags;                                        //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL hasMaxVersionRead; 
@property (assign,nonatomic) long long maxVersionRead;                              //@synthesize maxVersionRead=_maxVersionRead - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstSeenDate; 
@property (nonatomic,retain) NTPBDate * firstSeenDate;                              //@synthesize firstSeenDate=_firstSeenDate - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstSeenDateOfMaxVersionSeen; 
@property (nonatomic,retain) NTPBDate * firstSeenDateOfMaxVersionSeen;              //@synthesize firstSeenDateOfMaxVersionSeen=_firstSeenDateOfMaxVersionSeen - In the implementation block
@property (assign,nonatomic) BOOL hasMaxVersionSeen; 
@property (assign,nonatomic) long long maxVersionSeen;                              //@synthesize maxVersionSeen=_maxVersionSeen - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelTagID; 
@property (nonatomic,retain) NSString * sourceChannelTagID;                         //@synthesize sourceChannelTagID=_sourceChannelTagID - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceID; 
@property (nonatomic,retain) NSString * deviceID;                                   //@synthesize deviceID=_deviceID - In the implementation block
-(void)setHasFlags:(BOOL)arg1 ;
-(BOOL)hasFlags;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(BOOL)hasArticleID;
-(BOOL)hasSourceChannelTagID;
-(BOOL)hasLastVisitedDate;
-(void)setHasMaxVersionRead:(BOOL)arg1 ;
-(BOOL)hasMaxVersionRead;
-(BOOL)hasFirstSeenDate;
-(BOOL)hasFirstSeenDateOfMaxVersionSeen;
-(void)setHasMaxVersionSeen:(BOOL)arg1 ;
-(BOOL)hasMaxVersionSeen;
-(BOOL)hasDeviceID;
-(NSString *)articleID;
-(NSString *)sourceChannelTagID;
-(long long)maxVersionSeen;
-(void)setMaxVersionSeen:(long long)arg1 ;
-(void)setSourceChannelTagID:(NSString *)arg1 ;
-(long long)maxVersionRead;
-(void)setMaxVersionRead:(long long)arg1 ;
-(void)setArticleID:(NSString *)arg1 ;
-(NTPBDate *)lastVisitedDate;
-(void)setLastVisitedDate:(NTPBDate *)arg1 ;
-(NTPBDate *)firstSeenDate;
-(void)setFirstSeenDate:(NTPBDate *)arg1 ;
-(NTPBDate *)firstSeenDateOfMaxVersionSeen;
-(void)setFirstSeenDateOfMaxVersionSeen:(NTPBDate *)arg1 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

