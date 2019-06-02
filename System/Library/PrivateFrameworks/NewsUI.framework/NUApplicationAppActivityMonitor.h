/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCAppActivityMonitor.h>
#import <libobjc.A.dylib/SXAppStateMonitor.h>

@class NSNotificationCenter, NSHashTable, NSMutableSet, NSString;

@interface NUApplicationAppActivityMonitor : NSObject <FCAppActivityMonitor, SXAppStateMonitor> {

	NSNotificationCenter* _notificationCenter;
	NSHashTable* _observers;
	NSMutableSet* _activeObserverBlocks;
	NSMutableSet* _backgroundObserverBlocks;

}

@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSMutableSet * activeObserverBlocks;                    //@synthesize activeObserverBlocks=_activeObserverBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableSet * backgroundObserverBlocks;                //@synthesize backgroundObserverBlocks=_backgroundObserverBlocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNotificationCenter:(id)arg1 ;
-(NSNotificationCenter *)notificationCenter;
-(void)applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)performOnApplicationDidEnterBackground:(/*^block*/id)arg1 ;
-(void)performOnApplicationDidBecomeActive:(/*^block*/id)arg1 ;
-(void)applicationDidBecomeActiveNotification:(id)arg1 ;
-(NSMutableSet *)activeObserverBlocks;
-(NSMutableSet *)backgroundObserverBlocks;
-(void)activityObservingApplicationDidFinishLaunchingNotification:(id)arg1 ;
-(void)activityObservingApplicationWillEnterForegroundNotification:(id)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
@end

