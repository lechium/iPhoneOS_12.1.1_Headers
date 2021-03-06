/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, RPDevice, RPSession, NSUUID, NSArray;

@interface RPFileTransferSession : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _errorHandler;
	RPDevice* _peerDevice;
	/*^block*/id _progressHandler;
	RPSession* _session;
	NSUUID* _transferIdentifier;
	NSArray* _urls;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,retain) RPDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,retain) RPSession * session;                                     //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSUUID * transferIdentifier;                               //@synthesize transferIdentifier=_transferIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * urls;                                            //@synthesize urls=_urls - In the implementation block
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(NSArray *)urls;
-(void)setUrls:(NSArray *)arg1 ;
-(id)progressHandler;
-(NSUUID *)transferIdentifier;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)addFileURL:(id)arg1 ;
-(void)setTransferIdentifier:(NSUUID *)arg1 ;
-(RPDevice *)peerDevice;
-(void)setPeerDevice:(RPDevice *)arg1 ;
-(id)init;
-(void)invalidate;
-(RPSession *)session;
-(void)_cleanup;
-(void)setProgressHandler:(id)arg1 ;
-(void)setSession:(RPSession *)arg1 ;
@end

