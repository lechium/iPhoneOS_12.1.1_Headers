/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDHomeKitCameraSnapshotMessaging, AWDHomeKitCameraIDSSessionSetup, AWDHomeKitCameraSnapshotIDSTransfer, NSString, AWDHomeKitVendorInformation;

@interface AWDHomeKitCameraSnapshot : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	AWDHomeKitCameraSnapshotMessaging* _controllerMessaging;
	unsigned _errorCode;
	AWDHomeKitCameraIDSSessionSetup* _idsSessionSetup;
	AWDHomeKitCameraSnapshotIDSTransfer* _phoneToWatch;
	unsigned _receivedSnapshotFromAccessory;
	AWDHomeKitCameraSnapshotMessaging* _residentMessaging;
	AWDHomeKitCameraSnapshotIDSTransfer* _residentToPhone;
	unsigned _sentSnapshotRequestToAccessory;
	NSString* _sessionID;
	unsigned _underlyingErrorCode;
	NSString* _underlyingErrorDomain;
	AWDHomeKitVendorInformation* _vendorDetails;
	AWDHomeKitCameraSnapshotMessaging* _watchMessaging;
	BOOL _forNotification;
	BOOL _isLocal;
	SCD_Struct_AW15 _has;

}

@property (nonatomic,readonly) BOOL hasVendorDetails; 
@property (nonatomic,retain) AWDHomeKitVendorInformation * vendorDetails;                          //@synthesize vendorDetails=_vendorDetails - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionID; 
@property (nonatomic,retain) NSString * sessionID;                                                 //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                                                   //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasIsLocal; 
@property (assign,nonatomic) BOOL isLocal;                                                         //@synthesize isLocal=_isLocal - In the implementation block
@property (assign,nonatomic) BOOL hasForNotification; 
@property (assign,nonatomic) BOOL forNotification;                                                 //@synthesize forNotification=_forNotification - In the implementation block
@property (nonatomic,readonly) BOOL hasIdsSessionSetup; 
@property (nonatomic,retain) AWDHomeKitCameraIDSSessionSetup * idsSessionSetup;                    //@synthesize idsSessionSetup=_idsSessionSetup - In the implementation block
@property (assign,nonatomic) BOOL hasSentSnapshotRequestToAccessory; 
@property (assign,nonatomic) unsigned sentSnapshotRequestToAccessory;                              //@synthesize sentSnapshotRequestToAccessory=_sentSnapshotRequestToAccessory - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedSnapshotFromAccessory; 
@property (assign,nonatomic) unsigned receivedSnapshotFromAccessory;                               //@synthesize receivedSnapshotFromAccessory=_receivedSnapshotFromAccessory - In the implementation block
@property (nonatomic,readonly) BOOL hasWatchMessaging; 
@property (nonatomic,retain) AWDHomeKitCameraSnapshotMessaging * watchMessaging;                   //@synthesize watchMessaging=_watchMessaging - In the implementation block
@property (nonatomic,readonly) BOOL hasControllerMessaging; 
@property (nonatomic,retain) AWDHomeKitCameraSnapshotMessaging * controllerMessaging;              //@synthesize controllerMessaging=_controllerMessaging - In the implementation block
@property (nonatomic,readonly) BOOL hasResidentMessaging; 
@property (nonatomic,retain) AWDHomeKitCameraSnapshotMessaging * residentMessaging;                //@synthesize residentMessaging=_residentMessaging - In the implementation block
@property (nonatomic,readonly) BOOL hasResidentToPhone; 
@property (nonatomic,retain) AWDHomeKitCameraSnapshotIDSTransfer * residentToPhone;                //@synthesize residentToPhone=_residentToPhone - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneToWatch; 
@property (nonatomic,retain) AWDHomeKitCameraSnapshotIDSTransfer * phoneToWatch;                   //@synthesize phoneToWatch=_phoneToWatch - In the implementation block
@property (nonatomic,readonly) BOOL hasUnderlyingErrorDomain; 
@property (nonatomic,retain) NSString * underlyingErrorDomain;                                     //@synthesize underlyingErrorDomain=_underlyingErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasUnderlyingErrorCode; 
@property (assign,nonatomic) unsigned underlyingErrorCode;                                         //@synthesize underlyingErrorCode=_underlyingErrorCode - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSessionID;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(unsigned)errorCode;
-(void)setUnderlyingErrorCode:(unsigned)arg1 ;
-(void)setUnderlyingErrorDomain:(NSString *)arg1 ;
-(BOOL)hasUnderlyingErrorDomain;
-(void)setHasUnderlyingErrorCode:(BOOL)arg1 ;
-(BOOL)hasUnderlyingErrorCode;
-(NSString *)underlyingErrorDomain;
-(unsigned)underlyingErrorCode;
-(void)setVendorDetails:(AWDHomeKitVendorInformation *)arg1 ;
-(BOOL)hasVendorDetails;
-(AWDHomeKitVendorInformation *)vendorDetails;
-(void)setIdsSessionSetup:(AWDHomeKitCameraIDSSessionSetup *)arg1 ;
-(void)setWatchMessaging:(AWDHomeKitCameraSnapshotMessaging *)arg1 ;
-(void)setControllerMessaging:(AWDHomeKitCameraSnapshotMessaging *)arg1 ;
-(void)setResidentMessaging:(AWDHomeKitCameraSnapshotMessaging *)arg1 ;
-(void)setIsLocal:(BOOL)arg1 ;
-(void)setHasIsLocal:(BOOL)arg1 ;
-(BOOL)hasIsLocal;
-(BOOL)hasIdsSessionSetup;
-(BOOL)hasWatchMessaging;
-(BOOL)hasControllerMessaging;
-(BOOL)hasResidentMessaging;
-(AWDHomeKitCameraIDSSessionSetup *)idsSessionSetup;
-(AWDHomeKitCameraSnapshotMessaging *)watchMessaging;
-(AWDHomeKitCameraSnapshotMessaging *)controllerMessaging;
-(AWDHomeKitCameraSnapshotMessaging *)residentMessaging;
-(void)setResidentToPhone:(AWDHomeKitCameraSnapshotIDSTransfer *)arg1 ;
-(void)setPhoneToWatch:(AWDHomeKitCameraSnapshotIDSTransfer *)arg1 ;
-(void)setForNotification:(BOOL)arg1 ;
-(void)setHasForNotification:(BOOL)arg1 ;
-(BOOL)hasForNotification;
-(void)setSentSnapshotRequestToAccessory:(unsigned)arg1 ;
-(void)setHasSentSnapshotRequestToAccessory:(BOOL)arg1 ;
-(BOOL)hasSentSnapshotRequestToAccessory;
-(void)setReceivedSnapshotFromAccessory:(unsigned)arg1 ;
-(void)setHasReceivedSnapshotFromAccessory:(BOOL)arg1 ;
-(BOOL)hasReceivedSnapshotFromAccessory;
-(BOOL)hasResidentToPhone;
-(BOOL)hasPhoneToWatch;
-(BOOL)forNotification;
-(unsigned)sentSnapshotRequestToAccessory;
-(unsigned)receivedSnapshotFromAccessory;
-(AWDHomeKitCameraSnapshotIDSTransfer *)residentToPhone;
-(AWDHomeKitCameraSnapshotIDSTransfer *)phoneToWatch;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isLocal;
-(void)copyTo:(id)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
@end
