/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, ICDelegationConsumerService;

@interface ICUserCredentialProvider : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	long long _delegationDiscoveryCount;
	ICDelegationConsumerService* _delegationConsumerService;

}
+(id)sharedProvider;
-(void)performCredentialRequests:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleCredentialRequestIdentityPropertiesForSession:(id)arg1 ;
-(void)_handlePendingDelegationRequestsForSession:(id)arg1 ;
-(void)_handleDelegationAccountUUIDsForSession:(id)arg1 ;
-(void)_handleIdentityProperties:(id)arg1 forIdentity:(id)arg2 loadingError:(id)arg3 credentialRequest:(id)arg4 session:(id)arg5 ;
-(void)_handleRequestIndependentPropertiesForSession:(id)arg1 ;
-(void)performCredentialRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(id)init;
@end

