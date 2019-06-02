/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, UIControl;

@interface MPUTransportButtonEventHandler : NSObject {

	NSObject*<OS_dispatch_source> _longPressTimer;
	BOOL _longPress;
	BOOL _shouldFakeEnabled;
	BOOL _supportsTapWhenDisabled;
	UIControl* _button;
	double _minimumLongPressDuration;

}

@property (assign,nonatomic,__weak) UIControl * button;                    //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) double minimumLongPressDuration;              //@synthesize minimumLongPressDuration=_minimumLongPressDuration - In the implementation block
@property (assign,nonatomic) BOOL supportsTapWhenDisabled;                 //@synthesize supportsTapWhenDisabled=_supportsTapWhenDisabled - In the implementation block
-(void)_clearLongPressTimer;
-(void)_longPressTimerAction;
-(id)performHitTestingBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldFakeEnabled;
-(BOOL)shouldForceTrackingEnabled;
-(double)minimumLongPressDuration;
-(void)setMinimumLongPressDuration:(double)arg1 ;
-(BOOL)supportsTapWhenDisabled;
-(void)setSupportsTapWhenDisabled:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIControl *)button;
-(void)setButton:(UIControl *)arg1 ;
@end
