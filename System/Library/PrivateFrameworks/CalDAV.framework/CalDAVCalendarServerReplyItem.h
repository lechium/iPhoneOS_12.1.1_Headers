/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalDAV/CalDAVItemWithRecurrenceChildren.h>

@class CoreDAVLeafItem;

@interface CalDAVCalendarServerReplyItem : CalDAVItemWithRecurrenceChildren {

	CoreDAVLeafItem* _attendee;

}

@property (nonatomic,retain) CoreDAVLeafItem * attendee;              //@synthesize attendee=_attendee - In the implementation block
-(void)setAttendee:(CoreDAVLeafItem *)arg1 ;
-(id)copyParseRules;
-(CoreDAVLeafItem *)attendee;
@end

