/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PDAnimateTimeBehavior, PDAnimateEffectBehavior, PDAnimateMotionBehavior, PDAnimateRotateBehavior, PDAnimateScaleBehavior, PDAnimateColorBehavior, PDAudioNode, PDVideoNode, PDParallelTimeNode, PDSequentialTimeNode, PDSetBehavior, PDCmdBehavior;

@interface PDTimeNodeUnion : NSObject {

	PDAnimateTimeBehavior* mTimeBehavior;
	PDAnimateEffectBehavior* mEffectBehavior;
	PDAnimateMotionBehavior* mMotionBehavior;
	PDAnimateRotateBehavior* mRotateBehavior;
	PDAnimateScaleBehavior* mScaleBehavior;
	PDAnimateColorBehavior* mColorBehavior;
	PDAudioNode* mAudio;
	PDVideoNode* mVideo;
	PDParallelTimeNode* mParallelTimeNodeGroup;
	PDSequentialTimeNode* mSequentialTimeNodeGroup;
	PDSetBehavior* mSetBehavior;
	PDCmdBehavior* mCmdBehavior;

}
-(id)video;
-(void)setVideo:(id)arg1 ;
-(id)audio;
-(id)commonBehavior;
-(id)timeBehavior;
-(void)setTimeBehavior:(id)arg1 ;
-(id)effectBehavior;
-(void)setEffectBehavior:(id)arg1 ;
-(id)motionBehavior;
-(void)setMotionBehavior:(id)arg1 ;
-(id)rotateBehavior;
-(void)setRotateBehavior:(id)arg1 ;
-(id)scaleBehavior;
-(void)setScaleBehavior:(id)arg1 ;
-(id)colorBehavior;
-(void)setColorBehavior:(id)arg1 ;
-(void)setAudio:(id)arg1 ;
-(id)parallel;
-(void)setParallel:(id)arg1 ;
-(id)sequential;
-(void)setSequential:(id)arg1 ;
-(id)cmdBehavior;
-(void)setCmdBehavior:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setBehavior:(id)arg1 ;
-(id)behavior;
@end

