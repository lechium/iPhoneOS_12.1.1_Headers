/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXResponse, NSArray, NSError;

@interface APRAppPredictions : NSObject {

	ATXResponse* _atxResponse;
	NSArray* _scoredBundleIds;
	unsigned long long _experience;
	NSError* _error;

}

@property (nonatomic,readonly) ATXResponse * atxResponse;                //@synthesize atxResponse=_atxResponse - In the implementation block
@property (nonatomic,readonly) NSArray * scoredBundleIds;                //@synthesize scoredBundleIds=_scoredBundleIds - In the implementation block
@property (assign,nonatomic) unsigned long long experience;              //@synthesize experience=_experience - In the implementation block
@property (nonatomic,readonly) NSError * error;                          //@synthesize error=_error - In the implementation block
+(unsigned long long)_experienceForPredictions:(id)arg1 intentType:(id)arg2 ;
-(id)initWithScoredBundleIds:(id)arg1 experience:(unsigned long long)arg2 error:(id)arg3 ;
-(id)initWithIntent:(id)arg1 candidateBundleIdentifiers:(id)arg2 limit:(int)arg3 ;
-(ATXResponse *)atxResponse;
-(NSArray *)scoredBundleIds;
-(unsigned long long)experience;
-(void)setExperience:(unsigned long long)arg1 ;
-(id)init;
-(NSError *)error;
@end

