/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface MPStoreDownloadExpectationController : NSObject <MPStoreDownloadManagerObserver> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_source> _dispatchSource;
	unsigned long long _downloadManagerMonitorCount;
	/*^block*/id _searchBlock;
	double _timeout;

}

@property (nonatomic,copy) id searchBlock; 
@property (assign,nonatomic) double timeout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(void)setSearchBlock:(id)arg1 ;
-(void)_attemptDownloadSearch;
-(void)_beginMonitoringDownloadManager;
-(void)_finishWithDownload:(id)arg1 error:(id)arg2 ;
-(id)searchBlock;
-(void)_endMonitoringDownloadManager;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end

