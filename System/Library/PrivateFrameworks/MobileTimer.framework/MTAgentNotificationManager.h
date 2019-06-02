/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NAScheduler;
@class NSMutableArray;

@interface MTAgentNotificationManager : NSObject {

	NSMutableArray* _listeners;
	id<NAScheduler> _serializer;

}

@property (nonatomic,retain) NSMutableArray * listeners;              //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;              //@synthesize serializer=_serializer - In the implementation block
+(BOOL)_isSchedulingRelatedNotification:(id)arg1 streamName:(id)arg2 ;
+(double)_schedulingAssertionTimeout;
+(BOOL)_isSyncNotification:(id)arg1 streamName:(id)arg2 ;
+(BOOL)_isSleepNotification:(id)arg1 streamName:(id)arg2 ;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)_handleNotification:(id)arg1 ;
-(NSMutableArray *)listeners;
-(void)setListeners:(NSMutableArray *)arg1 ;
-(void)_registerForLiveDarwinNotification:(id)arg1 ;
-(void)_registerForDistributedNotifications;
-(void)_registerForDarwinNotifications;
-(void)_registerForAlarmNotifications;
-(void)_registerForXPCStream:(id)arg1 notificationType:(long long)arg2 ;
-(void)registerListener:(id)arg1 ;
-(void)beginListening;
-(id)init;
-(void)dealloc;
@end

