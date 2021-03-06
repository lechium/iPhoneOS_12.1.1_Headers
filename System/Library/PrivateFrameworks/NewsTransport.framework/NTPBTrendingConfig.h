/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBTrendingConfig : PBCodable <NSCopying> {

	NSString* _fallbackLanguageTag;
	NSMutableArray* _languageConfigs;

}

@property (nonatomic,readonly) BOOL hasFallbackLanguageTag; 
@property (nonatomic,retain) NSString * fallbackLanguageTag;                //@synthesize fallbackLanguageTag=_fallbackLanguageTag - In the implementation block
@property (nonatomic,retain) NSMutableArray * languageConfigs;              //@synthesize languageConfigs=_languageConfigs - In the implementation block
+(Class)languageConfigsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addLanguageConfigs:(id)arg1 ;
-(void)setFallbackLanguageTag:(NSString *)arg1 ;
-(BOOL)hasFallbackLanguageTag;
-(void)clearLanguageConfigs;
-(id)languageConfigsAtIndex:(unsigned long long)arg1 ;
-(void)setLanguageConfigs:(NSMutableArray *)arg1 ;
-(unsigned long long)languageConfigsCount;
-(NSMutableArray *)languageConfigs;
-(NSString *)fallbackLanguageTag;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

