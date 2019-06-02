/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, ATXScreenRepresentation, NSMutableDictionary, _ATXAppLaunchCategoricalHistogram, _ATXAppLaunchHistogram, ATXNotificationsLogger, NSMutableString;

@interface ATXNotificationRecorder : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	ATXScreenRepresentation* _onLockScreen;
	ATXScreenRepresentation* _offScreen;
	NSMutableDictionary* _recordsTable;
	NSMutableDictionary* _relatedApps;
	_ATXAppLaunchCategoricalHistogram* _notificationsHistory;
	_ATXAppLaunchHistogram* _appHistory;
	ATXNotificationsLogger* _logger;
	NSMutableString* _logCache;

}
-(void)expungeExpiredRecords;
-(void)expungeExpiredRecordsWithCacheOption:(BOOL)arg1 ;
-(void)_addNotificationsRecord:(id)arg1 ;
-(void)insertEvent:(long long)arg1 timestamp:(id)arg2 notificationID:(id)arg3 ;
-(void)insertEvent:(long long)arg1 timestamp:(id)arg2 notificationID:(id)arg3 enableLogCache:(BOOL)arg4 ;
-(void)insertAppLaunchEvent:(id)arg1 timestamp:(id)arg2 ;
-(void)insertTapCoalesceEvent:(id)arg1 bundleId:(id)arg2 timestamp:(id)arg3 ;
-(void)getPositionForId:(id)arg1 position:(unsigned long long*)arg2 onlockscreen:(BOOL*)arg3 ;
-(void)clearAllAtTimestamp:(id)arg1 ;
-(id)flushRecords;
-(void)logRecordInAggd:(id)arg1 ;
-(void)_appendRecordToCache:(id)arg1 ;
-(id)flushLogCache;
-(void)resetNotificationsHistory;
-(id)init;
-(void)reset;
@end

