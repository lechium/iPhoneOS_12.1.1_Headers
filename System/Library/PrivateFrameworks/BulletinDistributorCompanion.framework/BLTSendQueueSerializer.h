/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface BLTSendQueueSerializer : NSObject {

	BOOL _usesMessageIdentifiers;
	NSURL* _sendFileURL;

}

@property (nonatomic,copy) NSURL * sendFileURL;                          //@synthesize sendFileURL=_sendFileURL - In the implementation block
@property (nonatomic,readonly) BOOL usesMessageIdentifiers;              //@synthesize usesMessageIdentifiers=_usesMessageIdentifiers - In the implementation block
-(void)add:(id)arg1 type:(unsigned short)arg2 messageIdentifier:(id*)arg3 ;
-(NSURL *)sendFileURL;
-(BOOL)usesMessageIdentifiers;
-(id)initWithUsesMessageIdentifiers:(BOOL)arg1 ;
-(void)setSendFileURL:(NSURL *)arg1 ;
-(void)add:(id)arg1 type:(unsigned short)arg2 ;
-(void)sendWithSender:(id)arg1 timeout:(id)arg2 responseHandlers:(id)arg3 didSend:(/*^block*/id)arg4 didQueue:(/*^block*/id)arg5 ;
-(void)handleFileURL:(id)arg1 protobufHandler:(id)arg2 ;
-(void)cleanup;
@end
