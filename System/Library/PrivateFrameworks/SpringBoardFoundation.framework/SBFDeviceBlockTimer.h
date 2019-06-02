/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBFBlockStatusProvider;
@class NSString, NSTimer;

@interface SBFDeviceBlockTimer : NSObject {

	BOOL _enabled;
	/*^block*/id _handler;
	NSString* _titleText;
	NSString* _subtitleText;
	id<SBFBlockStatusProvider> _blockStatusProvider;
	NSTimer* _timer;

}

@property (nonatomic,copy) NSString * titleText;                                                                          //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                                                                       //@synthesize subtitleText=_subtitleText - In the implementation block
@property (setter=_setBlockStatusProvider:,nonatomic,retain) id<SBFBlockStatusProvider> blockStatusProvider;              //@synthesize blockStatusProvider=_blockStatusProvider - In the implementation block
@property (setter=_setTimer:,nonatomic,retain) NSTimer * timer;                                                           //@synthesize timer=_timer - In the implementation block
@property (assign,setter=_setEnabled:,getter=_isEnabled,nonatomic) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) id handler;                                                                                    //@synthesize handler=_handler - In the implementation block
-(void)_clearTimer;
-(NSString *)titleText;
-(void)_setBlockStatusProvider:(id)arg1 ;
-(void)_scheduleTimerIfNecessaryAndUpdateState;
-(id)initWithDeviceBlockStatusProvider:(id)arg1 ;
-(id<SBFBlockStatusProvider>)blockStatusProvider;
-(void)_setTimer:(id)arg1 ;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(void)dealloc;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)invalidate;
-(BOOL)_isEnabled;
-(void)_setEnabled:(BOOL)arg1 ;
-(void)start;
-(void)setTitleText:(NSString *)arg1 ;
-(NSTimer *)timer;
@end

