/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol AMSURLHandling, NSURLSessionDelegateAMSURLProtocolDelegate, AMSRequestEncoding, AMSResponseDecoding;
@class NSURLSessionConfiguration, NSOperationQueue, AMSURLSecurityPolicy, NSURLSession, NSString;

@interface AMSURLSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	id<AMSURLHandling> _protocolHandler;
	NSURLSessionConfiguration* _configuration;
	id<NSURLSessionDelegate><AMSURLProtocolDelegate> _delegate;
	NSOperationQueue* _delegateQueue;
	id<AMSRequestEncoding> _requestEncoder;
	id<AMSResponseDecoding> _responseDecoder;
	AMSURLSecurityPolicy* _securityPolicy;
	NSURLSession* _session;

}

@property (nonatomic,readonly) NSURLSessionConfiguration * configuration;                                   //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<NSURLSessionDelegate><AMSURLProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * delegateQueue;                                            //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) id<AMSURLHandling> protocolHandler; 
@property (nonatomic,retain) id<AMSRequestEncoding> requestEncoder;                                         //@synthesize requestEncoder=_requestEncoder - In the implementation block
@property (nonatomic,retain) id<AMSResponseDecoding> responseDecoder;                                       //@synthesize responseDecoder=_responseDecoder - In the implementation block
@property (nonatomic,retain) AMSURLSecurityPolicy * securityPolicy;                                         //@synthesize securityPolicy=_securityPolicy - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;                                                      //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAuthKitSession;
+(id)defaultSession;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)invalidateAndCancel;
-(id)dataTaskWithRequest:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)finishTasksAndInvalidate;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<AMSResponseDecoding>)responseDecoder;
-(void)setResponseDecoder:(id<AMSResponseDecoding>)arg1 ;
-(id)dataTaskPromiseWithRequest:(id)arg1 ;
-(id<AMSURLHandling>)protocolHandler;
-(void)_handleURLAction:(id)arg1 task:(id)arg2 error:(id*)arg3 ;
-(AMSURLSecurityPolicy *)securityPolicy;
-(void)_completeTask:(id)arg1 decodedObject:(id)arg2 error:(id)arg3 ;
-(id)_prepareTaskWithRequest:(id)arg1 properties:(id)arg2 ;
-(id)_createSharedDataForTask:(id)arg1 properties:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_retryTask:(id)arg1 action:(id)arg2 error:(id*)arg3 ;
-(id<AMSRequestEncoding>)requestEncoder;
-(void)setProtocolHandler:(id<AMSURLHandling>)arg1 ;
-(void)setRequestEncoder:(id<AMSRequestEncoding>)arg1 ;
-(void)setSecurityPolicy:(AMSURLSecurityPolicy *)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setDelegate:(id<NSURLSessionDelegate><AMSURLProtocolDelegate>)arg1 ;
-(id<NSURLSessionDelegate><AMSURLProtocolDelegate>)delegate;
-(NSURLSessionConfiguration *)configuration;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(NSURLSession *)session;
-(NSOperationQueue *)delegateQueue;
@end

