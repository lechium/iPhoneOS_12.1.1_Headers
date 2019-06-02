/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASChangedCollectionLeaf.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <DAEAS/DADataElement.h>

@class ASTimeZone, NSNumber, NSString, NSArray, NSDate, ASLocation, ASEventUID, ASRecurrence, NSCalendarDate;

@interface ASEvent : ASChangedCollectionLeaf <NSSecureCoding, DADataElement> {

	BOOL _bodyTruncated;
	BOOL _doNotSendBody;
	BOOL _calculateNextStatusAsIfMeetingRequest;
	BOOL _shouldUpdateStatus;
	BOOL _cachedOrganizerIsSelf;
	BOOL _haveCheckedOrganizerEmail;
	BOOL _isAttendeeUpdateOnly;
	BOOL _isDTStampUpdateOnly;
	int _meetingResponseToEmailAbout;
	void* _calEvent;
	ASTimeZone* _timeZone;
	NSNumber* _allDayEvent;
	NSString* _body;
	NSNumber* _busyStatus;
	NSArray* _categories;
	NSDate* _dTStamp;
	NSDate* _endTime;
	ASLocation* _location;
	NSNumber* _meetingStatus;
	NSString* _organizerEmail;
	NSString* _organizerName;
	NSNumber* _reminderMinsBefore;
	NSNumber* _sensitivity;
	NSString* _subject;
	NSDate* _startTime;
	NSArray* _from;
	NSNumber* _disallowNewTimeProposal;
	NSString* _onlineMeetingExternalLink;
	NSDate* _tombstoneEndTime;
	ASEventUID* _eventUID;
	NSArray* _attendees;
	NSArray* _attendeesPendingDeletion;
	ASRecurrence* _recurrence;
	NSArray* _exceptions;
	NSNumber* _responseRequested;
	NSNumber* _responseType;
	NSDate* _appointmentReplyTime;
	NSArray* _attachments;
	NSString* _responseComment;
	NSDate* _proposedStartTime;
	NSDate* _proposedEndTime;

}

