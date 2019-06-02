/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSNumber, NSString, NSData;

@interface MCEmailAccountPayloadBase : MCPayload {

	BOOL _preventMove;
	BOOL _preventAppSheet;
	BOOL _SMIMEEnabled;
	BOOL _isRecentsSyncingDisabled;
	BOOL _isMailDropEnabled;
	BOOL _SMIMESigningUserOverrideable;
	BOOL _SMIMESigningIdentityUserOverrideable;
	BOOL _SMIMEEncryptByDefaultUserOverrideable;
	BOOL _SMIMEEncryptionIdentityUserOverrideable;
	BOOL _SMIMEPerMessageSwitchEnabled;
	NSNumber* _SMIMESigningEnabled;
	NSString* _SMIMESigningIdentityUUID;
	NSNumber* _SMIMEEncryptionEnabled;
	NSString* _SMIMEEncryptionIdentityUUID;
	NSData* _SMIMESigningIdentityPersistentID;
	NSData* _SMIMEEncryptionIdentityPersistentID;
	NSNumber* _preventMoveNum;
	NSNumber* _preventAppSheetNum;
	NSNumber* _SMIMEEnabledNum;
	NSNumber* _isRecentsSyncingDisabledNum;
	NSNumber* _isMailDropEnabledNum;
	NSNumber* _SMIMEPerMessageSwitchEnabledNum;

}

