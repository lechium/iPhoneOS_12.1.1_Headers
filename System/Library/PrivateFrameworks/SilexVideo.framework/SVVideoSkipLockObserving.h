/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVVideoSkipLockObserving <NSObject>
@property (nonatomic,readonly) BOOL locked; 
@property (setter=onUnlock:,nonatomic,copy) id unlockBlock; 
@property (nonatomic,readonly) double countdown; 
@property (setter=onCountDown:,nonatomic,copy) id countdownBlock; 
@required
-(double)countdown;
-(BOOL)locked;
-(void)onUnlock:(/*^block*/id)arg1;
-(id)unlockBlock;
-(id)countdownBlock;
-(void)onCountDown:(/*^block*/id)arg1;

@end

