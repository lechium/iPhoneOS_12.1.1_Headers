/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface NMSMediaSettingsSynchronizer : NSObject {

	BOOL _isObserving;
	NSUserDefaults* _mediaPlaybackCoreDefaults;
	NSUserDefaults* _mobileIPodDefaults;
	NSUserDefaults* _nanoMusicSyncDefaults;
	NSUserDefaults* _podcastsDefaults;

}
+(id)sharedSynchronizer;
-(void)endObservingUpdates;
-(void)_createDefaultGreenTeaSettingsIfNecessary;
-(id)_podcastsUserDefaults;
-(void)_syncPodcastDefaultsIfNecessary;
-(id)_podcastsAppGroupPath;
-(void)beginObservingUpdates;
-(void)_reconcileGreenTeaSettingsIfNecessary;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

