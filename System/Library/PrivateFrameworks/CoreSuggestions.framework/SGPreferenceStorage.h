/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SGPreferenceStorage : NSObject
+(void)resetAllPreferences;
+(long long)suggestionsLogLevel;
+(void)setShowPastEvents:(BOOL)arg1 ;
+(void)setAlwaysShowCancelledEvents:(BOOL)arg1 ;
+(void)updateBoolSettingKey:(id)arg1 withValue:(BOOL)arg2 ;
+(void)updateIntSettingKey:(id)arg1 withValue:(int)arg2 ;
+(void)setOnlyShowSignificantPseudoContacts:(BOOL)arg1 ;
+(void)setOnlyShowSignificantNLEvents:(BOOL)arg1 ;
+(long long)hashedSessionsLogging;
+(void)setHashedSessionsLogging:(int)arg1 ;
+(BOOL)showSuggestionsCalendar;
+(void)removeDeprecatedDefaults;
+(void)setMessagesToProcessImmediately:(long long)arg1 ;
+(void)setSyncHistoryToCloud:(BOOL)arg1 ;
+(void)setShowContactsFoundInMail:(BOOL)arg1 ;
+(void)setShowEventsFoundInMail:(BOOL)arg1 ;
+(void)setAllowGeocode:(BOOL)arg1 ;
+(void)setAllowAgeBasedPruning:(BOOL)arg1 ;
+(void)setUseMLModelForContacts:(BOOL)arg1 ;
+(void)setUseMLModelForContactSharing:(BOOL)arg1 ;
+(void)setContactSharingNegativeSamplingRate:(float)arg1 ;
+(void)setUseMLModelForSelfId:(BOOL)arg1 ;
+(void)setDetectStructuredEvents:(BOOL)arg1 ;
+(void)setDetectNLEvents:(BOOL)arg1 ;
+(void)setDetectContacts:(BOOL)arg1 ;
+(void)setFirstPartyCalendarAppIsInstalled:(BOOL)arg1 ;
+(void)setFirstPartyMailAppIsInstalled:(BOOL)arg1 ;
+(BOOL)hidePastEventsForTests;
+(void)setHidePastEventsForTests:(BOOL)arg1 ;
+(void)setShowCancelledEventsForTests:(BOOL)arg1 ;
+(void)setProactiveEnabledForTests:(BOOL)arg1 ;
+(void)setNLEventsDetectionEnabledForTests:(BOOL)arg1 ;
+(void)setStructuredEventsDetectionEnabledForTests:(BOOL)arg1 ;
+(void)setContactsDetectionEnabledForTests:(BOOL)arg1 ;
+(void)setShowContactsFoundInMailForTests:(BOOL)arg1 ;
+(void)setShowEventsFoundInMailForTests:(BOOL)arg1 ;
+(void)setAllowGeocodeForTests:(BOOL)arg1 ;
+(void)setSyncHistoryToCloudForTests:(BOOL)arg1 ;
+(void)setMessagesToProcessImmediatelyForTests:(long long)arg1 ;
+(void)setUseMLModelForSelfIdForTests:(BOOL)arg1 ;
+(id)defaultsForTests;
+(id)defaults;
+(BOOL)allowGeocode;
+(BOOL)detectStructuredEvents;
+(BOOL)alwaysShowCancelledEvents;
+(BOOL)showPastEvents;
+(BOOL)onlyShowSignificantNLEvents;
+(BOOL)shouldHarvestEvents;
+(BOOL)showContactsFoundInMail;
+(int)registerBlockOnSuggestionsSettingsChange:(/*^block*/id)arg1 ;
+(long long)messagesToProcessImmediately;
+(BOOL)allowAgeBasedPruning;
+(BOOL)detectContacts;
+(BOOL)showEventsFoundInMail;
+(void)setCloudKitPersistedState:(id)arg1 ;
+(id)cloudKitPersistedState;
+(BOOL)onlyShowSignificantPseudoContacts;
+(float)contactSharingNegativeSamplingRate;
+(BOOL)useMLModelForContactSharing;
+(BOOL)useMLModelForSelfId;
+(BOOL)useMLModelForContacts;
+(BOOL)detectNLEvents;
+(BOOL)syncHistoryToCloud;
@end

