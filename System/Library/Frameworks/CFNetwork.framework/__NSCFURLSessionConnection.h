/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue, SessionConnectionDelegate, OS_dispatch_data;
@class NSURLSessionTask, NSObject, NSURLResponse;

@interface __NSCFURLSessionConnection : NSObject <NSCopying> {

	NSURLSessionTask* _task;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<SessionConnectionDelegate> _delegate;
	NSURLResponse* _cacheResponse;
	NSObject*<OS_dispatch_data> _cacheData;
	unsigned long long _cacheDataMax;
	long long _maxCacheEntrySize;

}

@property (copy) NSURLSessionTask * task;                               //@synthesize task=_task - In the implementation block
@property (retain) id<SessionConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)setIsDownload:(BOOL)arg1 ;
-(void)setPoolPriority:(long long)arg1 ;
-(void)setPriorityHint:(float)arg1 ;
-(void)setBytesPerSecondLimit:(long long)arg1 ;
-(void)_tossCache;
-(void)withWorkQueueAsync:(/*^block*/id)arg1 ;
-(void)_setupForCache:(BOOL)arg1 expectedLength:(long long)arg2 response:(id)arg3 ;
-(void)_appendDataToCache:(id)arg1 ;
-(id)_cachedResponse;
-(void)_storeCachedResponse:(id)arg1 ;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SessionConnectionDelegate>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SessionConnectionDelegate>)delegate;
-(void)cancel;
-(void)resume;
-(NSURLSessionTask *)task;
-(void)suspend;
@end

