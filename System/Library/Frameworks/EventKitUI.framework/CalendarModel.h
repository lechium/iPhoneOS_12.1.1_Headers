/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CalendarEventLoaderDelegate.h>

@protocol OccurrenceCacheDataSourceProtocol;
@class EKEventStore, CalendarEventLoader, NSLock, NSArray, _EKNotificationMonitor, NSSet, NSString, NSCalendar, EKCalendarDate, EKEvent;

@interface CalendarModel : NSObject <CalendarEventLoaderDelegate> {

	EKEventStore* _eventStore;
	CalendarEventLoader* _eventLoader;
	NSLock* _filterLock;
	NSArray* _visibleCalendars;
	long long _readWriteCalendarCount;
	long long _invitationBearingStoresExist;
	_EKNotificationMonitor* _notificationMonitor;
	id<OccurrenceCacheDataSourceProtocol> _occurrenceCacheDataSource;
	id<OccurrenceCacheDataSourceProtocol> _occurrenceCacheFilteredDataSource;
	long long _cachedFakeTodayIndex;
	long long _displayableAccountErrorsCount;
	BOOL _autoStartNotificationMonitor;
	NSSet* _selectedCalendars;
	NSString* _searchString;
	NSCalendar* _calendar;
	EKCalendarDate* _selectedDate;
	unsigned long long _firstVisibleSecond;
	EKEvent* _selectedOccurrence;

}

