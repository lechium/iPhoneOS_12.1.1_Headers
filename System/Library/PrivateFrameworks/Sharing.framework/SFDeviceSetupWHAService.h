/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SFService, SFSession, NSObject;

@interface SFDeviceSetupWHAService : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	SFService* _sfService;
	SFSession* _sfSession;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _progressHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)progressHandler;
-(void)_handleSessionStarted:(id)arg1 ;
-(void)_sfServiceStart;
-(void)_handleSessionEnded:(id)arg1 ;
-(void)_handleRequest:(id)arg1 flags:(unsigned)arg2 session:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_handleInfoExchange:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_cleanup;
-(void)activate;
-(void)setProgressHandler:(id)arg1 ;
@end

