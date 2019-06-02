/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iCloudNotification.framework/iCloudNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface INDaemonConnection : NSObject {

	NSXPCConnection* _connection;

}
-(void)updateOfferForAccount:(id)arg1 offerId:(id)arg2 buttonId:(id)arg3 info:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)iCloudServerOfferForAccount:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)notifyDeviceStorageLevel:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)registerAccount:(id)arg1 foriCloudNotificationsWithReason:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)unregisterAccount:(id)arg1 fromiCloudNotificationsWithError:(id*)arg2 ;
-(BOOL)clearAllRegistrationDigestsWithError:(id*)arg1 ;
-(id)diagnosticReport;
-(id)iCloudServerOfferForAccount:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
@end
