/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSString, HMDDevice, NSObject, HMDRemoteLoginMessageSender;

@interface HMDRemoteLoginAuthentication : HMFObject <HMFLogging> {

	NSString* _sessionID;
	HMDDevice* _remoteDevice;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDRemoteLoginMessageSender* _remoteMessageSender;

}

@property (nonatomic,readonly) NSString * sessionID;                                           //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) HMDDevice * remoteDevice;                                       //@synthesize remoteDevice=_remoteDevice - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                         //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMDRemoteLoginMessageSender * remoteMessageSender;              //@synthesize remoteMessageSender=_remoteMessageSender - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDRemoteLoginMessageSender *)remoteMessageSender;
-(void)authenticate;
-(id)logIdentifier;
-(HMDDevice *)remoteDevice;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 ;
-(NSString *)sessionID;
@end

