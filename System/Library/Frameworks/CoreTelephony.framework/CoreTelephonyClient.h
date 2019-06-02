/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreTelephony/CoreTelephony-Structs.h>
@class NSXPCConnection, NSXPCListenerEndpoint, CoreTelephonyClientDelegateProxy, NSError;

@interface CoreTelephonyClient : NSObject {

	id _delegate;
	NSXPCConnection* _connection;
	queue* _xpcQueue;
	queue* _userQueue;
	NSXPCListenerEndpoint* _endpoint;
	CoreTelephonyClientDelegateProxy* _delegateProxy;
	NSError* _reconnectError;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) queue* xpcQueue;                                               //@synthesize xpcQueue=_xpcQueue - In the implementation block
@property (assign,nonatomic) queue* userQueue;                                              //@synthesize userQueue=_userQueue - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * endpoint;                              //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) CoreTelephonyClientDelegateProxy * delegateProxy;              //@synthesize delegateProxy=_delegateProxy - In the implementation block
@property (nonatomic,retain) NSError * reconnectError;                                      //@synthesize reconnectError=_reconnectError - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                            //@synthesize delegate=_delegate - In the implementation block
-(id)synchronousProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setPacketContextActiveByServiceType:(id)arg1 connectionType:(int)arg2 active:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)getConnectionAvailability:(id)arg1 connectionType:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)getActiveConnections:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getConnectionState:(id)arg1 connectionType:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)getDataStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getNATTKeepAliveOverCell:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)private_setPacketContextActiveByServiceType:(id)arg1 connectionType:(int)arg2 active:(BOOL)arg3 ;
-(id)private_getConnectionAvailability:(id)arg1 connectionType:(int)arg2 error:(id*)arg3 ;
-(id)private_getActiveConnections:(id)arg1 error:(id*)arg2 ;
-(id)private_getConnectionState:(id)arg1 connectionType:(int)arg2 error:(id*)arg3 ;
-(id)private_getDataStatus:(id)arg1 error:(id*)arg2 ;
-(unsigned)private_getNATTKeepAliveOverCell:(id)arg1 error:(id*)arg2 ;
-(void)resetAPNSettings:(/*^block*/id)arg1 ;
-(void)setInternationalDataAccessStatus:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)getInternationalDataAccessStatus:(/*^block*/id)arg1 ;
-(void)setSupportDynamicDataSimSwitchOnBBCall:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSupportDynamicDataSimSwitchOnBBCall:(/*^block*/id)arg1 ;
-(id)getPacketContextCount:(unsigned*)arg1 ;
-(void)isTetheringEditingSupported:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCurrentDataSubscriptionContext:(/*^block*/id)arg1 ;
-(void)getPreferredDataSubscriptionContext:(/*^block*/id)arg1 ;
-(id)setPacketContextActiveByServiceTypeForPreferredDataContext:(int)arg1 active:(BOOL)arg2 ;
-(id)resetAPNSettings;
-(id)getConnectionAvailability:(id)arg1 connectionType:(int)arg2 error:(id*)arg3 ;
-(id)getConnectionAvailabilityForPreferredDataContext:(int)arg1 error:(id*)arg2 ;
-(id)getActiveConnections:(id)arg1 error:(id*)arg2 ;
-(id)getActiveConnectionsForPreferredDataContext:(id*)arg1 ;
-(id)getConnectionStateForPreferredDataContext:(int)arg1 error:(id*)arg2 ;
-(id)getDataStatusForPreferredDataContext:(id*)arg1 ;
-(unsigned)getNATTKeepAliveOverCell:(id)arg1 error:(id*)arg2 ;
-(unsigned)getNATTKeepAliveOverCellForPreferredDataContext:(id*)arg1 ;
-(BOOL)isTetheringEditingSupported:(id)arg1 error:(id*)arg2 ;
-(void)setWiFiCallingSettingPreferences:(id)arg1 key:(id)arg2 value:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getWiFiCallingSettingPreferences:(id)arg1 key:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)getWiFiCallingSettingPreferences:(id)arg1 key:(id)arg2 error:(id*)arg3 ;
-(id)setWiFiCallingSettingPreferences:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(void)copyEmergencyMode:(/*^block*/id)arg1 ;
-(void)refreshCellMonitor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyCellInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyCellId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyLocationAreaCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)copyPublicCellId:(id)arg1 error:(id*)arg2 ;
-(void)isEmergencyNumber:(id)arg1 number:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)isEmergencyNumberWithWhitelistIncluded:(id)arg1 number:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)shouldShowUserWarningWhenDialingCallOnContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCallCapabilities:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getOperatorMultiPartyCallCountMaximum:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)getCallCapabilities:(id)arg1 error:(id*)arg2 ;
-(id)getOperatorMultiPartyCallCountMaximum:(id)arg1 error:(id*)arg2 ;
-(id)copyCarrierBundleValue:(id)arg1 keyHierarchy:(id)arg2 bundleType:(id)arg3 error:(id*)arg4 ;
-(void)getSmsReadyState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSmscAddress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)getSmsReadyState:(id)arg1 error:(id*)arg2 ;
-(id)getSmscAddress:(id)arg1 error:(id*)arg2 ;
-(void)copyCarrierBundleValue:(id)arg1 key:(id)arg2 bundleType:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)copyCarrierBundleValue:(id)arg1 keyHierarchy:(id)arg2 bundleType:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)copyCarrierBundleValueWithDefault:(id)arg1 key:(id)arg2 bundleType:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)copyCarrierBundleValueWithDefault:(id)arg1 keyHierarchy:(id)arg2 bundleType:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)copyCarrierBundleLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyCarrierBookmarks:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyCarrierBundleVersion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isAttachApnSettingAllowed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)context:(id)arg1 modifyAttachApnSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)copyBundleVersion:(id)arg1 bundleType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)context:(id)arg1 getCarrierBundleValue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)copyCarrierBundleLocation:(id)arg1 error:(id*)arg2 ;
-(BOOL)isAttachApnSettingAllowed:(id)arg1 error:(id*)arg2 ;
-(id)context:(id)arg1 modifyAttachApnSettings:(id)arg2 ;
-(id)context:(id)arg1 getAttachApnSettings:(id*)arg2 ;
-(id)copyBundleVersion:(id)arg1 bundleType:(id)arg2 error:(id*)arg3 ;
-(void)checkRadioBootHealth:(/*^block*/id)arg1 ;
-(BOOL)supportsPlanProvisioning:(id)arg1 carrierDescriptors:(id)arg2 smdpUrl:(id)arg3 iccidPrefix:(id)arg4 ;
-(void)addPlanWith:(id)arg1 request:(id)arg2 appName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getSIMStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSIMTrayStatus:(/*^block*/id)arg1 ;
-(void)copyMobileEquipmentInfo:(/*^block*/id)arg1 ;
-(void)copyFirmwareUpdateInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copySIMIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyMobileSubscriberIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)context:(id)arg1 isProtectedIdentitySupported:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)createEncryptedIdentity:(id)arg1 identity:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)evaluateMobileSubscriberIdentity:(id)arg1 identity:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)copyMobileSubscriberCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getMobileSubscriberHomeCountryList:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyLastKnownMobileSubscriberCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyMobileSubscriberNetworkCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyGid1:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyGid2:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchSIMLockValue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveSIMLockValue:(id)arg1 enabled:(BOOL)arg2 pin:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)unlockPIN:(id)arg1 pin:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)unlockPUK:(id)arg1 puk:(id)arg2 newPin:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)changePIN:(id)arg1 oldPin:(id)arg2 newPin:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getRemainingPINAttemptCount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getRemainingPUKAttemptCount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSimLabel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getShortLabel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyLabel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLabel:(id)arg1 label:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDefaultVoice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setActiveUserDataSelection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateUICCAuthenticationInfo:(id)arg1 authParams:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)promptForSIMUnlock:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)SIMUnlockProcedureDidComplete;
-(void)authenticate:(id)arg1 request:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)getSIMTrayStatusOrError:(id*)arg1 ;
-(id)copySIMIdentity:(id)arg1 error:(id*)arg2 ;
-(id)copyMobileSubscriberIdentity:(id)arg1 error:(id*)arg2 ;
-(BOOL)context:(id)arg1 isProtectedIdentitySupported:(id)arg2 error:(id*)arg3 ;
-(id)context:(id)arg1 getEncryptedIdentity:(id)arg2 error:(id*)arg3 ;
-(id)context:(id)arg1 evaluateMobileSubscriberIdentity:(id)arg2 ;
-(id)copyMobileSubscriberCountryCode:(id)arg1 error:(id*)arg2 ;
-(id)copyMobileSubscriberIsoCountryCode:(id)arg1 error:(id*)arg2 ;
-(long long)isEsimFor:(id)arg1 error:(id*)arg2 ;
-(id)copyLastKnownMobileSubscriberCountryCode:(id)arg1 error:(id*)arg2 ;
-(id)copyMobileSubscriberNetworkCode:(id)arg1 error:(id*)arg2 ;
-(id)copyGid1:(id)arg1 error:(id*)arg2 ;
-(id)copyGid2:(id)arg1 error:(id*)arg2 ;
-(id)fetchSIMLockValue:(id)arg1 error:(id*)arg2 ;
-(void)saveSIMLockValue:(id)arg1 enabled:(BOOL)arg2 pin:(id)arg3 error:(id*)arg4 ;
-(void)unlockPIN:(id)arg1 pin:(id)arg2 error:(id*)arg3 ;
-(void)unlockPUK:(id)arg1 puk:(id)arg2 newPin:(id)arg3 error:(id*)arg4 ;
-(void)changePIN:(id)arg1 oldPin:(id)arg2 newPin:(id)arg3 error:(id*)arg4 ;
-(id)getRemainingPINAttemptCount:(id)arg1 error:(id*)arg2 ;
-(id)getRemainingPUKAttemptCount:(id)arg1 error:(id*)arg2 ;
-(id)getSimLabel:(id)arg1 error:(id*)arg2 ;
-(id)copyLabel:(id)arg1 error:(id*)arg2 ;
-(void)setLabel:(id)arg1 label:(id)arg2 error:(id*)arg3 ;
-(void)setDefaultVoice:(id)arg1 error:(id*)arg2 ;
-(void)setActiveUserDataSelection:(id)arg1 error:(id*)arg2 ;
-(id)setAllowedToLaunchSimUnlockDuringBuddy:(BOOL)arg1 ;
-(id)getUserAuthToken:(id)arg1 error:(id*)arg2 ;
-(void)refreshUserAuthToken:(id)arg1 error:(id*)arg2 ;
-(id)getDescriptorsForDomain:(long long)arg1 error:(id*)arg2 ;
-(id)getPublicSignalStrength:(id)arg1 error:(id*)arg2 ;
-(id)getDataMode:(id)arg1 error:(id*)arg2 ;
-(void)isPNRSupported:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)issuePNRRequest:(id)arg1 pnrReqType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getPNRContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isPNRSupported:(id)arg1 outError:(id*)arg2 ;
-(id)getPNRContext:(id)arg1 outError:(id*)arg2 ;
-(void)context:(id)arg1 canSetCapability:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)context:(id)arg1 getCapability:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)context:(id)arg1 getSystemCapabilities:(id*)arg2 ;
-(id)getPhoneServicesDeviceList:(id*)arg1 ;
-(id)getPhoneServicesDeviceInfo:(id*)arg1 ;
-(void)context:(id)arg1 addPhoneServicesDevice:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)context:(id)arg1 removePhoneServicesDevice:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)context:(id)arg1 setCapability:(id)arg2 enabled:(BOOL)arg3 with:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)context:(id)arg1 getSystemCapabilitiesWithCompletion:(/*^block*/id)arg2 ;
-(id)context:(id)arg1 recheckPhoneServicesAccountStatus:(id)arg2 ;
-(void)getPhoneServicesDeviceListWithCompletion:(/*^block*/id)arg1 ;
-(void)getPhoneServicesDeviceInfoWithCompletion:(/*^block*/id)arg1 ;
-(id)context:(id)arg1 addPhoneServicesDevice:(id)arg2 ;
-(id)context:(id)arg1 removePhoneServicesDevice:(id)arg2 ;
-(void)getSubscriptionInfo:(/*^block*/id)arg1 ;
-(id)getSimLessContexts:(id*)arg1 ;
-(long long)getDualSimCapability:(id*)arg1 ;
-(void)getDescriptorsForDomain:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyRegistrationStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyRegistrationDisplayStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyServingPlmn:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyLastKnownMobileCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyMobileNetworkCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyIsInHomeCountry:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyIsDataAttached:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyOperatorName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyLocalizedOperatorName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyRadioAccessTechnology:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyWirelessTechnology:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyAbbreviatedOperatorName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRatSelection:(id)arg1 selection:(id)arg2 preferred:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)copyBandInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBandInfo:(id)arg1 bands:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getSignalStrengthInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getVoiceLinkQualityMetric:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getEnhancedVoiceLinkQualityMetric:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyRejectCauseCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyRegistrationAgentStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getIMSRegistrationStatus:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyRegistrationIMSTransportInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMaxDataRate:(id)arg1 rate:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)getMaxDataRate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSupportedDataRates:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchNetworkList:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyNetworkList:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)automaticallySelectNetwork:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)selectNetwork:(id)arg1 network:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)copyNetworkSelection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isNetworkSelectionMenuAvailable:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyNetworkSelectionMode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyNetworkSelectionState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyNetworkSelectionInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isNetworkReselectionNeeded:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getVoicemailInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyPriVersion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUIConfiguredApns:(id)arg1 apns:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getUIConfiguredApns:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetUIConfiguredApns:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getConfiguredApns:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deletePersonalWallet:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)listPersonalWallets:(id*)arg1 ;
-(void)fetchCallWaitingValue:(id)arg1 callClass:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveCallWaitingValue:(id)arg1 callClass:(int)arg2 enabled:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchCallForwardingValue:(id)arg1 reason:(int)arg2 callClass:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)saveCallForwardingValue:(id)arg1 value:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)isUnconditionalCallForwardingActive:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCallBarringValue:(id)arg1 facility:(int)arg2 callClass:(int)arg3 password:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)saveCallBarringValue:(id)arg1 facility:(int)arg2 callClass:(int)arg3 enabled:(BOOL)arg4 password:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)fetchConnectedLinePresentationValue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCallingLinePresentationValue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchConnectedLineIdRestrictionValue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCallingLineIdRestrictionValue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveCallingLineIdRestrictionValue:(id)arg1 restrictionValue:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)selectPhonebook:(id)arg1 forPhonebookName:(int)arg2 withPassword:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)savePhonebookEntry:(id)arg1 atIndex:(int)arg2 withContactName:(id)arg3 contactNumber:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)fetchPhonebook:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPhonebookEntryWithCompletion:(id)arg1 atIndex:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)getPhonebookEntryCountWithCompletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPhoneNumberWithCompletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_initializeConnection_sync;
-(void)_registerNotificationsForDelegate_sync;
-(void)_registerNotificationsForDelegate_sync:(/*^block*/id)arg1 ;
-(void)_registerForNotifications_sync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)proxyWithErrorHandler_sync:(/*^block*/id)arg1 ;
-(void)_setReconnectError_sync:(id)arg1 ;
-(void)_ensureConnectionSetup_sync:(BOOL)arg1 ;
-(void)_connect_sync;
-(void)_ensureConnectionSetup_sync;
-(void)ping_sync:(/*^block*/id)arg1 ;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 listenerEndpoint:(id)arg2 ;
-(void)getSimLessContextsWithCallback:(/*^block*/id)arg1 ;
-(void)getActiveContextsWithCallback:(/*^block*/id)arg1 ;
-(queue*)userQueue;
-(void)setUserQueue:(queue*)arg1 ;
-(CoreTelephonyClientDelegateProxy *)delegateProxy;
-(void)setDelegateProxy:(CoreTelephonyClientDelegateProxy *)arg1 ;
-(NSError *)reconnectError;
-(void)setReconnectError:(NSError *)arg1 ;
-(id)copyRegistrationStatus:(id)arg1 error:(id*)arg2 ;
-(id)copyRegistrationDisplayStatus:(id)arg1 error:(id*)arg2 ;
-(id)copyMobileCountryCode:(id)arg1 error:(id*)arg2 ;
-(id)copyMobileNetworkCode:(id)arg1 error:(id*)arg2 ;
-(id)isNetworkSelectionMenuAvailable:(id)arg1 error:(id*)arg2 ;
-(id)copyNetworkSelectionInfo:(id)arg1 error:(id*)arg2 ;
-(id)getUIConfiguredApns:(id)arg1 error:(id*)arg2 ;
-(id)getConfiguredApns:(id)arg1 error:(id*)arg2 ;
-(id)deletePersonalWallet:(id)arg1 ;
-(id)fetchCallWaitingValue:(id)arg1 callClass:(int)arg2 ;
-(id)fetchCallForwardingValue:(id)arg1 reason:(int)arg2 callClass:(int)arg3 ;
-(id)fetchCallBarringValue:(id)arg1 facility:(int)arg2 callClass:(int)arg3 password:(id)arg4 ;
-(id)fetchConnectedLinePresentationValue:(id)arg1 ;
-(id)fetchCallingLinePresentationValue:(id)arg1 ;
-(id)fetchConnectedLineIdRestrictionValue:(id)arg1 ;
-(id)fetchCallingLineIdRestrictionValue:(id)arg1 ;
-(id)saveCallWaitingValue:(id)arg1 callClass:(int)arg2 enabled:(BOOL)arg3 ;
-(id)saveCallForwardingValue:(id)arg1 value:(id)arg2 ;
-(id)saveCallBarringValue:(id)arg1 facility:(int)arg2 callClass:(int)arg3 enabled:(BOOL)arg4 password:(id)arg5 ;
-(id)saveCallingLineIdRestrictionValue:(id)arg1 restrictionValue:(int)arg2 ;
-(id)getPhonebookEntry:(id)arg1 atIndex:(int)arg2 error:(id*)arg3 ;
-(int)getPhonebookEntryCount:(id)arg1 error:(id*)arg2 ;
-(id)getMobileEquipmentInfoFor:(id)arg1 error:(id*)arg2 ;
-(id)getPreferredDataSubscriptionContextSync:(id*)arg1 ;
-(id)setPacketContextActiveByServiceType:(id)arg1 connectionType:(int)arg2 active:(BOOL)arg3 ;
-(BOOL)isPhoneNumberCredentialValid:(id)arg1 outError:(id*)arg2 ;
-(id)getConnectionState:(id)arg1 connectionType:(int)arg2 error:(id*)arg3 ;
-(id)proxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)ping:(/*^block*/id)arg1 ;
-(id)getActiveContexts:(id*)arg1 ;
-(BOOL)isEmergencyNumber:(id)arg1 number:(id)arg2 error:(id*)arg3 ;
-(BOOL)isEmergencyNumberWithWhitelistIncluded:(id)arg1 number:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldShowUserWarningWhenDialingCallOnContext:(id)arg1 error:(id*)arg2 ;
-(id)getDataStatus:(id)arg1 error:(id*)arg2 ;
-(id)copyCarrierBundleValue:(id)arg1 key:(id)arg2 bundleType:(id)arg3 error:(id*)arg4 ;
-(id)getCurrentDataSubscriptionContextSync:(id*)arg1 ;
-(void)copyMobileCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)copyCarrierBundleValueWithDefault:(id)arg1 keyHierarchy:(id)arg2 bundleType:(id)arg3 error:(id*)arg4 ;
-(id)getSubscriptionInfoWithError:(id*)arg1 ;
-(id)copyCarrierBundleValueWithDefault:(id)arg1 key:(id)arg2 bundleType:(id)arg3 error:(id*)arg4 ;
-(void)setVoLTEAudioCodec:(id)arg1 codecInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)getPhoneNumber:(id)arg1 error:(id*)arg2 ;
-(id)context:(id)arg1 getCarrierBundleValue:(id)arg2 error:(id*)arg3 ;
-(id)setInternationalDataAccessStatus:(BOOL)arg1 ;
-(id)copyCarrierBundleVersion:(id)arg1 error:(id*)arg2 ;
-(id)context:(id)arg1 canSetCapability:(id)arg2 allowed:(BOOL*)arg3 with:(id*)arg4 ;
-(id)context:(id)arg1 getCapability:(id)arg2 status:(BOOL*)arg3 with:(id*)arg4 ;
-(id)context:(id)arg1 setCapability:(id)arg2 enabled:(BOOL)arg3 with:(id)arg4 ;
-(BOOL)getInternationalDataAccessStatusSync:(id*)arg1 ;
-(BOOL)getSupportDynamicDataSimSwitchOnBBCallSync:(id*)arg1 ;
-(id)setSupportDynamicDataSimSwitchOnBBCall:(BOOL)arg1 ;
-(id)getMobileEquipmentInfo:(id*)arg1 ;
-(id)getMobileSubscriberHomeCountryList:(id)arg1 error:(id*)arg2 ;
-(id)getShortLabel:(id)arg1 error:(id*)arg2 ;
-(id)getIMSRegistrationStatus:(id)arg1 error:(id*)arg2 ;
-(id)getRejectCauseCode:(id)arg1 error:(id*)arg2 ;
-(id)getSupportedDataRates:(id)arg1 error:(id*)arg2 ;
-(long long)getMaxDataRate:(id)arg1 error:(id*)arg2 ;
-(id)setMaxDataRate:(id)arg1 rate:(long long)arg2 ;
-(id)_connection;
-(id)getSIMStatus:(id)arg1 error:(id*)arg2 ;
-(id)copyRadioAccessTechnology:(id)arg1 error:(id*)arg2 ;
-(id)getLocalizedOperatorName:(id)arg1 error:(id*)arg2 ;
-(void)getRatSelection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)getSignalStrengthInfo:(id)arg1 error:(id*)arg2 ;
-(void)setEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(queue*)xpcQueue;
-(void)setXpcQueue:(queue*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
@end

