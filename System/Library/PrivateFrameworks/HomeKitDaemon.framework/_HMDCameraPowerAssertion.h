/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDCameraPowerAssertionHandler, HMDCameraSessionID;

@interface _HMDCameraPowerAssertion : HMFObject {

	HMDCameraPowerAssertionHandler* _assertionHandler;
	HMDCameraSessionID* _remoteRequestHandlerSessionID;

}

@property (nonatomic,__weak,readonly) HMDCameraPowerAssertionHandler * assertionHandler;              //@synthesize assertionHandler=_assertionHandler - In the implementation block
@property (nonatomic,readonly) HMDCameraSessionID * remoteRequestHandlerSessionID;                    //@synthesize remoteRequestHandlerSessionID=_remoteRequestHandlerSessionID - In the implementation block
-(HMDCameraPowerAssertionHandler *)assertionHandler;
-(HMDCameraSessionID *)remoteRequestHandlerSessionID;
-(id)initWithPowerAssertionHandler:(id)arg1 remoteRequestHandlerSessionID:(id)arg2 ;
-(void)dealloc;
@end
