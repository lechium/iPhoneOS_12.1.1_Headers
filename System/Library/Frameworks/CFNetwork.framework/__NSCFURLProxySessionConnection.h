/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/__NSCFURLSessionConnection.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegatePrivate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegatePrivate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate_Internal.h>

@class NSURLSessionTask, NSCachedURLResponse, NSURLRequest, NSArray, NSString;

@interface __NSCFURLProxySessionConnection : __NSCFURLSessionConnection <NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate_Internal> {

	NSURLSessionTask* _proxyTask;
	NSURLSessionTask* _cacheTask;
	BOOL _shouldCancelOnCacheTaskCompletion;
	BOOL _clientWantsCacheOnly;
	BOOL _completedLocalCacheLookup;
	BOOL _requestIsUncacheable;
	BOOL _handledNeedNewBodyStream;
	NSCachedURLResponse* _cachedResponseForConditionalRequest;
	NSURLRequest* _conditionalRequest;
	NSArray* _cachedResponseDataArray;
	NSString* _originalUploadFilePath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)_URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3 ;
-(void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setIsDownload:(BOOL)arg1 ;
-(void)setPoolPriority:(long long)arg1 ;
-(void)setPriorityHint:(float)arg1 ;
-(void)_startLoad;
-(void)_performOriginLoad;
-(void)_deliverDidCompleteWithError:(id)arg1 ;
-(id)clientErrorForError:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3 ;
-(void)dealloc;
-(void)cancel;
-(void)resume;
-(void)suspend;
@end

