/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDPCSData.h>

@class CKRecordID, NSString, NSData;

@interface CKDSharePCSData : CKDPCSData {

	OpaquePCSShareProtectionRef _publicPCS;
	CKRecordID* _shareID;
	unsigned long long _serviceType;
	NSString* _shareEtag;
	long long _publicPermission;
	long long _myParticipantRole;
	long long _myParticipantPermission;
	OpaquePCSShareProtectionRef _myParticipantPCS;
	NSData* _myParticipantPCSData;
	NSString* _publicPCSEtag;
	NSData* _publicPCSData;

}

@property (nonatomic,retain) CKRecordID * shareID;                                      //@synthesize shareID=_shareID - In the implementation block
@property (assign,nonatomic) unsigned long long serviceType;                            //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSString * shareEtag;                                      //@synthesize shareEtag=_shareEtag - In the implementation block
@property (assign,nonatomic) long long publicPermission;                                //@synthesize publicPermission=_publicPermission - In the implementation block
@property (assign,nonatomic) long long myParticipantRole;                               //@synthesize myParticipantRole=_myParticipantRole - In the implementation block
@property (assign,nonatomic) long long myParticipantPermission;                         //@synthesize myParticipantPermission=_myParticipantPermission - In the implementation block
@property (assign,nonatomic) OpaquePCSShareProtectionRef myParticipantPCS;              //@synthesize myParticipantPCS=_myParticipantPCS - In the implementation block
@property (nonatomic,copy) NSData * myParticipantPCSData;                               //@synthesize myParticipantPCSData=_myParticipantPCSData - In the implementation block
@property (assign,nonatomic) OpaquePCSShareProtectionRef invitedPCS; 
@property (assign,nonatomic) OpaquePCSShareProtectionRef publicPCS; 
@property (nonatomic,copy) NSString * publicPCSEtag;                                    //@synthesize publicPCSEtag=_publicPCSEtag - In the implementation block
@property (nonatomic,copy) NSData * publicPCSData;                                      //@synthesize publicPCSData=_publicPCSData - In the implementation block
+(id)dataWithShareID:(id)arg1 pcsData:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(unsigned long long)serviceType;
-(void)setServiceType:(unsigned long long)arg1 ;
-(id)CKPropertiesDescription;
-(OpaquePCSShareProtectionRef)invitedPCS;
-(NSData *)myParticipantPCSData;
-(void)setMyParticipantPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(OpaquePCSShareProtectionRef)myParticipantPCS;
-(NSData *)publicPCSData;
-(long long)publicPermission;
-(void)setPublicPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(void)setInvitedPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(void)setPublicPCSData:(NSData *)arg1 ;
-(void)setMyParticipantPermission:(long long)arg1 ;
-(void)setMyParticipantRole:(long long)arg1 ;
-(void)setMyParticipantPCSData:(NSData *)arg1 ;
-(void)setPublicPermission:(long long)arg1 ;
-(void)setShareEtag:(NSString *)arg1 ;
-(void)setPublicPCSEtag:(NSString *)arg1 ;
-(OpaquePCSShareProtectionRef)publicPCS;
-(NSString *)shareEtag;
-(NSString *)publicPCSEtag;
-(id)initWithShareID:(id)arg1 pcsData:(id)arg2 ;
-(long long)myParticipantPermission;
-(long long)myParticipantRole;
-(CKRecordID *)shareID;
-(void)setShareID:(CKRecordID *)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

