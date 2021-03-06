/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBNoUserAction : PBCodable <NSCopying> {

	NSMutableArray* _visibleViews;

}

@property (nonatomic,retain) NSMutableArray * visibleViews;              //@synthesize visibleViews=_visibleViews - In the implementation block
+(Class)visibleViewsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addVisibleViews:(id)arg1 ;
-(void)clearVisibleViews;
-(unsigned long long)visibleViewsCount;
-(id)visibleViewsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)visibleViews;
-(void)setVisibleViews:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

