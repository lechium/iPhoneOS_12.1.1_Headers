/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PPConnectionsSource.h>
#import <libobjc.A.dylib/PPConnectionsLocationSource.h>

@class PPLocalEventStore, NSString;

@interface PPConnectionsCalendarSource : PPConnectionsSource <PPConnectionsLocationSource> {

	PPLocalEventStore* _localEventStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)locationNameFromEKEvent:(id)arg1 ;
+(id)locationValueFromEKEvent:(id)arg1 ;
+(id)locationLabelFromEKEvent:(id)arg1 ;
+(id)identifier;
+(id)sharedInstance;
-(id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6 ;
-(id)upcomingCalendarEventsOfInterestFrom:(id)arg1 lookaheadTime:(double)arg2 ;
-(id)ekEventWithExternalID:(id)arg1 ;
-(BOOL)isCalendarEventEligibleForLocationPrediction:(id)arg1 ;
-(id)init;
@end