@property (assign,nonatomic) int meetingResponseToEmailAbout;                          //@synthesize meetingResponseToEmailAbout=_meetingResponseToEmailAbout - In the implementation block
@property (assign,nonatomic) BOOL calculateNextStatusAsIfMeetingRequest;               //@synthesize calculateNextStatusAsIfMeetingRequest=_calculateNextStatusAsIfMeetingRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateStatus;                                  //@synthesize shouldUpdateStatus=_shouldUpdateStatus - In the implementation block
@property (assign,nonatomic) BOOL cachedOrganizerIsSelf;                               //@synthesize cachedOrganizerIsSelf=_cachedOrganizerIsSelf - In the implementation block
@property (assign,nonatomic) BOOL haveCheckedOrganizerEmail;                           //@synthesize haveCheckedOrganizerEmail=_haveCheckedOrganizerEmail - In the implementation block
@property (assign,nonatomic) BOOL isAttendeeUpdateOnly;                                //@synthesize isAttendeeUpdateOnly=_isAttendeeUpdateOnly - In the implementation block
@property (assign,nonatomic) BOOL isDTStampUpdateOnly;                                 //@synthesize isDTStampUpdateOnly=_isDTStampUpdateOnly - In the implementation block
@property (nonatomic,readonly) int calAttendeeStatus; 
@property (nonatomic,readonly) int calAttendeePendingStatus; 
@property (nonatomic,readonly) int CalCalendarItemStatus; 
@property (nonatomic,readonly) NSCalendarDate * startDateForCalFramework; 
@property (nonatomic,readonly) NSCalendarDate * endDateForCalFramework; 
@property (nonatomic,readonly) NSString * uidForCalFramework; 
@property (nonatomic,retain) NSDate * exceptionDate; 
@property (nonatomic,readonly) BOOL hasOccurrenceInTheFuture; 
@property (nonatomic,readonly) BOOL isTombstoneEndTimeInFuture; 
@property (assign,nonatomic) int meetingResponseForEmail; 
@property (assign,nonatomic) void* calEvent;                                           //@synthesize calEvent=_calEvent - In the implementation block
@property (nonatomic,retain) ASTimeZone * timeZone;                                    //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSNumber * allDayEvent;                                   //@synthesize allDayEvent=_allDayEvent - In the implementation block
@property (nonatomic,retain) NSString * body;                                          //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) BOOL bodyTruncated;                                       //@synthesize bodyTruncated=_bodyTruncated - In the implementation block
@property (nonatomic,retain) NSNumber * busyStatus;                                    //@synthesize busyStatus=_busyStatus - In the implementation block
@property (nonatomic,retain) NSArray * categories;                                     //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSDate * dTStamp;                                         //@synthesize dTStamp=_dTStamp - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                                         //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) ASLocation * location;                                    //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSNumber * meetingStatus;                                 //@synthesize meetingStatus=_meetingStatus - In the implementation block
@property (nonatomic,retain) NSString * organizerEmail;                                //@synthesize organizerEmail=_organizerEmail - In the implementation block
@property (nonatomic,retain) NSString * organizerName;                                 //@synthesize organizerName=_organizerName - In the implementation block
@property (nonatomic,retain) NSNumber * reminderMinsBefore;                            //@synthesize reminderMinsBefore=_reminderMinsBefore - In the implementation block
@property (nonatomic,retain) NSNumber * sensitivity;                                   //@synthesize sensitivity=_sensitivity - In the implementation block
@property (nonatomic,retain) NSString * subject;                                       //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                       //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSArray * from;                                           //@synthesize from=_from - In the implementation block
@property (nonatomic,retain) NSNumber * disallowNewTimeProposal;                       //@synthesize disallowNewTimeProposal=_disallowNewTimeProposal - In the implementation block
@property (nonatomic,retain) NSString * onlineMeetingExternalLink;                     //@synthesize onlineMeetingExternalLink=_onlineMeetingExternalLink - In the implementation block
@property (nonatomic,retain) NSDate * tombstoneEndTime;                                //@synthesize tombstoneEndTime=_tombstoneEndTime - In the implementation block
@property (nonatomic,retain) ASEventUID * eventUID;                                    //@synthesize eventUID=_eventUID - In the implementation block
@property (assign,nonatomic) BOOL doNotSendBody;                                       //@synthesize doNotSendBody=_doNotSendBody - In the implementation block
@property (nonatomic,retain) NSArray * attendees;                                      //@synthesize attendees=_attendees - In the implementation block
@property (nonatomic,retain) NSArray * attendeesPendingDeletion;                       //@synthesize attendeesPendingDeletion=_attendeesPendingDeletion - In the implementation block
@property (nonatomic,retain) ASRecurrence * recurrence;                                //@synthesize recurrence=_recurrence - In the implementation block
@property (nonatomic,retain) NSArray * exceptions;                                     //@synthesize exceptions=_exceptions - In the implementation block
@property (nonatomic,retain) NSNumber * responseRequested;                             //@synthesize responseRequested=_responseRequested - In the implementation block
@property (nonatomic,retain) NSNumber * responseType;                                  //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,retain) NSDate * appointmentReplyTime;                            //@synthesize appointmentReplyTime=_appointmentReplyTime - In the implementation block
@property (nonatomic,retain) NSArray * attachments;                                    //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,retain) NSString * responseComment;                               //@synthesize responseComment=_responseComment - In the implementation block
@property (nonatomic,retain) NSDate * proposedStartTime;                               //@synthesize proposedStartTime=_proposedStartTime - In the implementation block
@property (nonatomic,retain) NSDate * proposedEndTime;                                 //@synthesize proposedEndTime=_proposedEndTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
+(id)calendarItemExternalRepClasses;
+(id)attendeeExternalRepClasses;
+(void)setSystemTimeZoneNameForUnitTests:(id)arg1 ;
+(id)eventWithCalEvent:(void*)arg1 serverID:(id)arg2 account:(id)arg3 ;
+(void)_setFakeDTStampDateForUnitTests:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSNumber *)responseType;
-(void)setFrom:(NSArray *)arg1 ;
-(NSArray *)from;
-(void)setCategories:(NSArray *)arg1 ;
-(ASRecurrence *)recurrence;
-(void)setRecurrence:(ASRecurrence *)arg1 ;
-(NSArray *)exceptions;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(NSArray *)attendees;
-(NSString *)responseComment;
-(void)setResponseComment:(NSString *)arg1 ;
-(void)setAttendees:(NSArray *)arg1 ;
-(ASEventUID *)eventUID;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)setEventUID:(ASEventUID *)arg1 ;
-(NSDate *)proposedStartTime;
-(void)setProposedStartTime:(NSDate *)arg1 ;
-(NSDate *)proposedEndTime;
-(void)setProposedEndTime:(NSDate *)arg1 ;
-(NSNumber *)responseRequested;
-(void)setResponseRequested:(NSNumber *)arg1 ;
-(NSString *)uidForCalFramework;
-(NSDate *)exceptionDate;
-(void)setExceptionDate:(NSDate *)arg1 ;
-(void)setSensitivity:(NSNumber *)arg1 ;
-(void)postProcessApplicationData;
-(void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(BOOL)saveToCalendarWithExistingRecord:(void*)arg1 intoCalendar:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(BOOL)loadCalRecordForAccount:(id)arg1 ;
-(BOOL)deleteFromCalendar;
-(BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(void)setLocalItem:(void*)arg1 ;
-(BOOL)loadLocalItemWithAccount:(id)arg1 ;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)deleteFromContainer:(void*)arg1 ;
-(long long)dataclass;
-(void)loadClientIDs;
-(BOOL)bodyTruncated;
-(void)setBodyTruncated:(BOOL)arg1 ;
-(NSNumber *)allDayEvent;
-(id)_transformedStartDateForCalFramework:(id)arg1 ;
-(BOOL)cachedOrganizerIsSelfWithAccount:(id)arg1 ;
-(void)setAllDayEvent:(NSNumber *)arg1 ;
-(id)uidGeneratedIfNecessaryWithLocalEvent:(void*)arg1 ;
-(void)setReminderMinsBefore:(NSNumber *)arg1 ;
-(void)setOrganizerName:(NSString *)arg1 ;
-(void)setOrganizerEmail:(NSString *)arg1 ;
-(id)_transformedStartDateForActiveSync:(id)arg1 isFloating:(BOOL)arg2 ;
-(id)_transformedEndDateForActiveSync:(id)arg1 isFloating:(BOOL)arg2 ;
-(void)setAttendeesPendingDeletion:(NSArray *)arg1 ;
-(void)setExceptions:(NSArray *)arg1 ;
-(void)setBusyStatus:(NSNumber *)arg1 ;
-(void)setDTStamp:(NSDate *)arg1 ;
-(void)setMeetingStatus:(NSNumber *)arg1 ;
-(void)_determineSelfnessWithLocalEvent:(void*)arg1 forAccount:(id)arg2 ;
-(void)_loadAttributesFromCalEvent:(void*)arg1 forAccount:(id)arg2 ;
-(void)setCalEvent:(void*)arg1 ;
-(id)initWithCalEvent:(void*)arg1 serverID:(id)arg2 account:(id)arg3 ;
-(void*)calEvent;
-(int)_nextEventStatusWithOldStatus:(int)arg1 meetingClassType:(int)arg2 account:(id)arg3 ;
-(int)_nextAttendeeStatusWithOldStatus:(int)arg1 meetingClassType:(int)arg2 account:(id)arg3 ;
-(int)calAttendeeStatus;
-(int)_meetingResponseShouldUseEmail:(BOOL)arg1 shouldFilterForEmail:(BOOL)arg2 ;
-(NSDate *)dTStamp;
-(BOOL)_bailIfNotNewestDataForAccount:(id)arg1 ;
-(NSCalendarDate *)endDateForCalFramework;
-(id)timeZoneForCalFramework;
-(NSNumber *)reminderMinsBefore;
-(NSString *)organizerName;
-(NSString *)organizerEmail;
-(NSCalendarDate *)startDateForCalFramework;
-(id)timeZoneNameForCalFramework;
-(NSString *)onlineMeetingExternalLink;
-(BOOL)shouldUseInMemoryAttendeesForAccount:(id)arg1 numExistingAttendees:(unsigned long long)arg2 ;
-(int)_nextEventStatusWithOldStatus:(int)arg1 account:(id)arg2 ;
-(void*)copySelfAttendeeGeneratedIfNecessaryWithLocalEvent:(void*)arg1 forAccount:(id)arg2 ;
-(int)_nextAttendeeStatusWithOldStatus:(int)arg1 account:(id)arg2 ;
-(NSDate *)appointmentReplyTime;
-(void)_sanitizeLocalExceptionsForAccount:(id)arg1 ;
-(void)setOnlineMeetingExternalLink:(NSString *)arg1 ;
-(void)setAppointmentReplyTime:(NSDate *)arg1 ;
-(void)setDisallowNewTimeProposal:(NSNumber *)arg1 ;
-(void)informExceptionsThatParentIsReadyForAccount:(id)arg1 ;
-(BOOL)doNotSendBody;
-(NSNumber *)busyStatus;
-(int)CalCalendarItemStatus;
-(NSNumber *)meetingStatus;
-(BOOL)verifyExternalIds;
-(id)_transformedEndDateForCalFramework:(id)arg1 startDate:(id)arg2 ;
-(BOOL)hasOccurrenceInTheFuture;
-(BOOL)saveServerIDAndUidToCalendar;
-(NSArray *)attendeesPendingDeletion;
-(BOOL)_selfIsMoreCorrectThanOtherEvent:(id)arg1 account:(id)arg2 ;
-(id)eventByMergingInLosingEvent:(id)arg1 account:(id)arg2 ;
-(int)calAttendeePendingStatus;
-(int)meetingResponseForAccount:(id)arg1 ;
-(int)selfAttendeeMeetingResponse;
-(int)meetingResponseForEmail;
-(void)setMeetingResponseForEmail:(int)arg1 ;
-(BOOL)setCalEventWithExistingRecord:(void*)arg1 intoCalendar:(void*)arg2 ;
-(BOOL)saveDetachedEventsWithExistingRecord:(void*)arg1 intoCalendar:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(BOOL)fillOutMissingExternalIds;
-(id)fullOrganizerString;
-(BOOL)purgeAttendeesPendingDeletion;
-(BOOL)isTombstoneEndTimeInFuture;
-(void)setCalculateNextStatusAsIfMeetingRequest:(BOOL)arg1 ;
-(void)setShouldUpdateStatus:(BOOL)arg1 ;
-(id)eventByMergingInEvent:(id)arg1 account:(id)arg2 ;
-(NSNumber *)disallowNewTimeProposal;
-(NSDate *)tombstoneEndTime;
-(void)setTombstoneEndTime:(NSDate *)arg1 ;
-(void)setDoNotSendBody:(BOOL)arg1 ;
-(int)meetingResponseToEmailAbout;
-(void)setMeetingResponseToEmailAbout:(int)arg1 ;
-(BOOL)calculateNextStatusAsIfMeetingRequest;
-(BOOL)shouldUpdateStatus;
-(BOOL)cachedOrganizerIsSelf;
-(void)setCachedOrganizerIsSelf:(BOOL)arg1 ;
-(BOOL)haveCheckedOrganizerEmail;
-(void)setHaveCheckedOrganizerEmail:(BOOL)arg1 ;
-(BOOL)isAttendeeUpdateOnly;
-(void)setIsAttendeeUpdateOnly:(BOOL)arg1 ;
-(BOOL)isDTStampUpdateOnly;
-(void)setIsDTStampUpdateOnly:(BOOL)arg1 ;
-(void)setResponseType:(NSNumber *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(NSNumber *)sensitivity;
-(ASTimeZone *)timeZone;
-(void)setTimeZone:(ASTimeZone *)arg1 ;
-(ASLocation *)location;
-(NSArray *)categories;
-(void)setLocation:(ASLocation *)arg1 ;
@end

