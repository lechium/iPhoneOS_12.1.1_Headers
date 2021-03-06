/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentContainer.h>

@class NSPersistentStore, NSArray, NSString, RCDatabaseMetadata, NSCloudKitMirroringDelegateOptions, NSPersistentHistoryToken, NSMutableArray, NSDate;

@interface RCPersistentContainer : NSPersistentContainer {

	NSPersistentStore* _localStore;
	NSPersistentStore* _cloudStore;
	NSArray* _cloudStores;
	NSString* _cloudStoreIdentifier;
	NSString* _transactionAuthor;
	RCDatabaseMetadata* _metadata;
	NSCloudKitMirroringDelegateOptions* _mirroringOptions;
	NSPersistentHistoryToken* _currentHistoryToken;
	NSPersistentHistoryToken* _latestHistoryToken;
	NSMutableArray* _transactionsBuffer;
	NSArray* _contextsToNotify;
	NSDate* _changeNotificationDate;

}

@property (nonatomic,readonly) NSPersistentStore * localStore;                                     //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * cloudStore;                                     //@synthesize cloudStore=_cloudStore - In the implementation block
@property (nonatomic,readonly) RCDatabaseMetadata * metadata;                                      //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * mirroringOptions;              //@synthesize mirroringOptions=_mirroringOptions - In the implementation block
+(id)newObjectModel;
+(id)sharedContainer;
+(id)mirroringContainer;
+(void)initialize;
-(NSCloudKitMirroringDelegateOptions *)mirroringOptions;
-(NSPersistentStore *)localStore;
-(id)_initWithMirroring:(BOOL)arg1 useXPCStore:(BOOL)arg2 ;
-(void)_migrateDatabaseIfNecessary;
-(void)_handleRemoteChangeNotification:(id)arg1 ;
-(id)_nextTransactionAfterToken:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(void)_handleRemoteChangeNotificationOnMainQueue:(id)arg1 ;
-(id)newContextWithConcurrencyType:(unsigned long long)arg1 ;
-(id)_valueForDatabaseProperty:(id)arg1 context:(id)arg2 ;
-(id)_fetchLegacyRecordingsForMigrationWithContext:(id)arg1 ;
-(void)_deleteOrphanedEntityRevisionsWithContext:(id)arg1 ;
-(id)_cloudRecordingsInContext:(id)arg1 ;
-(id)_legacyRecordingWithUniqueID:(id)arg1 context:(id)arg2 ;
-(NSPersistentStore *)cloudStore;
-(void)dealloc;
-(RCDatabaseMetadata *)metadata;
@end

