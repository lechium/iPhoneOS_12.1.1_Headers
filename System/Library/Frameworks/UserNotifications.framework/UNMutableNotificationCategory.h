/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <UserNotifications/UNNotificationCategory.h>

@class NSArray, NSString;

@interface UNMutableNotificationCategory : UNNotificationCategory

@property (assign,nonatomic) unsigned long long options; 
@property (assign,nonatomic) unsigned long long backgroundStyle; 
@property (assign,nonatomic) unsigned long long listPriority; 
@property (nonatomic,copy) NSArray * actions; 
@property (nonatomic,copy) NSArray * minimalActions; 
@property (nonatomic,copy) NSArray * intentIdentifiers; 
@property (nonatomic,copy) NSString * hiddenPreviewsBodyPlaceholder; 
@property (nonatomic,copy) NSString * categorySummaryFormat; 
-(void)setListPriority:(unsigned long long)arg1 ;
-(void)setHiddenPreviewsBodyPlaceholder:(NSString *)arg1 ;
-(void)setMinimalActions:(NSArray *)arg1 ;
-(void)setIntentIdentifiers:(NSArray *)arg1 ;
-(void)setCategorySummaryFormat:(NSString *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setBackgroundStyle:(unsigned long long)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
@end
