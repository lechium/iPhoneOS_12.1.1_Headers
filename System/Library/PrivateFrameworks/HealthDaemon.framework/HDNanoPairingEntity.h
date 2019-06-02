/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@class NSUUID, NSString;

@interface HDNanoPairingEntity : HDHealthEntity {

	BOOL _restoreComplete;
	NSUUID* _nanoRegistryUUID;
	NSUUID* _persistentUUID;
	NSUUID* _healthUUID;
	NSString* _defaultSourceBundleIdentifier;
	NSString* _deviceIdentifier;
	long long _syncProvenance;
	HDNanoPairingEntity* _entity;

}

@property (nonatomic,retain) HDNanoPairingEntity * entity;                               //@synthesize entity=_entity - In the implementation block
@property (nonatomic,retain) NSUUID * nanoRegistryUUID;                                  //@synthesize nanoRegistryUUID=_nanoRegistryUUID - In the implementation block
@property (assign,nonatomic) long long syncProvenance;                                   //@synthesize syncProvenance=_syncProvenance - In the implementation block
@property (nonatomic,retain) NSUUID * persistentUUID;                                    //@synthesize persistentUUID=_persistentUUID - In the implementation block
@property (nonatomic,retain) NSUUID * healthUUID;                                        //@synthesize healthUUID=_healthUUID - In the implementation block
@property (nonatomic,copy) NSString * defaultSourceBundleIdentifier;                     //@synthesize defaultSourceBundleIdentifier=_defaultSourceBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifier;                                  //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (assign,getter=isRestoreComplete,nonatomic) BOOL restoreComplete;              //@synthesize restoreComplete=_restoreComplete - In the implementation block
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)foreignKeys;
+(long long)protectionClass;
+(id)sourceEntityForRegistryUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_predicateWithRegistryUUID:(id)arg1 ;
+(id)_nanoPairingEntitiesWithPredicate:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)nanoPairingEntityWithRegistryUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)nanoPairingEntityWithRegistryUUID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(HDNanoPairingEntity *)entity;
-(void)setEntity:(HDNanoPairingEntity *)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDefaultSourceBundleIdentifier:(NSString *)arg1 ;
-(NSString *)defaultSourceBundleIdentifier;
-(long long)syncProvenance;
-(NSUUID *)nanoRegistryUUID;
-(NSUUID *)persistentUUID;
-(NSUUID *)healthUUID;
-(void)setPersistentUUID:(NSUUID *)arg1 ;
-(void)setHealthUUID:(NSUUID *)arg1 ;
-(BOOL)isRestoreComplete;
-(id)_initWithNanoRegistryUUID:(id)arg1 persistentUUID:(id)arg2 healthUUID:(id)arg3 sourceBundleIdentifier:(id)arg4 deviceIdentifier:(id)arg5 syncStoreEntity:(id)arg6 restoreComplete:(BOOL)arg7 database:(id)arg8 error:(id*)arg9 ;
-(void)setNanoRegistryUUID:(NSUUID *)arg1 ;
-(void)setSyncProvenance:(long long)arg1 ;
-(void)setRestoreComplete:(BOOL)arg1 ;
-(BOOL)saveWithHealthDatabase:(id)arg1 error:(id*)arg2 ;
-(id)description;
@end
