/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>

@interface CADTravelEventsPredicate : EKPredicate
+(BOOL)supportsSecureCoding;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)_fetchTravelEventsWithDatabase:(CalDatabase*)arg1 ;
-(id)defaultPropertiesToLoad;
-(id)initWithCalendarIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)predicateFormat;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
