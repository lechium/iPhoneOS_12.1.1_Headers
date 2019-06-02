/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsServer/UNSNotificationRecordUpdate.h>

@class UNSNotificationRecord;

@interface UNSNotificationRecordReplaceUpdate : UNSNotificationRecordUpdate {

	BOOL _shouldRepost;
	UNSNotificationRecord* _replacedNotificationRecord;

}

@property (nonatomic,readonly) UNSNotificationRecord * replacedNotificationRecord;              //@synthesize replacedNotificationRecord=_replacedNotificationRecord - In the implementation block
@property (nonatomic,readonly) BOOL shouldRepost;                                               //@synthesize shouldRepost=_shouldRepost - In the implementation block
+(id)updateWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2 shouldRepost:(BOOL)arg3 ;
-(UNSNotificationRecord *)replacedNotificationRecord;
-(id)_initWithNotificationRecord:(id)arg1 replacedNotificationRecord:(id)arg2 shouldRepost:(BOOL)arg3 ;
-(BOOL)shouldRepost;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
