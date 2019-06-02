/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKConversation.h>

@class IMService;

@interface CKPendingConversation : CKConversation {

	BOOL _noAvailableServices;
	IMService* _previousSendingService;
	IMService* _composeSendingService;

}

@property (assign,nonatomic,__weak) IMService * composeSendingService;               //@synthesize composeSendingService=_composeSendingService - In the implementation block
@property (assign,nonatomic) BOOL noAvailableServices;                               //@synthesize noAvailableServices=_noAvailableServices - In the implementation block
@property (assign,nonatomic,__weak) IMService * previousSendingService;              //@synthesize previousSendingService=_previousSendingService - In the implementation block
-(id)sendingService;
-(void)refreshComposeSendingServiceForAddresses:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)refreshStatusForAddresses:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)deviceIndependentID;
-(BOOL)noAvailableServices;
-(void)setPreviousSendingService:(IMService *)arg1 ;
-(IMService *)composeSendingService;
-(IMService *)previousSendingService;
-(void)setComposeSendingService:(IMService *)arg1 ;
-(void)setNoAvailableServices:(BOOL)arg1 ;
-(id)uniqueIdentifier;
@end
