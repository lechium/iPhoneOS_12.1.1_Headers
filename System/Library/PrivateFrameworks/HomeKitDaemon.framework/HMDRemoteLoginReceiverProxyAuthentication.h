/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDRemoteLoginReceiverAuthentication.h>

@class HMDRemoteLoginProxyAuthenticationRequest;

@interface HMDRemoteLoginReceiverProxyAuthentication : HMDRemoteLoginReceiverAuthentication {

	HMDRemoteLoginProxyAuthenticationRequest* _request;

}

@property (nonatomic,readonly) HMDRemoteLoginProxyAuthenticationRequest * request;              //@synthesize request=_request - In the implementation block
+(id)logCategory;
-(void)_authenticate;
-(void)authenticate;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 request:(id)arg6 ;
-(void)dealloc;
-(id)description;
-(HMDRemoteLoginProxyAuthenticationRequest *)request;
@end
