/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OFViewControllerInteractiveTransitioning <NSObject>
@property (readonly) BOOL tracksWithFinger; 
@required
-(void)startInteractiveTransitionWithContext:(id)arg1;
-(void)updateInteractiveTransitionWithContext:(id)arg1 andProgress:(double)arg2;
-(void)makeCurrentTransitionInteractiveWithContext:(id)arg1 andProgress:(double)arg2;
-(BOOL)tracksWithFinger;
-(void)endInteractiveTransitionWithContext:(id)arg1 transitionCompleted:(BOOL)arg2;

@end
