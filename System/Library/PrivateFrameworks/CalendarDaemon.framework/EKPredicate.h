/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CADPredicate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSTimeZone, NSDate, NSArray, NSSet;

@interface EKPredicate : CADPredicate <NSSecureCoding> {

	NSString* _uuid;
	NSTimeZone* _timeZone;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _calendars;
	NSString* _title;
	NSSet* _restrictedCalendarRowIDs;

}

@property (nonatomic,retain) NSDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSArray * calendars;                           //@synthesize calendars=_calendars - In the implementation block
@property (nonatomic,retain) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSSet * restrictedCalendarRowIDs;              //@synthesize restrictedCalendarRowIDs=_restrictedCalendarRowIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCalendars:(id)arg1 ;
-(NSSet *)restrictedCalendarRowIDs;
-(void)setRestrictedCalendarRowIDs:(NSSet *)arg1 ;
-(void)setCalendars:(NSArray *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)predicateFormat;
-(NSArray *)calendars;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end
