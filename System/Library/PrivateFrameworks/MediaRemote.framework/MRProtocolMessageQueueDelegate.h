/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRProtocolMessageQueueDelegate <NSObject>
@required
-(unsigned long long)messageQueue:(id)arg1 processData:(id)arg2 atReadPosition:(long long)arg3;
-(void)messageQueue:(id)arg1 didSendMessage:(id)arg2;
-(void)messageQueue:(id)arg1 didPurgeMessage:(id)arg2;

@end

