/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutEventEntity : HDHealthEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)foreignKeys;
+(long long)protectionClass;
+(id)workoutEventsForOwner:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(Class)ownerEntityClass;
+(id)ownerEntityReferenceColumn;
+(BOOL)insertWorkoutEventsFromWorkout:(id)arg1 ownerID:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
+(id)deleteStatementForWorkoutEventsWithDatabase:(id)arg1 ;
+(id)statementForEnumeratingEventsForOwnerInDatabase:(id)arg1 error:(id*)arg2 ;
+(BOOL)enumerateEventsForOwner:(long long)arg1 withStatement:(id)arg2 error:(id*)arg3 eventHandler:(/*^block*/id)arg4 ;
+(id)workoutEventsWithOwnerID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)insertPersistableWorkoutEvent:(id)arg1 ownerID:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
+(Class)workoutEventClass;
@end
