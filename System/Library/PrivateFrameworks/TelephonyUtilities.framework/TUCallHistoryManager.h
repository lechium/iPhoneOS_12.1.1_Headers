/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUCallHistoryManagerDataSource;
@interface TUCallHistoryManager : NSObject {

	id<TUCallHistoryManagerDataSource> _dataSource;

}

@property (nonatomic,readonly) id<TUCallHistoryManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithOutgoingLocalParticipantUUID:(id)arg2 ;
-(void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithLocalParticipantUUID:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<TUCallHistoryManagerDataSource>)dataSource;
@end
