/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface WBSHistoryDatabaseAccessBroker : NSObject {

	NSURL* _historyDatabaseURL;
	NSObject*<OS_dispatch_queue> _writeRequestQueue;

}
-(void)requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandlerWithInvalidationHandler:(/*^block*/id)arg3 ;
-(void)_requestReadOnlyAccessOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_requestReadWriteAccessOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_openDatabaseWithAccessType:(long long)arg1 onQueue:(id)arg2 error:(id*)arg3 ;
-(id)initWithHistoryDatabaseURL:(id)arg1 ;
-(id)databaseLastModifiedDate;
-(id)init;
@end

