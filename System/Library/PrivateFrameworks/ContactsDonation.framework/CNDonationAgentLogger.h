/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNDonationAgentLogger <NSObject>
@required
-(void)agentWillStart;
-(void)agentDidStart;
-(void)agentWillStop;
-(void)donationServiceWillStart;
-(void)donationServiceDidStart;
-(void)donationServiceWillStop;
-(void)maintenanceServiceWillStart;
-(void)maintenanceServiceDidStart;
-(void)maintenanceServiceWillStop;
-(void)beginRestorePersistedState;
-(void)endRestorePersistedState;
-(void)acceptingConnectionFromProcess:(int)arg1;
-(void)denyingRequestFromProcess:(int)arg1;
-(void)acceptingDonations:(id)arg1;
-(void)preExpiredDonations:(id)arg1;
-(void)agentWillHandleRequest:(SEL)arg1;
-(void)agentDidHandleRequest:(SEL)arg1;
-(void)featureNotEnabled:(SEL)arg1;
-(void)featureWillDisable;
-(void)featureDidDisable;
-(void)featureWillEnable;
-(void)featureDidEnable;
-(void)contactsChangedNotificationFoundName:(BOOL)arg1 nameChanged:(BOOL)arg2;
-(void)contactsChangedNotificationEmailAddressesChanged:(BOOL)arg1;
-(void)willDiscoverExtensions;
-(void)didDiscoverExtension:(id)arg1;
-(void)didDiscoverUnexpectedExtensionType:(id)arg1;
-(void)didDiscoverExtensions;
-(void)didFailToDiscoverExtensions:(id)arg1;
-(void)willLoadExtensionVersions;
-(void)willSaveExtensionVersions;
-(void)willRejectDonationIdentifier:(id)arg1;
-(void)didRejectDonationIdentifier:(id)arg1;
-(void)couldNotRejectUnknownDonationIdentifier:(id)arg1;
-(void)couldNotRejectDonationIdentifier:(id)arg1 error:(id)arg2;
-(void)willRejectClusterIdentifier:(id)arg1;
-(void)didRejectClusterIdentifier:(id)arg1;
-(void)couldNotRejectUnknownClusterIdentifier:(id)arg1;
-(void)couldNotRejectClusterIdentifier:(id)arg1 error:(id)arg2;
-(void)willListRejections;
-(void)didListRejections;
-(void)willRemoveAllRejections;
-(void)didRemoveAllRejections;
-(void)willRenewValues:(id)arg1 withDonor:(id)arg2;
-(void)didRenewValue:(id)arg1 untilDate:(id)arg2;
-(void)couldNotRenewBecauseNotADonorExtension:(id)arg1;
-(void)couldNotRenewBecauseDonorError:(id)arg1;
-(void)couldNotRenewBecauseLoadingError:(id)arg1;

@end

