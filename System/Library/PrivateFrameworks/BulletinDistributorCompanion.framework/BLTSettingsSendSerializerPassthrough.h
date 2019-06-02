/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTSettingsSendSerializerDelegate;
@interface BLTSettingsSendSerializerPassthrough : NSObject {

	id<BLTSettingsSendSerializerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BLTSettingsSendSerializerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)handleFileURL:(id)arg1 ;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(/*^block*/id)arg6 andResponse:(/*^block*/id)arg7 spoolToFile:(BOOL)arg8 ;
-(void)sendNowWithSent:(/*^block*/id)arg1 withAcknowledgement:(/*^block*/id)arg2 withTimeout:(id)arg3 ;
-(void)setDelegate:(id<BLTSettingsSendSerializerDelegate>)arg1 ;
-(id<BLTSettingsSendSerializerDelegate>)delegate;
@end

