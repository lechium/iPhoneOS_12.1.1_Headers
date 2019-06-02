/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSString;

@interface TSUDateFormatter : NSObject {

	NSString* mDateOnlyFormatString;
	NSString* mTimeOnlyFormatString;
	CFDateFormatterRef mFullDateFormatter;

}
+(id)supportedDateFormats;
+(id)supportedTimeFormats;
+(id)datePortionOfDateTimeFormatString:(id)arg1 ;
+(id)timePortionOfDateTimeFormatString:(id)arg1 ;
+(id)defaultDateTimeFormat;
+(unsigned long long)p_DateTimeSplitLocationInFormatString:(id)arg1 ;
+(id)dateFormatStringSpecialSymbols;
+(id)shortMonthNamesForNonCachedCurrentLocale;
-(id)fullDateString:(id)arg1 ;
-(id)appropriateOutputFormatStringForInputFormatString:(id)arg1 ;
-(id)stringFromDate:(id)arg1 format:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end
