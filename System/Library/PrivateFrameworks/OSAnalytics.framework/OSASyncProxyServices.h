/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OSASyncProxyServices <NSObject>
@required
-(void)request:(id)arg1 transferGroupWithOptions:(id)arg2 onComplete:(/*^block*/id)arg3;
-(void)request:(id)arg1 logList:(/*^block*/id)arg2;
-(void)request:(id)arg1 transferLog:(id)arg2 onComplete:(/*^block*/id)arg3;
-(void)request:(id)arg1 logListWithOptions:(id)arg2 onComplete:(/*^block*/id)arg3;
-(void)requestProxyMetadata:(id)arg1 onComplete:(/*^block*/id)arg2;
-(void)deliver:(id)arg1 tasking:(id)arg2 taskId:(id)arg3 fromBlob:(id)arg4;
-(void)synchronize:(id)arg1 withOptions:(id)arg2 onComplete:(/*^block*/id)arg3;
-(void)listDevices:(/*^block*/id)arg1;

@end
