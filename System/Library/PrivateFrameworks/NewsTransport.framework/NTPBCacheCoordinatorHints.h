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

@class NSMutableArray;

@interface NTPBCacheCoordinatorHints : PBCodable <NSCopying> {

	long long _version;
	NSMutableArray* _cacheHints;
	SCD_Struct_NT6 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) long long version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSMutableArray * cacheHints;              //@synthesize cacheHints=_cacheHints - In the implementation block
+(Class)cacheHintsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)addCacheHints:(id)arg1 ;
-(void)clearCacheHints;
-(unsigned long long)cacheHintsCount;
-(id)cacheHintsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)cacheHints;
-(void)setCacheHints:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(id)dictionaryRepresentation;
@end

