/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, HDCodableSample;

@interface HDCodableCDADocumentSample : PBCodable <HDDecoding, NSCopying> {

	NSString* _authorName;
	NSString* _custodianName;
	NSData* _documentData;
	int _omittedContent;
	NSString* _patientName;
	HDCodableSample* _sample;
	NSString* _title;
	SCD_Struct_HD7 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) HDCodableSample * sample;              //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic) BOOL hasOmittedContent; 
@property (assign,nonatomic) int omittedContent;                    //@synthesize omittedContent=_omittedContent - In the implementation block
@property (nonatomic,readonly) BOOL hasDocumentData; 
@property (nonatomic,retain) NSData * documentData;                 //@synthesize documentData=_documentData - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasPatientName; 
@property (nonatomic,retain) NSString * patientName;                //@synthesize patientName=_patientName - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthorName; 
@property (nonatomic,retain) NSString * authorName;                 //@synthesize authorName=_authorName - In the implementation block
@property (nonatomic,readonly) BOOL hasCustodianName; 
@property (nonatomic,retain) NSString * custodianName;              //@synthesize custodianName=_custodianName - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSample:(HDCodableSample *)arg1 ;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)hasSample;
-(HDCodableSample *)sample;
-(void)setOmittedContent:(int)arg1 ;
-(void)setDocumentData:(NSData *)arg1 ;
-(NSString *)patientName;
-(void)setPatientName:(NSString *)arg1 ;
-(NSString *)authorName;
-(void)setAuthorName:(NSString *)arg1 ;
-(NSString *)custodianName;
-(void)setCustodianName:(NSString *)arg1 ;
-(int)omittedContent;
-(void)setHasOmittedContent:(BOOL)arg1 ;
-(BOOL)hasOmittedContent;
-(id)omittedContentAsString:(int)arg1 ;
-(int)StringAsOmittedContent:(id)arg1 ;
-(BOOL)hasDocumentData;
-(BOOL)hasPatientName;
-(BOOL)hasAuthorName;
-(BOOL)hasCustodianName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasTitle;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(NSData *)documentData;
@end

