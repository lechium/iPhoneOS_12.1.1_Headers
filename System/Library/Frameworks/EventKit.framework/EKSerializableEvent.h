/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKSerializableObject.h>

@class NSDate, NSTimeZone, NSMutableArray, NSString, NSURL, EKSerializableStructuredLocation, NSArray;

@interface EKSerializableEvent : EKSerializableObject {

	BOOL _isAllDay;
	NSDate* _startDate;
	NSDate* _endDate;
	NSTimeZone* _timeZone;
	double _travelTime;
	NSMutableArray* _recurrenceRules;
	NSString* _title;
	NSString* _notes;
	NSURL* _url;
	NSString* _calendarIdentifier;
	NSString* _location;
	EKSerializableStructuredLocation* _structuredLocation;
	NSArray* _attendees;
	NSArray* _alarms;
	NSArray* _attachments;

}

@property (nonatomic,copy) NSDate * startDate;                                                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                                                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone;                                                //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) BOOL isAllDay;                                                      //@synthesize isAllDay=_isAllDay - In the implementation block
@property (assign,nonatomic) double travelTime;                                                  //@synthesize travelTime=_travelTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * recurrenceRules;                                   //@synthesize recurrenceRules=_recurrenceRules - In the implementation block
@property (nonatomic,copy) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * notes;                                                     //@synthesize notes=_notes - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                        //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * calendarIdentifier;                                        //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (nonatomic,copy) NSString * location;                                                  //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) EKSerializableStructuredLocation * structuredLocation;              //@synthesize structuredLocation=_structuredLocation - In the implementation block
@property (nonatomic,retain) NSArray * attendees;                                                //@synthesize attendees=_attendees - In the implementation block
@property (nonatomic,retain) NSArray * alarms;                                                   //@synthesize alarms=_alarms - In the implementation block
@property (nonatomic,retain) NSArray * attachments;                                              //@synthesize attachments=_attachments - In the implementation block
+(id)serializedProperties;
+(id)classesForKey;
-(void)setTravelTime:(double)arg1 ;
-(double)travelTime;
-(void)_initAlarms:(id)arg1 ;
-(void)_initAttachments:(id)arg1 ;
-(void)_initAttendees:(id)arg1 ;
-(void)_initRecurrenceRules:(id)arg1 ;
-(id)createEventInEventStore:(id)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(BOOL)isAllDay;
-(id)initWithEvent:(id)arg1 ;
-(void)setIsAllDay:(BOOL)arg1 ;
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(EKSerializableStructuredLocation *)structuredLocation;
-(NSArray *)alarms;
-(void)setAlarms:(NSArray *)arg1 ;
-(void)setStructuredLocation:(EKSerializableStructuredLocation *)arg1 ;
-(NSMutableArray *)recurrenceRules;
-(void)setRecurrenceRules:(NSMutableArray *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setCalendarIdentifier:(NSString *)arg1 ;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(NSString *)calendarIdentifier;
@end

