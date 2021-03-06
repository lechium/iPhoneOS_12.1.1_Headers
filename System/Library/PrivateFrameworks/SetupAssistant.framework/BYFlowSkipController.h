/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class FLFollowUpController;

@interface BYFlowSkipController : NSObject {

	BOOL _basicFunctionalityEnabled_doNotAccessDirectly;
	FLFollowUpController* _followUpController_doNotAccessDirectly;
	id<NSObject> _wfNetworkChangeObserver;

}
+(id)_modelSpecificLocalizedStringKeyForKey:(id)arg1 ;
+(id)_supportedIdentifiers;
+(id)_actionForFlowSkipIdentifiers:(id)arg1 ;
+(id)_localizedStringListingFlowSkipIdentifiers:(id)arg1 ;
+(id)_flowSkipIdentifierFromActionIdentifier:(id)arg1 ;
+(id)_actionIdentifierForFlowSkipIdentifier:(id)arg1 ;
+(id)_localizedStringListOfStrings:(id)arg1 ;
+(void)_setShouldObserveChangeFromNetworkSSID:(id)arg1 ;
+(BOOL)_shouldObserveChangeFromNetworkSSID:(id*)arg1 ;
+(void)_clearShouldObserveChangeFromNetworkSSID;
+(id)flowSkipIdentifiersFromFollowUpAction:(id)arg1 ;
+(id)sharedInstance;
-(id)_followUpController;
-(void)observeFinishSetupTriggers;
-(BOOL)_isBasicFunctionalityEnabled;
-(id)_pendingFollowUpItem;
-(void)_postFollowUpItemForFlowSkipIdentifiers:(id)arg1 previousFollowUpItem:(id)arg2 forceNotification:(BOOL)arg3 ;
-(long long)_timeIntervalForNotifications;
-(long long)_timeIntervalForFrequentNotifications;
-(BOOL)_isPasscodeSet;
-(void)_persistInitialNetworkSSID;
-(void)registerActivities;
-(void)_repostExistingFollowUpItemForcingNotification:(id)arg1 ;
-(long long)_timeoutForWifiObserver;
-(long long)_timeIntervalForWifiObserver;
-(void)_regsiterWiFiObserverActivityWithNeedsActivity:(BOOL)arg1 handlerQueue:(id)arg2 ;
-(void)revisePendingFollowUps;
-(void)didSkipFlow:(id)arg1 ;
-(void)passcodeDidChange;
-(id)getFlowSkipIdentifiers;
-(void)setBasicFunctionalityEnabled:(BOOL)arg1 ;
-(void)cancelPendingFlows;
-(void)didCompleteFlow:(id)arg1 ;
-(id)init;
@end

