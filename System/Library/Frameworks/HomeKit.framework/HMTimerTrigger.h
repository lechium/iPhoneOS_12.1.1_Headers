/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSDateComponents, NSDate, NSTimeZone, NSCalendar;

@interface HMTimerTrigger : HMTrigger <NSSecureCoding> {

	NSArray* _recurrences;
	NSString* _significantEvent;
	NSDateComponents* _significantEventOffset;
	NSDate* _fireDate;
	NSTimeZone* _timeZone;
	NSDateComponents* _recurrence;
	NSCalendar* _recurrenceCalendar;

}

@property (nonatomic,copy) NSDate * fireDate;                                               //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone;                                           //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,copy) NSDateComponents * recurrence;                                   //@synthesize recurrence=_recurrence - In the implementation block
@property (nonatomic,copy,readonly) NSString * significantEvent;                            //@synthesize significantEvent=_significantEvent - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * significantEventOffset;              //@synthesize significantEventOffset=_significantEventOffset - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recurrences;                                  //@synthesize recurrences=_recurrences - In the implementation block
@property (nonatomic,copy,readonly) NSCalendar * recurrenceCalendar;                        //@synthesize recurrenceCalendar=_recurrenceCalendar - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDateComponents *)recurrence;
-(void)setRecurrence:(NSDateComponents *)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_handleTriggerFired:(id)arg1 ;
-(void)_updateRecurrences:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateFireDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateTimeZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateSignificantEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateSignificantEventOffset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateRecurrence:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleScheduleChangedNotification:(id)arg1 ;
-(NSCalendar *)recurrenceCalendar;
-(id)initWithName:(id)arg1 significantEvent:(id)arg2 significantEventOffset:(id)arg3 recurrences:(id)arg4 ;
-(void)updateSignificantEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateSignificantEventOffset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrences:(id)arg4 ;
-(id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrence:(id)arg4 recurrenceCalendar:(id)arg5 ;
-(void)updateFireDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateRecurrences:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateRecurrence:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateTimeZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_registerNotificationHandlers;
-(void)setRecurrences:(NSArray *)arg1 ;
-(NSString *)significantEvent;
-(NSArray *)recurrences;
-(NSDateComponents *)significantEventOffset;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(void)setSignificantEventOffset:(NSDateComponents *)arg1 ;
-(id)_serializeForAdd;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFireDate:(NSDate *)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)fireDate;
@end

