/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICSDuration : NSObject <NSSecureCoding> {

	double _duration;

}
+(id)durationFromICSString:(id)arg1 ;
+(id)durationFromRFC2445UTF8String:(const char*)arg1 ;
+(id)generateDurationFromICSString:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(long long)minutes;
-(long long)seconds;
-(long long)days;
-(long long)hours;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(long long)weeks;
-(id)ICSStringWithOptions:(unsigned long long)arg1 ;
-(BOOL)isNegative;
-(id)initWithWeeks:(long long)arg1 days:(long long)arg2 hours:(long long)arg3 minutes:(long long)arg4 seconds:(long long)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timeInterval;
@end
