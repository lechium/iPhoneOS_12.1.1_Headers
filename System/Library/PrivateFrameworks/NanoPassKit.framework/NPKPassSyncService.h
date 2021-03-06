/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/NPKPassSyncEngineDelegate.h>
#import <libobjc.A.dylib/NPKPassSyncEngineDataSource.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NPKPassSyncEngine, IDSService, NSObject, NPKPassSyncChange, NSString;

@interface NPKPassSyncService : NSObject <IDSServiceDelegate, NPKPassSyncEngineDelegate, NPKPassSyncEngineDataSource> {

	BOOL _dropAllMessages;
	NPKPassSyncEngine* _passSyncEngine;
	IDSService* _passSyncService;
	NSObject*<OS_dispatch_queue> _passSyncQueue;
	NSObject*<OS_dispatch_source> _passSyncEngineArchiveTimer;
	NSObject*<OS_dispatch_source> _passSyncEngineSyncTimer;
	NPKPassSyncChange* _passSyncEngineSyncTimerCandidateChange;
	NPKPassSyncChange* _passSyncEngineSyncTimerProcessingChange;

}

@property (nonatomic,retain) NPKPassSyncEngine * passSyncEngine;                                       //@synthesize passSyncEngine=_passSyncEngine - In the implementation block
@property (nonatomic,retain) IDSService * passSyncService;                                             //@synthesize passSyncService=_passSyncService - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> passSyncQueue;                               //@synthesize passSyncQueue=_passSyncQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> passSyncEngineArchiveTimer;                 //@synthesize passSyncEngineArchiveTimer=_passSyncEngineArchiveTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> passSyncEngineSyncTimer;                    //@synthesize passSyncEngineSyncTimer=_passSyncEngineSyncTimer - In the implementation block
@property (nonatomic,retain) NPKPassSyncChange * passSyncEngineSyncTimerCandidateChange;               //@synthesize passSyncEngineSyncTimerCandidateChange=_passSyncEngineSyncTimerCandidateChange - In the implementation block
@property (nonatomic,retain) NPKPassSyncChange * passSyncEngineSyncTimerProcessingChange;              //@synthesize passSyncEngineSyncTimerProcessingChange=_passSyncEngineSyncTimerProcessingChange - In the implementation block
@property (assign,nonatomic) BOOL dropAllMessages;                                                     //@synthesize dropAllMessages=_dropAllMessages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)syncStateChanged:(id)arg1 ;
-(void)syncStateChangeProcessed:(id)arg1 ;
-(void)reconciledStateUnrecognized:(id)arg1 ;
-(void)proposedReconciledState:(id)arg1 ;
-(void)reconciledStateAccepted:(id)arg1 ;
-(void)passSettingsChanged:(id)arg1 ;
-(void)catalogChanged:(id)arg1 ;
-(void)_archiveTimerFired;
-(void)_syncTimerFired;
-(id)_archivedPassSyncEngine;
-(void)_provideUpdatedLibraryStateToSyncEngineAndSyncIfNecessary:(BOOL)arg1 ;
-(void)_syncSubjectToSyncTimer;
-(void)handleIncomingCatalog:(id)arg1 ;
-(void)handleIncomingPassSettings:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2 ;
-(id)catalogToSend;
-(unsigned long long)settingsForPassWithUniqueID:(id)arg1 ;
-(void)handleSettingsChanged:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2 ;
-(id)currentLibraryPassSyncStateWithReconciledState:(id)arg1 ;
-(void)_syncNow;
-(void)_setSyncTimerWithCandidateChange:(id)arg1 processingChange:(id)arg2 ;
-(void)passSyncEngine:(id)arg1 sendStateChange:(id)arg2 ;
-(void)passSyncEngine:(id)arg1 sendStateChangeProcessedWithUUID:(id)arg2 changeAccepted:(BOOL)arg3 ;
-(void)passSyncEngine:(id)arg1 sendReconciledStateUnrecognizedWithHash:(id)arg2 currentPassSyncState:(id)arg3 ;
-(void)passSyncEngine:(id)arg1 sendProposedReconciledState:(id)arg2 ;
-(void)passSyncEngine:(id)arg1 sendReconciledStateAcceptedWithHash:(id)arg2 ;
-(void)passSyncEngine:(id)arg1 requestsAddPassData:(id)arg2 forSyncStateItem:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)passSyncEngine:(id)arg1 requestsUpdatePassData:(id)arg2 forSyncStateItem:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)passSyncEngine:(id)arg1 requestsRemovePassWithUniqueID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)passSyncEngineStateChanged:(id)arg1 ;
-(void)passSyncEngine:(id)arg1 receivedStateChangeProcessed:(id)arg2 changeAccepted:(BOOL)arg3 ;
-(void)passSyncEngine:(id)arg1 finishedProcessingChange:(id)arg2 ;
-(id)passSyncEngine:(id)arg1 dataForPassWithUniqueID:(id)arg2 ;
-(id)initWithPassSyncEngineRole:(unsigned long long)arg1 ;
-(void)handlePassLibraryChanged;
-(void)handleCatalogChanged:(id)arg1 ;
-(void)suggestSync;
-(BOOL)dropAllMessages;
-(void)setDropAllMessages:(BOOL)arg1 ;
-(NPKPassSyncEngine *)passSyncEngine;
-(void)setPassSyncEngine:(NPKPassSyncEngine *)arg1 ;
-(IDSService *)passSyncService;
-(void)setPassSyncService:(IDSService *)arg1 ;
-(NSObject*<OS_dispatch_queue>)passSyncQueue;
-(void)setPassSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)passSyncEngineArchiveTimer;
-(void)setPassSyncEngineArchiveTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)passSyncEngineSyncTimer;
-(void)setPassSyncEngineSyncTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NPKPassSyncChange *)passSyncEngineSyncTimerCandidateChange;
-(void)setPassSyncEngineSyncTimerCandidateChange:(NPKPassSyncChange *)arg1 ;
-(NPKPassSyncChange *)passSyncEngineSyncTimerProcessingChange;
-(void)setPassSyncEngineSyncTimerProcessingChange:(NPKPassSyncChange *)arg1 ;
-(void)start;
@end

