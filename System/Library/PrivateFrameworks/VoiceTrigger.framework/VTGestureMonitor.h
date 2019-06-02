/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VTGestureMonitorDelegate;
@interface VTGestureMonitor : NSObject {

	id<VTGestureMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VTGestureMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultGestureMonitor;
-(void)startObserving;
-(void)setDelegate:(id<VTGestureMonitorDelegate>)arg1 ;
-(id<VTGestureMonitorDelegate>)delegate;
@end

