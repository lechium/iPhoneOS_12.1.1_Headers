/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessagesSyncServiceServerDelegate;
@interface NNMKMessagesSyncServiceServer : NNMKSyncServiceEndpoint {

	id<NNMKMessagesSyncServiceServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKMessagesSyncServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)updateMailboxSelection:(id)arg1 ;
-(void)connectivityChanged;
-(void)spaceBecameAvailable;
-(id)updateMessagesStatus:(id)arg1 notificationPriority:(BOOL)arg2 ;
-(id)deleteMessages:(id)arg1 notificationPriority:(BOOL)arg2 ;
-(id)addMessages:(id)arg1 notificationPriority:(BOOL)arg2 ;
-(id)sendInitialMessagesSync:(id)arg1 ;
-(id)sendBatchedInitialMessagesSync:(id)arg1 ;
-(id)sendMoreMessages:(id)arg1 ;
-(id)sendMoreMessagesForConversation:(id)arg1 ;
-(id)sendBatchedFetchResult:(id)arg1 ;
-(id)sendCoalescedBatchedFetchResult:(id)arg1 ;
-(void)setDelegate:(id<NNMKMessagesSyncServiceServerDelegate>)arg1 ;
-(id<NNMKMessagesSyncServiceServerDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
@end

