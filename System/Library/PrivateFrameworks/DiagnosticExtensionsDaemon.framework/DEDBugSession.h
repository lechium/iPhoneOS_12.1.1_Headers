/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@protocol DEDUploadStatusDelegate, DEDClientProtocol, DEDWorkerProtocol, DEDFinisherDEDSecureArchiving, DEDNotifierDEDSecureArchiving;
@class DEDBugSessionConfiguration, NSString, NSMutableSet, NSMutableArray, NSMutableDictionary, DEDExtensionIdentifierManager, NSDate, NSDictionary, NSArray;

@interface DEDBugSession : NSObject <NSSecureCoding, DEDSecureArchiving> {

	DEDBugSessionConfiguration* _config;
	NSString* _identifier;
	NSString* _deviceIdentifier;
	long long _priorClientTransportType;
	long long _priorWorkerTransportType;
	id<DEDUploadStatusDelegate> _uploadDelegate;
	NSMutableSet* _filePromises;
	/*^block*/id _pingHandler;
	NSMutableArray* _deListCompletions;
	NSMutableDictionary* _deCompletions;
	NSMutableArray* _adoptFilesCompletions;
	NSMutableDictionary* _ongoingCompletionHandlers;
	DEDExtensionIdentifierManager* _identifierManager;
	NSDate* _uploadStartTime;
	NSMutableDictionary* _pendingOperations;
	/*^block*/id _statusCompletionBlock;
	/*^block*/id _syncCompletionBlock;
	NSDictionary* _cachedExtensions;
	id<DEDClientProtocol> _client;
	id<DEDWorkerProtocol> _worker;
	id<DEDFinisher><DEDSecureArchiving> __finisher;
	id<DEDNotifier><DEDSecureArchiving> __notifier;

}

