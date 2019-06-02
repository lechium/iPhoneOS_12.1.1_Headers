/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartCacheDataSource.h>

@class HKHealthStore, HKDisplayType, NSString;

@interface HKHealthQueryChartCacheDataSource : NSObject <HKChartCacheDataSource> {

	HKHealthStore* _healthStore;
	HKDisplayType* _displayType;

}

@property (nonatomic,readonly) HKDisplayType * displayType;              //@synthesize displayType=_displayType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)operationForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(/*^block*/id)mappingFunctionForContext:(id)arg1 ;
-(id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 ;
-(HKDisplayType *)displayType;
@end

