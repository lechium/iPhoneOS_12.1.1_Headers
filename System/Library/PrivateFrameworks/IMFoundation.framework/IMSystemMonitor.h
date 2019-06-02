/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableArray, NSDate, NSTimer, NSString;

@interface IMSystemMonitor : NSObject {

	BOOL _watchesDataProtectionLockState;
	BOOL _watchesScreenLightState;
	BOOL _receivesMemoryWarnings;
	BOOL _willSleep;
	BOOL _screenLocked;
	BOOL _screensaverActive;
	BOOL _watchesSystemLockState;
	BOOL _underFirstLock;
	BOOL _active;
	BOOL _backingUp;
	BOOL _switchedOut;
	BOOL _screenLit;
	BOOL _systemLocked;
	BOOL _idleOverride;
	BOOL _usesPowerNotifications;
	BOOL _usesSystemIdleState;
	BOOL _inBackground;
	int _dataProtectionState;
	int _userIdleToken;
	NSMutableArray* _listeners;
	NSDate* _idleStart;
	NSTimer* _timer;
	NSDate* _dateScreenLightLastChanged;
	NSDate* _dateSystemLockLastChanged;
	NSString* _userID;
	double _delayTime;
	NSMutableArray* _earlyListeners;
	long long _resignActiveCount;
	opaque_pthread_mutex_t _ivarLock;

}

