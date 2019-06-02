/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessagesSyncServiceClientDelegate;
@interface NNMKMessagesSyncServiceClient : NNMKSyncServiceEndpoint {

	id<NNMKMessagesSyncServiceClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKMessagesSyncServiceClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)sendMessage:(id)arg1 ;
-(id)deleteMessages:(id)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)updateMessagesStatus:(id)arg1 ;
-(void)warnMessagesFilteredOut:(id)arg1 ;
-(void)requestCompactMessages:(id)arg1 ;
-(id)updateMailboxSelection:(id)arg1 ;
-(void)connectivityChanged;
-(void)setDelegate:(id<NNMKMessagesSyncServiceClientDelegate>)arg1 ;
-(id<NNMKMessagesSyncServiceClientDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
@end

