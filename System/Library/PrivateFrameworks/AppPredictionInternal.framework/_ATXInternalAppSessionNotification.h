/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _ATXInternalNotification;

@interface _ATXInternalAppSessionNotification : NSObject {

	_ATXInternalNotification* _noteAppSessionStart;
	_ATXInternalNotification* _noteAppSessionEnd;

}
+(void)postNotificationForAppSessionStart:(id)arg1 ;
+(void)postNotificationForAppSessionEnd:(id)arg1 ;
-(void)registerForNotificationsWithAppSessionStartBlock:(/*^block*/id)arg1 ;
-(void)registerForNotificationsWithAppSessionEndBlock:(/*^block*/id)arg1 ;
-(id)init;
@end
