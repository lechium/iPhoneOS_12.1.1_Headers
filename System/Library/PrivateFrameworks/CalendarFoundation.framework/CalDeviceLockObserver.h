/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CalDarwinNotificationListener;

@interface CalDeviceLockObserver : NSObject {

	BOOL _internalHasBeenUnlockedSinceBoot;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	CalDarwinNotificationListener* _notificationListener;
	/*^block*/id _stateChangedCallback;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                            //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                        //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) CalDarwinNotificationListener * notificationListener;              //@synthesize notificationListener=_notificationListener - In the implementation block
@property (nonatomic,copy) id stateChangedCallback;                                             //@synthesize stateChangedCallback=_stateChangedCallback - In the implementation block
@property (assign,nonatomic) BOOL internalHasBeenUnlockedSinceBoot;                             //@synthesize internalHasBeenUnlockedSinceBoot=_internalHasBeenUnlockedSinceBoot - In the implementation block
@property (nonatomic,readonly) BOOL hasBeenUnlockedSinceBoot; 
+(id)stateChangedNotificationName;
+(BOOL)_latestKeyBagValueForHasBeenUnlockedSinceBoot;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)_notificationReceived;
-(void)setStateChangedCallback:(id)arg1 ;
-(id)stateChangedCallback;
-(void)setNotificationListener:(CalDarwinNotificationListener *)arg1 ;
-(CalDarwinNotificationListener *)notificationListener;
-(id)initWithStateChangedCallback:(/*^block*/id)arg1 ;
-(BOOL)hasBeenUnlockedSinceBoot;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInternalHasBeenUnlockedSinceBoot:(BOOL)arg1 ;
-(BOOL)internalHasBeenUnlockedSinceBoot;
-(id)init;
@end

