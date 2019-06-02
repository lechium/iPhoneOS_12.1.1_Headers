/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PMLClassificationEvaluationMetrics : NSObject
+(float)precision:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(float)recall:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(float)roundFloatToSigFigs:(float)arg1 sigFigs:(int)arg2 ;
+(float)f1Score:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(unsigned long long)truePositives:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(unsigned long long)falsePositives:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(unsigned long long)trueNegatives:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(unsigned long long)falseNegatives:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(void)addScoresForOutcomes:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 metrics:(id)arg4 ;
@end
