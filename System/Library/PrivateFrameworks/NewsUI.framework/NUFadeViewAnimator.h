/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NUFadeViewAnimator : NSObject {

	double _fadeOutDuration;
	double _fadeInDuration;
	double _fadeInDelay;

}

@property (assign,nonatomic) double fadeOutDuration;              //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (assign,nonatomic) double fadeInDuration;               //@synthesize fadeInDuration=_fadeInDuration - In the implementation block
@property (assign,nonatomic) double fadeInDelay;                  //@synthesize fadeInDelay=_fadeInDelay - In the implementation block
-(void)fadeFromView:(id)arg1 toView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(double)fadeInDelay;
-(void)setFadeInDelay:(double)arg1 ;
-(id)init;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
@end

