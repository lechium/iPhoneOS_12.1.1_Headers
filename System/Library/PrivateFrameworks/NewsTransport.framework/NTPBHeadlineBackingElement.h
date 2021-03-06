/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBHeadlineBackingElement : PBCodable <NSCopying> {

	NSData* _articleRecordData;
	NSData* _sourceChannelRecordData;

}

@property (nonatomic,readonly) BOOL hasArticleRecordData; 
@property (nonatomic,retain) NSData * articleRecordData;                     //@synthesize articleRecordData=_articleRecordData - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelRecordData; 
@property (nonatomic,retain) NSData * sourceChannelRecordData;               //@synthesize sourceChannelRecordData=_sourceChannelRecordData - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setArticleRecordData:(NSData *)arg1 ;
-(void)setSourceChannelRecordData:(NSData *)arg1 ;
-(BOOL)hasArticleRecordData;
-(BOOL)hasSourceChannelRecordData;
-(NSData *)articleRecordData;
-(NSData *)sourceChannelRecordData;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

