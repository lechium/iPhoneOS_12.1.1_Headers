/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PPConnectionsSource.h>
#import <libobjc.A.dylib/PPConnectionsLocationSource.h>

@class NSString;

@interface PPConnectionsDuetSource : PPConnectionsSource <PPConnectionsLocationSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)duetUserActivitiesFromStreams:(id)arg1 limit:(unsigned long long)arg2 afterDate:(id)arg3 explanationSet:(id)arg4 ;
+(id)identifier;
+(id)sharedInstance;
-(id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6 ;
-(id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 duetLimit:(long long)arg5 consumer:(unsigned long long)arg6 richLocationItems:(BOOL)arg7 resolveEKLocations:(BOOL)arg8 explanationSet:(id)arg9 ;
-(id)supportedLocationFields;
-(BOOL)isEligibleForPredictions:(id)arg1 ;
-(BOOL)isDuetEventAuthorized:(id)arg1 bundleID:(id)arg2 ;
-(id)duetLocationUserActivitiesWithLimit:(unsigned long long)arg1 explanationSet:(id)arg2 ;
-(id)duetLocationUserActivitiesWithLimit:(unsigned long long)arg1 afterDate:(id)arg2 explanationSet:(id)arg3 ;
-(id)whitespaceAndNewlineCharacterSet;
@end
