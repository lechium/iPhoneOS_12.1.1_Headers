/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>

@class NSDate;

@interface EKScheduledReminderPredicate : EKPredicate {

	NSDate* _day;
	unsigned long long _maxResults;

}

@property (nonatomic,retain) NSDate * day;                               //@synthesize day=_day - In the implementation block
@property (assign,nonatomic) unsigned long long maxResults;              //@synthesize maxResults=_maxResults - In the implementation block
+(id)predicateForScheduledRemindersInCalendars:(id)arg1 onDay:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(unsigned long long)maxResults;
-(void)setMaxResults:(unsigned long long)arg1 ;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)day;
-(void)setDay:(NSDate *)arg1 ;
@end
