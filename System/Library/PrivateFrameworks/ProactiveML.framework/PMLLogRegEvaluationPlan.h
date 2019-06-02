/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/PMLPlanProtocol.h>

@protocol PMLEvaluationTrackerProtocol;
@class PMLTrainingStore, PMLSessionDescriptor, PMLModelWeights, NSString;

@interface PMLLogRegEvaluationPlan : NSObject <PMLPlanProtocol> {

	PMLTrainingStore* _store;
	id<PMLEvaluationTrackerProtocol> _tracker;
	PMLSessionDescriptor* _sessionDescriptor;
	unsigned long long _maxSessionsLimit;
	unsigned long long _sessionsInBatch;
	PMLModelWeights* _currentModelWeights;
	BOOL _intercept;
	double _skew;
	BOOL _isMultiLabel;
	unsigned long long _positiveLabel;
	double _threshold;
	unsigned long long _evaluationLevel;
	BOOL _isSynchronous;
	NSString* _planId;

}

@property (nonatomic,readonly) PMLTrainingStore * store;                              //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) id<PMLEvaluationTrackerProtocol> tracker;              //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,readonly) PMLSessionDescriptor * sessionDescriptor;              //@synthesize sessionDescriptor=_sessionDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long maxSessionsLimit;                   //@synthesize maxSessionsLimit=_maxSessionsLimit - In the implementation block
@property (nonatomic,readonly) PMLModelWeights * currentModelWeights;                 //@synthesize currentModelWeights=_currentModelWeights - In the implementation block
@property (nonatomic,readonly) NSString * planId;                                     //@synthesize planId=_planId - In the implementation block
@property (nonatomic,readonly) BOOL isSynchronous;                                    //@synthesize isSynchronous=_isSynchronous - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PMLTrainingStore *)store;
-(BOOL)isSynchronous;
-(NSString *)planId;
-(id)runWhile:(/*^block*/id)arg1 didFinish:(BOOL*)arg2 ;
-(void)loadSessionsWithBlock:(/*^block*/id)arg1 ;
-(id)normalizeRegressor:(id)arg1 ;
-(void)runUntilDoneForTesting;
-(unsigned long long)maxSessionsLimit;
-(id)initWithStore:(id)arg1 tracker:(id)arg2 planId:(NSString*)arg3 isSynchronous:(BOOL)arg4 sessionDescriptor:(id)arg5 maxSessionsLimit:(unsigned long long)arg6 sessionsInBatch:(unsigned long long)arg7 currentModelWeights:(id)arg8 intercept:(BOOL)arg9 skew:(double)arg10 threshold:(double)arg11 isMultiLabel:(BOOL)arg12 positiveLabel:(unsigned long long)arg13 evaluationLevel:(unsigned long long)arg14 ;
-(PMLModelWeights *)currentModelWeights;
-(PMLSessionDescriptor *)sessionDescriptor;
-(id<PMLEvaluationTrackerProtocol>)tracker;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)init;
-(NSString *)description;
-(id)run;
@end

