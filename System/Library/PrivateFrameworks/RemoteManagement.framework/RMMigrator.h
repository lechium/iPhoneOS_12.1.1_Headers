/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPersistentStoreCoordinator, NSPersistentStore, NSPersistentHistoryToken;

@interface RMMigrator : NSObject {

	NSPersistentStoreCoordinator* _coordinator;
	NSPersistentStore* _localStore;
	NSPersistentStore* _cloudStore;
	NSPersistentHistoryToken* _migratedToken;

}
+(id)localToCloudMapping;
+(id)mirroredEntityNames;
+(id)cloudToLocalMapping;
-(id)initWithPersistentStoreCoordinator:(id)arg1 ;
-(BOOL)migrateWithError:(id*)arg1 ;
-(BOOL)_checkPreconditionsError:(id*)arg1 ;
-(id)historyTokenForAuthor:(id)arg1 fromStore:(id)arg2 ;
-(BOOL)addHistoryToken:(id)arg1 forAuthor:(id)arg2 toMetadataForStore:(id)arg3 error:(id*)arg4 ;
-(void)newResolveConflictsBetweenLocalDeltas:(id)arg1 cloudDeltas:(id)arg2 ;
-(BOOL)newMigrateWithError:(id*)arg1 ;
-(void)resolveConflictsBetweenLocalDeltas:(id)arg1 cloudDeltas:(id)arg2 ;
-(BOOL)newAreLocalChangesInterestingWithError:(id*)arg1 ;
-(BOOL)areLocalChangesInterestingWithError:(id*)arg1 ;
-(void)_dumpCloudPersonalActivations:(id)arg1 ;
-(void)_dumpCloudApps:(id)arg1 ;
-(void)_dumpLocalPersonalActivations:(id)arg1 ;
-(void)_dumpLocalApps:(id)arg1 ;
@end

