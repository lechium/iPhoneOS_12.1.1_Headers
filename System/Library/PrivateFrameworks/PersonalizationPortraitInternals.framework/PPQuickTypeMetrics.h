/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PETScalarEventTracker, PETDistributionEventTracker, PETGoalConversionEventTracker;

@interface PPQuickTypeMetrics : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	PETScalarEventTracker* _frameworkErrors;
	PETDistributionEventTracker* _quickTypeLatency;
	PETDistributionEventTracker* _initializationLatency;
	PETGoalConversionEventTracker* _peopleSuggesterGoal;
	PETGoalConversionEventTracker* _discoverySuggesterGoal;
	PETGoalConversionEventTracker* _autocompleteGoal;
	PETDistributionEventTracker* _contactsMatches;
	PETDistributionEventTracker* _foundInAppsMatches;
	PETDistributionEventTracker* _eventsMatches;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) PETScalarEventTracker * frameworkErrors;                             //@synthesize frameworkErrors=_frameworkErrors - In the implementation block
@property (nonatomic,retain) PETDistributionEventTracker * quickTypeLatency;                      //@synthesize quickTypeLatency=_quickTypeLatency - In the implementation block
@property (nonatomic,retain) PETDistributionEventTracker * initializationLatency;                 //@synthesize initializationLatency=_initializationLatency - In the implementation block
@property (nonatomic,retain) PETGoalConversionEventTracker * peopleSuggesterGoal;                 //@synthesize peopleSuggesterGoal=_peopleSuggesterGoal - In the implementation block
@property (nonatomic,retain) PETGoalConversionEventTracker * discoverySuggesterGoal;              //@synthesize discoverySuggesterGoal=_discoverySuggesterGoal - In the implementation block
@property (nonatomic,retain) PETGoalConversionEventTracker * autocompleteGoal;                    //@synthesize autocompleteGoal=_autocompleteGoal - In the implementation block
@property (nonatomic,retain) PETDistributionEventTracker * contactsMatches;                       //@synthesize contactsMatches=_contactsMatches - In the implementation block
@property (nonatomic,retain) PETDistributionEventTracker * foundInAppsMatches;                    //@synthesize foundInAppsMatches=_foundInAppsMatches - In the implementation block
@property (nonatomic,retain) PETDistributionEventTracker * eventsMatches;                         //@synthesize eventsMatches=_eventsMatches - In the implementation block
+(id)instance;
+(id)trackerForGoal:(id)arg1 withProperties:(id)arg2 ;
+(id)trackerForDistribution:(id)arg1 withProperties:(id)arg2 ;
+(id)counter:(id)arg1 withProperties:(id)arg2 ;
+(void)frameworkError:(id)arg1 errorCode:(long long)arg2 ;
+(void)quickTypeMetricsWithLatency:(unsigned long long)arg1 servant:(id)arg2 hasResults:(BOOL)arg3 ;
+(void)initializationLatency:(unsigned long long)arg1 servant:(id)arg2 ;
+(void)peopleSuggesterGoalConverted:(BOOL)arg1 queryType:(id)arg2 ;
+(void)discoverySuggesterGoalConverted:(BOOL)arg1 queryType:(id)arg2 ;
+(void)autocompleteGoalConverted:(BOOL)arg1 queryType:(id)arg2 ;
+(void)contactMatchesWithContactsCount:(unsigned long long)arg1 foundInAppsCount:(unsigned long long)arg2 ;
+(void)eventsMatches:(unsigned long long)arg1 ;
-(PETScalarEventTracker *)frameworkErrors;
-(void)setFrameworkErrors:(PETScalarEventTracker *)arg1 ;
-(PETDistributionEventTracker *)quickTypeLatency;
-(void)setQuickTypeLatency:(PETDistributionEventTracker *)arg1 ;
-(PETDistributionEventTracker *)initializationLatency;
-(void)setInitializationLatency:(PETDistributionEventTracker *)arg1 ;
-(PETGoalConversionEventTracker *)peopleSuggesterGoal;
-(void)setPeopleSuggesterGoal:(PETGoalConversionEventTracker *)arg1 ;
-(PETGoalConversionEventTracker *)discoverySuggesterGoal;
-(void)setDiscoverySuggesterGoal:(PETGoalConversionEventTracker *)arg1 ;
-(PETGoalConversionEventTracker *)autocompleteGoal;
-(void)setAutocompleteGoal:(PETGoalConversionEventTracker *)arg1 ;
-(PETDistributionEventTracker *)contactsMatches;
-(void)setContactsMatches:(PETDistributionEventTracker *)arg1 ;
-(PETDistributionEventTracker *)foundInAppsMatches;
-(void)setFoundInAppsMatches:(PETDistributionEventTracker *)arg1 ;
-(PETDistributionEventTracker *)eventsMatches;
-(void)setEventsMatches:(PETDistributionEventTracker *)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

