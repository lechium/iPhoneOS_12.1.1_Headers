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

@class NSString;

@interface NTPBTodaySectionConfigArticle : PBCodable <NSCopying> {

	NSString* _articleID;
	NSString* _displayDateString;
	NSString* _storyType;

}

@property (nonatomic,readonly) BOOL hasArticleID; 
@property (nonatomic,retain) NSString * articleID;                      //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayDateString; 
@property (nonatomic,retain) NSString * displayDateString;              //@synthesize displayDateString=_displayDateString - In the implementation block
@property (nonatomic,readonly) BOOL hasStoryType; 
@property (nonatomic,retain) NSString * storyType;                      //@synthesize storyType=_storyType - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasArticleID;
-(BOOL)hasDisplayDateString;
-(BOOL)hasStoryType;
-(NSString *)displayDateString;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(NSString *)storyType;
-(void)setStoryType:(NSString *)arg1 ;
-(void)setDisplayDateString:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

