/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@interface EKPersistentCalendarItem : EKPersistentObject

@property (assign,getter=isDefaultAlarmRemoved,nonatomic) BOOL defaultAlarmRemoved; 
+(id)defaultPropertiesToLoad;
+(id)relations;
-(void)setUniqueID:(id)arg1 ;
-(id)uniqueID;
-(int)sequenceNumber;
-(void)setExternalID:(id)arg1 ;
-(id)externalModificationTag;
-(void)setExternalModificationTag:(id)arg1 ;
-(id)localStructuredData;
-(void)setLocalStructuredData:(id)arg1 ;
-(id)exceptionDates;
-(id)detachedItems;
-(void)setStructuredLocationWithoutPrediction:(id)arg1 ;
-(id)startTimeZoneName;
-(void)setStartTimeZoneName:(id)arg1 ;
-(id)endTimeZoneName;
-(void)setEndTimeZoneName:(id)arg1 ;
-(id)sharedItemCreatedByFirstName;
-(id)sharedItemCreatedByLastName;
-(id)sharedItemCreatedTimeZoneName;
-(void)setSharedItemCreatedTimeZoneName:(id)arg1 ;
-(id)sharedItemModifiedByFirstName;
-(id)sharedItemModifiedByLastName;
-(id)sharedItemModifiedTimeZoneName;
-(void)setSharedItemModifiedTimeZoneName:(id)arg1 ;
-(id)originalItem;
-(id)ekExceptionDates;
-(void)setEkExceptionDates:(id)arg1 ;
-(void)setDetachedItems:(id)arg1 ;
-(unsigned)modifiedProperties;
-(void)setModifiedProperties:(unsigned)arg1 ;
-(BOOL)hasNotes;
-(id)calendarScale;
-(void)setCalendarScale:(id)arg1 ;
-(void)removeRecurrenceRule:(id)arg1 ;
-(void)setSelfAttendee:(id)arg1 ;
-(void)setOrganizer:(id)arg1 ;
-(void)setSharedItemCreatedByDisplayName:(id)arg1 ;
-(void)setSharedItemCreatedByAddress:(id)arg1 ;
-(void)setSharedItemCreatedByFirstName:(id)arg1 ;
-(void)setSharedItemCreatedByLastName:(id)arg1 ;
-(void)setSharedItemCreatedDate:(id)arg1 ;
-(void)setSharedItemModifiedByDisplayName:(id)arg1 ;
-(void)setSharedItemModifiedByAddress:(id)arg1 ;
-(void)setSharedItemModifiedByFirstName:(id)arg1 ;
-(void)setSharedItemModifiedByLastName:(id)arg1 ;
-(void)setSharedItemModifiedDate:(id)arg1 ;
-(void)setOriginalItem:(id)arg1 ;
-(void)setExceptionDates:(id)arg1 ;
-(id)participationStatusModifiedDate;
-(void)setParticipationStatusModifiedDate:(id)arg1 ;
-(BOOL)isDefaultAlarmRemoved;
-(void)setDefaultAlarmRemoved:(BOOL)arg1 ;
-(void)setHasNotes:(BOOL)arg1 ;
-(BOOL)isPhantomMaster;
-(void)setPhantomMaster:(BOOL)arg1 ;
-(void)setHasRecurrenceRules:(BOOL)arg1 ;
-(void)setHasAttendees:(BOOL)arg1 ;
-(id)clientLocation;
-(id)lastModifiedDate;
-(id)notes;
-(void)setNotes:(id)arg1 ;
-(BOOL)isAllDay;
-(void)setAllDay:(BOOL)arg1 ;
-(id)organizer;
-(id)attendees;
-(BOOL)hasAttendees;
-(void)removeAttendee:(id)arg1 ;
-(void)setAttendees:(id)arg1 ;
-(id)externalID;
-(void)addAttendee:(id)arg1 ;
-(BOOL)hasRecurrenceRules;
-(id)selfAttendee;
-(id)travelStartLocation;
-(void)setTravelStartLocation:(id)arg1 ;
-(id)sharedItemModifiedByDisplayName;
-(id)sharedItemModifiedDate;
-(id)sharedItemCreatedByDisplayName;
-(id)sharedItemCreatedDate;
-(id)sharedItemModifiedByAddress;
-(id)sharedItemCreatedByAddress;
-(id)structuredLocationWithoutPrediction;
-(id)alarms;
-(void)setAlarms:(id)arg1 ;
-(id)recurrenceRules;
-(int)selfParticipantStatus;
-(void)setClientLocation:(id)arg1 ;
-(void)setRecurrenceRules:(id)arg1 ;
-(void)addRecurrenceRule:(id)arg1 ;
-(id)startDate;
-(id)creationDate;
-(void)setCreationDate:(id)arg1 ;
-(void)setStartDate:(id)arg1 ;
-(void)addAttachment:(id)arg1 ;
-(void)removeAttachment:(id)arg1 ;
-(void)setLastModifiedDate:(id)arg1 ;
-(void)removeAlarm:(id)arg1 ;
-(void)addAlarm:(id)arg1 ;
-(id)structuredData;
-(void)setStructuredData:(id)arg1 ;
-(id)externalData;
-(void)setExternalData:(id)arg1 ;
-(id)attachments;
-(void)setAttachments:(id)arg1 ;
-(id)UUID;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(int)arg1 ;
-(id)action;
-(int)priority;
-(void)setAction:(id)arg1 ;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(void)setUUID:(id)arg1 ;
-(id)startLocation;
-(void)setStartLocation:(id)arg1 ;
-(id)location;
-(void)setLocation:(id)arg1 ;
-(id)calendar;
-(void)setCalendar:(id)arg1 ;
-(int)sequence;
-(void)setSequence:(int)arg1 ;
-(void)setAppLink:(id)arg1 ;
-(id)appLink;
@end

