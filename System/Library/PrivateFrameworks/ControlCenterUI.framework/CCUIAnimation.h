/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CCUIAnimationParameters;
@interface CCUIAnimation : NSObject <NSCopying> {

	id<CCUIAnimationParameters> _parameters;
	double _delay;
	double _speed;
	/*^block*/id _animations;

}

@property (nonatomic,copy,readonly) id<CCUIAnimationParameters> parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) double delay;                                             //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double speed;                                             //@synthesize speed=_speed - In the implementation block
@property (nonatomic,copy,readonly) id animations;                                       //@synthesize animations=_animations - In the implementation block
+(id)animationWithParameters:(id)arg1 animations:(/*^block*/id)arg2 ;
+(id)animationWithParameters:(id)arg1 delay:(double)arg2 animations:(/*^block*/id)arg3 ;
+(id)animationWithParameters:(id)arg1 delay:(double)arg2 speed:(double)arg3 animations:(/*^block*/id)arg4 ;
-(id)_initWithParameters:(id)arg1 delay:(double)arg2 speed:(double)arg3 animations:(/*^block*/id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)animations;
-(double)delay;
-(double)speed;
-(id<CCUIAnimationParameters>)parameters;
@end

