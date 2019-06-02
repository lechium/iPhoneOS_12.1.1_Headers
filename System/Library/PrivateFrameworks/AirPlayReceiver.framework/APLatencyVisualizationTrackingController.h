/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class APLatencyVisualizationLayer, NSObject;

@interface APLatencyVisualizationTrackingController : NSObject {

	APLatencyVisualizationLayer* _layer;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init:(id)arg1 ;
-(void)draw;
-(void)dealloc;
-(id)layer;
@end

