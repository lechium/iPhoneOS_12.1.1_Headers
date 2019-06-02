/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <TVRemoteUI/TVRTouchProcessor.h>

@class UITapGestureRecognizer, NSTimer;

@interface TVRStandardTouchProcessor : TVRTouchProcessor {

	long long _clickVirtualizerState;
	CGPoint _touchBeganLocation;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSTimer* _clickVirtualizerTimer;

}
-(void)setTouchpadView:(id)arg1 ;
-(void)_tap:(id)arg1 ;
-(void)_touchpadClickVirtualizerTimerFired:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end
