/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, NSThread, CADisplayLink, NSTimer;

@interface _UIScrollViewGestureSimulator : NSObject {

	CFRunLoopSourceRef _mainThreadRunLoopSource;
	NSMutableArray* _simulatedGestures;
	NSThread* _workThread;
	CADisplayLink* _displayLink;
	NSTimer* _timer;
	BOOL _hasSimulatedGestures;
	double _lastWakeUpTime;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_update;
-(void)_displayLinkDidFire:(id)arg1 ;
-(void)_threadMain;
-(void)_setHasSimulatedGestures:(id)arg1 ;
-(void)_signalMainThreadIfNecessary;
-(void)simulateGestureWithDuration:(double)arg1 begin:(/*^block*/id)arg2 update:(/*^block*/id)arg3 end:(/*^block*/id)arg4 ;
@end

