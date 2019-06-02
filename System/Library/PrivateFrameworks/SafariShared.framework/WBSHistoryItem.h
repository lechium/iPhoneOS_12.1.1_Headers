/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class WBSHistoryVisit, NSMutableSet, NSMutableArray, NSURL, NSString, NSArray, NSDate, NSSet, NSData;

@interface WBSHistoryItem : NSObject {

	WBSHistoryVisit* _lastVisit;
	NSMutableSet* _visitsPendingWriteToDataStore;
	long long _databaseID;
	unsigned long long _visitCount;
	Vector<int, 0, WTF::CrashOnOverflow, 16>* _dailyVisitCountScores;
	Vector<int, 0, WTF::CrashOnOverflow, 16>* _weeklyVisitCountScores;
	NSMutableArray* _redirectSourceItems;
	NSMutableArray* _autocompleteTriggers;
	NSMutableArray* _visits;
	BOOL _shouldRecomputeDerivedVisitCountScores;
	float _cachedTopSitesURLPenalty;
	float _cachedTopSitesVisitScore;
	NSURL* _url;
	NSString* _userVisibleURLString;
	NSString* _urlString;
	unsigned long long _visitCountScore;
	double _lastTimeTopSitesScoreWasComputed;

}

@property (nonatomic,readonly) unsigned long long dailyVisitCountScoresCountOnSynchronizationQueue; 
@property (nonatomic,readonly) const int* dailyVisitCountScoresPtrOnSynchronizationQueue; 
@property (nonatomic,readonly) unsigned long long weeklyVisitCountScoresCountOnSynchronizationQueue; 
@property (nonatomic,readonly) const int* weeklyVisitCountScoresPtrOnSynchronizationQueue; 
@property (assign,nonatomic) long long databaseID;                                                                //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) NSString * urlString;                                                              //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) NSString * userVisibleURLString;                                                   //@synthesize userVisibleURLString=_userVisibleURLString - In the implementation block
@property (nonatomic,readonly) NSString * simplifiedUserVisibleURLString; 
@property (nonatomic,readonly) NSURL * url;                                                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSArray * redirectSourceItems; 
@property (nonatomic,readonly) NSArray * autocompleteTriggers; 
@property (nonatomic,readonly) NSString * stringForUserTypedDomainExpansion; 
@property (nonatomic,readonly) WBSHistoryVisit * lastVisit; 
@property (nonatomic,readonly) double lastVisitedTimeInterval; 
@property (nonatomic,readonly) NSDate * lastVisitedDate; 
@property (nonatomic,readonly) NSArray * visits;                                                                  //@synthesize visits=_visits - In the implementation block
@property (nonatomic,readonly) unsigned long long visitCount; 
@property (nonatomic,readonly) unsigned long long visitCountScore;                                                //@synthesize visitCountScore=_visitCountScore - In the implementation block
@property (nonatomic,readonly) BOOL shouldRecomputeDerivedVisitCountScores;                                       //@synthesize shouldRecomputeDerivedVisitCountScores=_shouldRecomputeDerivedVisitCountScores - In the implementation block
@property (nonatomic,readonly) BOOL lastVisitWasHTTPNonGet; 
@property (assign,nonatomic) BOOL lastVisitWasFailure; 
@property (nonatomic,readonly) WBSHistoryItem * lastVisitRedirectDestinationItem; 
@property (nonatomic,readonly) WBSHistoryItem * endOfLastVisitRedirectChain; 
@property (nonatomic,readonly) NSURL * urlOnSynchronizationQueue; 
@property (nonatomic,readonly) NSString * stringForUserTypedDomainExpansionOnSynchronizationQueue; 
@property (nonatomic,readonly) WBSHistoryVisit * lastVisitOnSynchronizationQueue; 
@property (nonatomic,readonly) double lastVisitedTimeIntervalOnSynchronizationQueue; 
@property (nonatomic,readonly) NSSet * visitsPendingWriteToDataStoreOnSynchronizationQueue; 
@property (nonatomic,readonly) NSData * dailyVisitCountScoresDataOnSynchronizationQueue; 
@property (nonatomic,readonly) NSData * weeklyVisitCountScoresDataOnSynchronizationQueue; 
@property (nonatomic,readonly) NSData * autocompleteTriggersDataOnSynchronizationQueue; 
@property (assign,nonatomic) float cachedTopSitesURLPenalty;                                                      //@synthesize cachedTopSitesURLPenalty=_cachedTopSitesURLPenalty - In the implementation block
@property (assign,nonatomic) float cachedTopSitesVisitScore;                                                      //@synthesize cachedTopSitesVisitScore=_cachedTopSitesVisitScore - In the implementation block
@property (assign,nonatomic) double lastTimeTopSitesScoreWasComputed;                                             //@synthesize lastTimeTopSitesScoreWasComputed=_lastTimeTopSitesScoreWasComputed - In the implementation block
+(id)synchronizationQueue;
+(double)timeIntervalForDailyAndWeeklyVisitCountScores;
+(void)initialize;
-(id)initWithURLString:(id)arg1 ;
-(long long)databaseID;
-(void)setDatabaseID:(long long)arg1 ;
-(double)lastVisitedTimeInterval;
-(NSString *)userVisibleURLString;
-(unsigned long long)visitCountScore;
-(double)lastVisitedTimeIntervalOnSynchronizationQueue;
-(float)cachedTopSitesURLPenalty;
-(float)cachedTopSitesVisitScore;
-(const int*)dailyVisitCountScoresPtrOnSynchronizationQueue;
-(unsigned long long)dailyVisitCountScoresCountOnSynchronizationQueue;
-(const int*)weeklyVisitCountScoresPtrOnSynchronizationQueue;
-(unsigned long long)weeklyVisitCountScoresCountOnSynchronizationQueue;
-(void)setCachedTopSitesURLPenalty:(float)arg1 ;
-(void)setCachedTopSitesVisitScore:(float)arg1 ;
-(void)setLastTimeTopSitesScoreWasComputed:(double)arg1 ;
-(BOOL)lastVisitWasHTTPNonGet;
-(double)lastTimeTopSitesScoreWasComputed;
-(BOOL)addAutocompleteTrigger:(id)arg1 ;
-(void)mergeDataFromItem:(id)arg1 ;
-(NSString *)stringForUserTypedDomainExpansion;
-(void)wasVisited:(id)arg1 ;
-(void)wasRedirectedFrom:(id)arg1 to:(id)arg2 ;
-(void)scoreOfVisit:(id)arg1 wasUpdatedFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(void)removeVisits:(id)arg1 candidateLastVisit:(id)arg2 ;
-(WBSHistoryVisit *)lastVisitOnSynchronizationQueue;
-(NSURL *)urlOnSynchronizationQueue;
-(void)removeVisitsOnSynchronizationQueue:(id)arg1 candidateLastVisit:(id)arg2 ;
-(void)_addExistingVisit:(id)arg1 ;
-(void)_collapseDailyVisitsToWeekly;
-(Vector<double, 0, WTF::CrashOnOverflow, 16>*)_timesOfVisitsToSynthesizeFromDailyCounts:(const Vector<int, 0, WTF::CrashOnOverflow, 16>*)arg1 weeklyCounts:(const Vector<int, 0, WTF::CrashOnOverflow, 16>*)arg2 ;
-(Vector<double, 0, WTF::CrashOnOverflow, 16>*)_timesForSynthesizedVisitsPreceedingDailyAndWeeklyRange:(unsigned long long)arg1 ;
-(NSString *)stringForUserTypedDomainExpansionOnSynchronizationQueue;
-(id)_autocompleteTriggersFromSynchronizationQueue;
-(BOOL)_addAutocompleteTriggerFromSynchronizationQueue:(id)arg1 ;
-(void)_padDailyCountsForNewVisitAtTime:(double)arg1 indexOfNewVisit:(int*)arg2 ;
-(void)addRedirectSourceItemFromSynchronizationQueue:(id)arg1 ;
-(void)_wasVisitedOnSynchronizationQueue:(id)arg1 ;
-(void)_addVisit:(id)arg1 ;
-(Vector<double, 0, WTF::CrashOnOverflow, 16>*)_timesForVisits:(unsigned long long)arg1 toSynthesizeBetweenStartTime:(double)arg2 endTime:(double)arg3 ;
-(NSString *)simplifiedUserVisibleURLString;
-(void)setLastVisitWasFailure:(BOOL)arg1 ;
-(NSArray *)redirectSourceItems;
-(WBSHistoryItem *)lastVisitRedirectDestinationItem;
-(WBSHistoryItem *)endOfLastVisitRedirectChain;
-(NSArray *)autocompleteTriggers;
-(void)visitWasModified:(id)arg1 ;
-(NSSet *)visitsPendingWriteToDataStoreOnSynchronizationQueue;
-(void)clearVisitsPendingWriteToDataStoreFromSynchronizationQueue;
-(NSData *)dailyVisitCountScoresDataOnSynchronizationQueue;
-(NSData *)weeklyVisitCountScoresDataOnSynchronizationQueue;
-(NSData *)autocompleteTriggersDataOnSynchronizationQueue;
-(void)recomputeDerivedVisitCountScoresWithVisits:(id)arg1 ;
-(long long)compareWithItemByLastVisitedTimeInterval:(id)arg1 ;
-(void)recordExistingRedirectFrom:(id)arg1 to:(id)arg2 ;
-(void)recordSynthesizedRedirectFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)shouldRecomputeDerivedVisitCountScores;
-(id)initWithSQLiteRow:(id)arg1 ;
-(NSDate *)lastVisitedDate;
-(NSString *)urlString;
-(NSArray *)visits;
-(unsigned long long)visitCount;
-(WBSHistoryVisit *)lastVisit;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSURL *)url;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)lastVisitWasFailure;
@end

