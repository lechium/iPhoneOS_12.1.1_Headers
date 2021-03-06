/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimerUI/MobileTimerUI-Structs.h>
#import <MobileTimerUI/MTUIDateLabel.h>

@class NSCalendar, NSDate;

@interface MTUIDigitalClockLabel : MTUIDateLabel {

	NSCalendar* _calendar;
	NSDate* _baseDate;
	long long _hour;
	long long _minute;

}
-(void)resetFontSizes;
-(void)refreshUI;
-(void)forceSetHour:(long long)arg1 minute:(long long)arg2 ;
-(void)significantTimeChange:(id)arg1 ;
-(BOOL)setHour:(long long)arg1 minute:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

