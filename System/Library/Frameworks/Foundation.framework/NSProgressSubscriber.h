/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSProgressSubscriber <NSObject>
@required
-(oneway void)removePublisherForID:(id)arg1;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(BOOL)arg4;
-(oneway void)observePublisherForID:(id)arg1 values:(id)arg2 forKeys:(id)arg3;
-(oneway void)observePublisherUserInfoForID:(id)arg1 value:(id)arg2 forKey:(id)arg3;

@end

