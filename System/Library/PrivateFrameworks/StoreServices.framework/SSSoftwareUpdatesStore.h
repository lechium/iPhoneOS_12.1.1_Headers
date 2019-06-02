/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SSXPCConnection;

@interface SSSoftwareUpdatesStore : NSObject {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	SSXPCConnection* _connection;
	BOOL _didMigration;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	void* _mobileCoreServices;
	BOOL _useLocalRead;
	BOOL _useLocalWrite;

}
-(void)clearExpiredUpdateHistoryWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)hideApplicationBadgeForPendingUpdates;
-(void)removeUpdateBulletins;
-(void)showApplicationBadgeForPendingUpdates;
-(void)getUpdatesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reloadFromServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end

