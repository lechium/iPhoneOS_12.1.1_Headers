/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCModule.h>
#import <libobjc.A.dylib/BRCSuspendable.h>

@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore, BRCFSEventsDelegate;
@class BRCAccountSession, NSString, BRCFSEventsPersistedState, NSObject, BRCFairSource, NSMutableArray, BRCVolume, BRCRelativePath, PQLConnection;

@interface BRCFSEventsMonitor : NSObject <BRCModule, BRCSuspendable> {

	BRCAccountSession* _session;
	NSString* _name;
	Ai _suspendCount;
	Ai _resetCount;
	BRCFSEventsPersistedState* _persistedState;
	NSString* _devicePath;
	NSString* _rootPathRelativeToDevice;
	NSObject*<OS_dispatch_source> _rootVnodeWatcher;
	FSEventStreamRef _stream;
	NSObject*<OS_dispatch_queue> _streamQueue;
	NSObject*<OS_dispatch_source> _historicalEventSource;
	NSObject*<OS_dispatch_queue> _processQueue;
	BRCFairSource* _fseventsProcessSource;
	NSMutableArray* _fseventsToProcess;
	unsigned long long _maxFSEventQueueSize;
	unsigned long long _fseventProcessBatchSize;
	BOOL _hasMarkSelf;
	BRCFSEventsPersistedState* _rendezVous;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	BOOL _drainEvents;
	BRCVolume* _volume;
	BOOL _isCancelled;
	BRCRelativePath* _root;
	id<BRCFSEventsDelegate> _delegate;
	PQLConnection* _db;

}

@property (__weak) id<BRCFSEventsDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (setter=setDB:,nonatomic,retain) PQLConnection * db;              //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) BRCRelativePath * root;                      //@synthesize root=_root - In the implementation block
@property (nonatomic,readonly) BOOL volumeIsCaseSensitive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isCancelled;                            //@synthesize isCancelled=_isCancelled - In the implementation block
-(void)_close;
-(id)initWithAccountSession:(id)arg1 ;
-(void)flushStream;
-(BOOL)openWithRoot:(id)arg1 isImmutableRoot:(BOOL)arg2 volume:(id)arg3 error:(id*)arg4 ;
-(id)initWithAccountSession:(id)arg1 name:(id)arg2 ;
-(void)setDB:(id)arg1 ;
-(void)resetWithReason:(id)arg1 ;
-(void)signalAfterCurrentFSEvent:(id)arg1 ;
-(void)_updatePersistedStateWithState:(id)arg1 ;
-(void)fseventOnRootWithEventID:(unsigned long long)arg1 andReason:(id)arg2 ;
-(BOOL)setUpRoot:(id)arg1 isImmutableRoot:(BOOL)arg2 volume:(id)arg3 error:(id*)arg4 ;
-(BOOL)setUpStreamSynchronously:(BOOL)arg1 reason:(id)arg2 error:(id*)arg3 ;
-(BOOL)_queueEvents:(id)arg1 markSelfEncountered:(BOOL)arg2 ;
-(void)processFseventBatch;
-(void)fseventAtPath:(id)arg1 withFlags:(unsigned)arg2 andID:(unsigned long long)arg3 eventIndex:(unsigned)arg4 eventCount:(unsigned)arg5 initialScan:(BOOL)arg6 ;
-(void)resetWithReason:(id)arg1 dropFSEventID:(BOOL)arg2 ;
-(void)didProcessEventID:(unsigned long long)arg1 ;
-(void)stopWatcher;
-(BOOL)volumeIsCaseSensitive;
-(BOOL)openWithRoot:(id)arg1 volume:(id)arg2 error:(id*)arg3 ;
-(void)queueEvents:(id)arg1 markSelfEncountered:(BOOL)arg2 ;
-(PQLConnection *)db;
-(void)dealloc;
-(NSString *)description;
-(void)setDelegate:(id<BRCFSEventsDelegate>)arg1 ;
-(id<BRCFSEventsDelegate>)delegate;
-(void)cancel;
-(BOOL)isCancelled;
-(void)close;
-(void)resume;
-(void)_cancel;
-(BRCRelativePath *)root;
-(void)suspend;
@end

