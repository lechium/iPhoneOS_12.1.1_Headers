/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NPKPassSyncEngineDelegate, NPKPassSyncEngineDataSource;
@class NPKPassSyncState, NPKPassSyncChange, NSString;

@interface NPKPassSyncEngine : NSObject <NSSecureCoding> {

	NPKPassSyncState* _libraryState;
	NPKPassSyncState* _backupState;
	NPKPassSyncState* _reconciledState;
	NPKPassSyncState* _candidateState;
	unsigned long long _engineRole;
	id<NPKPassSyncEngineDelegate> _delegate;
	id<NPKPassSyncEngineDataSource> _dataSource;
	NPKPassSyncChange* _candidateChange;
	NPKPassSyncChange* _processingChange;

}

@property (assign,nonatomic,__weak) id<NPKPassSyncEngineDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<NPKPassSyncEngineDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NPKPassSyncState * libraryState;                                //@synthesize libraryState=_libraryState - In the implementation block
@property (nonatomic,retain) NPKPassSyncState * backupState;                                 //@synthesize backupState=_backupState - In the implementation block
@property (nonatomic,retain) NPKPassSyncState * reconciledState;                             //@synthesize reconciledState=_reconciledState - In the implementation block
@property (nonatomic,retain) NPKPassSyncState * candidateState;                              //@synthesize candidateState=_candidateState - In the implementation block
@property (nonatomic,retain) NPKPassSyncChange * candidateChange;                            //@synthesize candidateChange=_candidateChange - In the implementation block
@property (nonatomic,retain) NPKPassSyncChange * processingChange;                           //@synthesize processingChange=_processingChange - In the implementation block
@property (nonatomic,readonly) NSString * engineName; 
@property (nonatomic,readonly) unsigned long long engineRole;                                //@synthesize engineRole=_engineRole - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)_sendStateChange:(id)arg1 ;
-(id)initWithRole:(unsigned long long)arg1 ;
-(void)syncIfNecessary;
-(NPKPassSyncState *)backupState;
-(void)setBackupState:(NPKPassSyncState *)arg1 ;
-(void)handleStateChange:(id)arg1 ;
-(void)handleStateChangeProcessedWithUUID:(id)arg1 changeAccepted:(BOOL)arg2 ;
-(void)handleReconciledStateUnrecognizedWithHash:(id)arg1 passSyncState:(id)arg2 ;
-(void)handleProposedReconciledState:(id)arg1 ;
-(void)handleReconciledStateAcceptedWithHash:(id)arg1 ;
-(NPKPassSyncState *)reconciledState;
-(NPKPassSyncState *)libraryState;
-(void)setLibraryState:(NPKPassSyncState *)arg1 ;
-(NPKPassSyncChange *)processingChange;
-(NPKPassSyncChange *)candidateChange;
-(NPKPassSyncState *)candidateState;
-(unsigned long long)engineRole;
-(NSString *)engineName;
-(void)_sendNextStateChange;
-(void)setReconciledState:(NPKPassSyncState *)arg1 ;
-(void)_unexpectedEventOccurred;
-(void)_sendStateChangeProcessedWithUUID:(id)arg1 changeAccepted:(BOOL)arg2 ;
-(void)_requestAddPassData:(id)arg1 forSyncStateItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_requestUpdatePassData:(id)arg1 forSyncStateItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_requestRemovePassWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_shouldProcessAddOrUpdateChangeOfType:(unsigned long long)arg1 changeSyncStateItem:(id)arg2 librarySyncStateItem:(id)arg3 reconciledSyncStateItem:(id)arg4 candidateChange:(id)arg5 shouldApplyToPassLibrary:(BOOL*)arg6 shouldApplyToReconciledState:(BOOL*)arg7 ;
-(void)setProcessingChange:(NPKPassSyncChange *)arg1 ;
-(void)_finishedProcessingChange:(id)arg1 ;
-(void)_sendReconciledStateUnrecognizedWithHash:(id)arg1 currentPassSyncState:(id)arg2 ;
-(void)setCandidateChange:(NPKPassSyncChange *)arg1 ;
-(void)_receivedStateChangeProcessed:(id)arg1 changeAccepted:(BOOL)arg2 ;
-(void)setCandidateState:(NPKPassSyncState *)arg1 ;
-(void)_sendProposedReconciledState:(id)arg1 ;
-(void)_sendReconciledStateAcceptedWithHash:(id)arg1 ;
-(void)_engineStateChanged;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<NPKPassSyncEngineDelegate>)arg1 ;
-(id<NPKPassSyncEngineDelegate>)delegate;
-(id<NPKPassSyncEngineDataSource>)dataSource;
-(void)setDataSource:(id<NPKPassSyncEngineDataSource>)arg1 ;
@end

