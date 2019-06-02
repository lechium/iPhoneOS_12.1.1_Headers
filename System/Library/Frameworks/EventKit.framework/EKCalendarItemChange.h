/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObjectChange.h>

@class EKObjectID, NSString;

@interface EKCalendarItemChange : EKObjectChange {

	EKObjectID* _calendarID;
	EKObjectID* _oldCalendarID;
	NSString* _externalID;
	NSString* _oldExternalID;

}

@property (nonatomic,readonly) EKObjectID * calendarID;                 //@synthesize calendarID=_calendarID - In the implementation block
@property (nonatomic,readonly) EKObjectID * oldCalendarID;              //@synthesize oldCalendarID=_oldCalendarID - In the implementation block
@property (nonatomic,readonly) NSString * externalID;                   //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) NSString * oldExternalID;                //@synthesize oldExternalID=_oldExternalID - In the implementation block
+(void)fetchCalendarItemChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchCalendarItemChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchCalendarItemChangesInCalendar:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)initWithChangeProperties:(id)arg1 ;
-(EKObjectID *)calendarID;
-(EKObjectID *)oldCalendarID;
-(NSString *)oldExternalID;
-(NSString *)externalID;
@end

