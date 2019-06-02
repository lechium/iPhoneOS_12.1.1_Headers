/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol HMDCompanionManagerDelegate, OS_dispatch_queue;
@class HMDDevice, NSObject, IDSService, NSString;

@interface HMDCompanionManager : HMFObject <HMFLogging, IDSServiceDelegate> {

	HMDDevice* _companion;
	id<HMDCompanionManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	IDSService* _service;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) IDSService * service;                                    //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) HMDDevice * companion;                                     //@synthesize companion=_companion - In the implementation block
@property (__weak) id<HMDCompanionManagerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)isCompatibleCompanionDevice:(id)arg1 ;
+(id)shortDescription;
-(IDSService *)service;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 connectedDevicesChanged:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(void)__initializeConnectedDevices;
-(HMDDevice *)companion;
-(void)_updateConnectedDevices:(id)arg1 ;
-(void)notifyDelegateOfCompanionChange:(id)arg1 ;
-(void)setCompanion:(HMDDevice *)arg1 ;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)setDelegate:(id<HMDCompanionManagerDelegate>)arg1 ;
-(id<HMDCompanionManagerDelegate>)delegate;
-(id)shortDescription;
@end
