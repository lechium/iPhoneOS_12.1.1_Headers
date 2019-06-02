/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>
#import <libobjc.A.dylib/MTSystemStateDelegate.h>

@protocol MTNotificationCenter, MTNotificationResponseDelegate;
@class NSDate, MTAgentNotificationManager, MTSystemStateListener, MTLanguageChangeListener, MTPairedDeviceListener, MTSyncCommandListener, MTAgentDiagnosticListener, MTTimeListener, MTAlarmServer, MTAlarmScheduler, MTAlarmSnapshot, MTBedtimeSnapshot, MTAlarmStorage, MTAlarmIntentDonor, MTSleepMonitor, MTSleepMetrics, MTBedtimeDNDMonitor, MTTimerServer, MTTimerScheduler, MTTimerSnapshot, MTTimerStorage, MTTimerIntentDonor, NSString;

@interface MTAgent : NSObject <MTAgentDiagnosticDelegate, MTSystemStateDelegate> {

	NSDate* _launchDate;
	long long _mode;
	MTAgentNotificationManager* _notificationManager;
	MTSystemStateListener* _systemStateListener;
	MTLanguageChangeListener* _languageChangeListener;
	MTPairedDeviceListener* _pairedDeviceListener;
	MTSyncCommandListener* _syncCommandListener;
	MTAgentDiagnosticListener* _diagnostics;
	MTTimeListener* _timeListener;
	MTAlarmServer* _alarmServer;
	MTAlarmScheduler* _alarmScheduler;
	MTAlarmSnapshot* _alarmSnapshot;
	MTBedtimeSnapshot* _bedtimeSnapshot;
	MTAlarmStorage* _alarmStorage;
	MTAlarmIntentDonor* _alarmIntentDonor;
	MTSleepMonitor* _sleepMonitor;
	MTSleepMetrics* _sleepMetrics;
	MTBedtimeDNDMonitor* _bedtimeDNDMonitor;
	MTTimerServer* _timerServer;
	MTTimerScheduler* _timerScheduler;
	MTTimerSnapshot* _timerSnapshot;
	MTTimerStorage* _timerStorage;
	MTTimerIntentDonor* _timerIntentDonor;
	id<MTNotificationCenter> _notificationCenter;
	id<MTNotificationResponseDelegate> _notificationResponseDelegate;

}

