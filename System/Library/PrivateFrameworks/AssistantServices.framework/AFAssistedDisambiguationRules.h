/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AFAssistedDisambiguationRules : NSObject

@property (nonatomic,readonly) unsigned long long decisionDepth; 
@property (nonatomic,readonly) double decisionAge; 
@property (nonatomic,readonly) double decisionThreshold; 
@property (nonatomic,readonly) unsigned long long maxPersistenceDepth; 
@property (nonatomic,readonly) double maxPersistenceAge; 
+(id)defaultRules;
-(unsigned long long)decisionDepth;
-(double)decisionAge;
-(double)decisionThreshold;
-(double)weightForEvent:(id)arg1 ;
-(unsigned long long)maxPersistenceDepth;
-(double)maxPersistenceAge;
@end

