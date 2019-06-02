/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/GEOResourceLoadOperation.h>

@protocol OS_dispatch_queue;
@class NSData, NSURL, NSObject, NSURLSession, NSURLSessionTask, NSMutableData, GEOApplicationAuditToken, NSLock, GEOReportedProgress, NSString, NSProgress;

@interface _GEOResourceLoadOperation : NSObject <NSURLSessionDataDelegate, GEOResourceLoadOperation> {

	NSURL* _url;
	NSURL* _proxyURL;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSURLSession* _session;
	NSURLSessionTask* _task;
	NSMutableData* _data;
	BOOL _expectsPartialContent;
	GEOApplicationAuditToken* _auditToken;
	NSLock* _lock;
	BOOL _requiresWiFi;
	BOOL _requiresProxy;
	GEOReportedProgress* _progress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
@property (assign,nonatomic) BOOL requiresWiFi;                     //@synthesize requiresWiFi=_requiresWiFi - In the implementation block
@property (nonatomic,readonly) NSData * data;                       //@synthesize data=_data - In the implementation block
-(void)setRequiresWiFi:(BOOL)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(id)initWithResource:(id)arg1 existingPartialData:(id)arg2 auditToken:(id)arg3 baseURL:(id)arg4 proxyURL:(id)arg5 ;
-(BOOL)requiresWiFi;
-(void)dealloc;
-(void)cancel;
-(NSProgress *)progress;
-(NSData *)data;
@end
