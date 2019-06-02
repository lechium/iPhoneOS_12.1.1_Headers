/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PSITable.h>

@class PSIStatement;

@interface PSITripTable : PSITable {

	PSIStatement* _insertStatement;
	PSIStatement* _deleteStatement;
	PSIStatement* _checkStatement;
	PSIStatement* _listStatement;
	PSIStatement* _tripResultsForTripIdsStatement;
	PSIStatement* _tripResultByTripIdWithTripIdsStatement;
	PSIStatement* _selectWithSingleDateStatement;
	PSIStatement* _selectWithStartEndDatesStatement;
	PSIStatement* _selectWithStartDateStatement;
	PSIStatement* _selectWithEndDateStatement;
	PSIStatement* _selectByGroupIdWithSingleDateStatement;
	PSIStatement* _selectByGroupIdWithStartEndDatesStatement;
	PSIStatement* _selectByGroupIdWithStartDateStatement;
	PSIStatement* _selectByGroupIdWithEndDateStatement;
	PSIStatement* _selectByGroupIdStatement;
	PSIStatement* _groupIdsWithTripIdsStatement;
	PSIStatement* _idsOfAllGroupsMatchedByTripsStatement;
	PSIStatement* _tripIdsByGroupIdWithTripIdsStatement;
	PSIStatement* _numberOfTripsMatchingGroupWithIdStatement;
	PSIStatement* _numberOfTripsByGroupIdMatchingGroupsWithIdsStatement;
	PSIStatement* _linkToMomentStatement;
	PSIStatement* _unlinkFromAllMomentsStatement;
	PSIStatement* _getMomentsStatement;
	PSIStatement* _linkToGroupStatement;
	PSIStatement* _unlinkFromGroupsStatement;

}
-(void)finalizze;
-(id)initWithDelegate:(id)arg1 searchable:(BOOL)arg2 writable:(BOOL)arg3 ;
-(id)tripResultByTripIdWithTripIds:(id)arg1 ;
-(void)cacheWritableStatements;
-(void)cacheSearchableStatements;
-(void)cacheOtherStatements;
-(void)linkTripWithId:(long long)arg1 toGroupWithId:(long long)arg2 ;
-(id)allTripUUIDs;
-(long long)addTrip:(id)arg1 usingTokenEnumeratingBlock:(/*^block*/id)arg2 ;
-(id)tripResultsForTripIds:(CFArrayRef)arg1 range:(NSRange)arg2 ;
-(const CFArrayRef)newTripIdsWithGroupId:(long long)arg1 dateFilter:(id)arg2 ;
-(const CFArrayRef)newTripIdsWithDateFilter:(id)arg1 ;
-(const CFSetRef)newGroupIdsWithTripIds:(CFSetRef)arg1 ;
-(id)tripIdsByGroupIdWithTripIds:(id)arg1 ;
-(unsigned long long)numberOfTripsMatchingGroupWithId:(long long)arg1 ;
-(id)numberOfTripsByGroupIdMatchingGroupsWithIds:(id)arg1 ;
-(long long)tripIdForUUID:(id)arg1 ;
-(id)idsOfAllGroupsMatchedByTrips;
-(void)unlinkTripForId:(long long)arg1 ;
-(void)removeTripForId:(long long)arg1 ;
-(id)removeAllTrips;
-(void)clear;
@end
