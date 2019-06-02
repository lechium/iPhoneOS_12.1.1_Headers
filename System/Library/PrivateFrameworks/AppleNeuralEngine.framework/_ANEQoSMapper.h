/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _ANEQoSMapper : NSObject
+(unsigned)aneRealTimeTaskQoS;
+(unsigned)aneUserInteractiveTaskQoS;
+(unsigned)aneUserInitiatedTaskQoS;
+(unsigned)aneDefaultTaskQoS;
+(unsigned)aneUtilityTaskQoS;
+(unsigned)aneBackgroundTaskQoS;
+(unsigned long long)queueIndexForQoS:(unsigned)arg1 ;
+(unsigned long long)realTimeQueueIndex;
+(int)programPriorityForQoS:(unsigned)arg1 ;
+(int)realTimeProgramPriority;
@end

