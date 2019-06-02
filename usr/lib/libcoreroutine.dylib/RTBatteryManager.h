/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>
#import <libobjc.A.dylib/RTIORegistryEntryMatchObserver.h>
#import <libobjc.A.dylib/RTIOServiceChangeObserver.h>

@protocol RTIOServiceStrategy;
@class RTIONotificationPort, NSString;

@interface RTBatteryManager : RTService <RTIORegistryEntryMatchObserver, RTIOServiceChangeObserver> {

	unsigned _battery;
	unsigned _batteryInterestNotification;
	BOOL _monitorBatteryStatusChanges;
	RTIONotificationPort* _port;
	long long _externalConnectionState;
	id<RTIOServiceStrategy> _ioServiceStrategy;

}

@property (assign,nonatomic) unsigned battery; 
@property (nonatomic,retain) RTIONotificationPort * port;                              //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) unsigned batteryInterestNotification; 
@property (assign,nonatomic) BOOL monitorBatteryStatusChanges;                         //@synthesize monitorBatteryStatusChanges=_monitorBatteryStatusChanges - In the implementation block
@property (assign,nonatomic) long long externalConnectionState;                        //@synthesize externalConnectionState=_externalConnectionState - In the implementation block
@property (nonatomic,readonly) id<RTIOServiceStrategy> ioServiceStrategy;              //@synthesize ioServiceStrategy=_ioServiceStrategy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)externalConnectionStateToString:(long long)arg1 ;
-(void)_unregisterForNotifications;
-(void)setPort:(RTIONotificationPort *)arg1 ;
-(void)_shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(id)initWithStrategy:(id)arg1 ;
-(void)onRegistryEntriesMatched:(unsigned)arg1 ;
-(void)onServiceChanged:(unsigned)arg1 messageType:(unsigned)arg2 ;
-(void)setBatteryInterestNotification:(unsigned)arg1 ;
-(void)setBattery:(unsigned)arg1 ;
-(void)setMonitorBatteryStatusChanges:(BOOL)arg1 ;
-(void)startMonitoringBatteryStatusChanges;
-(void)stopMonitoringBatteryStatusChanges;
-(void)matchedBattery:(unsigned)arg1 ;
-(unsigned)batteryInterestNotification;
-(void)updateBatteryStatus:(unsigned)arg1 ;
-(void)batteryStatusChange:(unsigned)arg1 messageType:(unsigned)arg2 ;
-(long long)externalConnectionState;
-(unsigned)battery;
-(void)fetchCurrentChargerConnectionState:(/*^block*/id)arg1 ;
-(BOOL)monitorBatteryStatusChanges;
-(void)setExternalConnectionState:(long long)arg1 ;
-(id<RTIOServiceStrategy>)ioServiceStrategy;
-(id)init;
-(void)dealloc;
-(RTIONotificationPort *)port;
@end

