/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedback.h>
#import <UIKitCore/_UIFeedbackContinuousPlayable.h>

@class NSString;

@interface _UIContinuousFeedback : _UIFeedback <_UIFeedbackContinuousPlayable> {

	double _duration;
	long long _type;

}

@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
+(BOOL)supportsSecureCoding;
+(id)type;
+(id)continuousFeedbackForType:(long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned long long)_effectiveEventType;
-(void)_playAtTime:(double)arg1 engine:(id)arg2 ;
-(id)_debugDictionary;
-(id)_playableProtocol;
@end

