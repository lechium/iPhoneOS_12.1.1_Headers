/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol INSendMessageIntentHandling <NSObject>
@optional
-(void)confirmSendMessage:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveRecipientsForSendMessage:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveRecipientsForSendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveContentForSendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveSpeakableGroupNameForSendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveGroupNameForSendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2;

@required
-(void)handleSendMessage:(id)arg1 completion:(/*^block*/id)arg2;

@end

