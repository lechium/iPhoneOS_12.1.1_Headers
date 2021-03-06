/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/DeviceManager.h>
#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@class NSNetServiceBrowser, NSMutableArray, NSString;

@interface PTPCameraDeviceManager : DeviceManager <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	NSNetServiceBrowser* _netServiceBrowser;
	NSMutableArray* _netServices;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(void)openDeviceImp:(id)arg1 ;
-(void)closeDeviceImp:(id)arg1 ;
-(void)openSessionImp:(id)arg1 ;
-(void)closeSessionImp:(id)arg1 ;
-(void)syncClockImp:(id)arg1 ;
-(void)aptpRequestDataForFilesImp:(id)arg1 ;
-(void)getThumbnailOfFileImp:(id)arg1 ;
-(void)getMetadataOfFileImp:(id)arg1 ;
-(void)deleteFileImp:(id)arg1 ;
-(void)downloadFileImp:(id)arg1 ;
-(void)ejectImp:(id)arg1 ;
-(void)getDataOfFileImp:(id)arg1 ;
-(void)aptpRetrieveDataForFilesImp:(id)arg1 ;
-(long long)handleEvent:(id)arg1 onDevice:(id)arg2 contextInfo:(void*)arg3 ;
-(id)usbLocationIDsOfPTPDevices;
-(void)handleEventImp:(id)arg1 ;
-(void)startRunning;
-(id)init;
-(void)dealloc;
-(void)stopRunning;
@end

