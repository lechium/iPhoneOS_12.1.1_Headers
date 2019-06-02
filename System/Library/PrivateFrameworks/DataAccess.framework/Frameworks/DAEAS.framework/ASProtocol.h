/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASProtocolCapabilities;

@interface ASProtocol : NSObject {

	ASProtocolCapabilities* _capabilities;

}

@property (nonatomic,retain) ASProtocolCapabilities * capabilities;              //@synthesize capabilities=_capabilities - In the implementation block
-(id)protocolVersion;
-(int)supportsMailboxSearch;
-(int)supportsEmailFlagging;
-(int)supportsDraftFolderSync;
-(BOOL)supportsUniqueServerId;
-(int)supportsConversations;
-(BOOL)useSmartMailTasks;
-(BOOL)useEventIdsInMeetingResponse;
-(BOOL)includeCommentInMeetingResponse;
-(BOOL)supportsProposeNewTime;
-(void)_setCapabilitiesVersion:(id)arg1 ;
-(id)_initWithVersion:(id)arg1 capabilitiesVersion:(id)arg2 ;
-(id)_requestLinePrefixWithTask:(id)arg1 ;
-(id)_usernameOnlyPortionOfUserString:(id)arg1 ;
-(BOOL)supportsSettingsCommand;
-(BOOL)supportsItemOperationsCommand;
-(BOOL)serverUpdatesAttendeeStatusOnEvents;
-(id)calendarConstraintsPath;
-(id)addressBookConstraintsPath;
-(BOOL)supportsNoteSyncing;
-(BOOL)supportsFreeBusyLookup;
-(id)initWithCachedVersion:(id)arg1 ;
-(BOOL)versionChangeRequiresAccountUpgrade:(id)arg1 ;
-(id)requestURLStringWithTask:(id)arg1 ;
-(BOOL)headerNeedsUserAgent;
-(BOOL)headerNeedsPolicyKey;
-(BOOL)headerNeedsProtocolVersion;
-(BOOL)commandStringNeedsSaveInSent;
-(BOOL)shouldUseWBXMLProvisioning;
-(BOOL)usesAirSyncBaseNamespace;
-(BOOL)sendAttendeeRole;
-(BOOL)shouldSendClassForFolderItemsSync;
-(BOOL)shouldSendFullContactInfo;
-(BOOL)requiresExplicitlyFalseGetChanges;
-(BOOL)useBooleanFolderItemsSyncDeletesAsMoves;
-(BOOL)sendEmailInWBXML;
-(BOOL)usesTopLevelStatusCodes;
-(BOOL)fetchAttachmentsWithItemOperations;
-(BOOL)allAttachmentsAreBase64ed;
-(BOOL)sendCalendarInfoInRecurrence;
-(BOOL)serverCreatesEventChangesForInvitations;
-(BOOL)allowsReminderOnCompletedTasks;
-(BOOL)sendFirstDayOfWeekInRecurrence;
-(BOOL)sendDeviceInfoOnProvision;
-(BOOL)sendUserAgentInDeviceInfo;
-(BOOL)supportsGALPhotos;
-(BOOL)supportsAttendeesInExceptions;
-(BOOL)sendEmailForMeetingInvitationAndResponse;
-(BOOL)processFullMeetingInvitationData;
-(BOOL)sendDTStamp;
-(BOOL)sendUID;
-(BOOL)useStructuredLocation;
-(BOOL)alwaysSendAttendeeRole;
-(BOOL)includeExceptionsInParent;
-(BOOL)useInstanceIdForException;
-(BOOL)useFloatingTimeForAllDayEvents;
-(BOOL)useEmptyRecurrence;
-(BOOL)useEmptyReminderMinutes;
-(BOOL)useEmptyLocation;
-(BOOL)syncSnoozeEvents;
-(BOOL)alwaysSendTimezone;
-(BOOL)supportsMailboxEnhancedSearch;
-(BOOL)supportsForwarderTracking;
-(BOOL)useEmptyAttendees;
-(id)initWithVersion:(id)arg1 ;
-(ASProtocolCapabilities *)capabilities;
-(void)setCapabilities:(ASProtocolCapabilities *)arg1 ;
-(id)init;
@end

