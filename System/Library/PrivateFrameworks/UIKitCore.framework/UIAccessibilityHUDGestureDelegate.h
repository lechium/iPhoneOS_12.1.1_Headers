/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIAccessibilityHUDGestureDelegate <NSObject>
@optional
-(void)_accessibilityHUDGestureManager:(id)arg1 showHUDItem:(id)arg2;
-(void)_dismissAccessibilityHUDForGestureManager:(id)arg1;
-(BOOL)_accessibilityHUDGestureManagerShouldBegin:(id)arg1;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldTerminateHUDGestureForOtherGestureRecognizer:(id)arg2;

@required
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
-(id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(CGPoint)arg2;
-(void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(CGPoint)arg2;

@end

