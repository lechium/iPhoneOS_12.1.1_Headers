/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HDSyncStore.h>

@class NSUUID, NSString, HDProfile, HDSharingPredicate, CKRecordZoneID;

@interface HDCloudSyncStore : NSObject <NSCopying, HDSyncStore> {

	long long _syncProvenance;
	long long _syncEpoch;
	BOOL _canPush;
	NSUUID* _storeIdentifier;
	NSString* _ownerIdentifier;
	NSString* _containerIdentifier;
	HDProfile* _profile;
	NSString* _sharingIdentifier;
	HDSharingPredicate* _sharingPredicate;
	CKRecordZoneID* _zoneID;

}

@property (nonatomic,retain) CKRecordZoneID * zoneID;                              //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * storeIdentifier;                      //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownerIdentifier;                    //@synthesize ownerIdentifier=_ownerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerIdentifier;                //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL canPush;                                       //@synthesize canPush=_canPush - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                         //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) NSString * sharingIdentifier;                  //@synthesize sharingIdentifier=_sharingIdentifier - In the implementation block
@property (nonatomic,readonly) HDSharingPredicate * sharingPredicate;              //@synthesize sharingPredicate=_sharingPredicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int protocolVersion; 
@property (readonly) long long syncStoreType; 
+(id)syncStoreForProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 error:(id*)arg6 ;
+(void)samplesDeletedInProfile:(id)arg1 byUser:(BOOL)arg2 ;
+(id)syncStoreForProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 sharingIdentifier:(id)arg6 predicate:(id)arg7 error:(id*)arg8 ;
-(int)protocolVersion;
-(HDProfile *)profile;
-(NSUUID *)storeIdentifier;
-(NSString *)ownerIdentifier;
-(CKRecordZoneID *)zoneID;
-(NSString *)containerIdentifier;
-(long long)syncProvenance;
-(id)orderedSyncEntities;
-(BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1 ;
-(BOOL)replacePersistedAnchorMap:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetReceivedSyncAnchorMapWithError:(id*)arg1 ;
-(long long)syncEpoch;
-(id)syncStoreIdentifier;
-(id)databaseIdentifier;
-(id)syncStoreDefaultSourceBundleIdentifier;
-(id)syncEntityDependenciesForSyncEntity:(Class)arg1 ;
-(BOOL)canRecieveSyncObjectsForEntityClass:(Class)arg1 ;
-(BOOL)enforceSyncEntityOrdering;
-(BOOL)shouldContinueAfterAnchorValidationError:(id)arg1 ;
-(BOOL)shouldEnforceSequenceOrdering;
-(long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1 ;
-(void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2 ;
-(long long)syncStoreType;
-(id)persistedStateWithError:(id*)arg1 ;
-(BOOL)persistState:(id)arg1 error:(id*)arg2 ;
-(id)initWithProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 sharingIdentifier:(id)arg6 predicate:(id)arg7 error:(id*)arg8 ;
-(id)_excludedSyncEntities;
-(id)syncStoreForEpoch:(long long)arg1 ;
-(id)receivedSyncAnchorMapWithError:(id*)arg1 ;
-(BOOL)clearAllSyncAnchorsWithError:(id*)arg1 ;
-(id)getPersistedAnchorMapWithError:(id*)arg1 ;
-(BOOL)canPush;
-(NSString *)sharingIdentifier;
-(HDSharingPredicate *)sharingPredicate;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

