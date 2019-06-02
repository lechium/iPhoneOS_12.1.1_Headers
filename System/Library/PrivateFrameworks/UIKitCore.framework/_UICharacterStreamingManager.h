/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITextView, CADisplayLink, NSString, NSMutableArray;

@interface _UICharacterStreamingManager : NSObject {

	UITextView* _textView;
	CADisplayLink* _streamingAnimationDisplayLink;
	BOOL _streamingAnimationActive;
	double _lastAnimationUpdateTimeStamp;
	BOOL _committingFinalResults;
	BOOL _discardNextHypothesis;
	NSString* _previousHypothesis;
	NSString* _lastHypothesis;
	NSString* _targetHypothesis;
	NSMutableArray* _pendingEdits;
	double _streamingCharacterInsertionRate;
	double _minDurationBetweenHypotheses;

}

@property (nonatomic,copy) NSString * previousHypothesis;                         //@synthesize previousHypothesis=_previousHypothesis - In the implementation block
@property (nonatomic,copy) NSString * lastHypothesis;                             //@synthesize lastHypothesis=_lastHypothesis - In the implementation block
@property (nonatomic,copy) NSString * targetHypothesis;                           //@synthesize targetHypothesis=_targetHypothesis - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingEdits;                       //@synthesize pendingEdits=_pendingEdits - In the implementation block
@property (assign,nonatomic) double streamingCharacterInsertionRate;              //@synthesize streamingCharacterInsertionRate=_streamingCharacterInsertionRate - In the implementation block
@property (assign,nonatomic) double minDurationBetweenHypotheses;                 //@synthesize minDurationBetweenHypotheses=_minDurationBetweenHypotheses - In the implementation block
@property (assign,nonatomic) BOOL discardNextHypothesis;                          //@synthesize discardNextHypothesis=_discardNextHypothesis - In the implementation block
-(NSString *)lastHypothesis;
-(void)setDiscardNextHypothesis:(BOOL)arg1 ;
-(NSString *)targetHypothesis;
-(void)_stopStreamingAnimation;
-(void)setPendingEdits:(NSMutableArray *)arg1 ;
-(void)setLastHypothesis:(NSString *)arg1 ;
-(void)setTargetHypothesis:(NSString *)arg1 ;
-(void)setPreviousHypothesis:(NSString *)arg1 ;
-(void)_startStreamingAnimations;
-(void)_displayLinkFired:(id)arg1 ;
-(NSMutableArray *)pendingEdits;
-(NSString *)previousHypothesis;
-(BOOL)discardNextHypothesis;
-(void)setupToInsertResultForNewHypothesis:(id)arg1 ;
-(id)initWithTextView:(id)arg1 ;
-(void)commitFinalResults;
-(void)setWords:(id)arg1 ;
-(double)streamingCharacterInsertionRate;
-(void)setStreamingCharacterInsertionRate:(double)arg1 ;
-(double)minDurationBetweenHypotheses;
-(void)setMinDurationBetweenHypotheses:(double)arg1 ;
@end
