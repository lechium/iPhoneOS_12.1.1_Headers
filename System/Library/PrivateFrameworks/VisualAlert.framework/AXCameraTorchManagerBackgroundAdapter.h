/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AXCameraTorchManager;
@class NSObject;

@interface AXCameraTorchManagerBackgroundAdapter : NSObject {

	NSObject*<OS_dispatch_queue> _q;
	id<AXCameraTorchManager> _synchronousManager;

}

@property (nonatomic,readonly) id<AXCameraTorchManager> synchronousTorchManager;              //@synthesize synchronousManager=_synchronousManager - In the implementation block
-(id)initWithCameraTorchManager:(id)arg1 ;
-(void)openTorchDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)closeTorchDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)turnTorchOnWithCompletion:(/*^block*/id)arg1 ;
-(void)turnTorchOffWithCompletion:(/*^block*/id)arg1 ;
-(id<AXCameraTorchManager>)synchronousTorchManager;
@end
