/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPIdentifier, CKDPSubscriptionNotification, CKDPRecordZoneIdentifier;

@interface CKDPSubscription : PBCodable <NSCopying> {

	SCD_Struct_CK20* _mutationTriggers;
	int _evaluationType;
	NSMutableArray* _filters;
	CKDPIdentifier* _identifier;
	CKDPSubscriptionNotification* _notification;
	int _owner;
	NSMutableArray* _recordTypes;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	BOOL _fireOnce;
	SCD_Struct_CK16 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) CKDPIdentifier * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasEvaluationType; 
@property (assign,nonatomic) int evaluationType;                                       //@synthesize evaluationType=_evaluationType - In the implementation block
@property (assign,nonatomic) BOOL hasOwner; 
@property (assign,nonatomic) int owner;                                                //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) unsigned long long mutationTriggersCount; 
@property (nonatomic,readonly) int* mutationTriggers; 
@property (nonatomic,readonly) BOOL hasNotification; 
@property (nonatomic,retain) CKDPSubscriptionNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,retain) NSMutableArray * filters;                                 //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordTypes;                             //@synthesize recordTypes=_recordTypes - In the implementation block
@property (assign,nonatomic) BOOL hasFireOnce; 
@property (assign,nonatomic) BOOL fireOnce;                                            //@synthesize fireOnce=_fireOnce - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;                //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
+(Class)filtersType;
+(Class)recordTypesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)filtersCount;
-(void)clearFilters;
-(BOOL)hasIdentifier;
-(void)setNotification:(CKDPSubscriptionNotification *)arg1 ;
-(BOOL)hasNotification;
-(void)addFilters:(id)arg1 ;
-(id)filtersAtIndex:(unsigned long long)arg1 ;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(void)addRecordTypes:(id)arg1 ;
-(unsigned long long)mutationTriggersCount;
-(void)clearMutationTriggers;
-(int)mutationTriggersAtIndex:(unsigned long long)arg1 ;
-(void)addMutationTriggers:(int)arg1 ;
-(unsigned long long)recordTypesCount;
-(void)clearRecordTypes;
-(id)recordTypesAtIndex:(unsigned long long)arg1 ;
-(int)evaluationType;
-(void)setEvaluationType:(int)arg1 ;
-(void)setHasEvaluationType:(BOOL)arg1 ;
-(BOOL)hasEvaluationType;
-(id)evaluationTypeAsString:(int)arg1 ;
-(int)StringAsEvaluationType:(id)arg1 ;
-(void)setHasOwner:(BOOL)arg1 ;
-(BOOL)hasOwner;
-(id)ownerAsString:(int)arg1 ;
-(int)StringAsOwner:(id)arg1 ;
-(int*)mutationTriggers;
-(void)setMutationTriggers:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)mutationTriggersAsString:(int)arg1 ;
-(int)StringAsMutationTriggers:(id)arg1 ;
-(void)setFireOnce:(BOOL)arg1 ;
-(void)setHasFireOnce:(BOOL)arg1 ;
-(BOOL)hasFireOnce;
-(NSMutableArray *)recordTypes;
-(void)setRecordTypes:(NSMutableArray *)arg1 ;
-(BOOL)fireOnce;
-(void)dealloc;
-(CKDPIdentifier *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)filters;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(CKDPIdentifier *)arg1 ;
-(id)dictionaryRepresentation;
-(CKDPSubscriptionNotification *)notification;
-(void)copyTo:(id)arg1 ;
-(int)owner;
-(void)setOwner:(int)arg1 ;
@end

