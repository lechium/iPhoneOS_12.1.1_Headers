/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/AMSHashable.h>
#import <libobjc.A.dylib/ACProtobufCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObject;
@class NSString, ACAccountStore, ACAccountType, ACAccountCredential, NSMutableDictionary, NSURL, NSDate, NSArray, ACMutableTrackedSet, NSMutableSet, NSDictionary, AARegionInfo, NSNumber, AASuspensionInfo, ACTrackedSet, NSSet;

@interface ACAccount : NSObject <AMSHashable, ACProtobufCoding, NSCoding, NSCopying, NSSecureCoding> {

	ACAccountStore* _store;
	NSString* _identifier;
	NSString* _accountDescription;
	NSString* _owningBundleID;
	NSString* _username;
	NSString* _authenticationType;
	NSString* _credentialType;
	NSString* _clientToken;
	BOOL _haveCheckedForClientToken;
	ACAccountType* _accountType;
	ACAccountCredential* _credential;
	NSMutableDictionary* _properties;
	NSMutableDictionary* _dataclassProperties;
	BOOL _accountAccessAvailable;
	BOOL _authenticated;
	BOOL _active;
	BOOL _supportsAuthentication;
	BOOL _visible;
	NSURL* _objectID;
	NSDate* _date;
	NSDate* _lastCredentialRenewalRejectionDate;
	NSString* _parentAccountIdentifier;
	ACAccount* _parentAccount;
	BOOL _haveCheckedForParentAccount;
	BOOL _haveCheckedForChildAccounts;
	NSArray* _childAccounts;
	ACMutableTrackedSet* _trackedProvisionedDataclasses;
	BOOL _wasProvisionedDataclassesReset;
	ACMutableTrackedSet* _trackedEnabledDataclasses;
	BOOL _wasEnabledDataclassesReset;
	NSMutableSet* _dirtyProperties;
	NSMutableSet* _dirtyAccountProperties;
	NSMutableSet* _dirtyDataclassProperties;
	id<NSObject> _credentialsDidChangeObserver;
	/*^block*/id _accountPropertiesTransformer;
	BOOL _creatingFromManagedObject;

}

