/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSThread, NSArray, NSURLSessionDataTask, ADNSURLSessionDemultiplexer, NSString;

@interface ADVideoAssetURLProtocol : NSURLProtocol <NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	NSThread* _clientThread;
	NSArray* _modes;
	double _startTime;
	NSURLSessionDataTask* _task;
	ADNSURLSessionDemultiplexer* _sessionDemux;

}

@property (retain) NSThread * clientThread;                                 //@synthesize clientThread=_clientThread - In the implementation block
@property (copy) NSArray * modes;                                           //@synthesize modes=_modes - In the implementation block
@property (assign) double startTime;                                        //@synthesize startTime=_startTime - In the implementation block
@property (retain) NSURLSessionDataTask * task;                             //@synthesize task=_task - In the implementation block
@property (retain) ADNSURLSessionDemultiplexer * sessionDemux;              //@synthesize sessionDemux=_sessionDemux - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(void)registerProtocol;
+(void)initialize;
+(void)unregister;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(NSArray *)modes;
-(void)startLoading;
-(void)setModes:(NSArray *)arg1 ;
-(ADNSURLSessionDemultiplexer *)sessionDemux;
-(void)setSessionDemux:(ADNSURLSessionDemultiplexer *)arg1 ;
-(void)setClientThread:(NSThread *)arg1 ;
-(NSThread *)clientThread;
-(void)dealloc;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(NSURLSessionDataTask *)task;
-(void)stopLoading;
@end
