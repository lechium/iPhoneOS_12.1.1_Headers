/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTStoreBackend.h>

@protocol AVTStoreBackendDelegate, AVTAvatarRecordChangeTracker, AVTCoreDataPersistentStoreConfiguration, AVTUILogger, AVTAvatarManagedRecordTransformer, AVTCoreDataRemoteChangesObserver;
@class NSString;

@interface AVTCoreDataStoreBackend : NSObject <AVTStoreBackend> {

	id<AVTStoreBackendDelegate> backendDelegate;
	id<AVTAvatarRecordChangeTracker> _recordChangeTracker;
	id<AVTCoreDataPersistentStoreConfiguration> _configuration;
	id<AVTUILogger> _logger;
	id<AVTAvatarManagedRecordTransformer> _recordTransformer;
	id<AVTCoreDataRemoteChangesObserver> _remoteChangesObserver;
	NSString* _localProcessName;

}

@property (nonatomic,readonly) id<AVTCoreDataPersistentStoreConfiguration> configuration;               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                                  //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarManagedRecordTransformer> recordTransformer;                 //@synthesize recordTransformer=_recordTransformer - In the implementation block
@property (nonatomic,readonly) id<AVTCoreDataRemoteChangesObserver> remoteChangesObserver;              //@synthesize remoteChangesObserver=_remoteChangesObserver - In the implementation block
@property (nonatomic,readonly) NSString * localProcessName;                                             //@synthesize localProcessName=_localProcessName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTStoreBackendDelegate> backendDelegate; 
@property (nonatomic,readonly) id<AVTAvatarRecordChangeTracker> recordChangeTracker;                    //@synthesize recordChangeTracker=_recordChangeTracker - In the implementation block
+(BOOL)fetchRequestCriteriaSupported:(long long)arg1 ;
+(id)cdFetchRequestForAvatarFetchRequest:(id)arg1 recordTransformer:(id)arg2 ;
+(id)cdFetchRequestWithPredicate:(id)arg1 ;
-(id<AVTUILogger>)logger;
-(id)newManagedObjectContext;
-(BOOL)saveAvatar:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveAvatars:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteAvatarWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)duplicateAvatarRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)canCreateAvatarWithError:(id*)arg1 ;
-(id<AVTStoreBackendDelegate>)backendDelegate;
-(void)setBackendDelegate:(id<AVTStoreBackendDelegate>)arg1 ;
-(id<AVTAvatarRecordChangeTracker>)recordChangeTracker;
-(id)initWithConfiguration:(id)arg1 recordTransformer:(id)arg2 remoteChangesObserver:(id)arg3 localProcessName:(id)arg4 recordChangeTracker:(id)arg5 environment:(id)arg6 ;
-(void)startObservingChangesIfNeeded;
-(id<AVTAvatarManagedRecordTransformer>)recordTransformer;
-(NSString *)localProcessName;
-(id<AVTCoreDataRemoteChangesObserver>)remoteChangesObserver;
-(void)getChangedObjectIDsOfInterest:(id*)arg1 deletedIdentifiers:(id*)arg2 forTransactions:(id)arg3 ;
-(id)recordIdentifiersForManagedObjectIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3 ;
-(void)contentDidChangeWithIdentifiers:(id)arg1 ;
-(BOOL)setupStoreIfNeeded:(id*)arg1 ;
-(void)performWorkWithManagedObjectContext:(/*^block*/id)arg1 ;
-(unsigned long long)nts_avatarCountWithManagedObjectContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)nts_saveManagedObjectContext:(id)arg1 error:(id*)arg2 ;
-(id)initWithConfiguration:(id)arg1 environment:(id)arg2 ;
-(id)avatarsForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id<AVTCoreDataPersistentStoreConfiguration>)configuration;
@end

