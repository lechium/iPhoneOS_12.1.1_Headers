/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSPredicate;

@interface HFUserNotificationServiceSettings : NSObject <NSCopying, NSMutableCopying> {

	BOOL _notificationsEnabled;
	NSPredicate* _notificationCondition;

}

@property (assign,getter=areNotificationsEnabled,nonatomic) BOOL notificationsEnabled;              //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
@property (nonatomic,retain) NSPredicate * notificationCondition;                                   //@synthesize notificationCondition=_notificationCondition - In the implementation block
+(id)combinedConditionForBulletinBoardNotifications:(id)arg1 ;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(id)initWithNotificationsEnabled:(BOOL)arg1 condition:(id)arg2 ;
-(id)initWithBulletinBoardNotifications:(id)arg1 ;
-(id)applySettingsToBulletinBoardNotifications:(id)arg1 ;
-(NSPredicate *)notificationCondition;
-(BOOL)areNotificationsEnabled;
-(void)setNotificationCondition:(NSPredicate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

