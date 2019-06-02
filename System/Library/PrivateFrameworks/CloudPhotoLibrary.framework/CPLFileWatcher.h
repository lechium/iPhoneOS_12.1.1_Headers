/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, CPLFileWatcherDelegate;
@class NSObject, NSURL;

@interface CPLFileWatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _nodeSource;
	NSObject*<OS_dispatch_source> _parentSource;
	unsigned long long _nodeInode;
	NSURL* _fileURL;
	id<CPLFileWatcherDelegate> _delegate;

}

@property (nonatomic,copy) NSURL * fileURL;                                           //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic,__weak) id<CPLFileWatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_stopWatchingNode;
-(void)_startWatchingNode;
-(void)_forceRefreshWatchingNode;
-(void)_updateWatchingNode;
-(void)_startWatchingParent;
-(void)_stopWatchingParent;
-(id)initWithFileURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)startWatching;
-(void)stopWatching;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setDelegate:(id<CPLFileWatcherDelegate>)arg1 ;
-(id<CPLFileWatcherDelegate>)delegate;
-(NSURL *)fileURL;
@end

