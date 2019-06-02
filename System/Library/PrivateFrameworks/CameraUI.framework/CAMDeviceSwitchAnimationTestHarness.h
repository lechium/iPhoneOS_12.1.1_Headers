/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMModeAndDeviceConfigurationTestHarness.h>

@class CAMViewfinderViewController;

@interface CAMDeviceSwitchAnimationTestHarness : CAMModeAndDeviceConfigurationTestHarness {

	CAMViewfinderViewController* _viewfinder;
	long long _desiredDevicePosition;

}
+(id)harnessWithTestName:(id)arg1 viewfinder:(id)arg2 devicePosition:(long long)arg3 ;
-(void)startTesting;
-(void)ensureCaptureDevicePosition:(long long)arg1 mode:(long long)arg2 thenPerform:(/*^block*/id)arg3 ;
-(id)initWithTestName:(id)arg1 viewfinder:(id)arg2 devicePosition:(long long)arg3 ;
@end

