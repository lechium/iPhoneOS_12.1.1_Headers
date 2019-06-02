/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PKHost;

@interface PMMAppsSettingsMonitor : NSObject {

	BOOL _applicationPredictionExtensionEnabled;
	BOOL _zeroKeywordEnabled;
	BOOL _magicalMomentsEnabled;
	int _notifyRegistrationToken;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _handler;
	PKHost* _pluginKitHost;
	id _driver;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id handler;                                                //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) PKHost * pluginKitHost;                                  //@synthesize pluginKitHost=_pluginKitHost - In the implementation block
@property (nonatomic,retain) id driver;                                               //@synthesize driver=_driver - In the implementation block
@property (assign,nonatomic) BOOL applicationPredictionExtensionEnabled;              //@synthesize applicationPredictionExtensionEnabled=_applicationPredictionExtensionEnabled - In the implementation block
@property (assign,nonatomic) BOOL zeroKeywordEnabled;                                 //@synthesize zeroKeywordEnabled=_zeroKeywordEnabled - In the implementation block
@property (assign,nonatomic) int notifyRegistrationToken;                             //@synthesize notifyRegistrationToken=_notifyRegistrationToken - In the implementation block
@property (assign,nonatomic) BOOL magicalMomentsEnabled;                              //@synthesize magicalMomentsEnabled=_magicalMomentsEnabled - In the implementation block
-(void)_determinePredictedApplicationExtensionEnabled;
-(void)_registerForZeroKeywordDisabledNotification;
-(void)_updateAppSettingsEnabled;
-(void)fetchAppsSuggestionsEnabled:(/*^block*/id)arg1 ;
-(void)setNotifyRegistrationToken:(int)arg1 ;
-(BOOL)magicalMomentsEnabled;
-(void)setMagicalMomentsEnabled:(BOOL)arg1 ;
-(int)notifyRegistrationToken;
-(void)_registerForNotifications;
-(void)_updatePredictedApplicationExtensions:(id)arg1 error:(id)arg2 ;
-(BOOL)_determineZeroKeywordEnabled;
-(PKHost *)pluginKitHost;
-(void)setPluginKitHost:(PKHost *)arg1 ;
-(BOOL)applicationPredictionExtensionEnabled;
-(void)setApplicationPredictionExtensionEnabled:(BOOL)arg1 ;
-(BOOL)zeroKeywordEnabled;
-(void)setZeroKeywordEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)driver;
-(void)setDriver:(id)arg1 ;
@end

