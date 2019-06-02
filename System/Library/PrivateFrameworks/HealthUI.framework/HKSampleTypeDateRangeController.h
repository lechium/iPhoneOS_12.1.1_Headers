/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthUI/HealthUI-Structs.h>
@class HKHealthStore, _HKDateRangeQuery, NSHashTable, NSDictionary;

@interface HKSampleTypeDateRangeController : NSObject {

	HKHealthStore* _healthStore;
	_HKDateRangeQuery* _dateRangeQuery;
	NSHashTable* _observers;
	NSDictionary* _dateRangesBySampleType;

}

@property (nonatomic,readonly) NSDictionary * dateRangesBySampleType;              //@synthesize dateRangesBySampleType=_dateRangesBySampleType - In the implementation block
-(void)_beginUpdatesWithRetryAttemptCount:(long long)arg1 ;
-(void)_alertObserverDidUpdateDateRanges:(id)arg1 ;
-(void)_resultsDidUpdate:(NSDictionary*)arg1 ;
-(void)_updateHandlerDidReceiveError:(id)arg1 retryCount:(long long)arg2 ;
-(void)_alertObserversDidUpdateDateRanges;
-(id)dateRangeForSampleType:(id)arg1 ;
-(NSDictionary *)dateRangesBySampleType;
-(id)initWithHealthStore:(id)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end

