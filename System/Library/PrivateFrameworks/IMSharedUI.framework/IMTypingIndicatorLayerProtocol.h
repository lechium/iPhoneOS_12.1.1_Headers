/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMTypingIndicatorLayerProtocol <NSObject>
@property (assign,nonatomic) BOOL hasDarkBackground; 
@required
-(void)startGrowAnimationWithCompletionBlock:(/*^block*/id)arg1;
-(BOOL)hasDarkBackground;
-(void)setHasDarkBackground:(BOOL)arg1;
-(void)startPulseAnimation;
-(void)startGrowAnimation;
-(void)stopPulseAnimation;
-(void)startShrinkAnimationWithCompletionBlock:(/*^block*/id)arg1;
-(void)stopAnimation;

@end

