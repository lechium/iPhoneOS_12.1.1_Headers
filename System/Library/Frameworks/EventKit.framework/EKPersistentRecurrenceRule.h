/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@interface EKPersistentRecurrenceRule : EKPersistentObject
+(id)defaultPropertiesToLoad;
+(id)relations;
-(id)cachedEndDate;
-(long long)firstDayOfTheWeek;
-(void)setFirstDayOfTheWeek:(long long)arg1 ;
-(id)endDate;
-(void)setSpecifier:(id)arg1 ;
-(id)specifier;
-(void)setEndDate:(id)arg1 ;
-(int)entityType;
-(unsigned long long)count;
-(id)UUID;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUUID:(id)arg1 ;
-(int)frequency;
-(void)setFrequency:(int)arg1 ;
-(void)setInterval:(long long)arg1 ;
-(long long)interval;
-(id)owner;
-(void)setOwner:(id)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
@end

