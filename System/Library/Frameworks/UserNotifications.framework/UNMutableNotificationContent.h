/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <UserNotifications/UNNotificationContent.h>

@class NSString, NSDate, NSURL, UNNotificationIcon, NSSet, NSArray, NSNumber, UNNotificationSound, NSDictionary;

@interface UNMutableNotificationContent : UNNotificationContent

@property (nonatomic,copy) NSString * header; 
@property (assign,nonatomic) BOOL shouldIgnoreDoNotDisturb; 
@property (assign,nonatomic) BOOL shouldIgnoreDowntime; 
@property (assign,nonatomic) BOOL shouldSuppressScreenLightUp; 
@property (assign,nonatomic) BOOL shouldHideDate; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (assign,nonatomic) BOOL shouldAuthenticateDefaultAction; 
@property (assign,nonatomic) BOOL shouldBackgroundDefaultAction; 
@property (assign,nonatomic) BOOL shouldPreventNotificationDismissalAfterDefaultAction; 
@property (assign,nonatomic) BOOL shouldSuppressDefaultAction; 
@property (nonatomic,copy) NSURL * defaultActionURL; 
@property (nonatomic,copy) UNNotificationIcon * icon; 
@property (nonatomic,copy) NSSet * topicIdentifiers; 
@property (assign,nonatomic) BOOL shouldUseRequestIdentifierForDismissalSync; 
@property (assign,nonatomic) BOOL shouldSuppressSyncDismissalWhenRemoved; 
@property (nonatomic,copy) NSArray * peopleIdentifiers; 
@property (assign,nonatomic) BOOL shouldHideTime; 
@property (assign,nonatomic) BOOL hasDefaultAction; 
@property (nonatomic,copy) NSString * defaultActionTitle; 
@property (nonatomic,copy) NSArray * attachments; 
@property (nonatomic,copy) NSNumber * badge; 
@property (nonatomic,copy) NSString * body; 
@property (nonatomic,copy) NSString * categoryIdentifier; 
@property (nonatomic,copy) NSString * launchImageName; 
@property (nonatomic,copy) UNNotificationSound * sound; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * threadIdentifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (nonatomic,copy) NSString * summaryArgument; 
@property (assign,nonatomic) unsigned long long summaryArgumentCount; 
-(void)setPeopleIdentifiers:(NSArray *)arg1 ;
-(void)setThreadIdentifier:(NSString *)arg1 ;
-(void)setTopicIdentifiers:(NSSet *)arg1 ;
-(void)setDefaultActionURL:(NSURL *)arg1 ;
-(void)setShouldBackgroundDefaultAction:(BOOL)arg1 ;
-(void)setShouldSuppressDefaultAction:(BOOL)arg1 ;
-(void)setShouldHideDate:(BOOL)arg1 ;
-(void)setShouldSuppressScreenLightUp:(BOOL)arg1 ;
-(void)setShouldIgnoreDoNotDisturb:(BOOL)arg1 ;
-(void)setShouldHideTime:(BOOL)arg1 ;
-(void)setShouldIgnoreDowntime:(BOOL)arg1 ;
-(void)setShouldAuthenticateDefaultAction:(BOOL)arg1 ;
-(void)setShouldPreventNotificationDismissalAfterDefaultAction:(BOOL)arg1 ;
-(void)setShouldSuppressSyncDismissalWhenRemoved:(BOOL)arg1 ;
-(void)setShouldUseRequestIdentifierForDismissalSync:(BOOL)arg1 ;
-(void)setSummaryArgument:(NSString *)arg1 ;
-(void)setSummaryArgumentCount:(unsigned long long)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setIcon:(UNNotificationIcon *)arg1 ;
-(void)setHeader:(NSString *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setBadge:(NSNumber *)arg1 ;
-(void)setCategoryIdentifier:(NSString *)arg1 ;
-(void)setHasDefaultAction:(BOOL)arg1 ;
-(void)setDefaultActionTitle:(NSString *)arg1 ;
-(void)setLaunchImageName:(NSString *)arg1 ;
-(void)setSound:(UNNotificationSound *)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
@end
