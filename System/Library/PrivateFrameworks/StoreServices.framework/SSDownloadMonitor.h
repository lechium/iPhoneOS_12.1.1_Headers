/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSDownloadMonitorDelegate, OS_dispatch_queue;
@class SSXPCConnection, NSObject;

@interface SSDownloadMonitor : NSObject {

	SSXPCConnection* _connection;
	id<SSDownloadMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (assign) id<SSDownloadMonitorDelegate> delegate; 
-(id)_copyItemsWithReply:(id)arg1 error:(id*)arg2 ;
-(void)getMonitorItemsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)pauseMonitorItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)prioritizeMonitorItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resumeMonitorItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_reloadForChangeNotification;
-(id)_connection;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<SSDownloadMonitorDelegate>)arg1 ;
-(id<SSDownloadMonitorDelegate>)delegate;
@end
