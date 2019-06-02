/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PSYServiceSyncSessionDelegate;
@class NSObject, NRDevice, NSUUID, PSYSyncCoordinator;

@interface PSYServiceSyncSession : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isComplete;
	BOOL _supportsMigrationSync;
	BOOL _complete;
	NRDevice* _pairedDevice;
	NSUUID* _sessionIdentifier;
	PSYSyncCoordinator* _syncCoordinator;
	unsigned long long _switchID;
	unsigned long long _syncSessionType;
	id<PSYServiceSyncSessionDelegate> _delegate;

}

@property (nonatomic,retain) NRDevice * pairedDevice;                                        //@synthesize pairedDevice=_pairedDevice - In the implementation block
@property (assign,nonatomic) unsigned long long syncSessionType;                             //@synthesize syncSessionType=_syncSessionType - In the implementation block
@property (nonatomic,retain) NSUUID * sessionIdentifier;                                     //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic,__weak) PSYSyncCoordinator * syncCoordinator;                    //@synthesize syncCoordinator=_syncCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<PSYServiceSyncSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long switchID;                                    //@synthesize switchID=_switchID - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete;                              //@synthesize complete=_complete - In the implementation block
-(void)setSessionIdentifier:(NSUUID *)arg1 ;
-(void)setPairedDevice:(NRDevice *)arg1 ;
-(NRDevice *)pairedDevice;
-(void)reportProgress:(double)arg1 ;
-(id)initWithQueue:(id)arg1 supportsMigrationSync:(BOOL)arg2 ;
-(unsigned long long)switchID;
-(void)setSwitchID:(unsigned long long)arg1 ;
-(void)setSyncSessionType:(unsigned long long)arg1 ;
-(void)setSyncCoordinator:(PSYSyncCoordinator *)arg1 ;
-(void)syncDidCompleteSending;
-(void)syncDidFailWithError:(id)arg1 ;
-(void)syncDidComplete;
-(unsigned long long)syncSessionType;
-(PSYSyncCoordinator *)syncCoordinator;
-(void)setDelegate:(id<PSYServiceSyncSessionDelegate>)arg1 ;
-(id<PSYServiceSyncSessionDelegate>)delegate;
-(BOOL)isComplete;
-(NSUUID *)sessionIdentifier;
@end

