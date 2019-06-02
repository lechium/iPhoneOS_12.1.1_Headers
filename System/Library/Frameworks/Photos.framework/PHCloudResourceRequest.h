/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, PLCPLDownloadContext, NSString, NSManagedObjectID, NSData, NSError;

@interface PHCloudResourceRequest : NSOperation {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _downloadFinishedSemaphore;
	/*^block*/id _progressHandler;
	PLCPLDownloadContext* _downloadContext;
	NSString* _proposedTaskIdentifier;
	double _lastProgress;
	BOOL _completed;
	BOOL _downloadIsTransient;
	int _requestID;
	NSManagedObjectID* _objectID;
	unsigned long long _cloudResourceType;
	NSData* _transientResourceData;
	NSError* _error;

}

@property (nonatomic,readonly) int requestID;                                     //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * objectID;                      //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) unsigned long long cloudResourceType;              //@synthesize cloudResourceType=_cloudResourceType - In the implementation block
@property (nonatomic,readonly) NSString * cplTaskIdentifier; 
@property (nonatomic,readonly) BOOL downloadIsTransient;                          //@synthesize downloadIsTransient=_downloadIsTransient - In the implementation block
@property (nonatomic,readonly) NSData * transientResourceData;                    //@synthesize transientResourceData=_transientResourceData - In the implementation block
@property (nonatomic,readonly) NSError * error;                                   //@synthesize error=_error - In the implementation block
-(void)_onQueueAsync:(/*^block*/id)arg1 ;
-(unsigned long long)cloudResourceType;
-(NSString *)cplTaskIdentifier;
-(void)_onQueueSync:(/*^block*/id)arg1 ;
-(void)_updateResourceRequestStatusForStatusChangeWithUserInfo:(id)arg1 connectionWasLost:(BOOL)arg2 ;
-(id)initWithRequestID:(int)arg1 cloudResourceType:(unsigned long long)arg2 managedObjectID:(id)arg3 downloadIsTransient:(BOOL)arg4 progressHandler:(/*^block*/id)arg5 ;
-(void)updateResourceRequestStatusForLostConnection;
-(void)updateResourceRequestStatusForStatusChangeWithUserInfo:(id)arg1 ;
-(BOOL)downloadIsTransient;
-(NSData *)transientResourceData;
-(NSManagedObjectID *)objectID;
-(int)requestID;
-(void)cancel;
-(void)main;
-(NSError *)error;
@end

