/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FileProvider-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FPSearchableItemValue : PBCodable <NSCopying> {

	double _doubleValue;
	long long _integerValue;
	double _timeIntervalSinceReferenceDateValue;
	NSString* _stringValue;
	SCD_Struct_FP1 _has;

}

@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                                   //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                                       //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasIntegerValue; 
@property (assign,nonatomic) long long integerValue;                                   //@synthesize integerValue=_integerValue - In the implementation block
@property (assign,nonatomic) BOOL hasTimeIntervalSinceReferenceDateValue; 
@property (assign,nonatomic) double timeIntervalSinceReferenceDateValue;               //@synthesize timeIntervalSinceReferenceDateValue=_timeIntervalSinceReferenceDateValue - In the implementation block
+(id)stringFromObject:(id)arg1 ;
+(id)objectFromString:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(void)setTimeIntervalSinceReferenceDateValue:(double)arg1 ;
-(void)setHasTimeIntervalSinceReferenceDateValue:(BOOL)arg1 ;
-(BOOL)hasTimeIntervalSinceReferenceDateValue;
-(double)timeIntervalSinceReferenceDateValue;
-(BOOL)hasIntegerValue;
-(void)setHasIntegerValue:(BOOL)arg1 ;
-(void)setIntegerValue:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)integerValue;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(double)doubleValue;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
@end

