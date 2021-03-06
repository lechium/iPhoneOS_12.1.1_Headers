/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NTPBFeedViewportGap, NTPBFeedViewportGroup;

@interface NTPBFeedViewportElement : PBCodable <NSCopying> {

	NSString* _identifier;
	NTPBFeedViewportGap* _pbGap;
	NTPBFeedViewportGroup* _pbGroup;
	int _type;
	SCD_Struct_NT6 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasPbGroup; 
@property (nonatomic,retain) NTPBFeedViewportGroup * pbGroup;              //@synthesize pbGroup=_pbGroup - In the implementation block
@property (nonatomic,readonly) BOOL hasPbGap; 
@property (nonatomic,retain) NTPBFeedViewportGap * pbGap;                  //@synthesize pbGap=_pbGap - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasIdentifier;
-(BOOL)hasPbGroup;
-(BOOL)hasPbGap;
-(NTPBFeedViewportGroup *)pbGroup;
-(void)setPbGroup:(NTPBFeedViewportGroup *)arg1 ;
-(void)setPbGap:(NTPBFeedViewportGap *)arg1 ;
-(NTPBFeedViewportGap *)pbGap;
-(void)dealloc;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
@end

