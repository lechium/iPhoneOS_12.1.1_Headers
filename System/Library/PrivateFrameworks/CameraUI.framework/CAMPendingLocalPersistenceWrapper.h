/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMCaptureRequest;

@interface CAMPendingLocalPersistenceWrapper : NSObject {

	CAMCaptureRequest* _request;
	id _result;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) CAMCaptureRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) id result;                                //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)initWithRequest:(id)arg1 result:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(CAMCaptureRequest *)request;
-(id)result;
@end
