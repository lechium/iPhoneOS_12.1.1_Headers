/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, HDCodableMedicalRecord, NSString;

@interface HDCodableAccountOwner : PBCodable <HDDecoding, NSCopying> {

	NSData* _birthDate;
	HDCodableMedicalRecord* _medicalRecord;
	NSString* _name;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasMedicalRecord; 
@property (nonatomic,retain) HDCodableMedicalRecord * medicalRecord;              //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasBirthDate; 
@property (nonatomic,retain) NSData * birthDate;                                  //@synthesize birthDate=_birthDate - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasName;
-(void)setMedicalRecord:(HDCodableMedicalRecord *)arg1 ;
-(BOOL)hasMedicalRecord;
-(HDCodableMedicalRecord *)medicalRecord;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)applyToObject:(id)arg1 error:(out id*)arg2 ;
-(NSData *)birthDate;
-(void)setBirthDate:(NSData *)arg1 ;
-(BOOL)hasBirthDate;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
