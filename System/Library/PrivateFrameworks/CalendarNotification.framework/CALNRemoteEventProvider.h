/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarNotification/CALNRemoteDataProvider.h>

@class NSMutableDictionary, NSArray;

@interface CALNRemoteEventProvider : CALNRemoteDataProvider {

	NSMutableDictionary* _alertRecordIDsToAlertInfos;
	NSMutableDictionary* _alertRecordIDsToRefreshTimes;
	NSArray* _suggestionAddedMessages;
	/*^block*/id _countOfSuggestedNotificationsToIgnoreBlock;
	/*^block*/id _reloadNotificationsBlock;
	/*^block*/id _requestHypothesisRefresh;
	/*^block*/id _cancelHypothesisRefreshRequest;
	/*^block*/id _ceaseTravelMonitoringEvent;
	/*^block*/id _sendTravelAdviceFeedback;

}

@property (nonatomic,copy) id countOfSuggestedNotificationsToIgnoreBlock;              //@synthesize countOfSuggestedNotificationsToIgnoreBlock=_countOfSuggestedNotificationsToIgnoreBlock - In the implementation block
@property (nonatomic,copy) id reloadNotificationsBlock;                                //@synthesize reloadNotificationsBlock=_reloadNotificationsBlock - In the implementation block
@property (nonatomic,copy) id requestHypothesisRefresh;                                //@synthesize requestHypothesisRefresh=_requestHypothesisRefresh - In the implementation block
@property (nonatomic,copy) id cancelHypothesisRefreshRequest;                          //@synthesize cancelHypothesisRefreshRequest=_cancelHypothesisRefreshRequest - In the implementation block
@property (nonatomic,copy) id ceaseTravelMonitoringEvent;                              //@synthesize ceaseTravelMonitoringEvent=_ceaseTravelMonitoringEvent - In the implementation block
@property (nonatomic,copy) id sendTravelAdviceFeedback;                                //@synthesize sendTravelAdviceFeedback=_sendTravelAdviceFeedback - In the implementation block
@property (nonatomic,readonly) id adviceReceivedBlock; 
@property (nonatomic,readonly) id authorizationChangedBlock; 
@property (nonatomic,readonly) id eventSignficantlyChangedBlock; 
+(id)logHandle;
+(id)_launchOptionsDirectionsModeForTransportType:(int)arg1 ;
+(id)_launchOptionsDirectionsModeForLocationRoutingMode:(long long)arg1 ;
+(BOOL)_date:(id)arg1 isWithinEightMinutesOfDate:(id)arg2 ;
+(BOOL)_alertHasTravelInformation:(id)arg1 ;
+(BOOL)_mayCeaseRouteMonitoringForAlertInfo:(id)arg1 ;
+(id)timeToLeaveStringForAlertInfo:(id)arg1 ;
+(id)userActivityUserInfoForEvent:(id)arg1 ;
+(id)_directionsModeForAlertInfo:(id)arg1 ;
+(BOOL)_shouldRequestReportAProblemAction;
+(long long)_spanForNewStatusWithEvent:(id)arg1 ;
+(BOOL)_timeToLeaveStateAlreadyDisplayedBasedOnHypothesis:(id)arg1 alertInfo:(id)arg2 date:(id)arg3 ;
+(double)requestHypothesisRefreshInterval;
-(void)handleDarwinNotification:(id)arg1 ;
-(id)sectionIdentifier;
-(void)fetchDataFromContext;
-(id)protectedItemForBulletinRecordID:(id)arg1 ;
-(BOOL)shouldWithdrawBulletin:(id)arg1 forItem:(id)arg2 ;
-(void)protectedRemoveBulletinForID:(id)arg1 ;
-(id)entityScheme;
-(id)bulletinRequestForAlertInfo:(id)arg1 ;
-(void)willPostBulletinForAlertInfo:(id)arg1 ;
-(void)protectedSaveBulletin:(id)arg1 forAlertInfo:(id)arg2 usingID:(id)arg3 ;
-(BOOL)shouldModfyBulletinForAlert:(id)arg1 ;
-(BOOL)shouldWithdrawBeforePostingBulletinForAlert:(id)arg1 ;
-(id)bulletinRequestWithCalendarNotification:(id)arg1 ;
-(id)titleStringForAlertInfo:(id)arg1 ;
-(id)messageStringForAlertInfo:(id)arg1 ;
-(id)viewActionForAlertInfo:(id)arg1 ;
-(id)supplementaryActionsForAlertInfo:(id)arg1 bulletin:(id)arg2 compactLayout:(BOOL)arg3 ;
-(id)defaultURLForAlertInfo:(id)arg1 ;
-(void)bulletinAcknowledgedWithResponse:(id)arg1 acknowledgeAlarm:(BOOL)arg2 extraActions:(/*^block*/id)arg3 ;
-(void)acknowledgeLocationAlertWithURL:(id)arg1 entityID:(id)arg2 ;
-(void)protectedAcknowledgeAlarm:(BOOL)arg1 forBulletinWithEntityID:(id)arg2 externalID:(id)arg3 extraActions:(/*^block*/id)arg4 ;
-(id)initWithNotificationFetchBlock:(/*^block*/id)arg1 ;
-(void)unalertedNotificationsReceived:(id)arg1 withNotificationReferences:(id)arg2 ;
-(void)notificationCountChanged:(id)arg1 ;
-(void)handleBTAJob:(id)arg1 named:(const char*)arg2 ;
-(id)adviceReceivedBlock;
-(id)eventSignficantlyChangedBlock;
-(id)authorizationChangedBlock;
-(void)setRequestHypothesisRefresh:(id)arg1 ;
-(void)setCancelHypothesisRefreshRequest:(id)arg1 ;
-(void)setCeaseTravelMonitoringEvent:(id)arg1 ;
-(void)setSendTravelAdviceFeedback:(id)arg1 ;
-(void)setCountOfSuggestedNotificationsToIgnoreBlock:(id)arg1 ;
-(id)cancelHypothesisRefreshRequest;
-(BOOL)allowsLocationAlerts;
-(void)_updateRefreshTimerForEventWithExternalURL:(id)arg1 ;
-(id)ceaseTravelMonitoringEvent;
-(void)_removeRefreshTimerForEventWithExternalURL:(id)arg1 ;
-(id)countOfSuggestedNotificationsToIgnoreBlock;
-(id)bulletinRequestWithSuggestionNotifications:(id)arg1 ;
-(id)_getContactIdentifierForIdentity:(id)arg1 ;
-(id)_getContactIdentifiersForAttendees:(id)arg1 includeBlock:(/*^block*/id)arg2 ;
-(id)_iconForDate:(id)arg1 calendar:(id)arg2 ;
-(void)_setEventRepresentationForAlertBulletin:(id)arg1 timeToLeaveString:(id)arg2 eventIfExists:(id)arg3 ;
-(id)_iconImageDataForDate:(id)arg1 calendar:(id)arg2 format:(int)arg3 ;
-(id)dateTimeStringForEventDate:(id)arg1 alwaysIncludeDate:(BOOL)arg2 allDayEvent:(BOOL)arg3 ;
-(id)_getDisplayNameForJunkIdentity:(id)arg1 ;
-(id)_expirationDateForEventInvitation:(id)arg1 ;
-(void)_setPropertiesOnBulletinRequest:(id)arg1 fromResourceChange:(id)arg2 contactIdentifier:(id*)arg3 ;
-(void)_logDisplayedSuggestionNotification:(id)arg1 ;
-(void)_setEventRepresentationForNotification:(id)arg1 bulletin:(id)arg2 ;
-(id)_getContactIdentifierForIdentity:(id)arg1 withStore:(id)arg2 ;
-(id)_getContactPredicateForIdentity:(id)arg1 ;
-(id)_expirationDateForResourceChange:(id)arg1 ;
-(id)directionsActionForAlertInfo:(id)arg1 ;
-(id)_conferenceCallActionWithAlertInfo:(id)arg1 ;
-(id)_snoozeOrReportAProblemActionForAlertInfo:(id)arg1 ;
-(id)_reportAProblemActionForAlertInfo:(id)arg1 ;
-(id)_snoozeActionWithAlertInfo:(id)arg1 ;
-(id)locationStringForAlertInfo:(id)arg1 ;
-(id)_resourceChangeURIFromBulletin:(id)arg1 ;
-(void)notifyHypothesizerNotificationForAlertInfo:(id)arg1 dismissed:(unsigned long long)arg2 ;
-(void)_trackDirectionsEngagedForTTLAlertForAlertInfo:(id)arg1 ;
-(void)_setParticipantStatus:(long long)arg1 recordID:(id)arg2 ;
-(void)_deleteCalendarItemForRecordID:(id)arg1 span:(long long)arg2 ;
-(void)_reportJunkCalendarItemForRecordID:(id)arg1 ;
-(void)respond:(BOOL)arg1 toCalendarInvite:(id)arg2 isJunk:(BOOL)arg3 ;
-(void)_acknowledgeSuggestedEventForRecordID:(id)arg1 accept:(BOOL)arg2 ;
-(unsigned long long)_ttlEventTrackerAlertTypeForDate:(id)arg1 hypothesis:(id)arg2 ;
-(unsigned long long)_ttlEventTrackerTransportTypeForGEOTransportType:(int)arg1 ;
-(unsigned long long)_ttlEventTrackerETATypeForHypothesis:(id)arg1 ;
-(id)geoDestinationForAlertInfo:(id)arg1 ;
-(void)performCalendarItemForRecordID:(id)arg1 action:(/*^block*/id)arg2 ;
-(void)_logSuggestionNotificationResponse:(id)arg1 ;
-(void)_receivedHypothesis:(id)arg1 forEventWithExternalURL:(id)arg2 ;
-(void)_clearTravelAdvisoryHypotheses;
-(void)_clearHypothesisAndUpdateBulletinForAlertInfo:(id)arg1 ;
-(void)_updateNotificationTypeForAlertInfo:(id)arg1 withDate:(id)arg2 ;
-(void)_recordUpcomingEventAlertSuppression;
-(void)_recordDisplayOfInitialTimeToLeaveAlertWithDate:(id)arg1 event:(id)arg2 hypothesis:(id)arg3 wasFoundInApps:(BOOL)arg4 ;
-(id)sendTravelAdviceFeedback;
-(void)_refreshTimerFired:(id)arg1 ;
-(void)_setUpRefreshTimerAt:(id)arg1 forEventWithExternalURL:(id)arg2 ;
-(id)btaJobNameForEvent:(id)arg1 ;
-(id)requestHypothesisRefresh;
-(unsigned long long)_ttlEventTrackerTravelStateForHypothesisTravelState:(long long)arg1 ;
-(void)_recordDisplayOfInitialTimeToLeaveAlert;
-(id)reloadNotificationsBlock;
-(void)setReloadNotificationsBlock:(id)arg1 ;
-(void)_significantTimeChanged;
-(id)universalSectionIdentifier;
-(id)defaultSectionInfo;
-(id)sectionDisplayName;
-(id)sectionIcon;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(void)dataProviderDidLoad;
-(id)defaultSubsectionInfos;
-(id)displayNameForSubsectionID:(id)arg1 ;
-(BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2 ;
-(void)handleBulletinActionResponse:(id)arg1 ;
-(id)sortDescriptors;
@end
