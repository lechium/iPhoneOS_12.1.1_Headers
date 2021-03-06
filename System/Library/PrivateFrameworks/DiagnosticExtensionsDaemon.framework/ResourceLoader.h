/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSOperationQueue, NSURLSession, NSURLCache, NSString;

@interface ResourceLoader : NSObject <NSURLSessionDelegate> {

	NSOperationQueue* _queue;
	NSURLSession* _session;
	NSURLCache* _urlCache;

}

@property (nonatomic,retain) NSURLCache * urlCache;                 //@synthesize urlCache=_urlCache - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_rfc1123DateFormatter;
+(id)_localDateFormatter;
-(void)flushCache;
-(void)asynchronousDataFromURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setUrlCache:(NSURLCache *)arg1 ;
-(NSURLCache *)urlCache;
-(double)_simulatedLatency;
-(void)refreshCacheForRequest:(id)arg1 usingCachedResponse:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)init;
-(NSURLSession *)session;
-(NSOperationQueue *)queue;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setQueue:(NSOperationQueue *)arg1 ;
@end

