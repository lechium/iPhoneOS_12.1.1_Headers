/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol OS_dispatch_queue, ASServerInterface;
@class NSObject, HKPluginProxyProvider, NSString;

@interface ASClient : NSObject <_HKXPCExportable> {

	NSObject*<OS_dispatch_queue> _serverQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	id<ASServerInterface> _serverProxy;
	HKPluginProxyProvider* _pluginProxyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)remoteInterface;
-(void)connectionInvalidated;
-(/*^block*/id)_clientQueueSuccessCompletion:(/*^block*/id)arg1 ;
-(void)_remoteProxy:(/*^block*/id)arg1 ;
-(void)sendInviteRequestToDestination:(id)arg1 callerID:(id)arg2 serviceIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)acceptInviteRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendWithdrawInviteRequestToFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)ignoreInviteRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendCompetitionRequestToFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)acceptCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)ignoreCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)completeCompetitionWithFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setActivityDataVisible:(BOOL)arg1 toFriendWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setMuteEnabled:(BOOL)arg1 forFriendWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pushActivityDataToAllFriendsWithCompletion:(/*^block*/id)arg1 ;
-(void)pushFakeActivityDataToAllFriendsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAllDataWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)cloudKitAccountStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)clearFriendListWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)expireChangeTokenWithCompletion:(/*^block*/id)arg1 ;
-(void)friendWithRemoteUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithHealthStore:(id)arg1 ;
-(id)exportedInterface;
@end

