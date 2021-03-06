/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSDate;

@interface CUIKUserActivityCalendarDate : CUIKUserActivity {

	NSDate* _date;
	unsigned long long _view;

}

@property (nonatomic,readonly) NSDate * date;                        //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) unsigned long long view;              //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) BOOL isTomorrow; 
-(id)initWithDate:(id)arg1 view:(unsigned long long)arg2 calendar:(id)arg3 ;
-(id)initWithDate:(id)arg1 view:(unsigned long long)arg2 ;
-(void)updateActivity:(id)arg1 ;
-(BOOL)isTomorrow;
-(id)dictionary;
-(unsigned long long)view;
-(NSDate *)date;
-(id)initWithDictionary:(id)arg1 ;
@end

