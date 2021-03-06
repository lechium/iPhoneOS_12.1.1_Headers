/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKCalendarNotification.h>

@class NSString, NSDate, NSTimeZone, EKRecurrenceRule, NSArray, EKCalendarEventInvitationNotificationAttendee;

@interface EKCalendarEventInvitationNotification : EKCalendarNotification {

	BOOL _allDay;
	BOOL _timeChanged;
	BOOL _dateChanged;
	BOOL _locationChanged;
	BOOL _attendeeReplyChanged;
	NSString* _location;
	NSDate* _startDate;
	NSDate* _startDateForNextOccurrence;
	NSDate* _endDate;
	NSDate* _participationStatusModifiedDate;
	NSTimeZone* _timeZone;
	long long _participationStatus;
	long long _status;
	EKRecurrenceRule* _recurrenceRule;
	NSArray* _attendees;
	EKCalendarEventInvitationNotificationAttendee* _owner;
	NSString* _invitedBy;

}

@property (nonatomic,retain) NSString * location;                                                //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * startDateForNextOccurrence;                                //@synthesize startDateForNextOccurrence=_startDateForNextOccurrence - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                                   //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSDate * participationStatusModifiedDate;                           //@synthesize participationStatusModifiedDate=_participationStatusModifiedDate - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                              //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) long long participationStatus;                                      //@synthesize participationStatus=_participationStatus - In the implementation block
@property (assign,nonatomic) long long status;                                                   //@synthesize status=_status - In the implementation block
@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                                        //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,retain) EKRecurrenceRule * recurrenceRule;                                  //@synthesize recurrenceRule=_recurrenceRule - In the implementation block
@property (assign,nonatomic) BOOL timeChanged;                                                   //@synthesize timeChanged=_timeChanged - In the implementation block
@property (assign,nonatomic) BOOL dateChanged;                                                   //@synthesize dateChanged=_dateChanged - In the implementation block
@property (assign,nonatomic) BOOL locationChanged;                                               //@synthesize locationChanged=_locationChanged - In the implementation block
@property (assign,nonatomic) BOOL attendeeReplyChanged;                                          //@synthesize attendeeReplyChanged=_attendeeReplyChanged - In the implementation block
@property (nonatomic,retain) NSArray * attendees;                                                //@synthesize attendees=_attendees - In the implementation block
@property (nonatomic,retain) EKCalendarEventInvitationNotificationAttendee * owner;              //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) NSString * invitedBy;                                             //@synthesize invitedBy=_invitedBy - In the implementation block
@property (assign,nonatomic) BOOL couldBeJunk; 
-(void)setDateChanged:(BOOL)arg1 ;
-(void)setTimeChanged:(BOOL)arg1 ;
-(void)setLocationChanged:(BOOL)arg1 ;
-(void)setStartDateForNextOccurrence:(NSDate *)arg1 ;
-(BOOL)attendeeReplyChanged;
-(NSDate *)participationStatusModifiedDate;
-(void)setParticipationStatusModifiedDate:(NSDate *)arg1 ;
-(void)setAttendeeReplyChanged:(BOOL)arg1 ;
-(id)eventFromEventStore:(id)arg1 ;
-(NSDate *)startDateForNextOccurrence;
-(BOOL)isAllDay;
-(void)setAllDay:(BOOL)arg1 ;
-(id)initWithEvent:(id)arg1 ;
-(long long)participationStatus;
-(EKRecurrenceRule *)recurrenceRule;
-(void)setRecurrenceRule:(EKRecurrenceRule *)arg1 ;
-(NSArray *)attendees;
-(void)setParticipationStatus:(long long)arg1 ;
-(BOOL)timeChanged;
-(BOOL)dateChanged;
-(BOOL)locationChanged;
-(void)setAttendees:(NSArray *)arg1 ;
-(BOOL)hasRecurrenceRules;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)invitedBy;
-(long long)status;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSString *)location;
-(EKCalendarEventInvitationNotificationAttendee *)owner;
-(void)setOwner:(EKCalendarEventInvitationNotificationAttendee *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(void)setStatus:(long long)arg1 ;
@end

