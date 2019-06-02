/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol PCGrowthAlgorithm <NSObject>
@property (nonatomic,readonly) double currentKeepAliveInterval; 
@property (assign,nonatomic) BOOL isServerOriginatedKeepAlive; 
@property (assign,nonatomic) double minimumKeepAliveInterval; 
@property (assign,nonatomic) double maximumKeepAliveInterval; 
@property (assign,nonatomic) double lastSuccessfulKeepAliveInterval; 
@property (assign,nonatomic) BOOL minimumIntervalFallbackEnabled; 
@property (nonatomic,readonly) unsigned long long countOfGrowthActions; 
@property (nonatomic,copy,readonly) NSDictionary * cacheInfo; 
@property (nonatomic,readonly) int growthStage; 
@required
-(double)minimumKeepAliveInterval;
-(double)maximumKeepAliveInterval;
-(void)processNextAction:(int)arg1;
-(id)initWithCacheInfo:(id)arg1 loggingIdentifier:(id)arg2 algorithmName:(id)arg3;
-(BOOL)useIntervalIfImprovement:(double)arg1;
-(BOOL)isServerOriginatedKeepAlive;
-(void)setIsServerOriginatedKeepAlive:(BOOL)arg1;
-(double)lastSuccessfulKeepAliveInterval;
-(void)setLastSuccessfulKeepAliveInterval:(double)arg1;
-(BOOL)minimumIntervalFallbackEnabled;
-(void)setMinimumIntervalFallbackEnabled:(BOOL)arg1;
-(unsigned long long)countOfGrowthActions;
-(NSDictionary *)cacheInfo;
-(int)growthStage;
-(void)setMinimumKeepAliveInterval:(double)arg1;
-(void)setMaximumKeepAliveInterval:(double)arg1;
-(double)currentKeepAliveInterval;

@end