@property (setter=_aa_setRawPassword:,nonatomic,copy) NSString * _aa_rawPassword; 
@property (assign,setter=aa_setSyncedAccount:,nonatomic) BOOL aa_isSyncedAccount; 
@property (nonatomic,readonly) BOOL aa_needsRegistration; 
@property (nonatomic,readonly) BOOL aa_needsEmailConfiguration; 
@property (nonatomic,readonly) BOOL aa_serviceUnavailable; 
@property (nonatomic,readonly) NSDictionary * aa_serviceUnavailableInfo; 
@property (nonatomic,readonly) NSString * aa_protocolVersion; 
@property (nonatomic,readonly) NSString * aa_displayName; 
@property (nonatomic,readonly) NSString * aa_syncStoreIdentifier; 
@property (nonatomic,readonly) NSString * aa_accountTypeString; 
@property (nonatomic,readonly) NSString * aa_accountFooterText; 
@property (nonatomic,readonly) NSDictionary * aa_accountFooterButton; 
@property (nonatomic,readonly) NSDictionary * aa_accountFirstDisplayAlert; 
@property (assign,setter=aa_setUndergoingRepair:,nonatomic) BOOL aa_isUndergoingRepair; 
@property (nonatomic,readonly) int aa_repairerPID; 
@property (nonatomic,readonly) NSString * aa_formattedUsername; 
@property (nonatomic,readonly) NSString * aa_primaryEmail; 
@property (nonatomic,readonly) NSString * aa_appleId; 
@property (nonatomic,readonly) NSArray * aa_appleIDAliases; 
@property (nonatomic,readonly) NSString * aa_personID; 
@property (nonatomic,readonly) NSString * aa_altDSID; 
@property (setter=aa_setFirstName:,nonatomic,copy) NSString * aa_firstName; 
@property (setter=aa_setMiddleName:,nonatomic,copy) NSString * aa_middleName; 
@property (setter=aa_setLastName:,nonatomic,copy) NSString * aa_lastName; 
@property (nonatomic,copy,readonly) AARegionInfo * aa_regionInfo; 
@property (assign,setter=aa_setPrimaryAccount:,nonatomic) BOOL aa_isPrimaryAccount; 
@property (assign,setter=aa_setPrimaryEmailVerified:,nonatomic) BOOL aa_isPrimaryEmailVerified; 
@property (assign,setter=aa_setNeedsToVerifyTerms:,nonatomic) BOOL aa_needsToVerifyTerms; 
@property (assign,setter=aa_setUsesCloudDocs:,nonatomic) BOOL aa_isUsingCloudDocs; 
@property (assign,setter=aa_setCloudDocsMigrationComplete:,nonatomic) BOOL aa_isCloudDocsMigrationComplete; 
@property (nonatomic,readonly) BOOL aa_isUsingiCloud; 
@property (nonatomic,readonly) BOOL aa_isManagedAppleID; 
@property (nonatomic,readonly) BOOL aa_isNotesMigrated; 
@property (nonatomic,readonly) BOOL aa_isSandboxAccount; 
@property (nonatomic,readonly) BOOL aa_hasOptionalTerms; 
@property (setter=aa_setLastKnownQuota:,nonatomic,copy) NSNumber * aa_lastKnownQuota; 
@property (assign,setter=aa_setRepairState:,nonatomic) NSNumber * aa_repairState; 
@property (nonatomic,readonly) BOOL aa_isSuspended; 
@property (nonatomic,copy,readonly) AASuspensionInfo * aa_suspensionInfo; 
@property (nonatomic,readonly) ACAccount * aa_fmfAccount; 
@property (nonatomic,readonly) ACAccount * aa_fmipAccount; 
@property (nonatomic,readonly) ACAccount * aa_cloudKitAccount; 
@property (nonatomic,readonly) ACAccount * aa_childMailAccount; 
@property (setter=aa_setPassword:,nonatomic,copy) NSString * aa_password; 
@property (setter=aa_setAuthToken:,nonatomic,copy) NSString * aa_authToken; 
@property (nonatomic,readonly) NSString * aa_fmipToken; 
@property (nonatomic,readonly) NSString * aa_mapsToken; 
@property (nonatomic,readonly) NSString * aa_hsaToken; 
@property (nonatomic,readonly) NSString * aa_mdmServerToken; 
@property (nonatomic,readonly) NSString * _ss_altDSID; 
@property (nonatomic,readonly) NSNumber * _ss_DSID; 
@property (nonatomic,readonly) NSString * _ss_hashedDescription; 
@property (nonatomic,readonly) BOOL _ss_isAppleAuthenticationAccount; 
@property (nonatomic,readonly) BOOL _ss_isiCloudAccount; 
@property (nonatomic,readonly) BOOL _ss_isIDMSAccount; 
@property (nonatomic,readonly) BOOL _ss_isiTunesAccount; 
@property (nonatomic,readonly) BOOL _ss_isLocalAccount; 
@property (setter=_ss_setSecureToken:,nonatomic,copy) NSString * _ss_secureToken; 
@property (nonatomic,readonly) NSString * ams_altDSID; 
@property (nonatomic,readonly) NSArray * ams_cookies; 
@property (nonatomic,readonly) NSString * ams_creditsString; 
@property (nonatomic,readonly) NSNumber * ams_DSID; 
@property (nonatomic,readonly) NSString * ams_firstName; 
@property (getter=ams_isDemoAccount,nonatomic,readonly) BOOL ams_demoAccount; 
@property (nonatomic,readonly) NSString * ams_fullName; 
@property (getter=ams_isiCloudAccount,nonatomic,readonly) BOOL ams_iCloudAccount; 
@property (getter=ams_isIDMSAccount,nonatomic,readonly) BOOL ams_IDMSAccount; 
@property (getter=ams_isiTunesAccount,nonatomic,readonly) BOOL ams_iTunesAccount; 
@property (nonatomic,readonly) NSString * ams_lastName; 
@property (getter=ams_isLocalAccount,nonatomic,readonly) BOOL ams_localAccount; 
@property (getter=ams_isManagedAppleID,nonatomic,readonly) BOOL ams_managedAppleID; 
@property (getter=ams_isSandboxAccount,nonatomic,readonly) BOOL ams_sandboxAccount; 
@property (nonatomic,readonly) NSString * ams_storefront; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * hashedDescription; 
@property (nonatomic,retain) NSString * mcAccountIdentifier; 
@property (nonatomic,retain) NSString * mcConfigurationProfileIdentifier; 
@property (nonatomic,retain) NSString * mcProfileUUID; 
@property (nonatomic,retain) NSString * mcPayloadUUID; 
@property (nonatomic,retain) NSDictionary * communicationServiceRules; 
@property (nonatomic,copy) ACTrackedSet * trackedProvisionedDataclasses;                                                 //@synthesize trackedProvisionedDataclasses=_trackedProvisionedDataclasses - In the implementation block
@property (nonatomic,readonly) BOOL wasProvisionedDataclassesReset;                                                      //@synthesize wasProvisionedDataclassesReset=_wasProvisionedDataclassesReset - In the implementation block
@property (nonatomic,copy) ACTrackedSet * trackedEnabledDataclasses;                                                     //@synthesize trackedEnabledDataclasses=_trackedEnabledDataclasses - In the implementation block
@property (nonatomic,readonly) BOOL wasEnabledDataclassesReset;                                                          //@synthesize wasEnabledDataclassesReset=_wasEnabledDataclassesReset - In the implementation block
@property (nonatomic,readonly) NSURL * objectID; 
@property (nonatomic,readonly) ACAccountStore * accountStore; 
@property (nonatomic,retain) ACAccount * parentAccount; 
@property (nonatomic,readonly) NSString * parentAccountIdentifier; 
@property (nonatomic,readonly) NSArray * childAccounts; 
@property (nonatomic,retain) NSMutableSet * enabledDataclasses; 
@property (nonatomic,retain) NSMutableSet * provisionedDataclasses; 
@property (nonatomic,__weak,readonly) NSDictionary * dataclassProperties; 
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated; 
@property (nonatomic,__weak,readonly) NSDictionary * accountProperties; 
@property (nonatomic,__weak,readonly) ACAccount * displayAccount; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,nonatomic) BOOL supportsAuthentication; 
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
@property (nonatomic,readonly) NSSet * dirtyProperties;                                                                  //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (nonatomic,readonly) NSSet * dirtyAccountProperties;                                                           //@synthesize dirtyAccountProperties=_dirtyAccountProperties - In the implementation block
@property (nonatomic,readonly) NSSet * dirtyDataclassProperties;                                                         //@synthesize dirtyDataclassProperties=_dirtyDataclassProperties - In the implementation block
@property (nonatomic,readonly) NSString * authenticationType; 
@property (nonatomic,readonly) NSString * credentialType; 
@property (nonatomic,readonly) BOOL supportsPush; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (assign,getter=isVisible,nonatomic) BOOL visible; 
@property (nonatomic,retain) NSDate * lastCredentialRenewalRejectionDate; 
@property (nonatomic,readonly) NSString * shortDebugName; 
@property (nonatomic,readonly) NSString * clientToken; 
@property (copy) id accountPropertiesTransformer;                                                                        //@synthesize accountPropertiesTransformer=_accountPropertiesTransformer - In the implementation block
@property (nonatomic,__weak,readonly) NSString * identifier; 
@property (nonatomic,retain) ACAccountType * accountType; 
@property (nonatomic,copy) NSString * accountDescription; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,readonly) NSString * userFullName; 
@property (nonatomic,retain) ACAccountCredential * credential; 
+(id)aa_dataclassesBoundToSingleAppleAccount;
+(id)aa_dataclassesBoundToPrimaryAppleAccount;
+(BOOL)_isAccountFlagWritable:(id)arg1 ;
+(BOOL)_defaultValueForAccountFlag:(id)arg1 ;
+(id)_createNewAccountUID;
+(BOOL)supportsSecureCoding;
-(void)_aa_setAppleID:(id)arg1 ;
-(void)_aa_setPrimaryEmail:(id)arg1 ;
-(void)aa_configureCerts;
-(void)aa_removeCerts;
-(void)_aa_clearRawPassword;
-(NSString *)_aa_rawPassword;
-(void)_aa_setAltDSID:(id)arg1 ;
-(void)_aa_setRawPassword:(id)arg1 ;
-(BOOL)aa_isSyncedAccount;
-(void)aa_setSyncedAccount:(BOOL)arg1 ;
-(BOOL)aa_needsRegistration;
-(BOOL)aa_serviceUnavailable;
-(NSDictionary *)aa_serviceUnavailableInfo;
-(NSString *)aa_protocolVersion;
-(NSString *)aa_syncStoreIdentifier;
-(NSString *)aa_accountTypeString;
-(NSString *)aa_accountFooterText;
-(NSDictionary *)aa_accountFooterButton;
-(NSDictionary *)aa_accountFirstDisplayAlert;
-(BOOL)aa_isUndergoingRepair;
-(void)aa_setUndergoingRepair:(BOOL)arg1 ;
-(int)aa_repairerPID;
-(BOOL)aa_needsEmailConfiguration;
-(NSString *)aa_displayName;
-(NSString *)aa_personID;
-(NSNumber *)aa_repairState;
-(void)aa_updateWithProvisioningResponse:(id)arg1 ;
-(void)aa_setAuthToken:(id)arg1 ;
-(void)aa_setRepairState:(id)arg1 ;
-(ACAccount *)aa_fmipAccount;
-(ACAccount *)aa_fmfAccount;
-(ACAccount *)aa_cloudKitAccount;
-(void)aa_setMapsToken:(id)arg1 ;
-(void)aa_setHSAToken:(id)arg1 ;
-(void)aa_setMDMServerToken:(id)arg1 ;
-(void)aa_setFirstName:(id)arg1 ;
-(NSString *)aa_middleName;
-(void)aa_setMiddleName:(id)arg1 ;
-(void)aa_setLastName:(id)arg1 ;
-(void)aa_setPrimaryEmailVerified:(BOOL)arg1 ;
-(BOOL)aa_hasOptionalTerms;
-(void)aa_setLastKnownQuota:(id)arg1 ;
-(ACAccount *)aa_childMailAccount;
-(NSString *)aa_fmipToken;
-(NSString *)aa_mapsToken;
-(NSString *)aa_hsaToken;
-(NSString *)aa_mdmServerToken;
-(id)aa_hsaTokenWithError:(id*)arg1 ;
-(NSString *)aa_firstName;
-(NSString *)aa_lastName;
-(NSString *)aa_authToken;
-(void)aa_setNeedsToVerifyTerms:(BOOL)arg1 ;
-(BOOL)aa_needsToVerifyTerms;
-(NSString *)aa_formattedUsername;
-(NSString *)aa_primaryEmail;
-(NSArray *)aa_appleIDAliases;
-(NSString *)aa_appleId;
-(NSString *)aa_password;
-(BOOL)aa_isPrimaryEmailVerified;
-(BOOL)aa_isSandboxAccount;
-(id)aa_authTokenWithError:(id*)arg1 ;
-(void)aa_setPrimaryAccount:(BOOL)arg1 ;
-(NSString *)aa_altDSID;
-(void)aa_setUseCellular:(BOOL)arg1 forDataclass:(id)arg2 ;
-(AASuspensionInfo *)aa_suspensionInfo;
-(BOOL)aa_isUsingiCloud;
-(BOOL)aa_isManagedAppleID;
-(BOOL)aa_isNotesMigrated;
-(NSNumber *)aa_lastKnownQuota;
-(BOOL)aa_isUsingCloudDocs;
-(BOOL)aa_isPrimaryAccount;
-(void)aa_setUsesCloudDocs:(BOOL)arg1 ;
-(void)aa_setCloudDocsMigrationComplete:(BOOL)arg1 ;
-(BOOL)aa_isCloudDocsMigrationComplete;
-(AARegionInfo *)aa_regionInfo;
-(BOOL)aa_isSuspended;
-(BOOL)aa_useCellularForDataclass:(id)arg1 ;
-(void)aa_setPassword:(id)arg1 ;
-(void)storeOriginalUsername;
-(id)_registeredBundles;
-(id)normalizedDSID;
-(BOOL)canRemoveAccount;
-(id)appleID;
-(void)setDSID:(id)arg1 ;
-(id)initWithAppleID:(id)arg1 password:(id)arg2 ;
-(id)dsid;
-(BOOL)_ss_isDuplicate:(id)arg1 ;
-(NSNumber *)_ss_DSID;
-(NSString *)_ss_altDSID;
-(NSString *)_ss_hashedDescription;
-(BOOL)_ss_isiCloudAccount;
-(BOOL)_ss_isiTunesAccount;
-(BOOL)_ss_isIDMSAccount;
-(BOOL)_ss_isAppleAuthenticationAccount;
-(BOOL)_ss_isLocalAccount;
-(NSString *)_ss_secureToken;
-(void)_ss_setSecureToken:(id)arg1 ;
-(NSArray *)ams_cookies;
-(void)ams_addCookies:(id)arg1 ;
-(void)ams_removeAllCookies;
-(BOOL)ams_isSandboxAccount;
-(BOOL)ams_isLocalAccount;
-(void)ams_removeCookiesMatchingProperties:(id)arg1 ;
-(NSString *)ams_storefront;
-(NSNumber *)ams_DSID;
-(NSString *)hashedDescription;
-(void)ams_setAgreedToTerms:(BOOL)arg1 ;
-(void)ams_setInGoodStanding:(BOOL)arg1 ;
-(void)ams_setiCloudFamily:(BOOL)arg1 ;
-(void)ams_setValidPayment:(BOOL)arg1 ;
-(BOOL)ams_isiTunesAccount;
-(NSString *)ams_altDSID;
-(void)ams_setAltDSID:(id)arg1 ;
-(void)ams_setDSID:(id)arg1 ;
-(void)ams_setPassword:(id)arg1 ;
-(void)ams_setRawPassword:(id)arg1 ;
-(id)ams_secureToken;
-(id)ams_password;
-(BOOL)ams_requiresAuthKitUpdate;
-(void)ams_setCreditsString:(id)arg1 ;
-(void)ams_setStorefront:(id)arg1 ;
-(id)ams_cookiesForURL:(id)arg1 ;
-(id)_accountPropertyForKey:(id)arg1 expectedClass:(Class)arg2 ;
-(BOOL)ams_isIDMSAccount;
-(BOOL)ams_isiCloudAccount;
-(NSString *)ams_firstName;
-(NSString *)ams_lastName;
-(BOOL)ams_isDemoAccount;
-(void)_setAccountProperty:(id)arg1 forKey:(id)arg2 expectedClass:(Class)arg3 ;
-(id)ams_accountFlags;
-(void)ams_setAccountFlags:(id)arg1 ;
-(id)_createCookieStorage;
-(void)_setCookies:(id)arg1 ;
-(id)_cookiesMatchingProperties:(id)arg1 ;
-(void)ams_removeCookies:(id)arg1 ;
-(NSString *)ams_creditsString;
-(BOOL)ams_didAgreeToTerms;
-(NSString *)ams_fullName;
-(BOOL)ams_isiCloudFamily;
-(BOOL)ams_isInGoodStanding;
-(BOOL)ams_isManagedAppleID;
-(BOOL)ams_isValidPayment;
-(id)ams_rawPassword;
-(void)ams_setFirstName:(id)arg1 ;
-(void)ams_setLastName:(id)arg1 ;
-(BOOL)ams_isDuplicate:(id)arg1 ;
-(BOOL)ams_postAccountFlagsWithBagContract:(id)arg1 ;
-(void)ams_setValue:(BOOL)arg1 forAccountFlag:(id)arg2 ;
-(BOOL)ams_valueForAccountFlag:(id)arg1 ;
-(id)aida_tokenWithExpiryCheckForService:(id)arg1 ;
-(id)aida_tokenWithExpirationCheck;
-(id)aida_deviceProvisioningInfo;
-(id)aida_alternateDSID;
-(id)aida_tokenForService:(id)arg1 ;
-(id)aida_dsid;
-(NSString *)mcAccountIdentifier;
-(void)setMcAccountIdentifier:(NSString *)arg1 ;
-(NSString *)mcConfigurationProfileIdentifier;
-(void)setMcConfigurationProfileIdentifier:(NSString *)arg1 ;
-(NSString *)mcProfileUUID;
-(void)setMcProfileUUID:(NSString *)arg1 ;
-(NSString *)mcPayloadUUID;
-(void)setMcPayloadUUID:(NSString *)arg1 ;
-(id)mcBackingProfile;
-(id)mcBackingPayload;
-(BOOL)MCIsManaged;
-(NSDictionary *)communicationServiceRules;
-(void)setCommunicationServiceRules:(NSDictionary *)arg1 ;
-(void)_clearCachedChildAccounts;
-(void)_clearCachedCredentials;
-(id)portableCopy;
-(void)setProvisioned:(BOOL)arg1 forDataclass:(id)arg2 ;
-(void)_installCredentialsChangedObserver;
-(void)_unsafe_markPropertyDirty:(id)arg1 ;
-(void)_unsafe_markAccountPropertyDirty:(id)arg1 ;
-(void)_unsafe_markDataclassPropertyDirty:(id)arg1 ;
-(void)credentialsChanged:(id)arg1 ;
-(id)accountPropertiesTransformer;
-(void)_markAccountPropertyDirty:(id)arg1 ;
-(id)_initWithProtobuf:(id)arg1 ;
-(id)_encodeProtobuf;
-(BOOL)_useParentForCredentials;
-(void)_markDataclassPropertyDirty:(id)arg1 ;
-(id)_initWithProtobufData:(id)arg1 ;
-(id)_encodeProtobufData;
-(void)setDirty:(BOOL)arg1 forProperty:(id)arg2 ;
-(void)_markCredentialDirty;
-(id)defaultAutodiscoverDomainForChildType:(id)arg1 ;
-(void)setCreatingFromManagedObject:(BOOL)arg1 ;
-(NSString *)shortDebugName;
-(void)setSecIdentity:(SecIdentityRef)arg1 ;
-(void)setSecCertificates:(id)arg1 ;
-(void)setTrackedProvisionedDataclasses:(ACTrackedSet *)arg1 ;
-(void)setTrackedEnabledDataclasses:(ACTrackedSet *)arg1 ;
-(void)setAccountPropertiesTransformer:(id)arg1 ;
-(NSString *)authenticationType;
-(ACAccountCredential *)credential;
-(id)fullDescription;
-(NSSet *)dirtyAccountProperties;
-(NSSet *)dirtyDataclassProperties;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setAccountDescription:(NSString *)arg1 ;
-(NSString *)clientToken;
-(void)setAuthenticationType:(NSString *)arg1 ;
-(id)initWithManagedAccount:(id)arg1 ;
-(id)owningBundleID;
-(void)setOwningBundleID:(id)arg1 ;
-(id)initWithManagedAccount:(id)arg1 accountStore:(id)arg2 ;
-(void)_loadAllCachedProperties;
-(id)_initWithManagedAccount:(id)arg1 accountStore:(id)arg2 withDirtyStateFromAccount:(id)arg3 ;
-(id)diffAccount:(id)arg1 ;
-(void)takeValuesFromModifiedAccount:(id)arg1 ;
-(void)setDataclassProperties:(NSDictionary *)arg1 ;
-(BOOL)wasProvisionedDataclassesReset;
-(ACTrackedSet *)trackedProvisionedDataclasses;
-(BOOL)wasEnabledDataclassesReset;
-(ACTrackedSet *)trackedEnabledDataclasses;
-(void)setLastCredentialRenewalRejectionDate:(NSDate *)arg1 ;
-(void)_clearDirtyProperties;
-(void)_markPropertyDirty:(id)arg1 ;
-(void)_loadCachedPropertiesWithoutCredentials;
-(id)accountByCleaningThirdPartyTransformations;
-(NSDate *)lastCredentialRenewalRejectionDate;
-(void)setAccountProperties:(NSDictionary *)arg1 ;
-(BOOL)supportsAuthentication;
-(void)setSupportsAuthentication:(BOOL)arg1 ;
-(SecIdentityRef)copySecIdentity;
-(id)secCertificates;
-(BOOL)isPropertyDirty:(id)arg1 ;
-(NSSet *)dirtyProperties;
-(id)propertiesForDataclass:(id)arg1 ;
-(BOOL)isProvisionedForDataclass:(id)arg1 ;
-(BOOL)isDirty;
-(BOOL)isEnabledToSyncDataclass:(id)arg1 ;
-(BOOL)addClientToken:(id)arg1 ;
-(ACAccount *)displayAccount;
-(void)setProvisionedDataclasses:(NSMutableSet *)arg1 ;
-(NSString *)parentAccountIdentifier;
-(id)credentialWithError:(id*)arg1 ;
-(NSMutableSet *)enabledDataclasses;
-(void)setCredentialType:(NSString *)arg1 ;
-(id)qualifiedUsername;
-(NSURL *)objectID;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSMutableSet *)provisionedDataclasses;
-(NSString *)accountDescription;
-(void)setEnabledDataclasses:(NSMutableSet *)arg1 ;
-(void)_setAccountStore:(id)arg1 ;
-(ACAccountStore *)accountStore;
-(ACAccountType *)accountType;
-(BOOL)supportsPush;
-(NSString *)credentialType;
-(NSString *)userFullName;
-(BOOL)authenticated;
-(void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(void)setProperties:(id)arg1 forDataclass:(id)arg2 ;
-(NSArray *)childAccounts;
-(id)childAccountsWithAccountTypeIdentifier:(id)arg1 ;
-(NSDictionary *)accountProperties;
-(NSDictionary *)dataclassProperties;
-(id)initWithAccountType:(id)arg1 ;
-(void)setParentAccount:(ACAccount *)arg1 ;
-(ACAccount *)parentAccount;
-(void)setUsername:(NSString *)arg1 ;
-(BOOL)isAuthenticated;
-(void)setCredential:(ACAccountCredential *)arg1 ;
-(void)setAccountType:(ACAccountType *)arg1 ;
-(void)_setObjectID:(id)arg1 ;
-(void)markAllPropertiesDirty;
-(void)setAuthenticated:(BOOL)arg1 ;
-(id)accountPropertyForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSString *)identifier;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isActive;
-(BOOL)isVisible;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setVisible:(BOOL)arg1 ;
-(NSString *)username;
-(void)reload;
-(void)refresh;
@end

