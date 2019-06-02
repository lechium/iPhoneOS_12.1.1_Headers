/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BLTSettingSyncingClient.h>

@class BLTWristStateObserver, BBSettingsGateway, BLTMuteSync, BLTSettingSyncServer, BLTSectionConfiguration, NSString;

@interface BLTSettingSyncInternal : NSObject <BLTSettingSyncingClient> {

	BLTWristStateObserver* _wristStateObserver;
	BBSettingsGateway* _settingsGateway;
	BLTMuteSync* _muteSync;
	BLTSettingSyncServer* _connection;
	BLTSectionConfiguration* _sectionConfiguration;

}

@property (nonatomic,retain) BBSettingsGateway * settingsGateway;                           //@synthesize settingsGateway=_settingsGateway - In the implementation block
@property (nonatomic,retain) BLTMuteSync * muteSync;                                        //@synthesize muteSync=_muteSync - In the implementation block
@property (nonatomic,retain) BLTSettingSyncServer * connection;                             //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) BOOL isWristDetectDisabled; 
@property (nonatomic,readonly) BLTSectionConfiguration * sectionConfiguration;              //@synthesize sectionConfiguration=_sectionConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)disableStandaloneTestMode;
-(void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4 ;
-(BOOL)isWristDetectDisabled;
-(BLTSectionConfiguration *)sectionConfiguration;
-(id)initWithSectionConfiguration:(id)arg1 queue:(id)arg2 ;
-(void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(BOOL)arg3 fromRemote:(BOOL)arg4 ;
-(unsigned long long)willNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 subtype:(long long)arg3 category:(id)arg4 ;
-(id)_overriddenSectionInfoForSectionID:(id)arg1 ;
-(void)setSectionInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3 ;
-(void)removeSectionWithSectionID:(id)arg1 ;
-(void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(BOOL)arg3 ;
-(void)setNotificationsGrouping:(int)arg1 sectionID:(id)arg2 ;
-(void)enableNotifications:(BOOL)arg1 sectionID:(id)arg2 mirror:(BOOL)arg3 ;
-(unsigned long long)willNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 subtype:(long long)arg3 ;
-(BLTMuteSync *)muteSync;
-(void)setMuteSync:(BLTMuteSync *)arg1 ;
-(BBSettingsGateway *)settingsGateway;
-(void)setSettingsGateway:(BBSettingsGateway *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)connect;
-(BLTSettingSyncServer *)connection;
-(void)setConnection:(BLTSettingSyncServer *)arg1 ;
@end

