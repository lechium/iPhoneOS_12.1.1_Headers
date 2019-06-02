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

@interface NTPBAnfComponentExposure : PBCodable <NSCopying> {

	long long _backendArticleVersionInt64;
	long long _publisherArticleVersionInt64;
	NSString* _anfComponentId;
	NSString* _anfComponentRole;
	NSString* _anfComponentType;
	NSString* _articleId;
	NSString* _articleVersion;
	NSString* _metadata;
	NSString* _sourceChannelId;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                          //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasAnfComponentType; 
@property (nonatomic,retain) NSString * anfComponentType;                         //@synthesize anfComponentType=_anfComponentType - In the implementation block
@property (nonatomic,readonly) BOOL hasAnfComponentId; 
@property (nonatomic,retain) NSString * anfComponentId;                           //@synthesize anfComponentId=_anfComponentId - In the implementation block
@property (nonatomic,readonly) BOOL hasAnfComponentRole; 
@property (nonatomic,retain) NSString * anfComponentRole;                         //@synthesize anfComponentRole=_anfComponentRole - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) NSString * metadata;                                 //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleVersion; 
@property (nonatomic,retain) NSString * articleVersion;                           //@synthesize articleVersion=_articleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersionInt64; 
@property (assign,nonatomic) long long publisherArticleVersionInt64;              //@synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64 - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersionInt64; 
@property (assign,nonatomic) long long backendArticleVersionInt64;                //@synthesize backendArticleVersionInt64=_backendArticleVersionInt64 - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMetadata:(NSString *)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasSourceChannelId;
-(NSString *)articleId;
-(NSString *)sourceChannelId;
-(void)setPublisherArticleVersionInt64:(long long)arg1 ;
-(void)setHasPublisherArticleVersionInt64:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersionInt64;
-(void)setBackendArticleVersionInt64:(long long)arg1 ;
-(void)setHasBackendArticleVersionInt64:(BOOL)arg1 ;
-(BOOL)hasBackendArticleVersionInt64;
-(long long)publisherArticleVersionInt64;
-(long long)backendArticleVersionInt64;
-(void)setAnfComponentId:(NSString *)arg1 ;
-(BOOL)hasAnfComponentId;
-(NSString *)anfComponentId;
-(void)setAnfComponentType:(NSString *)arg1 ;
-(void)setAnfComponentRole:(NSString *)arg1 ;
-(BOOL)hasAnfComponentType;
-(BOOL)hasAnfComponentRole;
-(BOOL)hasArticleVersion;
-(NSString *)anfComponentType;
-(NSString *)anfComponentRole;
-(NSString *)articleVersion;
-(void)setArticleVersion:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)metadata;
-(id)dictionaryRepresentation;
-(BOOL)hasMetadata;
@end
