/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVInteractiveTransitionGestureTrackerDelegate <NSObject>
@required
-(BOOL)gestureTracker:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
-(BOOL)gestureTrackerShouldTrackPinchToPresent:(id)arg1;
-(BOOL)gestureTrackerShouldTrackPinchToDismiss:(id)arg1;
-(BOOL)gestureTrackerShouldTrackPanToDismiss:(id)arg1;
-(void)gestureTracker:(id)arg1 didBeginTrackingGesture:(long long)arg2;
-(void)gestureTracker:(id)arg1 didTrackPercentComplete:(double)arg2 translation:(CGPoint)arg3 rotation:(double)arg4 locationInWindow:(CGPoint)arg5;
-(void)gestureTrackerDidCancelTracking:(id)arg1;
-(void)gestureTrackerDidFinishTracking:(id)arg1;

@end
