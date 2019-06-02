//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURLCache, NSURLSession;

@interface ResourceLoader : NSObject <NSURLSessionDelegate>
{
    NSURLCache *_urlCache;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dateFormatterQueue;	// 16 = 0x10
    NSOperationQueue *_queue;	// 24 = 0x18
    NSURLSession *_session;	// 32 = 0x20
}

+ (id)_rfc1123DateFormatter;	// IMP=0x0000000100056738
+ (id)sharedInstance;	// IMP=0x0000000100056674
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dateFormatterQueue; // @synthesize dateFormatterQueue=_dateFormatterQueue;
@property(retain, nonatomic) NSURLCache *urlCache; // @synthesize urlCache=_urlCache;
- (void).cxx_destruct;	// IMP=0x0000000100057ea8
- (double)_simulatedLatency;	// IMP=0x0000000100057d58
- (void)flushCache;	// IMP=0x0000000100057d18
- (void)asynchronousDataFromURL:(id)arg1 timeout:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010005743c
- (void)asynchronousDataFromURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000573e4
- (void)refreshCacheForRequest:(id)arg1 usingCachedResponse:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100056b04
- (id)init;	// IMP=0x00000001000567ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
