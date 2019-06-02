/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ETPTap : PBCodable <NSCopying> {

	NSData* _colors;
	NSData* _points;
	NSData* _timeDeltas;

}

@property (nonatomic,readonly) BOOL hasTimeDeltas; 
@property (nonatomic,retain) NSData * timeDeltas;               //@synthesize timeDeltas=_timeDeltas - In the implementation block
@property (nonatomic,readonly) BOOL hasPoints; 
@property (nonatomic,retain) NSData * points;                   //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) BOOL hasColors; 
@property (nonatomic,retain) NSData * colors;                   //@synthesize colors=_colors - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)points;
-(void)setPoints:(NSData *)arg1 ;
-(void)setTimeDeltas:(NSData *)arg1 ;
-(BOOL)hasTimeDeltas;
-(BOOL)hasPoints;
-(NSData *)timeDeltas;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setColors:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)colors;
-(BOOL)hasColors;
@end
