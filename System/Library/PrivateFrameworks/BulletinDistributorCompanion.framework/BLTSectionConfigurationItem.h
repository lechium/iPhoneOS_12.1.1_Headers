/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSNumber;

@interface BLTSectionConfigurationItem : NSObject {

	BOOL _optOutOfCoordination;
	BOOL _optOutOfAttachmentTransmission;
	BOOL _alwaysSyncSettings;
	BOOL _alwaysAlert;
	BOOL _optOutOfWaitForUserIdle;
	BOOL _applyWhitelistToChildSections;
	BOOL _optOutOfNotificationTuning;
	BOOL _hasLegacyMapInUserInfo;
	BOOL _hasLegacyMapInContext;
	BOOL _optOutOfSubtitleRemovalForOlderWatches;
	NSArray* _whitelistedSubtypes;
	NSArray* _blacklistedCategories;
	NSNumber* _watchVersionThatUsesUserInfoForContext;
	NSArray* _additionalBridgeSectionIDs;

}

@property (assign,nonatomic) BOOL optOutOfCoordination;                                      //@synthesize optOutOfCoordination=_optOutOfCoordination - In the implementation block
@property (assign,nonatomic) BOOL optOutOfAttachmentTransmission;                            //@synthesize optOutOfAttachmentTransmission=_optOutOfAttachmentTransmission - In the implementation block
@property (assign,nonatomic) BOOL alwaysSyncSettings;                                        //@synthesize alwaysSyncSettings=_alwaysSyncSettings - In the implementation block
@property (nonatomic,retain) NSArray * whitelistedSubtypes;                                  //@synthesize whitelistedSubtypes=_whitelistedSubtypes - In the implementation block
@property (nonatomic,retain) NSArray * blacklistedCategories;                                //@synthesize blacklistedCategories=_blacklistedCategories - In the implementation block
@property (assign,nonatomic) BOOL alwaysAlert;                                               //@synthesize alwaysAlert=_alwaysAlert - In the implementation block
@property (assign,nonatomic) BOOL optOutOfWaitForUserIdle;                                   //@synthesize optOutOfWaitForUserIdle=_optOutOfWaitForUserIdle - In the implementation block
@property (assign,nonatomic) BOOL applyWhitelistToChildSections;                             //@synthesize applyWhitelistToChildSections=_applyWhitelistToChildSections - In the implementation block
@property (assign,nonatomic) BOOL optOutOfNotificationTuning;                                //@synthesize optOutOfNotificationTuning=_optOutOfNotificationTuning - In the implementation block
@property (assign,nonatomic) BOOL hasLegacyMapInUserInfo;                                    //@synthesize hasLegacyMapInUserInfo=_hasLegacyMapInUserInfo - In the implementation block
@property (assign,nonatomic) BOOL hasLegacyMapInContext;                                     //@synthesize hasLegacyMapInContext=_hasLegacyMapInContext - In the implementation block
@property (nonatomic,retain) NSNumber * watchVersionThatUsesUserInfoForContext;              //@synthesize watchVersionThatUsesUserInfoForContext=_watchVersionThatUsesUserInfoForContext - In the implementation block
@property (nonatomic,retain) NSArray * additionalBridgeSectionIDs;                           //@synthesize additionalBridgeSectionIDs=_additionalBridgeSectionIDs - In the implementation block
@property (assign,nonatomic) BOOL optOutOfSubtitleRemovalForOlderWatches;                    //@synthesize optOutOfSubtitleRemovalForOlderWatches=_optOutOfSubtitleRemovalForOlderWatches - In the implementation block
-(BOOL)optOutOfCoordination;
-(BOOL)optOutOfCoordinationWithSubtype:(long long)arg1 ;
-(void)setOptOutOfCoordination:(BOOL)arg1 ;
-(BOOL)optOutOfAttachmentTransmission;
-(void)setOptOutOfAttachmentTransmission:(BOOL)arg1 ;
-(BOOL)alwaysSyncSettings;
-(void)setAlwaysSyncSettings:(BOOL)arg1 ;
-(NSArray *)whitelistedSubtypes;
-(void)setWhitelistedSubtypes:(NSArray *)arg1 ;
-(NSArray *)blacklistedCategories;
-(void)setBlacklistedCategories:(NSArray *)arg1 ;
-(BOOL)alwaysAlert;
-(void)setAlwaysAlert:(BOOL)arg1 ;
-(BOOL)optOutOfWaitForUserIdle;
-(void)setOptOutOfWaitForUserIdle:(BOOL)arg1 ;
-(BOOL)applyWhitelistToChildSections;
-(void)setApplyWhitelistToChildSections:(BOOL)arg1 ;
-(BOOL)optOutOfNotificationTuning;
-(void)setOptOutOfNotificationTuning:(BOOL)arg1 ;
-(BOOL)hasLegacyMapInUserInfo;
-(void)setHasLegacyMapInUserInfo:(BOOL)arg1 ;
-(BOOL)hasLegacyMapInContext;
-(void)setHasLegacyMapInContext:(BOOL)arg1 ;
-(NSNumber *)watchVersionThatUsesUserInfoForContext;
-(void)setWatchVersionThatUsesUserInfoForContext:(NSNumber *)arg1 ;
-(NSArray *)additionalBridgeSectionIDs;
-(void)setAdditionalBridgeSectionIDs:(NSArray *)arg1 ;
-(BOOL)optOutOfSubtitleRemovalForOlderWatches;
-(void)setOptOutOfSubtitleRemovalForOlderWatches:(BOOL)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
@end
