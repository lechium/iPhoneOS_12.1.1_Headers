/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSComponent.h>

@class NSString;

@interface ICSTimeZone : ICSComponent {

	id _systemTimeZone;

}

@property (nonatomic,retain) NSString * tzid; 
+(id)timeZoneWithSystemTimeZoneName:(id)arg1 ;
+(BOOL)_isTimeZone:(id)arg1 pseudoDSTForDate:(id)arg2 ;
+(id)blocksAfterDate:(id)arg1 untilDate:(id)arg2 forTimeZone:(id)arg3 ;
+(long long)matchTypeForSubarray:(id)arg1 inTZChangeArray:(id)arg2 ;
+(id)quickTimeZoneNames;
+(id)slowTimeZoneNames;
+(BOOL)perfectMatchForSubarray:(id)arg1 inTZChangeArray:(id)arg2 ;
+(id)name;
-(id)initWithTimeZone:(id)arg1 fromDate:(id)arg2 options:(int)arg3 ;
-(id)getNSTimeZone:(id)arg1 ;
-(id)_previousDSTTransitionForDate:(id)arg1 timezone:(id)arg2 ;
-(id)initWithSystemTimeZone:(id)arg1 ;
-(id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)getNSTimeZoneFromDate:(id)arg1 toDate:(id)arg2 ;
-(BOOL)isEqualToNSTimeZone:(id)arg1 forDate:(id)arg2 ;
-(id)initWithSystemTimeZone:(id)arg1 fromDate:(id)arg2 options:(int)arg3 ;
-(NSString *)tzid;
-(void)setTzid:(NSString *)arg1 ;
-(id)systemTimeZoneForDate:(id)arg1 ;
@end

