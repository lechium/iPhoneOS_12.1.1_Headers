/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BYDeviceSetupSourceSession, SFSession, CDPContext, CDPStateController, NSObject, SFDevice;

@interface SFDeviceSetupSessioniOS : NSObject {

	BOOL _activateCalled;
	BOOL _buddyComplete;
	BYDeviceSetupSourceSession* _buddySession;
	BOOL _configRequestSent;
	BOOL _configResponseReceived;
	BOOL _invalidateCalled;
	BOOL _pairSetupDone;
	BOOL _pairSetupReset;
	BOOL _pairSetupRunning;
	int _preAuthPairSetupState;
	BOOL _preAuthRequestSent;
	BOOL _preAuthResponseReceived;
	SFSession* _sfSession;
	BOOL _sfSessionActivated;
	int _cdpState;
	CDPContext* _cdpContext;
	CDPStateController* _cdpController;
	unsigned _pairFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	SFDevice* _peerDevice;
	/*^block*/id _progressHandler;
	/*^block*/id _promptForPINHandler;
	/*^block*/id _receivedObjectHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) unsigned pairFlags;                                      //@synthesize pairFlags=_pairFlags - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                    //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
@property (nonatomic,copy) id receivedObjectHandler;                                  //@synthesize receivedObjectHandler=_receivedObjectHandler - In the implementation block
-(id)progressHandler;
-(id)promptForPINHandler;
-(void)setPromptForPINHandler:(id)arg1 ;
-(void)_completedWithError:(id)arg1 ;
-(void)setReceivedObjectHandler:(id)arg1 ;
-(void)_runSFSessionStart;
-(void)_receivedObject:(id)arg1 flags:(unsigned)arg2 ;
-(void)tryPIN:(id)arg1 ;
-(id)receivedObjectHandler;
-(int)_runPreAuthPairSetup;
-(void)_sendPreAuthInfo;
-(int)_runCoreCDPSetup;
-(void)_sendConfigInfo;
-(void)_startBuddySession;
-(void)_runSFSessionActivated;
-(void)_handleSetupActionRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleBuddyProgress:(id)arg1 ;
-(void)setPairFlags:(unsigned)arg1 ;
-(unsigned)pairFlags;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(SFDevice *)peerDevice;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_cleanup;
-(void)activate;
-(void)setProgressHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(void)_run;
@end

