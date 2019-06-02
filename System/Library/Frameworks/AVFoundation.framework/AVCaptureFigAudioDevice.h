/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureDevice.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSDictionary, NSString, AVWeakReference;

@interface AVCaptureFigAudioDevice : AVCaptureDevice {

	NSObject*<OS_dispatch_queue> _fcsQueue;
	OpaqueFigCaptureSourceRef _fcs;
	NSDictionary* _attributes;
	BOOL _levelMeteringEnabled;
	BOOL _isConnected;
	NSString* _localizedName;
	AVWeakReference* _weakReference;
	NSObject*<OS_dispatch_semaphore> _serverConnectionDiedSemaphore;

}
+(id)_devices;
+(void)_reconnectDevices:(id)arg1 ;
+(void)initialize;
-(void)_handleNotification:(CFStringRef)arg1 payload:(id)arg2 ;
-(BOOL)startUsingDevice:(id*)arg1 ;
-(void)stopUsingDevice;
-(BOOL)isInUseByAnotherApplication;
-(OpaqueCMClockRef)deviceClock;
-(BOOL)isBuiltInStereoAudioCaptureSupported;
-(id)_initWithFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)_reconnectToFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(void)_setFigCaptureSource:(OpaqueFigCaptureSourceRef)arg1 ;
-(id)_copyFigCaptureSourceProperty:(CFStringRef)arg1 ;
-(void)audioInputDevicesDidChangeHandler:(id)arg1 ;
-(void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg1 ;
-(OpaqueFigCaptureSourceRef)figCaptureSource;
-(id)figCaptureSourceAudioSettingsForSessionPreset:(id)arg1 ;
-(id)uniqueID;
-(BOOL)isConnected;
-(BOOL)supportsAVCaptureSessionPreset:(id)arg1 ;
-(BOOL)hasMediaType:(id)arg1 ;
-(id)deviceType;
-(id)modelID;
-(id)init;
-(void)dealloc;
-(id)localizedName;
@end

