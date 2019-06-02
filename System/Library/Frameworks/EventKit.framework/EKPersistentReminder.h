/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentCalendarItem.h>

@interface EKPersistentReminder : EKPersistentCalendarItem
+(id)reminderWithRandomUUID;
-(id)completionDate;
-(id)dueDateTimeZone;
-(void)setDueDateTimeZone:(id)arg1 ;
-(BOOL)dueDateAllDay;
-(void)setDueDateAllDay:(BOOL)arg1 ;
-(void)setCompletionDate:(id)arg1 ;
-(id)firstAlertDate;
-(void)setFirstAlertDate:(id)arg1 ;
-(unsigned long long)displayOrder;
-(void)setDisplayOrder:(unsigned long long)arg1 ;
-(int)entityType;
-(void)setDueDate:(id)arg1 ;
-(id)dueDate;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
