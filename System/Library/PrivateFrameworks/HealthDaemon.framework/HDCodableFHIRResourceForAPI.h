/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface HDCodableFHIRResourceForAPI : PBCodable <NSCopying> {

	double _lastUpdatedDate;
	NSData* _data;
	NSString* _identifier;
	NSString* _resourceType;
	NSString* _sourceURL;
	SCD_Struct_HD7 _has;

}

@property (nonatomic,readonly) BOOL hasResourceType; 
@property (nonatomic,retain) NSString * resourceType;              //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasData; 
@property (nonatomic,retain) NSData * data;                        //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL;                 //@synthesize sourceURL=_sourceURL - In the implementation block
@property (assign,nonatomic) BOOL hasLastUpdatedDate; 
@property (assign,nonatomic) double lastUpdatedDate;               //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)resourceType;
-(void)setResourceType:(NSString *)arg1 ;
-(BOOL)hasResourceType;
-(BOOL)hasIdentifier;
-(BOOL)hasData;
-(void)setSourceURL:(NSString *)arg1 ;
-(BOOL)hasSourceURL;
-(NSString *)sourceURL;
-(void)setLastUpdatedDate:(double)arg1 ;
-(void)setHasLastUpdatedDate:(BOOL)arg1 ;
-(BOOL)hasLastUpdatedDate;
-(double)lastUpdatedDate;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

