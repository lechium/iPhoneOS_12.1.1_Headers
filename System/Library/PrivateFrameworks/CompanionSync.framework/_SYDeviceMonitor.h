/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSUUID, NSObject;

@interface _SYDeviceMonitor : NSObject {

	NSMutableSet* _devices;
	NSUUID* _currentTargetDeviceUUID;
	NSObject*<OS_dispatch_queue> _syncQ;

}
+(id)sharedInstance;
-(id)allDevices;
-(void)_rebuildDeviceList;
-(void)_clearDeviceList;
-(id)currentTargetableDevice;
-(id)deviceForNRDevice:(id)arg1 ;
-(void)addNRDevice:(id)arg1 ;
-(void)removeNRDevice:(id)arg1 ;
-(id)deviceForPairingID:(id)arg1 ;
-(void)deviceBecameTargetable:(id)arg1 ;
-(void)_deviceDidPair:(id)arg1 ;
-(void)_deviceDidUnpair:(id)arg1 ;
-(id)init;
@end
