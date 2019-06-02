/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMFitnessMachineInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;

}
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)_feedFitnessMachineData:(id)arg1 ;
-(void)_teardown;
-(id)init;
-(void)dealloc;
@end
