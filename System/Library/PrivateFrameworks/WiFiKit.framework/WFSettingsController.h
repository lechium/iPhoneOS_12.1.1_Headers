/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFNetworkSettingsViewControllerDataCoordinator.h>

@protocol WFSettingsControllerDelegate;
@class WFNetworkSettingsViewController, WFNetworkScanRecord, NSSet, WFMutableNetworkProfile, WFNetworkSettingsConfig, WFIPMonitor, NSOperationQueue, NSString;

@interface WFSettingsController : NSObject <WFNetworkSettingsViewControllerDataCoordinator> {

	BOOL _currentNetwork;
	BOOL _monitorIPChanges;
	BOOL _cloudSyncRunning;
	WFNetworkSettingsViewController* _settingsViewController;
	WFNetworkScanRecord* _network;
	NSSet* _recommendations;
	id<WFSettingsControllerDelegate> _delegate;
	WFMutableNetworkProfile* _profile;
	WFNetworkSettingsConfig* _config;
	WFIPMonitor* _ipMonitor;
	NSOperationQueue* _queue;

}

@property (nonatomic,retain) WFMutableNetworkProfile * profile;                                     //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * network;                                         //@synthesize network=_network - In the implementation block
@property (nonatomic,retain) WFNetworkSettingsConfig * config;                                      //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) WFNetworkSettingsViewController * settingsViewController;              //@synthesize settingsViewController=_settingsViewController - In the implementation block
@property (assign,nonatomic) BOOL monitorIPChanges;                                                 //@synthesize monitorIPChanges=_monitorIPChanges - In the implementation block
@property (nonatomic,retain) WFIPMonitor * ipMonitor;                                               //@synthesize ipMonitor=_ipMonitor - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                                              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL cloudSyncRunning;                                                 //@synthesize cloudSyncRunning=_cloudSyncRunning - In the implementation block
@property (assign,nonatomic) BOOL currentNetwork;                                                   //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (nonatomic,retain) NSSet * recommendations;                                               //@synthesize recommendations=_recommendations - In the implementation block
@property (assign,nonatomic,__weak) id<WFSettingsControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFNetworkScanRecord *)network;
-(void)setNetwork:(WFNetworkScanRecord *)arg1 ;
-(WFNetworkSettingsViewController *)settingsViewController;
-(BOOL)currentNetwork;
-(WFMutableNetworkProfile *)profile;
-(void)setProfile:(WFMutableNetworkProfile *)arg1 ;
-(void)setCurrentNetwork:(BOOL)arg1 ;
-(void)_ipStateDidChange:(id)arg1 ;
-(WFIPMonitor *)ipMonitor;
-(id)initWithNetwork:(id)arg1 networkProfile:(id)arg2 ipMonitor:(id)arg3 recommendations:(id)arg4 currentNetwork:(BOOL)arg5 delegate:(id)arg6 ;
-(void)setIpMonitor:(WFIPMonitor *)arg1 ;
-(id)_baseConfigForNetwork:(id)arg1 current:(BOOL)arg2 ;
-(void)_refreshSettingsConfig:(id)arg1 ;
-(void)_startMontoringIPChanges;
-(void)_stopMonitoringIPChanges;
-(NSSet *)recommendations;
-(id)_profileForNetwork:(id)arg1 ;
-(BOOL)cloudSyncRunning;
-(void)networkSettingsViewController:(id)arg1 saveConfig:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)networkSettingsViewController:(id)arg1 saveAutoJoinEnabed:(BOOL)arg2 ;
-(void)networkSettingsViewController:(id)arg1 saveAutoLoginEnabed:(BOOL)arg2 ;
-(id)initWithNetwork:(id)arg1 ipMonitor:(id)arg2 recommendations:(id)arg3 currentNetwork:(BOOL)arg4 ;
-(void)setRecommendations:(NSSet *)arg1 ;
-(void)setSettingsViewController:(WFNetworkSettingsViewController *)arg1 ;
-(BOOL)monitorIPChanges;
-(void)setMonitorIPChanges:(BOOL)arg1 ;
-(void)setCloudSyncRunning:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<WFSettingsControllerDelegate>)arg1 ;
-(id<WFSettingsControllerDelegate>)delegate;
-(NSOperationQueue *)queue;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(WFNetworkSettingsConfig *)config;
-(void)setConfig:(WFNetworkSettingsConfig *)arg1 ;
@end
