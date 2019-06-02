/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, LSInstallProgressList, NSMutableDictionary, NSMutableOrderedSet, NSObject, NSString;

@interface _LSInstallProgressService : NSObject <NSXPCListenerDelegate> {

	NSMutableSet* _observers;
	LSInstallProgressList* _progresses;
	NSMutableSet* _publishingStrings;
	NSMutableDictionary* _installIndexes;
	NSMutableOrderedSet* _orderedInstalls;
	NSMutableSet* _inactiveInstalls;
	NSObject*<OS_dispatch_queue> _installControlsQueue;
	NSObject*<OS_dispatch_queue> _observersQueue;
	BOOL _usingNetwork;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)beginListening;
+(id)sharedInstance;
-(void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2 ;
-(void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3 ;
-(void)sendNotification:(id)arg1 ForPlugins:(id)arg2 ;
-(void)sendNotification:(int)arg1 forAppProxies:(id)arg2 Plugins:(BOOL)arg3 ;
-(void)installationFailedForApplication:(id)arg1 ;
-(void)sendNetworkUsageChangedNotification;
-(void)restoreInactiveInstalls;
-(id)_LSFindPlaceholderApplications;
-(void)rebuildInstallIndexes;
-(id)parentProgressForApplication:(id)arg1 andPhase:(unsigned long long)arg2 isActive:(BOOL)arg3 ;
-(void)_placeholderIconUpdatedForApp:(id)arg1 ;
-(id)_prepareApplicationProxiesForNotification:(int)arg1 identifiers:(id)arg2 withPlugins:(BOOL)arg3 options:(id)arg4 ;
-(void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(BOOL)arg3 options:(id)arg4 ;
-(void)handleCancelInstallationForApp:(id)arg1 ;
-(void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(BOOL)arg3 ;
-(void)sendAppControlsNotificationForApp:(id)arg1 withName:(id)arg2 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

