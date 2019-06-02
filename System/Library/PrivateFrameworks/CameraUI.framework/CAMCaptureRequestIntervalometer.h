/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMCaptureRequestIntervalometerDelegate;
@class CAMCaptureRequest, CAMPreciseTimer;

@interface CAMCaptureRequestIntervalometer : NSObject {

	CAMCaptureRequest* _prototypeRequest;
	id<CAMCaptureRequestIntervalometerDelegate> _delegate;
	double _interval;
	double _delay;
	long long _maximumCount;
	long long _remaining;
	CAMPreciseTimer* __timer;

}

@property (assign,nonatomic) long long remaining;                                                        //@synthesize remaining=_remaining - In the implementation block
@property (nonatomic,readonly) CAMPreciseTimer * _timer;                                                 //@synthesize _timer=__timer - In the implementation block
@property (nonatomic,copy) CAMCaptureRequest * prototypeRequest;                                         //@synthesize prototypeRequest=_prototypeRequest - In the implementation block
@property (nonatomic,__weak,readonly) id<CAMCaptureRequestIntervalometerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double interval;                                                          //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) double delay;                                                             //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) long long maximumCount;                                                   //@synthesize maximumCount=_maximumCount - In the implementation block
-(id)initWithDelegate:(id)arg1 interval:(double)arg2 delay:(double)arg3 maximumCount:(long long)arg4 ;
-(void)setPrototypeRequest:(CAMCaptureRequest *)arg1 ;
-(void)startGeneratingRequests;
-(void)manuallyGenerateRequest;
-(CAMCaptureRequest *)prototypeRequest;
-(void)stopGeneratingRequests;
-(long long)maximumCount;
-(void)_generateRequestForDelegate;
-(long long)remaining;
-(void)setRemaining:(long long)arg1 ;
-(CAMPreciseTimer *)_timer;
-(id)init;
-(id<CAMCaptureRequestIntervalometerDelegate>)delegate;
-(double)delay;
-(double)interval;
@end
