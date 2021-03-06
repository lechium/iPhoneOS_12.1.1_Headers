/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDSharingSetupEntity : HDHealthEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(long long)protectionClass;
+(id)_sampleTypesForSetupWithPersistentID:(long long)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)privateSubEntities;
+(BOOL)createShareWithProfile:(id)arg1 identifier:(id)arg2 predicate:(id)arg3 error:(id*)arg4 ;
+(BOOL)enumerateSharesWithProfile:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
@end

