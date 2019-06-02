//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TouchIconFetcherObserver.h"

@class NSMutableArray, NSString, WKWebView, _WKRemoteObjectInterface;

@interface TouchIconFetcher : NSObject <TouchIconFetcherObserver>
{
    WKWebView *_webView;	// 8 = 0x8
    _Bool _fetchingURLs;	// 16 = 0x10
    _Bool _invalidated;	// 17 = 0x11
    NSMutableArray *_completionBlocks;	// 24 = 0x18
    id <TouchIconFetcherWebProcessController> _activityProxy;	// 32 = 0x20
    _WKRemoteObjectInterface *_touchIconFetcherObserver;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010013e0b4
- (void)didFetchTouchIconURLs:(id)arg1 forURL:(id)arg2;	// IMP=0x000000010013df00
- (void)fetchTouchIconURLsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010013de20
- (id)_webProcessActivityProxy;	// IMP=0x000000010013dd4c
- (void)invalidate;	// IMP=0x000000010013db7c
- (void)_setUpTouchIconFetcherObserver;	// IMP=0x000000010013da20
- (id)initWithWebView:(id)arg1;	// IMP=0x000000010013d944

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

