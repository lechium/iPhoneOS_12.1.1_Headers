/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVOperation.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString, NSData, SSVPlaybackLeaseConfiguration, SSVPlaybackLeaseRequest, SSURLBag;

@interface SSVLeaseRequestOperation : SSVOperation {

	NSObject*<OS_dispatch_semaphore> _bagLoadSemaphore;
	NSString* _bagKey;
	NSData* _certificateData;
	NSString* _certificateURLBagKey;
	SSVPlaybackLeaseConfiguration* _configuration;
	/*^block*/id _outputBlock;
	SSVPlaybackLeaseRequest* _request;
	unsigned long long _retryCount;
	SSURLBag* _urlBag;

}

@property (copy) NSString * certificateURLBagKey; 
@property (copy,readonly) SSVPlaybackLeaseRequest * leaseRequest; 
@property (copy) id outputBlock; 
-(NSString *)certificateURLBagKey;
-(void)setCertificateURLBagKey:(NSString *)arg1 ;
-(id)initWithLeaseRequest:(id)arg1 configuration:(id)arg2 ;
-(id)initWithLeaseRequest:(id)arg1 URLBag:(id)arg2 ;
-(BOOL)_resolveConfigurationAndURLReturningError:(id*)arg1 ;
-(BOOL)_loadCertificateDataIfNecessary:(id*)arg1 ;
-(BOOL)_shouldRetryForError:(id)arg1 ;
-(SSVPlaybackLeaseRequest *)leaseRequest;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(void)cancel;
-(void)main;
@end