@property (nonatomic,retain) NSNumber * preventMoveNum;                                                                               //@synthesize preventMoveNum=_preventMoveNum - In the implementation block
@property (nonatomic,retain) NSNumber * preventAppSheetNum;                                                                           //@synthesize preventAppSheetNum=_preventAppSheetNum - In the implementation block
@property (setter=MIMEEnabledNum,nonatomic,retain) NSNumber * SMIMEEnabledNum;                                                        //@synthesize SMIMEEnabledNum=_SMIMEEnabledNum - In the implementation block
@property (nonatomic,retain) NSNumber * isRecentsSyncingDisabledNum;                                                                  //@synthesize isRecentsSyncingDisabledNum=_isRecentsSyncingDisabledNum - In the implementation block
@property (nonatomic,retain) NSNumber * isMailDropEnabledNum;                                                                         //@synthesize isMailDropEnabledNum=_isMailDropEnabledNum - In the implementation block
@property (setter=MIMEPerMessageSwitchEnabledNum,nonatomic,retain) NSNumber * SMIMEPerMessageSwitchEnabledNum;                        //@synthesize SMIMEPerMessageSwitchEnabledNum=_SMIMEPerMessageSwitchEnabledNum - In the implementation block
@property (assign,nonatomic) BOOL preventMove;                                                                                        //@synthesize preventMove=_preventMove - In the implementation block
@property (assign,nonatomic) BOOL preventAppSheet;                                                                                    //@synthesize preventAppSheet=_preventAppSheet - In the implementation block
@property (assign,setter=MIMEEnabled,nonatomic) BOOL SMIMEEnabled;                                                                    //@synthesize SMIMEEnabled=_SMIMEEnabled - In the implementation block
@property (assign,nonatomic) BOOL isRecentsSyncingDisabled;                                                                           //@synthesize isRecentsSyncingDisabled=_isRecentsSyncingDisabled - In the implementation block
@property (assign,nonatomic) BOOL isMailDropEnabled;                                                                                  //@synthesize isMailDropEnabled=_isMailDropEnabled - In the implementation block
@property (setter=MIMESigningEnabled,nonatomic,retain) NSNumber * SMIMESigningEnabled;                                                //@synthesize SMIMESigningEnabled=_SMIMESigningEnabled - In the implementation block
@property (assign,setter=MIMESigningUserOverrideable,nonatomic) BOOL SMIMESigningUserOverrideable;                                    //@synthesize SMIMESigningUserOverrideable=_SMIMESigningUserOverrideable - In the implementation block
@property (setter=MIMESigningIdentityUUID,nonatomic,retain) NSString * SMIMESigningIdentityUUID;                                      //@synthesize SMIMESigningIdentityUUID=_SMIMESigningIdentityUUID - In the implementation block
@property (setter=MIMEEncryptionEnabled,nonatomic,retain) NSNumber * SMIMEEncryptionEnabled;                                          //@synthesize SMIMEEncryptionEnabled=_SMIMEEncryptionEnabled - In the implementation block
@property (assign,setter=MIMEEncryptByDefaultUserOverrideable,nonatomic) BOOL SMIMEEncryptByDefaultUserOverrideable;                  //@synthesize SMIMEEncryptByDefaultUserOverrideable=_SMIMEEncryptByDefaultUserOverrideable - In the implementation block
@property (setter=MIMEEncryptionIdentityUUID,nonatomic,retain) NSString * SMIMEEncryptionIdentityUUID;                                //@synthesize SMIMEEncryptionIdentityUUID=_SMIMEEncryptionIdentityUUID - In the implementation block
@property (setter=MIMESigningIdentityPersistentID,nonatomic,retain) NSData * SMIMESigningIdentityPersistentID;                        //@synthesize SMIMESigningIdentityPersistentID=_SMIMESigningIdentityPersistentID - In the implementation block
@property (assign,setter=MIMESigningIdentityUserOverrideable,nonatomic) BOOL SMIMESigningIdentityUserOverrideable;                    //@synthesize SMIMESigningIdentityUserOverrideable=_SMIMESigningIdentityUserOverrideable - In the implementation block
@property (setter=MIMEEncryptionIdentityPersistentID,nonatomic,retain) NSData * SMIMEEncryptionIdentityPersistentID;                  //@synthesize SMIMEEncryptionIdentityPersistentID=_SMIMEEncryptionIdentityPersistentID - In the implementation block
@property (assign,setter=MIMEEncryptionIdentityUserOverrideable,nonatomic) BOOL SMIMEEncryptionIdentityUserOverrideable;              //@synthesize SMIMEEncryptionIdentityUserOverrideable=_SMIMEEncryptionIdentityUserOverrideable - In the implementation block
@property (assign,setter=MIMEPerMessageSwitchEnabled,nonatomic) BOOL SMIMEPerMessageSwitchEnabled;                                    //@synthesize SMIMEPerMessageSwitchEnabled=_SMIMEPerMessageSwitchEnabled - In the implementation block
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(BOOL)containsSensitiveUserInformation;
-(void)addSMIMEEncryptionPayloadKeysTo:(id)arg1 ;
-(NSString *)SMIMESigningIdentityUUID;
-(NSString *)SMIMEEncryptionIdentityUUID;
-(NSData *)SMIMESigningIdentityPersistentID;
-(NSData *)SMIMEEncryptionIdentityPersistentID;
-(BOOL)preventMove;
-(void)setPreventMove:(BOOL)arg1 ;
-(BOOL)preventAppSheet;
-(void)setPreventAppSheet:(BOOL)arg1 ;
-(BOOL)SMIMEEnabled;
-(void)setSMIMEEnabled:(BOOL)arg1 ;
-(BOOL)isRecentsSyncingDisabled;
-(void)setIsRecentsSyncingDisabled:(BOOL)arg1 ;
-(BOOL)isMailDropEnabled;
-(void)setIsMailDropEnabled:(BOOL)arg1 ;
-(NSNumber *)SMIMESigningEnabled;
-(void)setSMIMESigningEnabled:(NSNumber *)arg1 ;
-(BOOL)SMIMESigningUserOverrideable;
-(void)setSMIMESigningUserOverrideable:(BOOL)arg1 ;
-(void)setSMIMESigningIdentityUUID:(NSString *)arg1 ;
-(BOOL)SMIMESigningIdentityUserOverrideable;
-(void)setSMIMESigningIdentityUserOverrideable:(BOOL)arg1 ;
-(NSNumber *)SMIMEEncryptionEnabled;
-(void)setSMIMEEncryptionEnabled:(NSNumber *)arg1 ;
-(BOOL)SMIMEEncryptByDefaultUserOverrideable;
-(void)setSMIMEEncryptByDefaultUserOverrideable:(BOOL)arg1 ;
-(void)setSMIMEEncryptionIdentityUUID:(NSString *)arg1 ;
-(BOOL)SMIMEEncryptionIdentityUserOverrideable;
-(void)setSMIMEEncryptionIdentityUserOverrideable:(BOOL)arg1 ;
-(void)setSMIMESigningIdentityPersistentID:(NSData *)arg1 ;
-(void)setSMIMEEncryptionIdentityPersistentID:(NSData *)arg1 ;
-(BOOL)SMIMEPerMessageSwitchEnabled;
-(void)setSMIMEPerMessageSwitchEnabled:(BOOL)arg1 ;
-(NSNumber *)preventMoveNum;
-(void)setPreventMoveNum:(NSNumber *)arg1 ;
-(NSNumber *)preventAppSheetNum;
-(void)setPreventAppSheetNum:(NSNumber *)arg1 ;
-(NSNumber *)SMIMEEnabledNum;
-(void)setSMIMEEnabledNum:(NSNumber *)arg1 ;
-(NSNumber *)isRecentsSyncingDisabledNum;
-(void)setIsRecentsSyncingDisabledNum:(NSNumber *)arg1 ;
-(NSNumber *)isMailDropEnabledNum;
-(void)setIsMailDropEnabledNum:(NSNumber *)arg1 ;
-(NSNumber *)SMIMEPerMessageSwitchEnabledNum;
-(void)setSMIMEPerMessageSwitchEnabledNum:(NSNumber *)arg1 ;
-(id)description;
@end

