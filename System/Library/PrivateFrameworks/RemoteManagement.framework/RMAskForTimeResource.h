/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RMAskForTimeClient, RMAskForTimeRequest;

@interface RMAskForTimeResource : NSObject {

	int _notificationToken;
	RMAskForTimeClient* _askForTimeClient;
	RMAskForTimeRequest* _request;
	/*^block*/id _changeHandler;

}

@property (nonatomic,retain) RMAskForTimeClient * askForTimeClient;              //@synthesize askForTimeClient=_askForTimeClient - In the implementation block
@property (nonatomic,readonly) RMAskForTimeRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) int notificationToken;                            //@synthesize notificationToken=_notificationToken - In the implementation block
@property (nonatomic,readonly) id changeHandler;                                 //@synthesize changeHandler=_changeHandler - In the implementation block
-(id)changeHandler;
-(void)requestAdditionalTime:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)approveAdditionalTime:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)notificationToken;
-(void)checkRequestForAdditionalTimeWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithResourceIdentifier:(id)arg1 resourceDisplayName:(id)arg2 usageType:(long long)arg3 changeHandler:(/*^block*/id)arg4 ;
-(void)cancelOutstandingRequestsWithCompletion:(/*^block*/id)arg1 ;
-(void)setAskForTimeClient:(RMAskForTimeClient *)arg1 ;
-(RMAskForTimeClient *)askForTimeClient;
-(void)dealloc;
-(RMAskForTimeRequest *)request;
@end