@property (nonatomic,readonly) EKEventStore * eventStore;                            //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                    //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy) EKCalendarDate * selectedDate;                            //@synthesize selectedDate=_selectedDate - In the implementation block
@property (nonatomic,readonly) EKCalendarDate * selectedDay; 
@property (nonatomic,readonly) long long visibleCalendarCount; 
@property (nonatomic,readonly) long long readWriteCalendarCount; 
@property (nonatomic,readonly) long long displayableAccountErrorsCount; 
@property (assign,nonatomic) unsigned long long firstVisibleSecond;                  //@synthesize firstVisibleSecond=_firstVisibleSecond - In the implementation block
@property (nonatomic,retain) EKEvent * selectedOccurrence;                           //@synthesize selectedOccurrence=_selectedOccurrence - In the implementation block
@property (nonatomic,retain) NSSet * selectedCalendars;                              //@synthesize selectedCalendars=_selectedCalendars - In the implementation block
@property (nonatomic,retain) NSString * searchString;                                //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) BOOL autoStartNotificationMonitor;                      //@synthesize autoStartNotificationMonitor=_autoStartNotificationMonitor - In the implementation block
@property (assign,nonatomic) BOOL allowEventLocationPrediction; 
+(id)calendarModelWithDataPath:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(void)_significantTimeChange:(id)arg1 ;
-(EKEventStore *)eventStore;
-(BOOL)cachedOccurrencesAreLoaded;
-(BOOL)cachedOccurrencesAreBeingGenerated;
-(id)cachedOccurrenceAtIndexPath:(id)arg1 ;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1 ;
-(id)defaultCalendarForNewEvents;
-(void)_eventStoreChanged:(id)arg1 ;
-(BOOL)allowEventLocationPrediction;
-(void)calendarEventLoader:(id)arg1 occurrencesDidUpdateBetweenStart:(double)arg2 end:(double)arg3 wasEmptyLoad:(BOOL)arg4 ;
-(void)setAllowEventLocationPrediction:(BOOL)arg1 ;
-(void)addOccurrenceAwaitingRefresh:(id)arg1 ;
-(void)addOccurrenceAwaitingDeletion:(id)arg1 ;
-(void)setComponentForExpandingRequests:(unsigned long long)arg1 ;
-(void)setComponentForExpandingPadding:(unsigned long long)arg1 ;
-(void)setPreferredReloadStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)setSelectedCalendars:(NSSet *)arg1 ;
-(id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 preSorted:(BOOL)arg3 waitForLoad:(BOOL)arg4 ;
-(void)setFirstVisibleSecond:(unsigned long long)arg1 ;
-(unsigned long long)firstVisibleSecond;
-(id)refreshAccountListIfNeeded:(BOOL)arg1 ;
-(id)refreshCalendarDataIfNeeded:(BOOL)arg1 ;
-(NSSet *)selectedCalendars;
-(id)initWithDataPath:(id)arg1 ;
-(void)_createOccurrenceCacheDataSources;
-(void)_tzSupportTodayRolledOver;
-(void)_searchResultsAvailable:(id)arg1 ;
-(void)_invalidateOccurrenceCacheDataSources;
-(EKEvent *)selectedOccurrence;
-(void)setSelectedOccurrence:(EKEvent *)arg1 ;
-(void)_recreateOccurrenceCacheDataSources;
-(void)_processReloadForCacheOnly:(BOOL)arg1 includingCalendars:(BOOL)arg2 checkCalendarsValid:(BOOL)arg3 checkSources:(BOOL)arg4 ;
-(long long)visibleCalendarCount;
-(id)occurrencesForDay:(id)arg1 waitForLoad:(BOOL)arg2 ;
-(long long)numberOfDaysWithCachedOccurrencesUsingFilter:(BOOL)arg1 ;
-(id)_dataSourceUsingFilter:(BOOL)arg1 ;
-(id)dateForCachedOccurrencesInSection:(long long)arg1 ;
-(long long)numberOfCachedOccurrencesInSection:(long long)arg1 usingFilter:(BOOL)arg2 ;
-(id)dateForCachedOccurrencesInSection:(long long)arg1 usingFilter:(BOOL)arg2 ;
-(id)cachedOccurrenceAtIndexPath:(id)arg1 usingFilter:(BOOL)arg2 ;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(BOOL*)arg2 usingFilter:(BOOL)arg3 ;
-(long long)cachedFakeTodayIndex;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(BOOL*)arg2 ;
-(void)fetchCachedDaysInBackgroundStartingFromSection:(long long)arg1 usingFilter:(BOOL)arg2 ;
-(void)_invalidateCachedOccurrences;
-(long long)countSourcesWithErrors;
-(void)_finishedFirstLoad;
-(void)startNotificationMonitor;
-(id)_notificationMonitor;
-(void)_reloadIfTodayDetermined;
-(void)_notificationsExpired:(id)arg1 ;
-(void)_notificationCountExpired:(id)arg1 ;
-(id)eventNotificationReferences;
-(BOOL)selectedOccurrenceIsSearchMatch;
-(long long)readWriteCalendarCount;
-(void)ensureCalendarVisibleWithId:(id)arg1 ;
-(BOOL)isCalendarVisibleWithID:(id)arg1 ;
-(void)setSelectedDate:(EKCalendarDate *)arg1 ;
-(EKCalendarDate *)selectedDay;
-(void)updateSelectedDateTimeZone;
-(id)occurrencesForStartDay:(id)arg1 endDay:(id)arg2 preSorted:(BOOL)arg3 waitForLoad:(BOOL)arg4 ;
-(id)selectedDateOccurrences:(BOOL)arg1 loadIsComplete:(BOOL*)arg2 ;
-(id)closestOccurrenceToTomorrowForEventUID:(int)arg1 ;
-(void)setDesiredPaddingDays:(unsigned)arg1 ;
-(void)setMaxCachedDays:(unsigned)arg1 ;
-(long long)numberOfDaysWithCachedOccurrences;
-(long long)numberOfCachedOccurrencesInSection:(long long)arg1 ;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1 usingFilter:(BOOL)arg2 ;
-(void)fetchCachedDaysInBackgroundStartingFromSection:(long long)arg1 ;
-(long long)displayableAccountErrorsCount;
-(void)simulateFirstLoadFinished;
-(void)_occurrenceCacheChanged;
-(void)updateAfterAppResume;
-(void)prepareForAppSuspend;
-(void)_systemWake;
-(BOOL)removeEvent:(id)arg1 withSpan:(long long)arg2 error:(id*)arg3 ;
-(BOOL)invitationBearingStoresExistForEvents;
-(unsigned long long)eventNotificationsCount;
-(BOOL)searchingOccurrences;
-(EKCalendarDate *)selectedDate;
-(BOOL)autoStartNotificationMonitor;
-(void)setAutoStartNotificationMonitor:(BOOL)arg1 ;
-(void)_timeZoneChanged:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)searchString;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(double)_tomorrow;
-(void)setSearchString:(NSString *)arg1 ;
@end
