/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMCaptureRequest, NSDate, NSMutableDictionary;

@interface CAMPendingRemotePersistenceWrapper : NSObject {

	CAMCaptureRequest* _request;
	NSDate* _creationDate;
	NSMutableDictionary* _job;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) CAMCaptureRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * job;                //@synthesize job=_job - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
-(NSDate *)creationDate;
-(id)initWithRequest:(id)arg1 creationDate:(id)arg2 job:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSMutableDictionary *)job;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(CAMCaptureRequest *)request;
@end
