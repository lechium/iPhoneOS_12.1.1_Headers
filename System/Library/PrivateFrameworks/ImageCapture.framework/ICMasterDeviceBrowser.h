/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, MSCameraDeviceManager, PTPCameraDeviceManager, ExFATCameraDeviceManager;

@interface ICMasterDeviceBrowser : NSObject {

	NSMutableArray* _devices;
	NSMutableArray* _browsers;
	long long _numberOfBrowsingBrowsers;
	MSCameraDeviceManager* _msDevManager;
	PTPCameraDeviceManager* _ptpDevManager;
	ExFATCameraDeviceManager* _exFATManager;

}

@property (readonly) NSMutableArray * devices;               //@synthesize devices=_devices - In the implementation block
@property (readonly) NSMutableArray * browsers;              //@synthesize browsers=_browsers - In the implementation block
+(id)defaultBrowser;
+(BOOL)exists;
-(id)deviceWithDelegate:(id)arg1 ;
-(void)handleCommandCompletionNotification:(id)arg1 ;
-(void)handleImageCaptureEventNotification:(id)arg1 ;
-(int)addMSCamera:(id)arg1 ;
-(void)removeMSCamera:(id)arg1 ;
-(void)addBrowser:(id)arg1 ;
-(int)addPTPCamera:(id)arg1 ;
-(void)removeBrowser:(id)arg1 ;
-(void)removePTPCamera:(id)arg1 ;
-(int)addMagicDisk:(id)arg1 ;
-(void)informBrowserDelegateUsingSelector:(SEL)arg1 withObject:(id)arg2 ;
-(int)start:(id)arg1 ;
-(void)stop:(id)arg1 ;
-(NSMutableArray *)devices;
-(NSMutableArray *)browsers;
-(id)init;
-(void)dealloc;
@end

