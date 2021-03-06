/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@interface EKPersistentAlarm : EKPersistentObject
+(id)defaultPropertiesToLoad;
+(id)relations;
-(void)setExternalID:(id)arg1 ;
-(void)setProximity:(long long)arg1 ;
-(id)semanticIdentifier;
-(id)snoozedAlarms;
-(id)calendarItemOwner;
-(void)setAcknowledgedDate:(id)arg1 ;
-(id)acknowledgedDate;
-(void)setCalendarItemOwner:(id)arg1 ;
-(long long)alarmType;
-(void)setAlarmType:(long long)arg1 ;
-(BOOL)isDefaultAlarm;
-(id)calendarOwner;
-(void)setCalendarOwner:(id)arg1 ;
-(void)setDefaultAlarm:(BOOL)arg1 ;
-(void)setSnoozedAlarms:(id)arg1 ;
-(void)setRelativeOffset:(id)arg1 ;
-(id)relativeOffset;
-(id)externalID;
-(id)absoluteDate;
-(id)structuredLocation;
-(void)setStructuredLocation:(id)arg1 ;
-(void)setAbsoluteDate:(id)arg1 ;
-(long long)proximity;
-(int)entityType;
-(id)originalAlarm;
-(void)setOriginalAlarm:(id)arg1 ;
-(id)externalData;
-(void)setExternalData:(id)arg1 ;
-(id)UUID;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUUID:(id)arg1 ;
-(id)location;
-(void)setLocation:(id)arg1 ;
@end

