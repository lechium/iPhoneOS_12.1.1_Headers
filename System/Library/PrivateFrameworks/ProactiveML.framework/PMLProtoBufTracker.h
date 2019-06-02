/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/PMLLogRegTrackerProtocol.h>
#import <libobjc.A.dylib/PMLLinRegTrackerProtocol.h>
#import <libobjc.A.dylib/PMLEvaluationTrackerProtocol.h>
#import <libobjc.A.dylib/PMLMultiLabelEvaluationTrackerProtocol.h>

@protocol PMLTrackerAdapterProtocol;
@class AWDProactiveModelFittingModelInfo, NSString;

@interface PMLProtoBufTracker : NSObject <PMLLogRegTrackerProtocol, PMLLinRegTrackerProtocol, PMLEvaluationTrackerProtocol, PMLMultiLabelEvaluationTrackerProtocol> {

	AWDProactiveModelFittingModelInfo* _modelInfo;
	unsigned long long _quantizationNumberOfBuckets;
	id<PMLTrackerAdapterProtocol> _adapter;

}

@property (readonly) id<PMLTrackerAdapterProtocol> adapter;              //@synthesize adapter=_adapter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageForWeights:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 modelInfo:(id)arg5 numberOfBuckets:(unsigned long long)arg6 ;
+(id)messageForGradient:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 serverIteration:(unsigned long long)arg5 modelInfo:(id)arg6 numberOfBuckets:(unsigned long long)arg7 ;
+(id)trackerForPlanId:(NSString*)arg1 ;
+(id)awdTrackerForPlanId:(NSString*)arg1 ;
+(id)parsecTrackerForPlanId:(NSString*)arg1 ;
-(id<PMLTrackerAdapterProtocol>)adapter;
-(void)trackObjectiveFeatures:(id)arg1 featureMatrix:(id)arg2 minibatchSize:(unsigned long long)arg3 support:(float)arg4 ;
-(id)trackWeights:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 ;
-(id)trackGradient:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 serverIteration:(unsigned long long)arg5 ;
-(id)trackEvaluationMetrics:(id)arg1 minibatchStats:(id)arg2 ;
-(id)initWithAdapter:(id)arg1 modelInfo:(id)arg2 ;
-(id)initWithAdapter:(id)arg1 modelInfo:(id)arg2 quantizationBuckets:(unsigned long long)arg3 ;
-(id)trackPrecisionAtK:(id)arg1 minibatchStats:(id)arg2 ;
-(id)trackPrecisionAtK:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)init;
@end

