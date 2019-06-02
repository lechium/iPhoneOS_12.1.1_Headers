/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDProfile;

@interface HDActivitySummaryBuilder : NSObject {

	HDProfile* _profile;
	BOOL _shouldIncludePrivateProperties;
	BOOL _shouldIncludeStatistics;

}

@property (assign,nonatomic) BOOL shouldIncludePrivateProperties;              //@synthesize shouldIncludePrivateProperties=_shouldIncludePrivateProperties - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeStatistics;                     //@synthesize shouldIncludeStatistics=_shouldIncludeStatistics - In the implementation block
-(id)initWithProfile:(id)arg1 ;
-(BOOL)_enumerateActivitySummariesAndCachesWithPredicate:(id)arg1 largestAnchor:(long long*)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)enumerateActivitySummariesWithPredicate:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(id)activitySummariesWithPredicate:(id)arg1 error:(id*)arg2 ;
-(void)activitySummariesWithPredicate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)shouldIncludePrivateProperties;
-(void)setShouldIncludePrivateProperties:(BOOL)arg1 ;
-(BOOL)shouldIncludeStatistics;
-(void)setShouldIncludeStatistics:(BOOL)arg1 ;
-(id)init;
@end
