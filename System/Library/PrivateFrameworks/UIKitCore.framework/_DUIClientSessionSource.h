/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DUIClientSessionSource <_DUIClientSessionCommon>
@required
-(oneway void)checkCanHandOffCancelledItemsWithReply:(/*^block*/id)arg1;
-(oneway void)handOffCancelledItems:(id)arg1 withFence:(id)arg2;
-(oneway void)dragEndedWithOperation:(unsigned long long)arg1;
-(oneway void)dragFailed;
-(oneway void)dataTransferSessionFinished;

@end

