/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface CLPMicroLocationConfigurationEntry : PBCodable <NSCopying> {

	double _generationTimestamp;
	NSData* _configurationProtobuf;
	int _configurationType;
	NSString* _rtLOI;
	SCD_Struct_CL8 _has;

}

@property (assign,nonatomic) BOOL hasGenerationTimestamp; 
@property (assign,nonatomic) double generationTimestamp;                   //@synthesize generationTimestamp=_generationTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasRtLOI; 
@property (nonatomic,retain) NSString * rtLOI;                             //@synthesize rtLOI=_rtLOI - In the implementation block
@property (assign,nonatomic) BOOL hasConfigurationType; 
@property (assign,nonatomic) int configurationType;                        //@synthesize configurationType=_configurationType - In the implementation block
@property (nonatomic,readonly) BOOL hasConfigurationProtobuf; 
@property (nonatomic,retain) NSData * configurationProtobuf;               //@synthesize configurationProtobuf=_configurationProtobuf - In the implementation block
-(void)setRtLOI:(NSString *)arg1 ;
-(void)setConfigurationProtobuf:(NSData *)arg1 ;
-(void)setGenerationTimestamp:(double)arg1 ;
-(void)setHasGenerationTimestamp:(BOOL)arg1 ;
-(BOOL)hasGenerationTimestamp;
-(BOOL)hasRtLOI;
-(void)setHasConfigurationType:(BOOL)arg1 ;
-(BOOL)hasConfigurationType;
-(id)configurationTypeAsString:(int)arg1 ;
-(int)StringAsConfigurationType:(id)arg1 ;
-(BOOL)hasConfigurationProtobuf;
-(double)generationTimestamp;
-(NSString *)rtLOI;
-(NSData *)configurationProtobuf;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)configurationType;
-(void)setConfigurationType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

