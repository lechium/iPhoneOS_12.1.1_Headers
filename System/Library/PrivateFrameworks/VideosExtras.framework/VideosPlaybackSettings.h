/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideosExtras/VideosExtras-Structs.h>
@class NSDate, MPMediaItem;

@interface VideosPlaybackSettings : NSObject {

	int _videosPreferencesNotifyToken;
	BOOL _videosPreferenecsNotifyTokenIsValid;
	VideosPlaybackSettingsOverridenSettings _overriddenSettings;
	BOOL _cellularDataEnabled;
	unsigned long long _networkStatus;
	unsigned long long _playbackQuality;
	NSDate* _lastRunDate;
	MPMediaItem* _item;

}

@property (assign,getter=isCellularDataEnabled,nonatomic) BOOL cellularDataEnabled;                     //@synthesize cellularDataEnabled=_cellularDataEnabled - In the implementation block
@property (nonatomic,retain) MPMediaItem * item;                                                        //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) unsigned long long networkStatus;                                          //@synthesize networkStatus=_networkStatus - In the implementation block
@property (assign,nonatomic) unsigned long long playbackQuality;                                        //@synthesize playbackQuality=_playbackQuality - In the implementation block
@property (nonatomic,copy) NSDate * lastRunDate;                                                        //@synthesize lastRunDate=_lastRunDate - In the implementation block
@property (getter=areCloudPurchasesEnabled,nonatomic,readonly) BOOL cloudPurchasesEnabled; 
+(id)sharedSettings;
-(void)setCellularDataEnabled:(BOOL)arg1 ;
-(BOOL)isCellularDataEnabled;
-(NSDate *)lastRunDate;
-(void)setLastRunDate:(NSDate *)arg1 ;
-(unsigned long long)networkStatus;
-(void)setNetworkStatus:(unsigned long long)arg1 ;
-(void)_networkReachabilityChanged:(id)arg1 ;
-(void)_populateNetworkValue;
-(void)_populateSettings;
-(void)_populateLastRunFromSettings;
-(void)_registerObserverForSettingsChange;
-(BOOL)networkHasConditionsForPlayback:(unsigned long long)arg1 ;
-(void)clearsCurrentSession;
-(void)overridePlaybackSettings:(unsigned long long)arg1 forMediaItem:(id)arg2 withNetworkStatus:(unsigned long long)arg3 ;
-(unsigned long long)playbackQualityForMediaItem:(id)arg1 withNetworkStatus:(unsigned long long)arg2 ;
-(unsigned long long)playbackQuality;
-(void)setPlaybackQuality:(unsigned long long)arg1 ;
-(unsigned long long)_qualityForString:(id)arg1 ;
-(unsigned long long)networkStatusForNetworkType:(long long)arg1 ;
-(BOOL)areCloudPurchasesEnabled;
-(BOOL)hasANetworkConnection;
-(BOOL)hasNetworkConditionsForPlayback;
-(BOOL)firstRunRentalImport;
-(void)populateLastRunDate;
-(void)setFirstRunRentalImport:(BOOL)arg1 ;
-(BOOL)clearsCurrentSessionWithMediaItem:(id)arg1 ;
-(void)overridePlaybackSettings:(unsigned long long)arg1 forMediaItem:(id)arg2 ;
-(unsigned long long)playbackQualityForMediaItem:(id)arg1 ;
-(BOOL)playbackSettingsOverriddenForMediaItem:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setItem:(MPMediaItem *)arg1 ;
-(MPMediaItem *)item;
@end

