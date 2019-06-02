/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RMPersistenceControllerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSPersistentContainer, NSMutableDictionary, NSString;

@interface RMPersistenceController : NSObject <RMPersistenceControllerProtocol> {

	NSObject* _lastPersistentHistoryTokenByStoreIdentifierLock;
	NSPersistentContainer* _persistentContainer;
	NSMutableDictionary* _lastPersistentHistoryTokenByStoreIdentifier;
	NSObject*<OS_dispatch_queue> _coreDataQueue;

}

@property (nonatomic,copy,readonly) NSMutableDictionary * lastPersistentHistoryTokenByStoreIdentifier;              //@synthesize lastPersistentHistoryTokenByStoreIdentifier=_lastPersistentHistoryTokenByStoreIdentifier - In the implementation block
@property (nonatomic,retain) NSPersistentContainer * persistentContainer;                                           //@synthesize persistentContainer=_persistentContainer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> coreDataQueue;                                            //@synthesize coreDataQueue=_coreDataQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newBackgroundContext;
-(id)viewContext;
-(void)performBackgroundTask:(/*^block*/id)arg1 ;
-(void)setPersistentContainer:(NSPersistentContainer *)arg1 ;
-(NSPersistentContainer *)persistentContainer;
-(void)_remotePersistentStoreDidChange:(id)arg1 ;
-(void)_persistentStoreCoordinatorStoresDidChange:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)coreDataQueue;
-(NSMutableDictionary *)lastPersistentHistoryTokenByStoreIdentifier;
-(id)persistentHistoryTokenForStore:(id)arg1 ;
-(void)savePersistentHistoryToken:(id)arg1 forStore:(id)arg2 ;
-(id)descriptionForPersistentStore:(id)arg1 ;
-(void)setCoreDataQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)performBackgroundTaskAndWait:(/*^block*/id)arg1 ;
-(id)init;
@end

