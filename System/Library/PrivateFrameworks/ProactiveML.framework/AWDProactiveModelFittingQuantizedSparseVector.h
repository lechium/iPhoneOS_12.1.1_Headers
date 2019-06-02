/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDProactiveModelFittingQuantizedSparseVector : PBCodable <NSCopying> {

	SCD_Struct_AW4* _indices;
	SCD_Struct_AW4* _values;
	float _bucketSize;
	unsigned _length;
	float _minValue;
	SCD_Struct_AW2 _has;

}

@property (nonatomic,readonly) unsigned long long indicesCount; 
@property (nonatomic,readonly) unsigned* indices; 
@property (nonatomic,readonly) unsigned long long valuesCount; 
@property (nonatomic,readonly) unsigned* values; 
@property (assign,nonatomic) BOOL hasLength; 
@property (assign,nonatomic) unsigned length;                                //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) BOOL hasMinValue; 
@property (assign,nonatomic) float minValue;                                 //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) BOOL hasBucketSize; 
@property (assign,nonatomic) float bucketSize;                               //@synthesize bucketSize=_bucketSize - In the implementation block
+(id)quantizedSparseVectorFromSparseVector:(id)arg1 numberOfBuckets:(unsigned long long)arg2 ;
+(id)quantizedSparseVectorFromDenseVector:(id)arg1 numberOfBuckets:(unsigned long long)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLength;
-(unsigned long long)valuesCount;
-(void)setHasLength:(BOOL)arg1 ;
-(unsigned)valuesAtIndex:(unsigned long long)arg1 ;
-(void)setValues:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasMinValue:(BOOL)arg1 ;
-(BOOL)hasMinValue;
-(void)setBucketSize:(float)arg1 ;
-(void)setHasBucketSize:(BOOL)arg1 ;
-(BOOL)hasBucketSize;
-(float)bucketSize;
-(unsigned long long)indicesCount;
-(void)clearIndices;
-(unsigned)indicesAtIndex:(unsigned long long)arg1 ;
-(void)addIndices:(unsigned)arg1 ;
-(void)setIndices:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(float)originalValueAtIndex:(unsigned long long)arg1 ;
-(unsigned*)indices;
-(void)addValues:(unsigned)arg1 ;
-(void)setMinValue:(float)arg1 ;
-(float)minValue;
-(unsigned)length;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLength:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(unsigned*)values;
-(void)clearValues;
@end
