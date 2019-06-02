/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMedicalCodingList, NSMutableArray, HDCodableInspectableValue;

@interface HDCodableCodedValue : PBCodable <NSCopying> {

	HDCodableMedicalCodingList* _codings;
	NSMutableArray* _referenceRanges;
	HDCodableInspectableValue* _value;

}

@property (nonatomic,readonly) BOOL hasCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * codings;              //@synthesize codings=_codings - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) HDCodableInspectableValue * value;                 //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSMutableArray * referenceRanges;                  //@synthesize referenceRanges=_referenceRanges - In the implementation block
+(Class)referenceRangesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasValue;
-(HDCodableMedicalCodingList *)codings;
-(NSMutableArray *)referenceRanges;
-(void)setCodings:(HDCodableMedicalCodingList *)arg1 ;
-(void)setReferenceRanges:(NSMutableArray *)arg1 ;
-(void)addReferenceRanges:(id)arg1 ;
-(unsigned long long)referenceRangesCount;
-(void)clearReferenceRanges;
-(id)referenceRangesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCodings;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HDCodableInspectableValue *)value;
-(void)setValue:(HDCodableInspectableValue *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

