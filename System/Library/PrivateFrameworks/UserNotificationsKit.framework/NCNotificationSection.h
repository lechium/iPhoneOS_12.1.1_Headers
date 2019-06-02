/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NCNotificationSection : NSObject {

	NSMutableDictionary* _coalescedNotifications;

}

@property (nonatomic,retain) NSMutableDictionary * coalescedNotifications;              //@synthesize coalescedNotifications=_coalescedNotifications - In the implementation block
@property (nonatomic,readonly) unsigned long long notificationsCount; 
-(id)addNotificationRequest:(id)arg1 ;
-(unsigned long long)notificationsCount;
-(id)replaceNotificationRequest:(id)arg1 ;
-(id)coalescedNotificationForThreadIdentifier:(id)arg1 ;
-(NSMutableDictionary *)coalescedNotifications;
-(void)setCoalescedNotifications:(NSMutableDictionary *)arg1 ;
-(id)removeNotificationRequest:(id)arg1 ;
-(id)init;
@end
