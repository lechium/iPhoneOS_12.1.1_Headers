/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSXPCConnection;

@interface SFClient : NSObject {

	NSMutableSet* _assertions;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcCnx;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)_invalidated;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(void)contactIDForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)displayNameForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)displayStringForContactIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)activateAssertionWithIdentifier:(id)arg1 ;
-(void)activityStateWithCompletion:(/*^block*/id)arg1 ;
-(void)appleIDInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)openSetupURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)preventExitForLocaleReason:(id)arg1 ;
-(void)reenableProxCardType:(unsigned char)arg1 completion:(/*^block*/id)arg2 ;
-(void)retriggerProximityPairing:(/*^block*/id)arg1 ;
-(void)retriggerProximitySetup:(/*^block*/id)arg1 ;
-(void)showDevicePickerWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)wifiPasswordSharingAvailabilityWithCompletion:(/*^block*/id)arg1 ;
-(void)repairDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setupDevice:(id)arg1 home:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)repairDevice:(id)arg1 flags:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
@end

