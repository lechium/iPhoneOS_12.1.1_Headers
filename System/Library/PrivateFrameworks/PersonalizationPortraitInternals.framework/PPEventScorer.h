/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, EAEmailAddressSet, NSSet;

@interface PPEventScorer : NSObject {

	NSDictionary* _pastEventTitlesAndParticipants;
	double _earliestStartTime;
	BOOL _shouldConsiderAlarms;
	EAEmailAddressSet* _emailVIPEmailAddresses;
	NSSet* _favoritesEmailAddresses;
	int _rankingOptions;
	long long _pastTitlesCount;

}
+(void)clearAssetCache;
+(id)cacheKeyforCoreRoutineCacheForStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)eventScorerConfig;
+(id)participantsInEvent:(id)arg1 ;
+(id)emailAddressFromEKAttendee:(id)arg1 ;
+(BOOL)scoreIsExtraordinary:(double)arg1 rankingOptions:(int)arg2 ;
+(id)enrichDictionary:(id)arg1 withEvent:(id)arg2 ;
+(void)setLocationsOfInterestLocations:(id)arg1 withReferenceDate:(id)arg2 ;
-(id)initWithPastEventTitlesAndParticipants:(id)arg1 andEarliestStartTime:(double)arg2 shouldConsiderAlarms:(BOOL)arg3 withOptions:(int)arg4 ;
-(id)scoreEvent:(id)arg1 usingDate:(id)arg2 ;
-(BOOL)isWorkCalendar:(id)arg1 ;
-(BOOL)isHomeCalendar:(id)arg1 ;
-(id)scoreRecurrenceRules:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreSuggestionsInfo:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreParticipantStatusAndCount:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreDuration:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreContentModifications:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreCalendar:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreTitle:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreUnusualStartTime:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreSelfAttendeeRole:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreAvailabilityStatus:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreParticipantsInPast:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreAlarmIsSet:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreTravelTimeSet:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreAttachments:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreCoreRoutine:(id)arg1 usingDate:(id)arg2 withFeatureSchema:(id)arg3 ;
-(id)scoreParticipantsInEmailVIPAndFavorites:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreNotes:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreURL:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scorePastEventVolumesWithFeatureSchema:(id)arg1 ;
-(id)favoriteEmailAddresses;
-(void)setEmailVIPEmailAddresses:(id)arg1 ;
-(void)setFavoritesEmailAddresses:(id)arg1 ;
-(id)emailVIPEmailAddresses;
-(id)coreRoutineLocationsOfInterestLocationsUsingDate:(id)arg1 ;
-(id)init;
@end

