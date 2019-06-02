/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDCameraSettingProactiveReaderDelegate;
@class HMFMessage, NSObject, NSSet, NSString, HMDAccessory;

@interface HMDCameraSettingProactiveReader : HMFObject <HMFLogging> {

	HMFMessage* _message;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<HMDCameraSettingProactiveReaderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSSet* _streamControlMessageHandlers;
	NSString* _logID;
	HMDAccessory* _accessory;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,__weak,readonly) id<HMDCameraSettingProactiveReaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                               //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) NSSet * streamControlMessageHandlers;                                     //@synthesize streamControlMessageHandlers=_streamControlMessageHandlers - In the implementation block
@property (nonatomic,readonly) NSString * logID;                                                         //@synthesize logID=_logID - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                                          //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) HMFMessage * message;                                                     //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)logIdentifier;
-(HMDAccessory *)accessory;
-(NSString *)logID;
-(NSSet *)streamControlMessageHandlers;
-(void)_handleStreamStatusMultireadResponse:(id)arg1 ;
-(void)_callDidCompleteReadDelegateCallbackWithMessageHandled:(BOOL)arg1 ;
-(id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 message:(id)arg5 streamMessageHandlers:(id)arg6 logID:(id)arg7 ;
-(void)readSetting;
-(id<HMDCameraSettingProactiveReaderDelegate>)delegate;
-(HMFMessage *)message;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
@end

