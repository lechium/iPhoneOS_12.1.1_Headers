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

@interface NTPBFeedViewport : PBCodable <NSCopying> {

	unsigned long long _feedDBVersion;
	unsigned long long _version;
	NSMutableArray* _elements;
	NSString* _identifier;
	NSMutableArray* _sharedStrings;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned long long version;                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasFeedDBVersion; 
@property (assign,nonatomic) unsigned long long feedDBVersion;              //@synthesize feedDBVersion=_feedDBVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * elements;                     //@synthesize elements=_elements - In the implementation block
@property (nonatomic,retain) NSMutableArray * sharedStrings;                //@synthesize sharedStrings=_sharedStrings - In the implementation block
+(Class)elementsType;
+(Class)sharedStringsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)addSharedStrings:(id)arg1 ;
-(void)setHasFeedDBVersion:(BOOL)arg1 ;
-(BOOL)hasFeedDBVersion;
-(void)clearElements;
-(unsigned long long)elementsCount;
-(id)elementsAtIndex:(unsigned long long)arg1 ;
-(void)clearSharedStrings;
-(unsigned long long)sharedStringsCount;
-(id)sharedStringsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)sharedStrings;
-(unsigned long long)feedDBVersion;
-(void)setFeedDBVersion:(unsigned long long)arg1 ;
-(void)addElements:(id)arg1 ;
-(void)setSharedStrings:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(id)dictionaryRepresentation;
-(NSMutableArray *)elements;
-(void)setElements:(NSMutableArray *)arg1 ;
@end

