/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSUProgressStage, NSDate;

@interface TSUProgressContext : NSObject {

	TSUProgressStage* m_currentStage;
	NSDate* m_lastReportTime;
	double m_lastProgressReport;
	double m_lastOverallProgress;

}
-(double)currentPosition;
-(void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 ;
-(id)currentStage;
-(void)advanceProgress:(double)arg1 ;
-(id)addProgressObserverBlock:(/*^block*/id)arg1 ;
-(void)createStageWithSteps:(double)arg1 ;
-(void)nextSubStageWillTakeThisManyOfMySteps:(double)arg1 ;
-(void)endStage;
-(void)setPercentageProgressFromTCProgressContext:(double)arg1 ;
-(void)reportProgress:(double)arg1 overallProgress:(double)arg2 ;
-(double)overallProgress;
-(void)addProgressObserver:(id)arg1 selector:(SEL)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setMessage:(id)arg1 ;
-(void)reset;
-(void)setProgress:(double)arg1 ;
-(void)removeProgressObserver:(id)arg1 ;
@end

