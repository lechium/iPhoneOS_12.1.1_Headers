/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UNSNotificationRecord;

@interface UNSNotificationRecordUpdate : NSObject {

	UNSNotificationRecord* _notificationRecord;

}

@property (nonatomic,readonly) UNSNotificationRecord * notificationRecord;              //@synthesize notificationRecord=_notificationRecord - In the implementation block
-(UNSNotificationRecord *)notificationRecord;
-(id)_initWithNotificationRecord:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

