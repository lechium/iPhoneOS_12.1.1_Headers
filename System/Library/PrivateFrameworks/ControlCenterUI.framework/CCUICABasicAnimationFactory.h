/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CCUICAAnimationFactory.h>

@class CCUICABasicAnimationParameters, NSString;

@interface CCUICABasicAnimationFactory : NSObject <CCUICAAnimationFactory> {

	CCUICABasicAnimationParameters* _parameters;
	double _speed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double animationDuration; 
-(id)_animation;
-(id)initWithParameters:(id)arg1 speed:(double)arg2 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(BOOL)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2 ;
-(double)animationDuration;
@end

