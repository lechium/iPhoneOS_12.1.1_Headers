/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSServiceFacilityClientMessaging <NSObject>
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue; 
@required
-(void)sendMessage:(id)arg1 withType:(long long)arg2 replyHandler:(/*^block*/id)arg3 waitForReply:(BOOL)arg4 timeout:(double)arg5;
-(void)sendMessage:(id)arg1 withType:(long long)arg2;
-(NSObject*<OS_dispatch_queue>)calloutQueue;

@end

