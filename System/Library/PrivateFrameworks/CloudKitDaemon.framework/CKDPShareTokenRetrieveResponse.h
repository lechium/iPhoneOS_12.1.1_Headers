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

@class CKDPParticipant, NSString, CKDPProtectionInfo, NSMutableArray, NSData, CKDPShare, CKDPShareIdentifier;

@interface CKDPShareTokenRetrieveResponse : PBCodable <NSCopying> {

	CKDPParticipant* _callingParticipant;
	NSString* _container;
	int _containerEnvironment;
	NSString* _etag;
	CKDPProtectionInfo* _invitedPcs;
	NSString* _ownerFirstName;
	NSString* _ownerLastName;
	int _participantState;
	int _participantType;
	int _permission;
	NSMutableArray* _potentialMatchs;
	NSData* _protectedFullToken;
	CKDPProtectionInfo* _selfAddedPcs;
	CKDPShare* _share;
	CKDPShareIdentifier* _shareId;
	SCD_Struct_CK17 _has;

}

@property (nonatomic,readonly) BOOL hasContainer; 
@property (nonatomic,retain) NSString * container;                              //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) BOOL hasContainerEnvironment; 
@property (assign,nonatomic) int containerEnvironment;                          //@synthesize containerEnvironment=_containerEnvironment - In the implementation block
@property (nonatomic,readonly) BOOL hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;                     //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                   //@synthesize etag=_etag - In the implementation block
@property (assign,nonatomic) BOOL hasParticipantType; 
@property (assign,nonatomic) int participantType;                               //@synthesize participantType=_participantType - In the implementation block
@property (assign,nonatomic) BOOL hasParticipantState; 
@property (assign,nonatomic) int participantState;                              //@synthesize participantState=_participantState - In the implementation block
@property (assign,nonatomic) BOOL hasPermission; 
@property (assign,nonatomic) int permission;                                    //@synthesize permission=_permission - In the implementation block
@property (nonatomic,readonly) BOOL hasSelfAddedPcs; 
@property (nonatomic,retain) CKDPProtectionInfo * selfAddedPcs;                 //@synthesize selfAddedPcs=_selfAddedPcs - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectedFullToken; 
@property (nonatomic,retain) NSData * protectedFullToken;                       //@synthesize protectedFullToken=_protectedFullToken - In the implementation block
@property (nonatomic,readonly) BOOL hasOwnerFirstName; 
@property (nonatomic,retain) NSString * ownerFirstName;                         //@synthesize ownerFirstName=_ownerFirstName - In the implementation block
@property (nonatomic,readonly) BOOL hasOwnerLastName; 
@property (nonatomic,retain) NSString * ownerLastName;                          //@synthesize ownerLastName=_ownerLastName - In the implementation block
@property (nonatomic,readonly) BOOL hasInvitedPcs; 
@property (nonatomic,retain) CKDPProtectionInfo * invitedPcs;                   //@synthesize invitedPcs=_invitedPcs - In the implementation block
@property (nonatomic,readonly) BOOL hasCallingParticipant; 
@property (nonatomic,retain) CKDPParticipant * callingParticipant;              //@synthesize callingParticipant=_callingParticipant - In the implementation block
@property (nonatomic,retain) NSMutableArray * potentialMatchs;                  //@synthesize potentialMatchs=_potentialMatchs - In the implementation block
@property (nonatomic,readonly) BOOL hasShare; 
@property (nonatomic,retain) CKDPShare * share;                                 //@synthesize share=_share - In the implementation block
+(Class)potentialMatchType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(BOOL)hasContainer;
-(NSString *)ownerFirstName;
-(NSString *)ownerLastName;
-(int)containerEnvironment;
-(void)setContainerEnvironment:(int)arg1 ;
-(void)setHasContainerEnvironment:(BOOL)arg1 ;
-(BOOL)hasContainerEnvironment;
-(id)containerEnvironmentAsString:(int)arg1 ;
-(int)StringAsContainerEnvironment:(id)arg1 ;
-(int)permission;
-(NSData *)protectedFullToken;
-(CKDPParticipant *)callingParticipant;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(BOOL)hasParticipantType;
-(int)participantType;
-(BOOL)hasParticipantState;
-(int)participantState;
-(void)setProtectedFullToken:(NSData *)arg1 ;
-(void)setCallingParticipant:(CKDPParticipant *)arg1 ;
-(unsigned long long)potentialMatchsCount;
-(NSMutableArray *)potentialMatchs;
-(BOOL)hasShareId;
-(BOOL)hasProtectedFullToken;
-(CKDPShareIdentifier *)shareId;
-(BOOL)hasShare;
-(void)setSelfAddedPcs:(CKDPProtectionInfo *)arg1 ;
-(BOOL)hasSelfAddedPcs;
-(CKDPProtectionInfo *)selfAddedPcs;
-(void)setPermission:(int)arg1 ;
-(void)setHasPermission:(BOOL)arg1 ;
-(BOOL)hasPermission;
-(id)permissionAsString:(int)arg1 ;
-(int)StringAsPermission:(id)arg1 ;
-(void)setParticipantState:(int)arg1 ;
-(void)setHasParticipantState:(BOOL)arg1 ;
-(id)participantStateAsString:(int)arg1 ;
-(int)StringAsParticipantState:(id)arg1 ;
-(void)setParticipantType:(int)arg1 ;
-(void)setHasParticipantType:(BOOL)arg1 ;
-(id)participantTypeAsString:(int)arg1 ;
-(int)StringAsParticipantType:(id)arg1 ;
-(void)addPotentialMatch:(id)arg1 ;
-(void)setOwnerFirstName:(NSString *)arg1 ;
-(void)setOwnerLastName:(NSString *)arg1 ;
-(void)setInvitedPcs:(CKDPProtectionInfo *)arg1 ;
-(void)clearPotentialMatchs;
-(id)potentialMatchAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasOwnerFirstName;
-(BOOL)hasOwnerLastName;
-(BOOL)hasInvitedPcs;
-(BOOL)hasCallingParticipant;
-(CKDPProtectionInfo *)invitedPcs;
-(void)setPotentialMatchs:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)container;
-(void)setContainer:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(CKDPShare *)share;
-(void)setShare:(CKDPShare *)arg1 ;
@end

