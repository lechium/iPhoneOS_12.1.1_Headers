/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTBulletinSendQueueDelegate;
@interface BLTBulletinSendQueuePassthrough : NSObject {

	id<BLTBulletinSendQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BLTBulletinSendQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)sendNow;
-(void)sendRequest:(id)arg1 withTimeout:(id)arg2 isTrafficRestricted:(BOOL)arg3 didSend:(/*^block*/id)arg4 ;
-(void)handleFileURL:(id)arg1 ;
-(void)queuePending;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(/*^block*/id)arg3 didQueue:(/*^block*/id)arg4 ;
-(void)setDelegate:(id<BLTBulletinSendQueueDelegate>)arg1 ;
-(id<BLTBulletinSendQueueDelegate>)delegate;
@end

