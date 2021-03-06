/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCChannelMembershipRecordSource;

@interface FCChannelMembershipController : NSObject {

	FCChannelMembershipRecordSource* _recordSource;

}

@property (nonatomic,readonly) FCChannelMembershipRecordSource * recordSource;              //@synthesize recordSource=_recordSource - In the implementation block
-(FCChannelMembershipRecordSource *)recordSource;
-(id)channelMembershipsFromHeldRecords:(id)arg1 ;
-(id)initWithChannelMembershipRecordSource:(id)arg1 ;
-(void)fetchChannelMembershipsForIDs:(id)arg1 maximumCachedAge:(double)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)cachedChannelMembershipsForIDs:(id)arg1 ;
@end

