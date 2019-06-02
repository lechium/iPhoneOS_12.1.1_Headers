/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDDataEntity.h>

@interface ASDatabaseCompetitionListEntryEntity : HDDataEntity
+(id)databaseTable;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(id)uniquedColumns;
+(long long)protectionClass;
+(id)columnsDefinition;
+(id)allCompetitionListsWithProfile:(id)arg1 withError:(id*)arg2 ;
+(BOOL)removeAllCompetitionListsWithProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)saveCompetitionList:(id)arg1 profile:(id)arg2 withError:(id*)arg3 ;
+(BOOL)_insertCompetitionLists:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_competitionListsWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_insertCompetitionList:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
@end
