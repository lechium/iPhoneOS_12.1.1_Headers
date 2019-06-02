/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SFAnalyticsSQLiteStore, NSObject, NSMutableDictionary;

@interface SFAnalytics : NSObject {

	SFAnalyticsSQLiteStore* _database;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _samplers;
	NSMutableDictionary* _multisamplers;
	unsigned _disableLogging : 1;

}

@property (nonatomic,retain) SFAnalyticsSQLiteStore * database;               //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(void)addOSVersionToEvent:(id)arg1 ;
+(id)defaultAnalyticsDatabasePath:(id)arg1 ;
+(long long)fuzzyDaysSinceDate:(id)arg1 ;
+(id)databasePath;
+(id)logger;
-(void)removeState;
-(void)logSuccessForEventNamed:(id)arg1 ;
-(void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2 ;
-(void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2 ;
-(void)logResultForEvent:(id)arg1 hardFailure:(BOOL)arg2 result:(id)arg3 ;
-(void)logResultForEvent:(id)arg1 hardFailure:(BOOL)arg2 result:(id)arg3 withAttributes:(id)arg4 ;
-(void)noteEventNamed:(id)arg1 ;
-(void)logEventNamed:(id)arg1 class:(long long)arg2 attributes:(id)arg3 ;
-(id)eventDictForEventName:(id)arg1 withAttributes:(id)arg2 eventClass:(long long)arg3 ;
-(id)addMetricSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(/*^block*/id)arg3 ;
-(id)AddMultiSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(/*^block*/id)arg3 ;
-(id)existingMetricSamplerForName:(id)arg1 ;
-(id)existingMultiSamplerForName:(id)arg1 ;
-(void)removeMetricSamplerForName:(id)arg1 ;
-(void)removeMultiSamplerForName:(id)arg1 ;
-(id)logSystemMetricsForActivityNamed:(id)arg1 withAction:(/*^block*/id)arg2 ;
-(void)logMetric:(id)arg1 withName:(id)arg2 ;
-(void)logMetric:(id)arg1 withName:(id)arg2 oncePerReport:(BOOL)arg3 ;
-(SFAnalyticsSQLiteStore *)database;
-(void)setDatabase:(SFAnalyticsSQLiteStore *)arg1 ;
-(id)datePropertyForKey:(id)arg1 ;
-(void)setDateProperty:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

