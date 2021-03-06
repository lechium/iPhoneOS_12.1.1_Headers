/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary, ACRemoteAccountStoreSession, ACAccount, NSArray;

@interface ACAccountStore : NSObject {

	NSString* _clientBundleID;
	NSObject*<OS_dispatch_queue> _replyQueue;
	id _daemonAccountStoreDidChangeObserver;
	NSMutableDictionary* _accountCache;
	ACRemoteAccountStoreSession* _remoteAccountStoreSession;

}

@property (nonatomic,readonly) ACAccount * ams_activeiCloudAccount; 
@property (nonatomic,readonly) ACAccount * ams_activeiTunesAccount; 
@property (nonatomic,readonly) NSArray * ams_iTunesAccounts; 
@property (nonatomic,readonly) ACAccount * ams_localiTunesAccount; 
@property (nonatomic,readonly) NSString * ams_mediaType; 
@property (nonatomic,retain) ACRemoteAccountStoreSession * remoteAccountStoreSession;              //@synthesize remoteAccountStoreSession=_remoteAccountStoreSession - In the implementation block
@property (readonly) NSString * effectiveBundleID;                                                 //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * accounts; 
+(id)_accountTypesCache;
+(id)ams_sharedAccountStoreForMediaType:(id)arg1 ;
+(id)ams_sharedAccountStore;
+(id)ams_sharedAccountStoreForProcessInfo:(id)arg1 ;
+(id)_secureTokenForIdentifier:(id)arg1 ;
+(id)_getSetGlobalCookiesForResponse:(id)arg1 ;
+(id)_getSetUserCookiesForResponse:(id)arg1 ;
+(id)ams_accountTypeIdentifierForMediaType:(id)arg1 ;
+(BOOL)canSaveAccountsOfAccountTypeIdentifier:(id)arg1 ;
+(long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1 ;
+(int)accountsWithAccountTypeIdentifierExist:(id)arg1 ;
-(id)aa_appleAccounts;
-(void)_performUpdateRequestWithAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)aa_appleAccountsWithCompletion:(/*^block*/id)arg1 ;
-(id)aa_appleAccountWithUsername:(id)arg1 ;
-(id)aa_accountsEnabledForDataclass:(id)arg1 ;
-(void)aa_registerAppleAccountWithHSA:(id)arg1 usingCookieHeaders:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)aa_updatePropertiesForAppleAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)aa_grandSlamAccountForiCloudAccount:(id)arg1 ;
-(void)aa_primaryAppleAccountWithCompletion:(/*^block*/id)arg1 ;
-(id)aa_primaryAppleAccount;
-(id)aa_appleAccountWithAltDSID:(id)arg1 ;
-(id)aa_grandSlamAccountForAltDSID:(id)arg1 ;
-(id)aa_authKitAccountForAltDSID:(id)arg1 ;
-(void)aa_registerAppleAccountWithHSA:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)aa_appleAccountType;
-(void)aa_registerAppleAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)aa_updatePropertiesForAppleAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)aa_recommendedAppleIDForAccountSignInWithTypeIdentifier:(id)arg1 ;
-(id)aa_primaryAppleAccountWithPreloadedDataclasses;
-(BOOL)aa_isUsingiCloud;
-(id)aa_appleAccountWithPersonID:(id)arg1 ;
-(id)accountsWithAccountType:(id)arg1 appleID:(id)arg2 ;
-(id)accountWithAppleID:(id)arg1 ;
-(id)_ss_accountTypeWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)_ss_IDMSAccountForAccount:(id)arg1 error:(id*)arg2 ;
-(id)_ss_iCloudAccountForAccount:(id)arg1 error:(id*)arg2 ;
-(id)_ss_appleAuthenticationAccountForAccount:(id)arg1 error:(id*)arg2 ;
-(id)_correspondingAccountWithAccountTypeIdentifier:(id)arg1 forAccount:(id)arg2 error:(id*)arg3 ;
-(id)_ss_iTunesAccountForAccount:(id)arg1 error:(id*)arg2 ;
-(id)ams_iTunesAccountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3 ;
-(id)ams_iTunesAccountWithUsername:(id)arg1 ;
-(id)ams_iTunesAccountWithAltDSID:(id)arg1 ;
-(id)ams_iTunesAccountWithDSID:(id)arg1 ;
-(NSArray *)ams_iTunesAccounts;
-(id)ams_saveAccount:(id)arg1 verifyCredentials:(BOOL)arg2 ;
-(id)ams_iTunesSandboxAccounts;
-(BOOL)ams_removeCookiesMatchingProperties:(id)arg1 error:(id*)arg2 ;
-(ACAccount *)ams_activeiTunesAccount;
-(ACAccount *)ams_localiTunesAccount;
-(ACAccount *)ams_activeiCloudAccount;
-(NSString *)ams_mediaType;
-(void)_createLocalAccount;
-(BOOL)_addUserCookiesForResponse:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
-(BOOL)_addGlobalCookiesForResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)ams_addCookiesForResponse:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
-(id)_alliTunesAccounts;
-(id)ams_secureTokenForAccount:(id)arg1 ;
-(BOOL)ams_setSecureToken:(id)arg1 forAccount:(id)arg2 error:(id*)arg3 ;
-(BOOL)ams_addCookiesForResponse:(id)arg1 request:(id)arg2 account:(id)arg3 error:(id*)arg4 ;
-(id)_allCommerceiTunesAccounts;
-(id)aida_AppleIDAuthenticationAccountType;
-(id)aida_AppleIDAuthenticationAccounts;
-(void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 force:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)aida_accountForPrimaryiCloudAccount;
-(id)aida_iCloudAccountMatchingAppleIDAuthAccount:(id)arg1 ;
-(id)_primaryiCloudAccount;
-(id)aida_accountForiCloudAccount:(id)arg1 ;
-(id)initWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2 ;
-(void)setRemoteAccountStoreSession:(ACRemoteAccountStoreSession *)arg1 ;
-(id)_connectionFailureError;
-(void)_saveAccount:(id)arg1 verify:(BOOL)arg2 dataclassActions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_unsanitizeError:(id)arg1 ;
-(id)_sanitizeOptionsDictionary:(id)arg1 ;
-(id)enabledDataclassesForAccount:(id)arg1 error:(id*)arg2 ;
-(id)provisionedDataclassesForAccount:(id)arg1 error:(id*)arg2 ;
-(void)notifyRemoteDevicesOfNewAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_removeObsoleteAccountsInternal:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeObsoleteOSXServerAccountForiOS:(id)arg1 ;
-(id)_createSMTPAccountForServerAccount:(id)arg1 ;
-(id)initWithRemoteEndpoint:(id)arg1 ;
-(void)accountsOnPairedDeviceWithAccountType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)insertAccountType:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeAccountType:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeAccount:(id)arg1 withDeleteSync:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)canSaveAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)allAccountTypes;
-(void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 error:(id*)arg4 ;
-(id)credentialForAccount:(id)arg1 bundleID:(id)arg2 ;
-(id)parentAccountForAccount:(id)arg1 ;
-(id)parentAccountForAccount:(id)arg1 error:(id*)arg2 ;
-(id)childAccountsForAccount:(id)arg1 ;
-(id)childAccountsForAccount:(id)arg1 error:(id*)arg2 ;
-(id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2 ;
-(id)provisionedDataclassesForAccount:(id)arg1 ;
-(id)supportedDataclassesForAccountType:(id)arg1 ;
-(id)syncableDataclassesForAccountType:(id)arg1 ;
-(id)accessKeysForAccountType:(id)arg1 ;
-(id)appPermissionsForAccountType:(id)arg1 ;
-(void)setPermissionGranted:(BOOL)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 ;
-(BOOL)permissionForAccountType:(id)arg1 ;
-(id)grantedPermissionsForAccountType:(id)arg1 ;
-(void)clearGrantedPermissionsForAccountType:(id)arg1 ;
-(id)typeIdentifierForDomain:(id)arg1 ;
-(id)dataclassActionsForAccountSave:(id)arg1 error:(id*)arg2 ;
-(id)dataclassActionsForAccountDeletion:(id)arg1 ;
-(BOOL)isPerformingDataclassActionsForAccount:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasAccountWithDescription:(id)arg1 ;
-(BOOL)isTetheredSyncingEnabledForDataclass:(id)arg1 ;
-(id)tetheredSyncSourceTypeForDataclass:(id)arg1 ;
-(void)cachedAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 ;
-(void)notifyRemoteDevicesOfUpdatedCredentials:(id)arg1 ;
-(void)notifyRemoteDevicesOfNewAccount:(id)arg1 ;
-(void)removeObsoleteAccounts:(/*^block*/id)arg1 ;
-(id)_removeObsoleteOSXServerAccountForMacOS:(id)arg1 ;
-(id)displayTypeForAccountWithIdentifier:(id)arg1 ;
-(void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)accountTypeWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)connectToRemoteAccountStoreUsingEndpoint:(id)arg1 ;
-(BOOL)isPerformingDataclassActionsForAccount:(id)arg1 ;
-(BOOL)isPushSupportedForAccount:(id)arg1 ;
-(void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)preloadDataclassOwnersWithCompletion:(/*^block*/id)arg1 ;
-(void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAccountsFromPairedDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)triggerKeychainMigrationIfNecessary:(/*^block*/id)arg1 ;
-(void)reportTelemetryForLandmarkEvent:(/*^block*/id)arg1 ;
-(void)disconnectFromRemoteAccountStore;
-(ACRemoteAccountStoreSession *)remoteAccountStoreSession;
-(id)allCredentialItems;
-(id)credentialItemForAccount:(id)arg1 serviceName:(id)arg2 ;
-(void)saveCredentialItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)insertCredentialItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeCredentialItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)accountWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 error:(id*)arg3 ;
-(id)credentialForAccount:(id)arg1 ;
-(void)verifyCredentialsForAccount:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 doVerify:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)accountIdentifiersEnabledToSyncDataclass:(id)arg1 ;
-(void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)accountTypeWithAccountTypeIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)accountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountsWithAccountType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)renewCredentialsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)accountsWithAccountTypeIdentifiers:(id)arg1 error:(id*)arg2 ;
-(void)renewCredentialsForAccount:(id)arg1 force:(BOOL)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleURL:(id)arg1 ;
-(BOOL)addClientToken:(id)arg1 forAccount:(id)arg2 ;
-(id)clientTokenForAccount:(id)arg1 ;
-(id)credentialForAccount:(id)arg1 serviceID:(id)arg2 error:(id*)arg3 ;
-(void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)effectiveBundleID;
-(id)enabledDataclassesForAccount:(id)arg1 ;
-(id)dataclassActionsForAccountDeletion:(id)arg1 error:(id*)arg2 ;
-(void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(BOOL)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)dataclassActionsForAccountSave:(id)arg1 ;
-(void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(NSArray *)accounts;
-(id)allDataclasses;
-(BOOL)saveVerifiedAccount:(id)arg1 error:(id*)arg2 ;
-(id)credentialForAccount:(id)arg1 serviceID:(id)arg2 ;
-(void)saveAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)accountIdentifiersEnabledForDataclass:(id)arg1 ;
-(void)clearAllPermissionsGrantedForAccountType:(id)arg1 ;
-(id)initWithEffectiveBundleID:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)accountWithIdentifier:(id)arg1 ;
-(void)accountsWithAccountTypeIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)credentialForAccount:(id)arg1 error:(id*)arg2 ;
-(id)accountTypeWithAccountTypeIdentifier:(id)arg1 ;
-(id)accountsWithAccountType:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

