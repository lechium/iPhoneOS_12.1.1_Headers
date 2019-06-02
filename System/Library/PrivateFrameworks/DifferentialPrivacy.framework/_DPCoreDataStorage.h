/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSURL, NSDictionary, NSManagedObjectModel, NSMutableDictionary, NSObject, _DPDataProtectionStateMonitor;

@interface _DPCoreDataStorage : NSObject {

	BOOL _readOnly;
	NSString* _databaseDirectory;
	NSString* _databaseName;
	NSURL* _modelURL;
	NSDictionary* _paths;
	NSManagedObjectModel* _managedObjectModel;
	NSMutableDictionary* _managedObjectContexts;
	NSMutableDictionary* _persistentStoreCoordinators;
	NSObject*<OS_dispatch_queue> _queueMOC;
	NSObject*<OS_dispatch_queue> _queuePSC;
	_DPDataProtectionStateMonitor* _dataProtectionMonitor;

}

@property (nonatomic,readonly) NSDictionary * paths;                                               //@synthesize paths=_paths - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                            //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * managedObjectContexts;                        //@synthesize managedObjectContexts=_managedObjectContexts - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * persistentStoreCoordinators;                  //@synthesize persistentStoreCoordinators=_persistentStoreCoordinators - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queueMOC;                              //@synthesize queueMOC=_queueMOC - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queuePSC;                              //@synthesize queuePSC=_queuePSC - In the implementation block
@property (nonatomic,readonly) _DPDataProtectionStateMonitor * dataProtectionMonitor;              //@synthesize dataProtectionMonitor=_dataProtectionMonitor - In the implementation block
@property (nonatomic,copy,readonly) NSString * databaseDirectory;                                  //@synthesize databaseDirectory=_databaseDirectory - In the implementation block
@property (nonatomic,copy,readonly) NSString * databaseName;                                       //@synthesize databaseName=_databaseName - In the implementation block
@property (nonatomic,readonly) NSURL * modelURL;                                                   //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,readonly) BOOL readOnly;                                                      //@synthesize readOnly=_readOnly - In the implementation block
+(BOOL)createDatabaseDirectory:(id)arg1 error:(id*)arg2 ;
+(id)persistentStoreOptionsFor:(id)arg1 readOnly:(BOOL)arg2 ;
+(unsigned long long)deleteObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 fetchOffset:(unsigned long long)arg5 fetchLimit:(unsigned long long)arg6 ;
+(unsigned long long)countObjectsInContext:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 ;
+(id)storageWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 readOnly:(BOOL)arg4 ;
-(NSDictionary *)paths;
-(void)handleDataProtectionChangeFor:(id)arg1 willBeAvailable:(BOOL)arg2 ;
-(id)persistentStoreCoordinatorFor:(id)arg1 ;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(NSURL *)modelURL;
-(id)initWithDirectory:(id)arg1 databaseName:(id)arg2 modelURL:(id)arg3 readOnly:(BOOL)arg4 ;
-(void)invalidateManagedObjectContextFor:(id)arg1 ;
-(void)invalidatePersistentStoreCoordinatorFor:(id)arg1 ;
-(NSMutableDictionary *)managedObjectContexts;
-(NSMutableDictionary *)persistentStoreCoordinators;
-(NSString *)databaseDirectory;
-(void)handleDatabaseErrors:(id)arg1 forPSC:(id)arg2 protectionClass:(id)arg3 ;
-(BOOL)deleteDatabaseForPSC:(id)arg1 protectionClass:(id)arg2 obliterate:(BOOL)arg3 ;
-(id)mocForProtectionClass:(id)arg1 ;
-(unsigned long long)deleteVersionMismatchRecords:(unsigned long long)arg1 entities:(id)arg2 limit:(unsigned long long)arg3 ;
-(unsigned long long)deleteSubmittedRecords:(unsigned long long)arg1 entities:(id)arg2 limit:(unsigned long long)arg3 ;
-(unsigned long long)deleteOldObjectsToLimitTotalNumber:(unsigned long long)arg1 entities:(id)arg2 limit:(unsigned long long)arg3 ;
-(unsigned long long)deleteObjectsOlderThanDate:(id)arg1 entities:(id)arg2 limit:(unsigned long long)arg3 ;
-(unsigned long long)countObjectsForEntities:(id)arg1 predicate:(id)arg2 ;
-(BOOL)deleteStorageFor:(id)arg1 obliterate:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_queue>)queueMOC;
-(NSObject*<OS_dispatch_queue>)queuePSC;
-(_DPDataProtectionStateMonitor *)dataProtectionMonitor;
-(NSString *)databaseName;
-(id)init;
-(NSManagedObjectModel *)managedObjectModel;
-(BOOL)readOnly;
@end

