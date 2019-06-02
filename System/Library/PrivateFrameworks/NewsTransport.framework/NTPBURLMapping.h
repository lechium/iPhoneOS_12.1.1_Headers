/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBURLMapping : PBCodable <NSCopying> {

	NSMutableArray* _domains;

}

@property (nonatomic,retain) NSMutableArray * domains;              //@synthesize domains=_domains - In the implementation block
+(Class)domainsType;
-(void)setDomains:(NSMutableArray *)arg1 ;
-(unsigned long long)domainsCount;
-(void)clearDomains;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addDomains:(id)arg1 ;
-(id)domainsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)domains;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

