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

@class NSMutableArray, NSString;

@interface NTPBTodaySectionConfigWebEmbed : PBCodable <NSCopying> {

	unsigned long long _preferredSlotAllocation;
	NSMutableArray* _embedFonts;
	NSString* _urlString;
	SCD_Struct_NT6 _has;

}

@property (nonatomic,readonly) BOOL hasUrlString; 
@property (nonatomic,retain) NSString * urlString;                                    //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,retain) NSMutableArray * embedFonts;                             //@synthesize embedFonts=_embedFonts - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredSlotAllocation; 
@property (assign,nonatomic) unsigned long long preferredSlotAllocation;              //@synthesize preferredSlotAllocation=_preferredSlotAllocation - In the implementation block
+(Class)embedFontsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setEmbedFonts:(NSMutableArray *)arg1 ;
-(BOOL)hasUrlString;
-(void)clearEmbedFonts;
-(unsigned long long)embedFontsCount;
-(id)embedFontsAtIndex:(unsigned long long)arg1 ;
-(void)setHasPreferredSlotAllocation:(BOOL)arg1 ;
-(BOOL)hasPreferredSlotAllocation;
-(NSMutableArray *)embedFonts;
-(unsigned long long)preferredSlotAllocation;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(void)addEmbedFonts:(id)arg1 ;
-(void)setPreferredSlotAllocation:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