@property (assign,nonatomic) opaque_pthread_mutex_t ivarLock;                           //@synthesize ivarLock=_ivarLock - In the implementation block
@property (assign,nonatomic) BOOL isFastUserSwitched;                                   //@synthesize switchedOut=_switchedOut - In the implementation block
@property (assign,nonatomic) long long resignActiveCount;                               //@synthesize resignActiveCount=_resignActiveCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * _listeners;                               //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,retain) NSMutableArray * _earlyListeners;                          //@synthesize earlyListeners=_earlyListeners - In the implementation block
@property (assign,nonatomic) int userIdleToken;                                         //@synthesize userIdleToken=_userIdleToken - In the implementation block
@property (assign,nonatomic) BOOL _idleOverride;                                        //@synthesize idleOverride=_idleOverride - In the implementation block
@property (assign,nonatomic) BOOL _underFirstLock;                                      //@synthesize underFirstLock=_underFirstLock - In the implementation block
@property (assign,nonatomic) int _dataProtectionState;                                  //@synthesize dataProtectionState=_dataProtectionState - In the implementation block
@property (nonatomic,retain) NSDate * _idleStart;                                       //@synthesize idleStart=_idleStart - In the implementation block
@property (nonatomic,retain) NSTimer * _timer;                                          //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSString * _userID;                                        //@synthesize userID=_userID - In the implementation block
@property (assign,nonatomic) double _delayTime;                                         //@synthesize delayTime=_delayTime - In the implementation block
@property (assign,setter=setActive:,nonatomic) BOOL isActive;                           //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL usesPowerNotifications;                               //@synthesize usesPowerNotifications=_usesPowerNotifications - In the implementation block
@property (assign,nonatomic) BOOL receivesMemoryWarnings;                               //@synthesize receivesMemoryWarnings=_receivesMemoryWarnings - In the implementation block
@property (assign,nonatomic) BOOL usesSystemIdleState;                                  //@synthesize usesSystemIdleState=_usesSystemIdleState - In the implementation block
@property (assign,nonatomic) BOOL watchesDataProtectionLockState;                       //@synthesize watchesDataProtectionLockState=_watchesDataProtectionLockState - In the implementation block
@property (assign,nonatomic) BOOL watchesSystemLockState;                               //@synthesize watchesSystemLockState=_watchesSystemLockState - In the implementation block
@property (assign,nonatomic) BOOL watchesScreenLightState;                              //@synthesize watchesScreenLightState=_watchesScreenLightState - In the implementation block
@property (nonatomic,readonly) BOOL systemIsSleeping;                                   //@synthesize willSleep=_willSleep - In the implementation block
@property (nonatomic,readonly) BOOL systemIsShuttingDown; 
@property (nonatomic,readonly) BOOL isScreenSaverActive;                                //@synthesize screensaverActive=_screensaverActive - In the implementation block
@property (nonatomic,readonly) BOOL isScreenLocked;                                     //@synthesize screenLocked=_screenLocked - In the implementation block
@property (nonatomic,readonly) BOOL isScreenLit;                                        //@synthesize screenLit=_screenLit - In the implementation block
@property (nonatomic,retain,readonly) NSDate * dateScreenLightLastChanged;              //@synthesize dateScreenLightLastChanged=_dateScreenLightLastChanged - In the implementation block
@property (nonatomic,readonly) BOOL isSystemLocked;                                     //@synthesize systemLocked=_systemLocked - In the implementation block
@property (nonatomic,retain,readonly) NSDate * dateSystemLockLastChanged;               //@synthesize dateSystemLockLastChanged=_dateSystemLockLastChanged - In the implementation block
@property (nonatomic,readonly) BOOL isUnderDataProtectionLock; 
@property (nonatomic,readonly) BOOL isUnderFirstDataProtectionLock; 
@property (nonatomic,readonly) BOOL isBackingUp;                                        //@synthesize backingUp=_backingUp - In the implementation block
@property (nonatomic,readonly) BOOL isSetup; 
@property (nonatomic,readonly) BOOL isSystemIdle; 
@property (nonatomic,readonly) double systemIdleTime; 
@property (nonatomic,readonly) BOOL isInBackground;                                     //@synthesize inBackground=_inBackground - In the implementation block
+(id)sharedInstance;
-(void)_suspend:(id)arg1 ;
-(void)_resume:(id)arg1 ;
-(void)_suspendEventsOnly:(id)arg1 ;
-(void)_resumeEventsOnly:(id)arg1 ;
-(void)_registerForRestoreNotifications;
-(void)_unregisterForRestoreNotifications;
-(void)_unregisterForLoginWindowNotifications;
-(void)_deliverNotificationSelector:(SEL)arg1 ;
-(void)_postScreenLocked;
-(void)_postScreenSaverStarted;
-(BOOL)usesPowerNotifications;
-(void)_notificationCenterWillAppear:(id)arg1 ;
-(void)_notificationCenterDidDisappear:(id)arg1 ;
-(BOOL)_deviceStillUnderFirstLock;
-(BOOL)_isUnderDataProtectionLockForState:(int)arg1 ;
-(void)_alreadyLocked_clearIdleTimer;
-(BOOL)_alreadyLocked_isSystemIdle;
-(BOOL)watchesDataProtectionLockState;
-(BOOL)watchesScreenLightState;
-(BOOL)watchesSystemLockState;
-(BOOL)receivesMemoryWarnings;
-(BOOL)usesSystemIdleState;
-(NSDate *)dateScreenLightLastChanged;
-(NSDate *)dateSystemLockLastChanged;
-(BOOL)systemIsSleeping;
-(BOOL)isScreenSaverActive;
-(BOOL)isBackingUp;
-(BOOL)isFastUserSwitched;
-(void)_systemDidWake;
-(void)_systemWillSleep;
-(void)_screenSaverStopped:(id)arg1 ;
-(void)_screenSaverStarted:(id)arg1 ;
-(void)_setDataProtectionLockState:(int)arg1 ;
-(BOOL)isUnderDataProtectionLock;
-(void)setWatchesDataProtectionLockState:(BOOL)arg1 ;
-(void)setUsesPowerNotifications:(BOOL)arg1 ;
-(void)_setSystemScreenState:(BOOL)arg1 ;
-(void)_setSystemLockState:(BOOL)arg1 ;
-(void)_updateIdleState;
-(void)setUsesSystemIdleState:(BOOL)arg1 ;
-(void)_setIdleState:(BOOL)arg1 ;
-(void)_overrideAndDisableIdleTimer:(BOOL)arg1 ;
-(void)_armIdleTimer;
-(void)_clearIdleTimer;
-(void)_checkIdleTime:(id)arg1 ;
-(void)_systemWillShutdown;
-(void)_checkRestoredFromBackup;
-(void)_restoreDidStart;
-(void)_restoreDidStop;
-(void)_setupStateChanged;
-(void)_handleLoginWindowNotification:(id)arg1 ;
-(void)_registerForLoginWindowNotifications;
-(int)_dataProtectionState;
-(void)set_dataProtectionState:(int)arg1 ;
-(BOOL)_underFirstLock;
-(void)set_underFirstLock:(BOOL)arg1 ;
-(void)setIsFastUserSwitched:(BOOL)arg1 ;
-(NSMutableArray *)_listeners;
-(void)set_listeners:(NSMutableArray *)arg1 ;
-(NSDate *)_idleStart;
-(void)set_idleStart:(NSDate *)arg1 ;
-(void)set_timer:(NSTimer *)arg1 ;
-(NSString *)_userID;
-(void)set_userID:(NSString *)arg1 ;
-(double)_delayTime;
-(void)set_delayTime:(double)arg1 ;
-(BOOL)_idleOverride;
-(void)set_idleOverride:(BOOL)arg1 ;
-(NSMutableArray *)_earlyListeners;
-(void)set_earlyListeners:(NSMutableArray *)arg1 ;
-(int)userIdleToken;
-(void)setUserIdleToken:(int)arg1 ;
-(opaque_pthread_mutex_t)ivarLock;
-(void)setIvarLock:(opaque_pthread_mutex_t)arg1 ;
-(long long)resignActiveCount;
-(void)setResignActiveCount:(long long)arg1 ;
-(void)_applicationWillAddDeactivationReason:(id)arg1 ;
-(void)_applicationDidRemoveDeactivationReason:(id)arg1 ;
-(BOOL)systemIsShuttingDown;
-(void)_addEarlyListener:(id)arg1 ;
-(void)_removeEarlyListener:(id)arg1 ;
-(BOOL)isScreenLocked;
-(void)addListener:(id)arg1 ;
-(void)_forceSuspended;
-(void)_forceResumed;
-(void)removeListener:(id)arg1 ;
-(void)_screenLocked:(id)arg1 ;
-(void)_screenUnlocked:(id)arg1 ;
-(BOOL)isUnderFirstDataProtectionLock;
-(BOOL)isSystemIdle;
-(double)systemIdleTime;
-(void)setWatchesSystemLockState:(BOOL)arg1 ;
-(BOOL)isSystemLocked;
-(NSTimer *)_timer;
-(BOOL)isInBackground;
-(void)setWatchesScreenLightState:(BOOL)arg1 ;
-(BOOL)isScreenLit;
-(id)init;
-(void)dealloc;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isActive;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(BOOL)isSetup;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)setReceivesMemoryWarnings:(BOOL)arg1 ;
-(void)_receivedMemoryNotification;
@end

