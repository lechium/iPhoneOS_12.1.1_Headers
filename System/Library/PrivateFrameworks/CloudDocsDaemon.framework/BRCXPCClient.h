/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCProcessMonitorDelegate.h>
#import <libobjc.A.dylib/BRCForegroundClient.h>
#import <libobjc.A.dylib/BRCNotificationPipeDelegate.h>

@protocol OS_dispatch_queue;
@class BRCClientPrivilegesDescriptor, NSCountedSet, brc_task_tracker, NSObject, NSOperationQueue, BRCAccountSession, NSXPCConnection, BRMangledID, NSSet, NSString;

@interface BRCXPCClient : NSObject <BRCProcessMonitorDelegate, BRCForegroundClient, BRCNotificationPipeDelegate> {

	BRCClientPrivilegesDescriptor* _clientPriviledgesDescriptor;
	NSCountedSet* _appLibraries;
	brc_task_tracker* _tracker;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _operationQueue;
	BRCAccountSession* _session;
	int _clientPid;
	SCD_Struct_BR21 auditToken;
	BOOL _dieOnInvalidate;
	unsigned _isForeground : 1;
	unsigned _invalidated : 1;
	BOOL _isUsingUbiquity;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) BRCClientPrivilegesDescriptor * clientPriviledgesDescriptor;              //@synthesize clientPriviledgesDescriptor=_clientPriviledgesDescriptor - In the implementation block
@property (nonatomic,retain) BRCAccountSession * session;                                              //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL isUsingUbiquity;                                                     //@synthesize isUsingUbiquity=_isUsingUbiquity - In the implementation block
@property (nonatomic,readonly) BRMangledID * defaultMangledID; 
@property (nonatomic,readonly) NSSet * entitledAppLibraryIDs; 
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) BOOL hasPrivateSharingInterfaceEntitlement; 
@property (nonatomic,readonly) BOOL isSandboxed; 
@property (nonatomic,__weak,readonly) NSXPCConnection * connection;                                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) BOOL dieOnInvalidate;                                                   //@synthesize dieOnInvalidate=_dieOnInvalidate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
-(BOOL)isSandboxed;
-(id)initWithConnection:(id)arg1 ;
-(void)wait;
-(void)dumpToContext:(id)arg1 ;
-(void)notificationPipe:(id)arg1 willObserveAppLibrary:(id)arg2 ;
-(BOOL)hasPrivateSharingInterfaceEntitlement;
-(void)notificationPipe:(id)arg1 didObserveAppLibrary:(id)arg2 ;
-(NSSet *)entitledAppLibraryIDs;
-(void)setPrivilegesDescriptor:(id)arg1 ;
-(BOOL)dieOnInvalidate;
-(void)addAppLibrary:(id)arg1 ;
-(void)removeAppLibrary:(id)arg1 ;
-(BOOL)isUsingUbiquity;
-(void)_stopMonitoringProcess;
-(BOOL)_isAutomationEntitled;
-(void)process:(int)arg1 didBecomeForeground:(BOOL)arg2 ;
-(void)_startMonitoringProcessIfNeeded;
-(BOOL)_hasPrivateIPCEntitlementForSelector:(SEL)arg1 error:(id*)arg2 ;
-(BOOL)_isAppLibraryProxyEntitled;
-(char)cloudEnabledStatus;
-(BOOL)_hasAccessToAppLibraryID:(id)arg1 error:(id*)arg2 ;
-(BOOL)_canCreateAppLibraryWithID:(id)arg1 error:(id*)arg2 ;
-(BOOL)_isAppLibraryProxyWithError:(id*)arg1 ;
-(void)accessLogicalOrPhysicalURL:(id)arg1 accessKind:(long long)arg2 dbAccessKind:(long long)arg3 asynchronously:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
-(BOOL)_entitlementBooleanValueForKey:(id)arg1 ;
-(id)_entitlementValueForKey:(id)arg1 ofClass:(Class)arg2 ;
-(void)_auditURL:(id)arg1 ;
-(BOOL)canAccessPath:(const char*)arg1 accessKind:(long long)arg2 ;
-(BOOL)canAccessLogicalOrPhysicalURL:(id)arg1 accessKind:(long long)arg2 ;
-(id)_createBookmarkWithTarget:(id)arg1 targetPath:(id)arg2 parentPath:(id)arg3 aliasName:(id)arg4 error:(id*)arg5 ;
-(void)_startDownloadItemsAtURLs:(id)arg1 pos:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id)arg4 reply:(/*^block*/id)arg5 ;
-(id)_setupAppLibrary:(id)arg1 error:(id*)arg2 ;
-(BOOL)canAccessPhysicalURL:(id)arg1 ;
-(id)issueContainerExtensionForURL:(id)arg1 error:(id*)arg2 ;
-(BRMangledID *)defaultMangledID;
-(id)_auditedURLFromPath:(id)arg1 ;
-(void)_addExternalDocumentReferenceTo:(id)arg1 underParent:(id)arg2 forceReparent:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)_setupAppLibraryAndZoneWithID:(id)arg1 recreateDocumentsIfNeeded:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)setupNonSandboxedAccessForUbiquityContainers:(id)arg1 forBundleID:(id)arg2 ;
-(id)_sharingOperationItemFromLookup:(id)arg1 url:(id)arg2 allowDirectory:(BOOL)arg3 error:(id*)arg4 ;
-(void)_startSharingOperationAfterAcceptation:(BRCFrameworkOperation*)arg1 client:(id)arg2 item:(id)arg3 ;
-(void)_t_resetAllZones:(id)arg1 waitUntilIdle:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(BRCClientPrivilegesDescriptor *)clientPriviledgesDescriptor;
-(void)setClientPriviledgesDescriptor:(BRCClientPrivilegesDescriptor *)arg1 ;
-(void)setIsUsingUbiquity:(BOOL)arg1 ;
-(NSString *)identifier;
-(NSString *)description;
-(void)invalidate;
-(BRCAccountSession *)session;
-(void)addOperation:(id)arg1 ;
-(NSString *)bundleID;
-(NSXPCConnection *)connection;
-(void)setSession:(BRCAccountSession *)arg1 ;
@end

