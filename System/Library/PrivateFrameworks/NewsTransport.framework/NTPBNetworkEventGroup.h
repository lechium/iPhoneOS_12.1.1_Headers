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

@class NSString;

@interface NTPBNetworkEventGroup : PBCodable <NSCopying> {

	NSString* _respondingInstance;
	NSString* _via;

}

@property (nonatomic,readonly) BOOL hasVia; 
@property (nonatomic,retain) NSString * via;                             //@synthesize via=_via - In the implementation block
@property (nonatomic,readonly) BOOL hasRespondingInstance; 
@property (nonatomic,retain) NSString * respondingInstance;              //@synthesize respondingInstance=_respondingInstance - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setVia:(NSString *)arg1 ;
-(void)setRespondingInstance:(NSString *)arg1 ;
-(BOOL)hasVia;
-(BOOL)hasRespondingInstance;
-(NSString *)via;
-(NSString *)respondingInstance;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
