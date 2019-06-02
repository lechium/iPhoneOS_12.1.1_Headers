/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPLNetworkWatcherDelegate.h>
#import <libobjc.A.dylib/_CPLScheduledOverrideDelegate.h>
#import <libobjc.A.dylib/CPLEngineComponent.h>

@protocol OS_dispatch_queue;
@class NSURL, NSObject, CPLNetworkWatcher, NSMutableDictionary, CPLEngineLibrary, NSString;

@interface CPLEngineSystemMonitor : NSObject <CPLNetworkWatcherDelegate, _CPLScheduledOverrideDelegate, CPLEngineComponent> {

	BOOL _closed;
	NSURL* _volumeURL;
	NSObject*<OS_dispatch_queue> _queue;
	CPLNetworkWatcher* _watcher;
	BOOL _modifyingBudgetOverride;
	unsigned long long _newBudgetsToOverride;
	unsigned long long _newBudgetsToStopOverriding;
	NSMutableDictionary* _reasonsToOverrideSystemBudget;
	NSMutableDictionary* _scheduledOverrides;
	BOOL _overrideDataSystemBudgetPermanently;
	BOOL _allowOperationsBoost;
	BOOL _allowBackgroundOperationsBoost;
	CPLEngineLibrary* _engineLibrary;

}

@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;              //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (readonly) unsigned long long diskPressureState; 
@property (readonly) unsigned long long freeDiskSpaceSize; 
@property (readonly) BOOL isNetworkConnected; 
@property (readonly) BOOL isOnCellularOrUnknown; 
@property (readonly) BOOL isDataBudgetOverriden; 
@property (readonly) BOOL canBoostOperations; 
@property (readonly) BOOL canBoostBackgroundOperations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)enumerateSystemBudgets:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)descriptionForBudget:(unsigned long long)arg1 ;
+(id)descriptionForBudgets:(unsigned long long)arg1 ;
-(CPLEngineLibrary *)engineLibrary;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(BOOL)isOnCellularOrUnknown;
-(BOOL)isDataBudgetOverriden;
-(void)networkStateDidChangeForNetworkWatcher:(id)arg1 ;
-(unsigned long long)diskPressureState;
-(BOOL)isNetworkConnected;
-(BOOL)canBoostOperations;
-(BOOL)canBoostBackgroundOperations;
-(void)startOverridingSystemBudgets:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)stopOverridingSystemBudgets:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)_startWatchingPermanentDataOverride;
-(void)_startOverridingBudget:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)_withSystemBudgetOverride:(/*^block*/id)arg1 ;
-(void)_stopWatchingPermanentDataOverride;
-(void)_stopOverridingBudget:(unsigned long long)arg1 reason:(id)arg2 ;
-(BOOL)_hasPermanentDataOverride;
-(void)scheduledOverrideDidEnd:(id)arg1 ;
-(unsigned long long)freeDiskSpaceSize;
-(void)startOverridingSystemBudgetsForClient:(unsigned long long)arg1 ;
-(void)stopOverridingSystemBudgetsForClient:(unsigned long long)arg1 ;
-(void)_permanentDataOverrideHasChanged;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)componentName;
@end

