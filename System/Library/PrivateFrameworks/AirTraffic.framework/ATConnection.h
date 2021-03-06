/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATConnectionDelegate.h>

@protocol ATConnectionDelegate;
@class NSXPCConnection, NSMutableArray, NSObject, NSString;

@interface ATConnection : NSObject <ATConnectionDelegate> {

	NSXPCConnection* _xpcConnection;
	BOOL _registerForStatus;
	NSMutableArray* _registeredDataclasses;
	int _atcRunningToken;
	BOOL _atcRunning;
	NSObject*<ATConnectionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<ATConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_sendStatusRegistrationWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleDisconnect;
-(void)_sendStatusRegistration;
-(void)openDeviceMessageLinkWithPriority:(int)arg1 ;
-(void)requestSyncForLibrary:(id)arg1 ;
-(void)requestSyncForPairedDeviceWithPriority:(int)arg1 ;
-(void)requestKeybagSyncToPairedDevice;
-(void)cancelSync;
-(void)purgePartialAsset:(id)arg1 forDataclass:(id)arg2 ;
-(void)registerForAssetProgressForDataclass:(id)arg1 ;
-(void)lowBatteryNotification;
-(void)keepATCAlive:(BOOL)arg1 ;
-(BOOL)isSyncing:(BOOL*)arg1 automatically:(BOOL*)arg2 wirelessly:(BOOL*)arg3 ;
-(id)restoreDeviceWithIdentifier:(id)arg1 ;
-(id)getAssetMetrics;
-(BOOL)getDataRestoreIsComplete;
-(void)prioritizeAsset:(id)arg1 forDataclass:(id)arg2 ;
-(void)initiateAssetDownloadSessionsWithCompletion:(/*^block*/id)arg1 ;
-(void)clearSyncData;
-(void)openDeviceMessageLink;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(NSObject*<ATConnectionDelegate>)arg1 ;
-(NSObject*<ATConnectionDelegate>)delegate;
-(void)registerForStatus;
-(void)unregisterForStatus;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(void)connection:(id)arg1 updatedAssets:(id)arg2 ;
-(void)connectionWasInterrupted:(id)arg1 ;
@end

