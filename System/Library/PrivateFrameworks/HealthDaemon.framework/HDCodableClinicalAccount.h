/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCodableClinicalAccount : PBCodable <NSCopying> {

	double _creationDate;
	double _lastFetchDate;
	double _lastFullFetchDate;
	double _modificationDate;
	NSString* _accountIdentifier;
	NSString* _gatewayExternalID;
	NSString* _patientHash;
	NSData* _syncIdentifier;
	BOOL _userEnabled;
	SCD_Struct_HD9 _has;

}

@property (nonatomic,readonly) BOOL hasGatewayExternalID; 
@property (nonatomic,retain) NSString * gatewayExternalID;              //@synthesize gatewayExternalID=_gatewayExternalID - In the implementation block
@property (assign,nonatomic) BOOL hasUserEnabled; 
@property (assign,nonatomic) BOOL userEnabled;                          //@synthesize userEnabled=_userEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) BOOL hasModificationDate; 
@property (assign,nonatomic) double modificationDate;                   //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) BOOL hasLastFetchDate; 
@property (assign,nonatomic) double lastFetchDate;                      //@synthesize lastFetchDate=_lastFetchDate - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncIdentifier; 
@property (nonatomic,retain) NSData * syncIdentifier;                   //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasLastFullFetchDate; 
@property (assign,nonatomic) double lastFullFetchDate;                  //@synthesize lastFullFetchDate=_lastFullFetchDate - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountIdentifier; 
@property (nonatomic,retain) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPatientHash; 
@property (nonatomic,retain) NSString * patientHash;                    //@synthesize patientHash=_patientHash - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(BOOL)hasCreationDate;
-(double)creationDate;
-(void)setCreationDate:(double)arg1 ;
-(NSData *)syncIdentifier;
-(void)setHasModificationDate:(BOOL)arg1 ;
-(BOOL)hasModificationDate;
-(void)setGatewayExternalID:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(BOOL)hasGatewayExternalID;
-(BOOL)hasAccountIdentifier;
-(NSString *)gatewayExternalID;
-(NSString *)accountIdentifier;
-(void)setSyncIdentifier:(NSData *)arg1 ;
-(BOOL)hasSyncIdentifier;
-(void)setPatientHash:(NSString *)arg1 ;
-(void)setUserEnabled:(BOOL)arg1 ;
-(void)setHasUserEnabled:(BOOL)arg1 ;
-(BOOL)hasUserEnabled;
-(void)setLastFetchDate:(double)arg1 ;
-(void)setHasLastFetchDate:(BOOL)arg1 ;
-(BOOL)hasLastFetchDate;
-(void)setLastFullFetchDate:(double)arg1 ;
-(void)setHasLastFullFetchDate:(BOOL)arg1 ;
-(BOOL)hasLastFullFetchDate;
-(BOOL)hasPatientHash;
-(BOOL)userEnabled;
-(double)lastFetchDate;
-(double)lastFullFetchDate;
-(NSString *)patientHash;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)setModificationDate:(double)arg1 ;
-(double)modificationDate;
@end

