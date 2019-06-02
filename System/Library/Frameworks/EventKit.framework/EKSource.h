/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class EKAvailabilityCache, NSDate, NSString, NSSet, NSNumber, CDBSourceConstraints;

@interface EKSource : EKObject {

	EKAvailabilityCache* _availabilityCache;
	BOOL _isFacebook;
	BOOL _snoozeAlarmRequiresDetach;
	NSDate* _timeOfLastExternalIdentificationCache;
	NSString* _cachedHost;
	long long _cachedPort;
	NSSet* _cachedOwnerAddresses;

}

@property (nonatomic,readonly) BOOL hasOwnerEmailAddress; 
@property (nonatomic,retain) NSDate * timeOfLastExternalIdentificationCache;                   //@synthesize timeOfLastExternalIdentificationCache=_timeOfLastExternalIdentificationCache - In the implementation block
@property (nonatomic,retain) NSString * cachedHost;                                            //@synthesize cachedHost=_cachedHost - In the implementation block
@property (assign,nonatomic) long long cachedPort;                                             //@synthesize cachedPort=_cachedPort - In the implementation block
@property (nonatomic,retain) NSSet * cachedOwnerAddresses;                                     //@synthesize cachedOwnerAddresses=_cachedOwnerAddresses - In the implementation block
@property (assign,nonatomic) int flags; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,readonly) NSSet * allCalendars; 
@property (nonatomic,readonly) EKAvailabilityCache * availabilityCache; 
@property (nonatomic,readonly) int displayOrderForNewCalendar; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) BOOL isFacebookSource; 
@property (nonatomic,readonly) BOOL supportsCalendarCreation; 
@property (nonatomic,readonly) BOOL supportsReminderActions; 
@property (nonatomic,copy) NSNumber * defaultAlarmOffset; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * creatorBundleID; 
@property (nonatomic,copy) NSString * creatorCodeSigningIdentity; 
@property (assign,nonatomic) BOOL onlyCreatorCanModify; 
@property (nonatomic,readonly) BOOL wantsCommentPromptWhenDeclining; 
@property (assign,nonatomic) long long preferredEventPrivateValue; 
@property (assign,nonatomic) long long strictestEventPrivateValue; 
@property (nonatomic,readonly) NSString * serverHost; 
@property (nonatomic,readonly) long long serverPort; 
@property (nonatomic,readonly) NSSet * ownerAddresses; 
@property (assign,nonatomic) BOOL wasMigrated; 
@property (nonatomic,retain) NSString * sourceIdentifier; 
@property (assign,nonatomic) long long sourceType; 
@property (nonatomic,retain) NSString * constraintsDescriptionPath; 
@property (assign,nonatomic) BOOL allowsTasks; 
@property (assign,nonatomic) BOOL allowsEvents; 
@property (assign,nonatomic) BOOL allowsCalendarAddDeleteModify; 
@property (assign,nonatomic) BOOL supportsSharedCalendars; 
@property (assign,nonatomic) BOOL supportsAlarmAcknowledgedDate; 
@property (assign,nonatomic) BOOL supportsPrivateEvents; 
@property (assign,nonatomic) BOOL prohibitsPrivateEventsWithAttendees; 
@property (assign,nonatomic) BOOL requiresSamePrivacyLevelAcrossRecurrenceSeries; 
@property (assign,nonatomic) BOOL supportsAvailabilityRequests; 
@property (assign,nonatomic) BOOL supportsIgnoringEventsInAvailabilityRequests; 
@property (assign,nonatomic) BOOL supportsLocationDirectorySearches; 
@property (assign,nonatomic) BOOL allowsProposeNewTime; 
@property (assign,nonatomic) BOOL prohibitsICSImport; 
@property (assign,nonatomic) BOOL isFacebook;                                                  //@synthesize isFacebook=_isFacebook - In the implementation block
@property (assign,nonatomic) BOOL prohibitsDetachmentOnCommentChange; 
@property (assign,nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence; 
@property (assign,nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence; 
@property (assign,nonatomic) BOOL prohibitsYearlyRecurrenceInterval; 
@property (assign,nonatomic) BOOL usesSelfAttendee; 
@property (assign,nonatomic) BOOL snoozeAlarmRequiresDetach;                                   //@synthesize snoozeAlarmRequiresDetach=_snoozeAlarmRequiresDetach - In the implementation block
@property (assign,nonatomic) unsigned long long lastSyncError; 
@property (nonatomic,retain) NSDate * lastSyncStartDate; 
@property (nonatomic,retain) NSDate * lastSyncEndDate; 
@property (nonatomic,readonly) BOOL syncs; 
@property (nonatomic,readonly) BOOL isSyncing; 
@property (nonatomic,readonly) BOOL supportsJunkReporting; 
@property (nonatomic,readonly) BOOL supportsPhoneNumbers; 
@property (nonatomic,readonly) CDBSourceConstraints * constraints; 
@property (nonatomic,readonly) NSSet * calendars; 
+(Class)frozenClass;
+(BOOL)isWeakRelationship;
+(long long)_calEventPrivacyLevelToEKPrivacyLevel:(int)arg1 ;
+(int)_ekPrivacyLevelToCalEventPrivacyLevel:(long long)arg1 ;
+(id)sourceWithEventStore:(id)arg1 ;
-(int)flags;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)sourceIdentifier;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(BOOL)supportsJunkReporting;
-(BOOL)supportsReminderActions;
-(BOOL)allowsProposeNewTime;
-(BOOL)hasOwnerEmailAddress;
-(BOOL)requiresSamePrivacyLevelAcrossRecurrenceSeries;
-(BOOL)prohibitsDetachmentOnCommentChange;
-(BOOL)snoozeAlarmRequiresDetach;
-(long long)strictestEventPrivateValue;
-(EKAvailabilityCache *)availabilityCache;
-(void)setAllowsEvents:(BOOL)arg1 ;
-(int)preferredEventPrivateValueRaw;
-(void)setPreferredEventPrivateValueRaw:(int)arg1 ;
-(int)strictestEventPrivateValueRaw;
-(void)setStrictestEventPrivateValueRaw:(int)arg1 ;
-(BOOL)flag:(int)arg1 ;
-(void)setFlag:(int)arg1 value:(BOOL)arg2 ;
-(void)_countCalendarItemsOfCalType:(int)arg1 resultHandler:(/*^block*/id)arg2 ;
-(NSDate *)lastSyncStartDate;
-(void)_cacheExternalIdentification;
-(void)_cacheExternalIdentificationIfNeeded;
-(void)setPreferredEventPrivateValue:(long long)arg1 ;
-(void)setStrictestEventPrivateValue:(long long)arg1 ;
-(NSNumber *)defaultAlarmOffset;
-(void)setDefaultAlarmOffset:(NSNumber *)arg1 ;
-(NSString *)constraintsDescriptionPath;
-(void)setConstraintsDescriptionPath:(NSString *)arg1 ;
-(NSString *)creatorCodeSigningIdentity;
-(void)setCreatorCodeSigningIdentity:(NSString *)arg1 ;
-(BOOL)onlyCreatorCanModify;
-(void)setOnlyCreatorCanModify:(BOOL)arg1 ;
-(BOOL)wasMigrated;
-(void)setWasMigrated:(BOOL)arg1 ;
-(BOOL)usesSelfAttendee;
-(void)setUsesSelfAttendee:(BOOL)arg1 ;
-(void)setAllowsTasks:(BOOL)arg1 ;
-(void)setAllowsCalendarAddDeleteModify:(BOOL)arg1 ;
-(void)setSupportsSharedCalendars:(BOOL)arg1 ;
-(BOOL)supportsAlarmAcknowledgedDate;
-(void)setSupportsAlarmAcknowledgedDate:(BOOL)arg1 ;
-(void)setSupportsPrivateEvents:(BOOL)arg1 ;
-(void)setProhibitsPrivateEventsWithAttendees:(BOOL)arg1 ;
-(void)setRequiresSamePrivacyLevelAcrossRecurrenceSeries:(BOOL)arg1 ;
-(void)setSupportsAvailabilityRequests:(BOOL)arg1 ;
-(void)setSupportsIgnoringEventsInAvailabilityRequests:(BOOL)arg1 ;
-(void)setSupportsLocationDirectorySearches:(BOOL)arg1 ;
-(void)setAllowsProposeNewTime:(BOOL)arg1 ;
-(void)setProhibitsICSImport:(BOOL)arg1 ;
-(void)setProhibitsDetachmentOnCommentChange:(BOOL)arg1 ;
-(void)countCalendarItemsWithResultHandler:(/*^block*/id)arg1 ;
-(void)countCalendarItemsOfType:(unsigned long long)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)setLastSyncError:(unsigned long long)arg1 ;
-(void)setLastSyncStartDate:(NSDate *)arg1 ;
-(void)setLastSyncEndDate:(NSDate *)arg1 ;
-(BOOL)wantsCommentPromptWhenDeclining;
-(BOOL)syncs;
-(NSDate *)timeOfLastExternalIdentificationCache;
-(void)setTimeOfLastExternalIdentificationCache:(NSDate *)arg1 ;
-(NSString *)cachedHost;
-(void)setCachedHost:(NSString *)arg1 ;
-(long long)cachedPort;
-(void)setCachedPort:(long long)arg1 ;
-(NSSet *)cachedOwnerAddresses;
-(void)setCachedOwnerAddresses:(NSSet *)arg1 ;
-(void)setIsFacebook:(BOOL)arg1 ;
-(void)setSnoozeAlarmRequiresDetach:(BOOL)arg1 ;
-(void)setCreatorBundleID:(NSString *)arg1 ;
-(NSString *)creatorBundleID;
-(long long)serverPort;
-(BOOL)prohibitsMultipleDaysInMonthlyRecurrence;
-(void)setProhibitsMultipleDaysInMonthlyRecurrence:(BOOL)arg1 ;
-(BOOL)prohibitsMultipleMonthsInYearlyRecurrence;
-(void)setProhibitsMultipleMonthsInYearlyRecurrence:(BOOL)arg1 ;
-(BOOL)prohibitsYearlyRecurrenceInterval;
-(void)setProhibitsYearlyRecurrenceInterval:(BOOL)arg1 ;
-(NSSet *)ownerAddresses;
-(BOOL)isFacebookSource;
-(NSString *)externalID;
-(id)readWriteCalendarsForEntityType:(unsigned long long)arg1 ;
-(BOOL)supportsSharedCalendars;
-(BOOL)allowsCalendarAddDeleteModify;
-(BOOL)supportsCalendarCreation;
-(int)displayOrderForNewCalendar;
-(BOOL)supportsPhoneNumbers;
-(BOOL)supportsLocationDirectorySearches;
-(BOOL)supportsAvailabilityRequests;
-(BOOL)supportsPrivateEvents;
-(long long)preferredEventPrivateValue;
-(id)calendarsForEntityType:(unsigned long long)arg1 ;
-(BOOL)prohibitsPrivateEventsWithAttendees;
-(NSDate *)lastSyncEndDate;
-(unsigned long long)lastSyncError;
-(BOOL)isFacebook;
-(BOOL)prohibitsICSImport;
-(NSSet *)allCalendars;
-(BOOL)allowsEvents;
-(BOOL)supportsIgnoringEventsInAvailabilityRequests;
-(BOOL)allowsTasks;
-(void)setFlags:(int)arg1 ;
-(BOOL)isSyncing;
-(NSString *)serverHost;
-(BOOL)remove:(id*)arg1 ;
-(BOOL)commit:(id*)arg1 ;
-(NSSet *)calendars;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(CDBSourceConstraints *)constraints;
-(long long)sourceType;
-(void)setSourceType:(long long)arg1 ;
-(BOOL)disabled;
@end