@property (readonly) NSObject*<OS_os_log> log; 
@property (copy) id pingHandler;                                                   //@synthesize pingHandler=_pingHandler - In the implementation block
@property (retain) NSMutableArray * deListCompletions;                             //@synthesize deListCompletions=_deListCompletions - In the implementation block
@property (retain) NSMutableDictionary * deCompletions;                            //@synthesize deCompletions=_deCompletions - In the implementation block
@property (retain) NSMutableArray * adoptFilesCompletions;                         //@synthesize adoptFilesCompletions=_adoptFilesCompletions - In the implementation block
@property (retain) NSMutableDictionary * ongoingCompletionHandlers;                //@synthesize ongoingCompletionHandlers=_ongoingCompletionHandlers - In the implementation block
@property (retain) DEDExtensionIdentifierManager * identifierManager;              //@synthesize identifierManager=_identifierManager - In the implementation block
@property (retain) NSDate * uploadStartTime;                                       //@synthesize uploadStartTime=_uploadStartTime - In the implementation block
@property (retain) NSMutableDictionary * pendingOperations;                        //@synthesize pendingOperations=_pendingOperations - In the implementation block
@property (copy) id statusCompletionBlock;                                         //@synthesize statusCompletionBlock=_statusCompletionBlock - In the implementation block
@property (copy) id syncCompletionBlock;                                           //@synthesize syncCompletionBlock=_syncCompletionBlock - In the implementation block
@property (retain) NSDictionary * cachedExtensions;                                //@synthesize cachedExtensions=_cachedExtensions - In the implementation block
@property (retain) DEDBugSessionConfiguration * config;                            //@synthesize config=_config - In the implementation block
@property (retain) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (retain) id<DEDClientProtocol> client;                                   //@synthesize client=_client - In the implementation block
@property (retain) id<DEDWorkerProtocol> worker;                                   //@synthesize worker=_worker - In the implementation block
@property (retain) NSString * deviceIdentifier;                                    //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (retain) id<DEDFinisher><DEDSecureArchiving> _finisher;                  //@synthesize _finisher=__finisher - In the implementation block
@property (retain) id<DEDNotifier><DEDSecureArchiving> _notifier;                  //@synthesize _notifier=__notifier - In the implementation block
@property (assign) long long priorClientTransportType;                             //@synthesize priorClientTransportType=_priorClientTransportType - In the implementation block
@property (assign) long long priorWorkerTransportType;                             //@synthesize priorWorkerTransportType=_priorWorkerTransportType - In the implementation block
@property (retain) id<DEDUploadStatusDelegate> uploadDelegate;                     //@synthesize uploadDelegate=_uploadDelegate - In the implementation block
@property (readonly) NSArray * allExtensionIdentifiers; 
@property (retain) NSMutableSet * filePromises;                                    //@synthesize filePromises=_filePromises - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivedClasses;
+(BOOL)supportsSecureCoding;
-(void)didCommit;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)deviceIdentifier;
-(id)notifier;
-(void)pong;
-(void)didStart;
-(void)ping;
-(void)syncStatus;
-(void)didCancel;
-(void)save;
-(void)removeAttachment:(id)arg1 ;
-(void)getStatus;
-(id<DEDClientProtocol>)client;
-(void)setClient:(id<DEDClientProtocol>)arg1 ;
-(BOOL)hasCapability:(id)arg1 ;
-(void)uploadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 ;
-(void)didFinishAllUploads;
-(void)setDeListCompletions:(NSMutableArray *)arg1 ;
-(void)setDeCompletions:(NSMutableDictionary *)arg1 ;
-(void)setAdoptFilesCompletions:(NSMutableArray *)arg1 ;
-(void)setPendingOperations:(NSMutableDictionary *)arg1 ;
-(void)setOngoingCompletionHandlers:(NSMutableDictionary *)arg1 ;
-(void)setPriorClientTransportType:(long long)arg1 ;
-(void)setPriorWorkerTransportType:(long long)arg1 ;
-(void)setFilePromises:(NSMutableSet *)arg1 ;
-(void)set_finisher:(id<DEDFinisher><DEDSecureArchiving>)arg1 ;
-(void)setIdentifierManager:(DEDExtensionIdentifierManager *)arg1 ;
-(void)_logOperationQueue;
-(BOOL)isTarget;
-(id<DEDFinisher><DEDSecureArchiving>)_finisher;
-(id<DEDNotifier><DEDSecureArchiving>)_notifier;
-(void)set_notifier:(id<DEDNotifier><DEDSecureArchiving>)arg1 ;
-(DEDExtensionIdentifierManager *)identifierManager;
-(NSMutableDictionary *)pendingOperations;
-(NSMutableDictionary *)ongoingCompletionHandlers;
-(NSDictionary *)cachedExtensions;
-(void)setPingHandler:(id)arg1 ;
-(NSMutableArray *)deListCompletions;
-(void)setStatusCompletionBlock:(id)arg1 ;
-(void)setSyncCompletionBlock:(id)arg1 ;
-(void)startDiagnosticExtensionWithDEDIdentifier:(id)arg1 parameters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableSet *)filePromises;
-(void)storeCollectionCompletion:(/*^block*/id)arg1 forIdentifier:(id)arg2 ;
-(id)finisher;
-(void)willPerformOperationWithID:(id)arg1 type:(long long)arg2 options:(id)arg3 ;
-(id)startDiagnosticExtensionWithIdentifier:(id)arg1 parameters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startDiagnosticExtensionWithDEDIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)didFinishOperation:(long long)arg1 withIdentifier:(id)arg2 ;
-(void)terminateExtension:(id)arg1 withInfo:(id)arg2 ;
-(void)cancelDiagnosticExtensionWithIdentifier:(id)arg1 ;
-(void)cancelDiagnosticExtensionWithDEDExtensionIdentifier:(id)arg1 ;
-(NSMutableArray *)adoptFilesCompletions;
-(void)adoptFiles:(id)arg1 ;
-(id)ongoingCollectOperationsWithOperations:(id)arg1 ;
-(void)scheduleNotification;
-(id)pingHandler;
-(id)hashExtensions:(id)arg1 ;
-(void)setCachedExtensions:(NSDictionary *)arg1 ;
-(id<DEDUploadStatusDelegate>)uploadDelegate;
-(void)clearNotification;
-(BOOL)shouldCollectDiagnosticWithId:(id)arg1 ;
-(/*^block*/id)nextCompletionBlockForIdentifier:(id)arg1 ;
-(void)_terminateExtensionWithIdentifier:(id)arg1 info:(id)arg2 ;
-(BOOL)readyToCancel;
-(BOOL)readyToNotify;
-(BOOL)readyToFinish;
-(void)hasCollected:(id)arg1 isCollecting:(id)arg2 identifiers:(id)arg3 ;
-(id)statusCompletionBlock;
-(id)syncCompletionBlock;
-(id)scheduledDeferredExtensionCollectionOperations;
-(id)ongoingExtensionCollectionOperations;
-(void)removeFromStore;
-(id)attachmentHandler;
-(BOOL)hasDirectory;
-(BOOL)hasStaleDirectory;
-(NSDate *)uploadStartTime;
-(void)setUploadStartTime:(NSDate *)arg1 ;
-(void)notifyPromiseCancellationIfNeeded:(id)arg1 ;
-(NSMutableDictionary *)deCompletions;
-(void)_streamOperationQueue;
-(id)prettyDescription;
-(void)attachCompletionHandlerForOngoingOperation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)attachCompletionHandlerForDEDExtensionIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)knownExtensions;
-(void)pingWithCallback:(/*^block*/id)arg1 ;
-(void)listDiagnosticExtensionsWithCompletion:(/*^block*/id)arg1 ;
-(void)getSessionStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)synchronizeSessionStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)startDiagnosticExtensionWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)startDiagnosticExtension:(id)arg1 parameters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelDiagnosticExtension:(id)arg1 ;
-(void)cancelDiagnosticExtensionWithIdentifier:(id)arg1 invocationNumber:(long long)arg2 ;
-(void)adoptFiles:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resumePendingOperations;
-(NSArray *)allExtensionIdentifiers;
-(void)listAvailableExtensions;
-(void)supportsDiagnostics:(id)arg1 ;
-(void)didAdoptFilesWithError:(id)arg1 ;
-(void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 ;
-(void)hasCollected:(id)arg1 isCollecting:(id)arg2 ;
-(void)beginSessionSubmission;
-(void)presentNotification;
-(void)_clearNotification;
-(BOOL)isRunningDE:(id)arg1 ;
-(void)didTerminateDiagnosticExtension:(id)arg1 ;
-(void)didAdoptGroup:(id)arg1 ;
-(long long)priorClientTransportType;
-(long long)priorWorkerTransportType;
-(void)setUploadDelegate:(id<DEDUploadStatusDelegate>)arg1 ;
-(void)setWorker:(id<DEDWorkerProtocol>)arg1 ;
-(id<DEDWorkerProtocol>)worker;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(long long)state;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)configuration;
-(void)cancel;
-(void)commit;
-(id)initWithConfiguration:(id)arg1 ;
-(void)cleanup;
-(void)_cancel;
-(id)shortDescription;
-(NSObject*<OS_os_log>)log;
-(DEDBugSessionConfiguration *)config;
-(void)setConfig:(DEDBugSessionConfiguration *)arg1 ;
@end