@property (nonatomic,retain) NSDate * launchDate;                                                          //@synthesize launchDate=_launchDate - In the implementation block
@property (assign,nonatomic) long long mode;                                                               //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) MTAgentNotificationManager * notificationManager;                             //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,retain) MTSystemStateListener * systemStateListener;                                  //@synthesize systemStateListener=_systemStateListener - In the implementation block
@property (nonatomic,retain) MTLanguageChangeListener * languageChangeListener;                            //@synthesize languageChangeListener=_languageChangeListener - In the implementation block
@property (nonatomic,retain) MTPairedDeviceListener * pairedDeviceListener;                                //@synthesize pairedDeviceListener=_pairedDeviceListener - In the implementation block
@property (nonatomic,retain) MTSyncCommandListener * syncCommandListener;                                  //@synthesize syncCommandListener=_syncCommandListener - In the implementation block
@property (nonatomic,retain) MTAgentDiagnosticListener * diagnostics;                                      //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,retain) MTTimeListener * timeListener;                                                //@synthesize timeListener=_timeListener - In the implementation block
@property (nonatomic,retain) MTAlarmServer * alarmServer;                                                  //@synthesize alarmServer=_alarmServer - In the implementation block
@property (nonatomic,retain) MTAlarmScheduler * alarmScheduler;                                            //@synthesize alarmScheduler=_alarmScheduler - In the implementation block
@property (nonatomic,retain) MTAlarmSnapshot * alarmSnapshot;                                              //@synthesize alarmSnapshot=_alarmSnapshot - In the implementation block
@property (nonatomic,retain) MTBedtimeSnapshot * bedtimeSnapshot;                                          //@synthesize bedtimeSnapshot=_bedtimeSnapshot - In the implementation block
@property (nonatomic,retain) MTAlarmStorage * alarmStorage;                                                //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (nonatomic,retain) MTAlarmIntentDonor * alarmIntentDonor;                                        //@synthesize alarmIntentDonor=_alarmIntentDonor - In the implementation block
@property (nonatomic,retain) MTSleepMonitor * sleepMonitor;                                                //@synthesize sleepMonitor=_sleepMonitor - In the implementation block
@property (nonatomic,retain) MTSleepMetrics * sleepMetrics;                                                //@synthesize sleepMetrics=_sleepMetrics - In the implementation block
@property (nonatomic,retain) MTBedtimeDNDMonitor * bedtimeDNDMonitor;                                      //@synthesize bedtimeDNDMonitor=_bedtimeDNDMonitor - In the implementation block
@property (nonatomic,retain) MTTimerServer * timerServer;                                                  //@synthesize timerServer=_timerServer - In the implementation block
@property (nonatomic,retain) MTTimerScheduler * timerScheduler;                                            //@synthesize timerScheduler=_timerScheduler - In the implementation block
@property (nonatomic,retain) MTTimerSnapshot * timerSnapshot;                                              //@synthesize timerSnapshot=_timerSnapshot - In the implementation block
@property (nonatomic,retain) MTTimerStorage * timerStorage;                                                //@synthesize timerStorage=_timerStorage - In the implementation block
@property (nonatomic,retain) MTTimerIntentDonor * timerIntentDonor;                                        //@synthesize timerIntentDonor=_timerIntentDonor - In the implementation block
@property (nonatomic,retain) id<MTNotificationCenter> notificationCenter;                                  //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) id<MTNotificationResponseDelegate> notificationResponseDelegate;              //@synthesize notificationResponseDelegate=_notificationResponseDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)agent;
-(void)setNotificationManager:(MTAgentNotificationManager *)arg1 ;
-(void)setDiagnostics:(MTAgentDiagnosticListener *)arg1 ;
-(MTAgentDiagnosticListener *)diagnostics;
-(id<MTNotificationCenter>)notificationCenter;
-(void)printDiagnostics;
-(id)gatherDiagnostics;
-(void)handleF5Reset;
-(MTAlarmStorage *)alarmStorage;
-(void)setAlarmStorage:(MTAlarmStorage *)arg1 ;
-(MTSleepMonitor *)sleepMonitor;
-(void)setSleepMonitor:(MTSleepMonitor *)arg1 ;
-(MTTimerStorage *)timerStorage;
-(void)setTimerStorage:(MTTimerStorage *)arg1 ;
-(void)restoreDidFinish;
-(void)_setupAlarms;
-(void)_setupTimers;
-(void)_setupSync;
-(void)_setupInitialListeners;
-(void)_setupSecondaryListeners;
-(void)_setupSyncMonitor;
-(MTSystemStateListener *)systemStateListener;
-(MTAlarmServer *)alarmServer;
-(MTAlarmScheduler *)alarmScheduler;
-(MTTimerServer *)timerServer;
-(MTTimerScheduler *)timerScheduler;
-(id)_diagnosticProviders;
-(void)setLaunchDate:(NSDate *)arg1 ;
-(void)setSystemStateListener:(MTSystemStateListener *)arg1 ;
-(MTLanguageChangeListener *)languageChangeListener;
-(void)setLanguageChangeListener:(MTLanguageChangeListener *)arg1 ;
-(MTPairedDeviceListener *)pairedDeviceListener;
-(void)setPairedDeviceListener:(MTPairedDeviceListener *)arg1 ;
-(MTSyncCommandListener *)syncCommandListener;
-(void)setSyncCommandListener:(MTSyncCommandListener *)arg1 ;
-(MTTimeListener *)timeListener;
-(void)setTimeListener:(MTTimeListener *)arg1 ;
-(void)setAlarmServer:(MTAlarmServer *)arg1 ;
-(void)setAlarmScheduler:(MTAlarmScheduler *)arg1 ;
-(MTAlarmSnapshot *)alarmSnapshot;
-(void)setAlarmSnapshot:(MTAlarmSnapshot *)arg1 ;
-(MTBedtimeSnapshot *)bedtimeSnapshot;
-(void)setBedtimeSnapshot:(MTBedtimeSnapshot *)arg1 ;
-(MTAlarmIntentDonor *)alarmIntentDonor;
-(void)setAlarmIntentDonor:(MTAlarmIntentDonor *)arg1 ;
-(MTSleepMetrics *)sleepMetrics;
-(void)setSleepMetrics:(MTSleepMetrics *)arg1 ;
-(MTBedtimeDNDMonitor *)bedtimeDNDMonitor;
-(void)setBedtimeDNDMonitor:(MTBedtimeDNDMonitor *)arg1 ;
-(void)setTimerServer:(MTTimerServer *)arg1 ;
-(void)setTimerScheduler:(MTTimerScheduler *)arg1 ;
-(MTTimerSnapshot *)timerSnapshot;
-(void)setTimerSnapshot:(MTTimerSnapshot *)arg1 ;
-(MTTimerIntentDonor *)timerIntentDonor;
-(void)setTimerIntentDonor:(MTTimerIntentDonor *)arg1 ;
-(id<MTNotificationResponseDelegate>)notificationResponseDelegate;
-(void)setNotificationResponseDelegate:(id<MTNotificationResponseDelegate>)arg1 ;
-(MTAgentNotificationManager *)notificationManager;
-(NSDate *)launchDate;
-(void)setNotificationCenter:(id<MTNotificationCenter>)arg1 ;
-(id)init;
-(long long)mode;
-(void)setMode:(long long)arg1 ;
@end
