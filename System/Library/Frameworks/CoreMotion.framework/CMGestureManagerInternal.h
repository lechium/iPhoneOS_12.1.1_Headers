/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMGestureManagerInternal : NSObject {

	int fPriority;
	CLConnectionClient* fLocationdConnection;
	/*^block*/id fGestureHandler;
	NSObject*<OS_dispatch_source> fWatchDogTimer;
	NSObject*<OS_dispatch_queue> fPrivateQueue;

}
-(void)stopWatchdogCheckinsPrivate;
-(void)startWatchdogCheckinsPrivate;
-(void)startGestureUpdatesWithHandlerPrivate:(/*^block*/id)arg1 ;
-(void)stopGestureUpdatesPrivate;
-(id)initWithPriority:(int)arg1 ;
-(void)dealloc;
@end

