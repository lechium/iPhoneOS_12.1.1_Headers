/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedback.h>
#import <UIKitCore/_UIFeedbackDiscretePlayable.h>
#import <UIKitCore/_UIFeedbackContinuousPlayable.h>

@class NSArray, NSTimer, NSString;

@interface _UIFeedbackPattern : _UIFeedback <_UIFeedbackDiscretePlayable, _UIFeedbackContinuousPlayable> {

	BOOL _highPriority;
	BOOL _isRepeating;
	double _duration;
	NSArray* _feedbacks;
	NSTimer* _repeatTimer;

}

@property (nonatomic,retain) NSArray * feedbacks;                                    //@synthesize feedbacks=_feedbacks - In the implementation block
@property (nonatomic,readonly) BOOL isRepeating;                                     //@synthesize isRepeating=_isRepeating - In the implementation block
@property (nonatomic,retain) NSTimer * repeatTimer;                                  //@synthesize repeatTimer=_repeatTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isHighPriority,nonatomic,readonly) BOOL highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
@property (assign,nonatomic) double duration;                                        //@synthesize duration=_duration - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
+(BOOL)supportsSecureCoding;
+(id)type;
+(id)feedbackPattern;
+(Class)_parametersClass;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)stop;
-(double)duration;
-(void)setPosition:(float)arg1 ;
-(id)_allFeedbacks;
-(void)addFeedback:(id)arg1 atTime:(double)arg2 ;
-(void)play;
-(NSArray *)feedbacks;
-(void)setFeedbacks:(NSArray *)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned long long)_effectivePlayableFeedbackTypes;
-(id)_debugDictionary;
-(id)_playableProtocol;
-(id)_allEventTypes;
-(id)_allSystemSoundIDs;
-(BOOL)isPlaying;
-(BOOL)isHighPriority;
-(void)_playPattern;
-(void)setRepeatTimer:(NSTimer *)arg1 ;
-(BOOL)isRepeating;
-(NSTimer *)repeatTimer;
@end
