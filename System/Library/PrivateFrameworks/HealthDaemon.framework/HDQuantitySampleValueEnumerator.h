/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HDQuantitySampleValueEnumerator : NSObject
+(BOOL)orderedQuantityValuesForPredicate:(id)arg1 transaction:(id)arg2 expandSeries:(BOOL)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
+(id)_queryForEnumerationWithPredicate:(id)arg1 transaction:(id)arg2 orderByUUID:(BOOL)arg3 ;
+(id)_propertiesForEnumeration;
+(BOOL)orderedQuantityValuesForPredicate:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
+(long long)_enumerateWithEnumerator:(id)arg1 endTime:(double)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
+(BOOL)orderedQuantityValuesForPredicate:(id)arg1 profile:(id)arg2 expandSeries:(BOOL)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
+(BOOL)orderedQuantityValuesForPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
@end
