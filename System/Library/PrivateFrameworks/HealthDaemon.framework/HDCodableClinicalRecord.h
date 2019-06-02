/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDCodableFHIRResourceForAPI, HDCodableSample;

@interface HDCodableClinicalRecord : PBCodable <HDDecoding, NSCopying> {

	NSString* _displayName;
	HDCodableFHIRResourceForAPI* _fHIRResource;
	HDCodableSample* _sample;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) HDCodableSample * sample;                                //@synthesize sample=_sample - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasFHIRResource; 
@property (nonatomic,retain) HDCodableFHIRResourceForAPI * fHIRResource;              //@synthesize fHIRResource=_fHIRResource - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)hasDisplayName;
-(void)setSample:(HDCodableSample *)arg1 ;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)hasSample;
-(HDCodableSample *)sample;
-(BOOL)applyToObject:(id)arg1 error:(out id*)arg2 ;
-(void)setFHIRResource:(HDCodableFHIRResourceForAPI *)arg1 ;
-(HDCodableFHIRResourceForAPI *)fHIRResource;
-(BOOL)hasFHIRResource;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(NSString *)displayName;
@end

