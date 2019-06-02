/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCNetworkOperation.h>

@class NSURL, NSString, NSDictionary, FCNetworkBehaviorMonitor, NSURLSessionTask, NSData, NSHTTPURLResponse, NSError;

@interface FCAssetDownloadOperation : FCNetworkOperation {

	NSURL* _URL;
	NSString* _loggingKey;
	long long _downloadDestination;
	long long _networkEventType;
	NSDictionary* _additionalRequestHTTPHeaders;
	FCNetworkBehaviorMonitor* _networkBehaviorMonitor;
	/*^block*/id _fileDownloadCompletionHandler;
	/*^block*/id _dataDownloadCompletionHandler;
	NSURLSessionTask* _downloadTask;
	NSURL* _downloadedFileURL;
	NSData* _downloadedData;
	NSString* _requestUUID;
	double _taskStartTime;
	NSDictionary* _timingData;
	NSString* _responseMIMEType;
	NSHTTPURLResponse* _httpResponse;
	unsigned long long _responseSize;
	NSError* _error;

}

@property (retain) NSURLSessionTask * downloadTask;                                          //@synthesize downloadTask=_downloadTask - In the implementation block
@property (nonatomic,retain) NSURL * downloadedFileURL;                                      //@synthesize downloadedFileURL=_downloadedFileURL - In the implementation block
@property (nonatomic,retain) NSData * downloadedData;                                        //@synthesize downloadedData=_downloadedData - In the implementation block
@property (nonatomic,retain) NSString * requestUUID;                                         //@synthesize requestUUID=_requestUUID - In the implementation block
@property (assign,nonatomic) double taskStartTime;                                           //@synthesize taskStartTime=_taskStartTime - In the implementation block
@property (nonatomic,retain) NSDictionary * timingData;                                      //@synthesize timingData=_timingData - In the implementation block
@property (nonatomic,retain) NSString * responseMIMEType;                                    //@synthesize responseMIMEType=_responseMIMEType - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * httpResponse;                               //@synthesize httpResponse=_httpResponse - In the implementation block
@property (assign,nonatomic) unsigned long long responseSize;                                //@synthesize responseSize=_responseSize - In the implementation block
@property (nonatomic,retain) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                    //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * loggingKey;                                            //@synthesize loggingKey=_loggingKey - In the implementation block
@property (assign,nonatomic) long long downloadDestination;                                  //@synthesize downloadDestination=_downloadDestination - In the implementation block
@property (assign,nonatomic) long long networkEventType;                                     //@synthesize networkEventType=_networkEventType - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalRequestHTTPHeaders;                      //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (nonatomic,retain) FCNetworkBehaviorMonitor * networkBehaviorMonitor;              //@synthesize networkBehaviorMonitor=_networkBehaviorMonitor - In the implementation block
@property (nonatomic,copy) id fileDownloadCompletionHandler;                                 //@synthesize fileDownloadCompletionHandler=_fileDownloadCompletionHandler - In the implementation block
@property (nonatomic,copy) id dataDownloadCompletionHandler;                                 //@synthesize dataDownloadCompletionHandler=_dataDownloadCompletionHandler - In the implementation block
+(id)sharedURLSession;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setRelativePriority:(long long)arg1 ;
-(void)resetForRetry;
-(unsigned long long)responseSize;
-(void)setResponseSize:(unsigned long long)arg1 ;
-(NSString *)requestUUID;
-(void)setRequestUUID:(NSString *)arg1 ;
-(void)setNetworkEventType:(long long)arg1 ;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(void)setResponseMIMEType:(NSString *)arg1 ;
-(long long)networkEventType;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(id)throttleGroup;
-(NSString *)responseMIMEType;
-(void)setDownloadDestination:(long long)arg1 ;
-(void)setLoggingKey:(NSString *)arg1 ;
-(void)setNetworkBehaviorMonitor:(FCNetworkBehaviorMonitor *)arg1 ;
-(void)setDataDownloadCompletionHandler:(id)arg1 ;
-(void)setFileDownloadCompletionHandler:(id)arg1 ;
-(NSURLSessionTask *)downloadTask;
-(long long)downloadDestination;
-(void)setDownloadedFileURL:(NSURL *)arg1 ;
-(void)setDownloadedData:(NSData *)arg1 ;
-(void)setTimingData:(NSDictionary *)arg1 ;
-(void)setHttpResponse:(NSHTTPURLResponse *)arg1 ;
-(void)setDownloadTask:(NSURLSessionTask *)arg1 ;
-(void)setTaskStartTime:(double)arg1 ;
-(NSString *)loggingKey;
-(double)taskStartTime;
-(NSDictionary *)timingData;
-(NSHTTPURLResponse *)httpResponse;
-(id)fileDownloadCompletionHandler;
-(NSURL *)downloadedFileURL;
-(id)dataDownloadCompletionHandler;
-(NSData *)downloadedData;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

