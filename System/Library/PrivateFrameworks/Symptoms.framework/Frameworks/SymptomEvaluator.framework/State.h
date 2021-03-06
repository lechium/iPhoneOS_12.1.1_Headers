/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, StopWatch, AWDSymptomsAdvisoryAlternateNetworkType, NSMutableArray;

@interface State : NSObject {

	int _loopTokens;
	NSString* _label;
	unsigned long long _rank;
	NSDictionary* _entryCellPreds;
	NSDictionary* _entryWiFiPreds;
	StopWatch* _sojournTime;
	/*^block*/id _entryAction;
	/*^block*/id _loopEvaluation;
	/*^block*/id _exitAction;
	State* _previousState;
	AWDSymptomsAdvisoryAlternateNetworkType* _awdMetric;
	NSMutableArray* _digest;

}

@property (readonly) NSString * label;                                               //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long rank;                                        //@synthesize rank=_rank - In the implementation block
@property (readonly) NSDictionary * entryCellPreds;                                  //@synthesize entryCellPreds=_entryCellPreds - In the implementation block
@property (readonly) NSDictionary * entryWiFiPreds;                                  //@synthesize entryWiFiPreds=_entryWiFiPreds - In the implementation block
@property (readonly) StopWatch * sojournTime;                                        //@synthesize sojournTime=_sojournTime - In the implementation block
@property (nonatomic,copy) id entryAction;                                           //@synthesize entryAction=_entryAction - In the implementation block
@property (nonatomic,copy) id loopEvaluation;                                        //@synthesize loopEvaluation=_loopEvaluation - In the implementation block
@property (nonatomic,copy) id exitAction;                                            //@synthesize exitAction=_exitAction - In the implementation block
@property (assign) int loopTokens;                                                   //@synthesize loopTokens=_loopTokens - In the implementation block
@property (retain) State * previousState;                                            //@synthesize previousState=_previousState - In the implementation block
@property (retain) AWDSymptomsAdvisoryAlternateNetworkType * awdMetric;              //@synthesize awdMetric=_awdMetric - In the implementation block
@property (readonly) NSMutableArray * digest;                                        //@synthesize digest=_digest - In the implementation block
+(id)createStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryCellPreds:(id)arg3 entryWiFiPreds:(id)arg4 ;
+(id)createAndInitializeAWDMetricForStateWithLevel:(int)arg1 andSignature:(id)arg2 ;
-(unsigned long long)rank;
-(NSMutableArray *)digest;
-(StopWatch *)sojournTime;
-(State *)previousState;
-(void)setEntryAction:(id)arg1 ;
-(void)setExitAction:(id)arg1 ;
-(id)entryAction;
-(id)exitAction;
-(void)setPreviousState:(State *)arg1 ;
-(AWDSymptomsAdvisoryAlternateNetworkType *)awdMetric;
-(void)setAwdMetric:(AWDSymptomsAdvisoryAlternateNetworkType *)arg1 ;
-(id)_initStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryCellPreds:(id)arg3 entryWiFiPreds:(id)arg4 ;
-(NSDictionary *)entryCellPreds;
-(NSDictionary *)entryWiFiPreds;
-(id)loopEvaluation;
-(void)setLoopEvaluation:(id)arg1 ;
-(int)loopTokens;
-(void)setLoopTokens:(int)arg1 ;
-(void)dealloc;
-(NSString *)label;
@end

