/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTTimerManagerProviding;
@interface MTTimerIntentHandler : NSObject {

	id<MTTimerManagerProviding> _timerManagerProvider;

}

@property (assign,nonatomic,__weak) id<MTTimerManagerProviding> timerManagerProvider;              //@synthesize timerManagerProvider=_timerManagerProvider - In the implementation block
-(void)_genericallyResolveTargetTimer:(id)arg1 multiple:(BOOL)arg2 allowedTimerStatesForFollowup:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_timerManager;
-(id)_onlyUnnamedTimerInTimers:(id)arg1 forTargetTimer:(id)arg2 allowMultiple:(BOOL)arg3 ;
-(void)_matchTimersFromIntentsTimer:(id)arg1 excludeStoppedTimers:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_alternateTimersForTargetTimerState:(long long)arg1 inTimers:(id)arg2 allowedTimerStates:(id)arg3 ;
-(id<MTTimerManagerProviding>)timerManagerProvider;
-(void)setTimerManagerProvider:(id<MTTimerManagerProviding>)arg1 ;
@end

