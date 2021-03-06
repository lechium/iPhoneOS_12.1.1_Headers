/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFPipeline;

@interface PFPipelineJobInfo : NSObject {

	PFPipeline* _pipeline;
	unsigned _qos;
	id _job;
	unsigned long long _startTime;
	unsigned long long _endTime;
	unsigned long long _currentStage;

}

@property (retain) id job;                                       //@synthesize job=_job - In the implementation block
@property (assign) unsigned qos;                                 //@synthesize qos=_qos - In the implementation block
@property (assign) unsigned long long currentStage;              //@synthesize currentStage=_currentStage - In the implementation block
@property (readonly) PFPipeline * pipeline;                      //@synthesize pipeline=_pipeline - In the implementation block
-(void)setQos:(unsigned)arg1 ;
-(unsigned)qos;
-(unsigned long long)executionTime;
-(PFPipeline *)pipeline;
-(void)setJob:(id)arg1 ;
-(id)job;
-(unsigned long long)currentStage;
-(id)initWithPipeline:(id)arg1 ;
-(void)setCurrentStage:(unsigned long long)arg1 ;
-(void)start;
-(void)end;
@end

