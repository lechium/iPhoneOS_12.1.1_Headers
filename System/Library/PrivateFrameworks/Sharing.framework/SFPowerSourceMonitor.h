/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CUCoalescer, NSMutableDictionary, NSObject;

@interface SFPowerSourceMonitor : NSObject {

	BOOL _activateCalled;
	CUCoalescer* _updateCoalescer;
	NSMutableDictionary* _powerSources;
	int _psNotifyTokenAccessoryAttach;
	int _psNotifyTokenAccessoryPowerSource;
	int _psNotifyTokenAccessoryTimeRemaining;
	int _psNotifyTokenAnyPowerSource;
	unsigned _changeFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	/*^block*/id _powerSourcesFoundHandler;
	/*^block*/id _powerSourcesLostHandler;
	/*^block*/id _powerSourcesChangedHandler;

}

@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id powerSourcesFoundHandler;                               //@synthesize powerSourcesFoundHandler=_powerSourcesFoundHandler - In the implementation block
@property (nonatomic,copy) id powerSourcesLostHandler;                                //@synthesize powerSourcesLostHandler=_powerSourcesLostHandler - In the implementation block
@property (nonatomic,copy) id powerSourcesChangedHandler;                             //@synthesize powerSourcesChangedHandler=_powerSourcesChangedHandler - In the implementation block
-(void)setPowerSourcesFoundHandler:(id)arg1 ;
-(void)setPowerSourcesChangedHandler:(id)arg1 ;
-(void)setPowerSourcesLostHandler:(id)arg1 ;
-(unsigned)changeFlags;
-(void)_triggerUpdatePowerSources;
-(void)_updatePowerSources;
-(void)_updatePowerSource:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3 ;
-(void)_foundPowerSource:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3 ;
-(void)_handlePowerSourcesLost:(id)arg1 ;
-(void)_handlePowerSourcesFound:(id)arg1 ;
-(void)_handlePowerSourcesChanged:(id)arg1 changes:(unsigned)arg2 ;
-(id)powerSourcesFoundHandler;
-(id)powerSourcesLostHandler;
-(id)powerSourcesChangedHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setChangeFlags:(unsigned)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_cleanup;
-(void)_update;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
@end

