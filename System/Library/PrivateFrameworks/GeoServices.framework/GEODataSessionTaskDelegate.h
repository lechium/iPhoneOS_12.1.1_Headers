/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEODataSessionTaskDelegate <NSObject>
@optional
-(void)dataSession:(id)arg1 didCompleteSubtask:(id)arg2 completion:(/*^block*/id)arg3;
-(void)dataSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(/*^block*/id)arg4;

@required
-(void)dataSession:(id)arg1 didCompleteTask:(id)arg2;

@end

