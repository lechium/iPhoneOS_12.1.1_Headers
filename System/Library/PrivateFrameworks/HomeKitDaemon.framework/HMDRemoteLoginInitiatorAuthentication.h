/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDRemoteLoginAuthentication.h>

@protocol HMDRemoteLoginInitiatorAuthenticationDelegate;
@interface HMDRemoteLoginInitiatorAuthentication : HMDRemoteLoginAuthentication {

	id<HMDRemoteLoginInitiatorAuthenticationDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<HMDRemoteLoginInitiatorAuthenticationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)logCategory;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 ;
-(void)_handleAuthenticationResponse:(id)arg1 error:(id)arg2 ;
-(int)loginType;
-(void)authenticate;
-(id<HMDRemoteLoginInitiatorAuthenticationDelegate>)delegate;
@end

