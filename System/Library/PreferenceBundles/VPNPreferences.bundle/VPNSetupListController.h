/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VPNPreferences/VPNPreferences-Structs.h>
#import <Preferences/PSListController.h>

@class UIBarButtonItem, PSSpecifier, NSUUID, NSString, NSDictionary, NSMutableArray, NSArray, UIAlertView;

@interface VPNSetupListController : PSListController {

	BOOL _overviewMode;
	BOOL _editMode;
	BOOL _passwordEditOnly;
	BOOL _dirty;
	BOOL _sendAllTraffic;
	BOOL _useRSASecurID;
	BOOL _usesCertificates;
	BOOL _passwordRequired;
	BOOL _userCreated;
	BOOL _onDemandService;
	BOOL _onDemandEnabled;
	BOOL _alwaysPrompt;
	BOOL _proxyAuthenticated;
	BOOL _pptpWarningAccepted;
	unsigned long long _currentVPNType;
	unsigned long long _originalVPNType;
	unsigned long long _encryptionType;
	unsigned long long _vpnGrade;
	unsigned long long _eapType;
	unsigned long long _authType;
	UIBarButtonItem* _backButton;
	PSSpecifier* _connectSpecifier;
	NSUUID* _serviceID;
	NSString* _displayName;
	NSString* _appName;
	NSDictionary* _includedBundleIDs;
	NSString* _server;
	NSString* _account;
	NSString* _password;
	NSString* _sharedSecret;
	NSString* _groupDisplayName;
	NSString* _localIdentifier;
	NSString* _remoteIdentifier;
	PSSpecifier* _displayNameSpecifier;
	PSSpecifier* _serverSpecifier;
	PSSpecifier* _serverAddressSpecifier;
	PSSpecifier* _ciscoImageSpecifier;
	PSSpecifier* _sendAllTrafficSpecifier;
	PSSpecifier* _rsaSpecifier;
	PSSpecifier* _sharedSecretSpecifier;
	PSSpecifier* _encryptionTypeSpecifier;
	PSSpecifier* _vpnGradeStaticSpecifier;
	PSSpecifier* _passwordSpecifier;
	PSSpecifier* _groupNameSpecifier;
	PSSpecifier* _useCertificateSwitchSpecifier;
	PSSpecifier* _certificateListSpecifier;
	PSSpecifier* _accountSpecifier;
	PSSpecifier* _localIdentifierSpecifier;
	PSSpecifier* _remoteIdentifierSpecifier;
	PSSpecifier* _eapTypeSpecifier;
	PSSpecifier* _authTypeSpecifier;
	PSSpecifier* _timeSpecifier;
	NSMutableArray* _timeSpecifierArray;
	NSArray* _typeTabSpecifiers;
	PSSpecifier* _editServerSpecifier;
	NSArray* _proxyGroupSpecifiers;
	NSArray* _pacSpecifiers;
	NSArray* _manualProxySpecifiers;
	NSArray* _proxyAuthSpecifiers;
	PSSpecifier* _proxyLabelSpecifier;
	unsigned long long _proxyType;
	NSString* _proxyServer;
	NSString* _proxyPort;
	NSString* _proxyUsername;
	NSString* _proxyPassword;
	NSString* _proxyPACFile;
	id _ciscoCertificate;
	NSArray* _certificateIDs;
	UIAlertView* _deleteConfirmView;
	UIAlertView* _pptpWarningView;
	PSSpecifier* _editButton;
	PSSpecifier* _enableButton;

}

@property (assign) unsigned long long currentVPNType;                        //@synthesize currentVPNType=_currentVPNType - In the implementation block
@property (assign) unsigned long long originalVPNType;                       //@synthesize originalVPNType=_originalVPNType - In the implementation block
@property (assign) unsigned long long encryptionType;                        //@synthesize encryptionType=_encryptionType - In the implementation block
@property (assign) unsigned long long vpnGrade;                              //@synthesize vpnGrade=_vpnGrade - In the implementation block
@property (assign) unsigned long long eapType;                               //@synthesize eapType=_eapType - In the implementation block
@property (assign) unsigned long long authType;                              //@synthesize authType=_authType - In the implementation block
@property (retain) UIBarButtonItem * backButton;                             //@synthesize backButton=_backButton - In the implementation block
@property (assign) BOOL overviewMode;                                        //@synthesize overviewMode=_overviewMode - In the implementation block
@property (assign) BOOL editMode;                                            //@synthesize editMode=_editMode - In the implementation block
@property (assign) BOOL passwordEditOnly;                                    //@synthesize passwordEditOnly=_passwordEditOnly - In the implementation block
@property (assign) BOOL dirty;                                               //@synthesize dirty=_dirty - In the implementation block
@property (assign) BOOL sendAllTraffic;                                      //@synthesize sendAllTraffic=_sendAllTraffic - In the implementation block
@property (assign) BOOL useRSASecurID;                                       //@synthesize useRSASecurID=_useRSASecurID - In the implementation block
@property (assign) BOOL usesCertificates;                                    //@synthesize usesCertificates=_usesCertificates - In the implementation block
@property (assign) BOOL passwordRequired;                                    //@synthesize passwordRequired=_passwordRequired - In the implementation block
@property (assign) BOOL userCreated;                                         //@synthesize userCreated=_userCreated - In the implementation block
@property (assign) BOOL onDemandService;                                     //@synthesize onDemandService=_onDemandService - In the implementation block
@property (assign) BOOL onDemandEnabled;                                     //@synthesize onDemandEnabled=_onDemandEnabled - In the implementation block
@property (assign) BOOL alwaysPrompt;                                        //@synthesize alwaysPrompt=_alwaysPrompt - In the implementation block
@property (retain) PSSpecifier * connectSpecifier;                           //@synthesize connectSpecifier=_connectSpecifier - In the implementation block
@property (retain) NSUUID * serviceID;                                       //@synthesize serviceID=_serviceID - In the implementation block
@property (retain) NSString * displayName;                                   //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSString * appName;                                       //@synthesize appName=_appName - In the implementation block
@property (retain) NSDictionary * includedBundleIDs;                         //@synthesize includedBundleIDs=_includedBundleIDs - In the implementation block
@property (retain) NSString * server;                                        //@synthesize server=_server - In the implementation block
@property (retain) NSString * account;                                       //@synthesize account=_account - In the implementation block
@property (retain) NSString * password;                                      //@synthesize password=_password - In the implementation block
@property (retain) NSString * sharedSecret;                                  //@synthesize sharedSecret=_sharedSecret - In the implementation block
@property (retain) NSString * groupDisplayName;                              //@synthesize groupDisplayName=_groupDisplayName - In the implementation block
@property (retain) NSString * localIdentifier;                               //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (retain) NSString * remoteIdentifier;                              //@synthesize remoteIdentifier=_remoteIdentifier - In the implementation block
@property (retain) PSSpecifier * displayNameSpecifier;                       //@synthesize displayNameSpecifier=_displayNameSpecifier - In the implementation block
@property (retain) PSSpecifier * serverSpecifier;                            //@synthesize serverSpecifier=_serverSpecifier - In the implementation block
@property (retain) PSSpecifier * serverAddressSpecifier;                     //@synthesize serverAddressSpecifier=_serverAddressSpecifier - In the implementation block
@property (retain) PSSpecifier * ciscoImageSpecifier;                        //@synthesize ciscoImageSpecifier=_ciscoImageSpecifier - In the implementation block
@property (retain) PSSpecifier * sendAllTrafficSpecifier;                    //@synthesize sendAllTrafficSpecifier=_sendAllTrafficSpecifier - In the implementation block
@property (retain) PSSpecifier * rsaSpecifier;                               //@synthesize rsaSpecifier=_rsaSpecifier - In the implementation block
@property (retain) PSSpecifier * sharedSecretSpecifier;                      //@synthesize sharedSecretSpecifier=_sharedSecretSpecifier - In the implementation block
@property (retain) PSSpecifier * encryptionTypeSpecifier;                    //@synthesize encryptionTypeSpecifier=_encryptionTypeSpecifier - In the implementation block
@property (retain) PSSpecifier * vpnGradeStaticSpecifier;                    //@synthesize vpnGradeStaticSpecifier=_vpnGradeStaticSpecifier - In the implementation block
@property (retain) PSSpecifier * passwordSpecifier;                          //@synthesize passwordSpecifier=_passwordSpecifier - In the implementation block
@property (retain) PSSpecifier * groupNameSpecifier;                         //@synthesize groupNameSpecifier=_groupNameSpecifier - In the implementation block
@property (retain) PSSpecifier * useCertificateSwitchSpecifier;              //@synthesize useCertificateSwitchSpecifier=_useCertificateSwitchSpecifier - In the implementation block
@property (retain) PSSpecifier * certificateListSpecifier;                   //@synthesize certificateListSpecifier=_certificateListSpecifier - In the implementation block
@property (retain) PSSpecifier * accountSpecifier;                           //@synthesize accountSpecifier=_accountSpecifier - In the implementation block
@property (retain) PSSpecifier * localIdentifierSpecifier;                   //@synthesize localIdentifierSpecifier=_localIdentifierSpecifier - In the implementation block
@property (retain) PSSpecifier * remoteIdentifierSpecifier;                  //@synthesize remoteIdentifierSpecifier=_remoteIdentifierSpecifier - In the implementation block
@property (retain) PSSpecifier * eapTypeSpecifier;                           //@synthesize eapTypeSpecifier=_eapTypeSpecifier - In the implementation block
@property (retain) PSSpecifier * authTypeSpecifier;                          //@synthesize authTypeSpecifier=_authTypeSpecifier - In the implementation block
@property (retain) PSSpecifier * timeSpecifier;                              //@synthesize timeSpecifier=_timeSpecifier - In the implementation block
@property (retain) NSMutableArray * timeSpecifierArray;                      //@synthesize timeSpecifierArray=_timeSpecifierArray - In the implementation block
@property (retain) NSArray * typeTabSpecifiers;                              //@synthesize typeTabSpecifiers=_typeTabSpecifiers - In the implementation block
@property (retain) PSSpecifier * editServerSpecifier;                        //@synthesize editServerSpecifier=_editServerSpecifier - In the implementation block
@property (retain) NSArray * proxyGroupSpecifiers;                           //@synthesize proxyGroupSpecifiers=_proxyGroupSpecifiers - In the implementation block
@property (retain) NSArray * pacSpecifiers;                                  //@synthesize pacSpecifiers=_pacSpecifiers - In the implementation block
@property (retain) NSArray * manualProxySpecifiers;                          //@synthesize manualProxySpecifiers=_manualProxySpecifiers - In the implementation block
@property (retain) NSArray * proxyAuthSpecifiers;                            //@synthesize proxyAuthSpecifiers=_proxyAuthSpecifiers - In the implementation block
@property (retain) PSSpecifier * proxyLabelSpecifier;                        //@synthesize proxyLabelSpecifier=_proxyLabelSpecifier - In the implementation block
@property (assign) unsigned long long proxyType;                             //@synthesize proxyType=_proxyType - In the implementation block
@property (assign) BOOL proxyAuthenticated;                                  //@synthesize proxyAuthenticated=_proxyAuthenticated - In the implementation block
@property (retain) NSString * proxyServer;                                   //@synthesize proxyServer=_proxyServer - In the implementation block
@property (retain) NSString * proxyPort;                                     //@synthesize proxyPort=_proxyPort - In the implementation block
@property (retain) NSString * proxyUsername;                                 //@synthesize proxyUsername=_proxyUsername - In the implementation block
@property (retain) NSString * proxyPassword;                                 //@synthesize proxyPassword=_proxyPassword - In the implementation block
@property (retain) NSString * proxyPACFile;                                  //@synthesize proxyPACFile=_proxyPACFile - In the implementation block
@property (retain) id ciscoCertificate;                                      //@synthesize ciscoCertificate=_ciscoCertificate - In the implementation block
@property (retain) NSArray * certificateIDs;                                 //@synthesize certificateIDs=_certificateIDs - In the implementation block
@property (retain) UIAlertView * deleteConfirmView;                          //@synthesize deleteConfirmView=_deleteConfirmView - In the implementation block
@property (retain) UIAlertView * pptpWarningView;                            //@synthesize pptpWarningView=_pptpWarningView - In the implementation block
@property (assign) BOOL pptpWarningAccepted;                                 //@synthesize pptpWarningAccepted=_pptpWarningAccepted - In the implementation block
@property (retain) PSSpecifier * editButton;                                 //@synthesize editButton=_editButton - In the implementation block
@property (retain) PSSpecifier * enableButton;                               //@synthesize enableButton=_enableButton - In the implementation block
-(NSString *)proxyServer;
-(void)setProxyServer:(NSString *)arg1 ;
-(void)setProxyPort:(NSString *)arg1 ;
-(void)setProxyType:(unsigned long long)arg1 ;
-(NSString *)proxyUsername;
-(BOOL)passwordRequired;
-(void)setPasswordRequired:(BOOL)arg1 ;
-(void)setProxyUsername:(NSString *)arg1 ;
-(void)setProxyPassword:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)server;
-(unsigned long long)encryptionType;
-(void)setEncryptionType:(unsigned long long)arg1 ;
-(void)setOnDemandEnabled:(BOOL)arg1 ;
-(BOOL)onDemandEnabled;
-(void)setRemoteIdentifier:(NSString *)arg1 ;
-(NSString *)sharedSecret;
-(void)setSharedSecret:(NSString *)arg1 ;
-(NSString *)remoteIdentifier;
-(BOOL)userCreated;
-(void)updateDoneButton;
-(void)appWillEnterForeground:(id)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)setUserCreated:(BOOL)arg1 ;
-(PSSpecifier *)editButton;
-(NSString *)account;
-(void)editButtonTapped:(id)arg1 ;
-(unsigned long long)proxyType;
-(NSString *)proxyPort;
-(NSString *)proxyPassword;
-(BOOL)useRSASecurID;
-(void)setUseRSASecurID:(BOOL)arg1 ;
-(void)vpnStatusChanged:(id)arg1 ;
-(void)vpnConfigurationChanged:(id)arg1 ;
-(void)saveButtonClicked:(id)arg1 ;
-(BOOL)overviewMode;
-(unsigned long long)vpnGrade;
-(NSMutableArray *)timeSpecifierArray;
-(void)timerUpdated:(id)arg1 ;
-(BOOL)proxyAuthenticated;
-(void)setProxyAuthenticated:(BOOL)arg1 ;
-(NSArray *)proxyAuthSpecifiers;
-(void)scrollToSpecifier:(id)arg1 ;
-(id)proxyType:(id)arg1 ;
-(NSArray *)manualProxySpecifiers;
-(id)proxyUsesAuthentication:(id)arg1 ;
-(NSArray *)pacSpecifiers;
-(NSString *)proxyPACFile;
-(void)setProxyPACFile:(NSString *)arg1 ;
-(PSSpecifier *)passwordSpecifier;
-(BOOL)sendAllTraffic;
-(void)setSendAllTraffic:(BOOL)arg1 ;
-(void)setOnDemandService:(BOOL)arg1 ;
-(UIAlertView *)deleteConfirmView;
-(unsigned long long)currentVPNType;
-(id)ciscoCertificate;
-(BOOL)usesCertificates;
-(BOOL)onDemandService;
-(id)onDemand:(id)arg1 ;
-(BOOL)haveEnoughValues;
-(id)useRSASecurIDForSpecifier:(id)arg1 ;
-(id)sendAllTraffic:(id)arg1 ;
-(unsigned long long)eapType;
-(unsigned long long)authType;
-(NSString *)groupDisplayName;
-(unsigned long long)originalVPNType;
-(void)setOriginalVPNType:(unsigned long long)arg1 ;
-(BOOL)saveConfigurationSettings;
-(BOOL)pptpWarningAccepted;
-(void)warnForPPTP;
-(void)setPptpWarningAccepted:(BOOL)arg1 ;
-(void)leaveEditMode;
-(void)setOverviewMode:(BOOL)arg1 ;
-(void)enterEditMode;
-(BOOL)deleteConfiguration:(id)arg1 ;
-(void)setDeleteConfirmView:(UIAlertView *)arg1 ;
-(void)setPptpWarningView:(UIAlertView *)arg1 ;
-(UIAlertView *)pptpWarningView;
-(void)deleteVPNConfiguration:(id)arg1 ;
-(PSSpecifier *)certificateListSpecifier;
-(PSSpecifier *)connectSpecifier;
-(void)setEapType:(unsigned long long)arg1 ;
-(void)setAuthType:(unsigned long long)arg1 ;
-(void)setVpnGrade:(unsigned long long)arg1 ;
-(void)setCurrentVPNType:(unsigned long long)arg1 ;
-(NSArray *)certificateIDs;
-(void)setUsesCertificates:(BOOL)arg1 ;
-(void)setCiscoCertificate:(id)arg1 ;
-(void)setUsesCertificates:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setGroupDisplayName:(NSString *)arg1 ;
-(void)setOnDemandService:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setDisplayName:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setUsername:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setServer:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setSharedSecret:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setCiscoCertificate:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setUseRSASecurID:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setSendAllTraffic:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setPPTPEncryptionLevel:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setEAPType:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setAuthType:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setGroupDisplayName:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setPassword:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setPasswordRequired:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setLocalIdentifier:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setRemoteIdentifier:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setProxyType:(id)arg1 specifier:(id)arg2 ;
-(void)setProxyServer:(id)arg1 specifier:(id)arg2 ;
-(void)setProxyServerPort:(id)arg1 specifier:(id)arg2 ;
-(void)setProxyUsesAuthentication:(id)arg1 specifier:(id)arg2 ;
-(void)setProxyUsername:(id)arg1 specifier:(id)arg2 ;
-(void)setProxyPassword:(id)arg1 specifier:(id)arg2 ;
-(void)setPacFile:(id)arg1 specifier:(id)arg2 ;
-(void)setAlwaysPrompt:(BOOL)arg1 ;
-(void)setIncludedBundleIDs:(NSDictionary *)arg1 ;
-(void)setStateForServiceID:(id)arg1 ;
-(PSSpecifier *)serverAddressSpecifier;
-(void)setCertificateIDs:(NSArray *)arg1 ;
-(void)setTimeSpecifierArray:(NSMutableArray *)arg1 ;
-(id)interfaceTypeForConnection:(id)arg1 ;
-(id)remoteIPForSpecifier:(id)arg1 ;
-(id)localIPForSpecifier:(id)arg1 ;
-(id)localIP2ForSpecifier:(id)arg1 ;
-(id)timeConnectedForSpecifier:(id)arg1 ;
-(id)serverForConnection:(id)arg1 ;
-(void)setServerSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)serverSpecifier;
-(id)usernameForConnection:(id)arg1 ;
-(void)setAccountSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)accountSpecifier;
-(void)setServerAddressSpecifier:(PSSpecifier *)arg1 ;
-(id)tunnelType:(id)arg1 ;
-(void)setConnectionState:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getConnectionStateForSpecifier:(id)arg1 ;
-(void)setConnectSpecifier:(PSSpecifier *)arg1 ;
-(void)setEnableButton:(PSSpecifier *)arg1 ;
-(void)enableButtonTapped:(id)arg1 ;
-(PSSpecifier *)enableButton;
-(BOOL)alwaysPrompt;
-(void)setPasswordEditOnly:(BOOL)arg1 ;
-(void)deleteConfirm:(id)arg1 ;
-(void)renewCertificate:(id)arg1 ;
-(NSDictionary *)includedBundleIDs;
-(id)getDescriptionForApp:(id)arg1 ;
-(BOOL)passwordEditOnly;
-(void)setPasswordSpecifier:(PSSpecifier *)arg1 ;
-(void)setVpnGradeStaticSpecifier:(PSSpecifier *)arg1 ;
-(void)setGroupNameSpecifier:(PSSpecifier *)arg1 ;
-(void)setLocalIdentifierSpecifier:(PSSpecifier *)arg1 ;
-(void)setRemoteIdentifierSpecifier:(PSSpecifier *)arg1 ;
-(void)setEapTypeSpecifier:(PSSpecifier *)arg1 ;
-(void)setUseCertificateSwitchSpecifier:(PSSpecifier *)arg1 ;
-(void)setAuthTypeSpecifier:(PSSpecifier *)arg1 ;
-(void)setCertificateListSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)useCertificateSwitchSpecifier;
-(void)setSharedSecretSpecifier:(PSSpecifier *)arg1 ;
-(void)setEncryptionTypeSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)encryptionTypeSpecifier;
-(void)setRsaSpecifier:(PSSpecifier *)arg1 ;
-(void)setTypeTabSpecifiers:(NSArray *)arg1 ;
-(void)setEditServerSpecifier:(PSSpecifier *)arg1 ;
-(void)setCiscoImageSpecifier:(PSSpecifier *)arg1 ;
-(void)setDisplayNameSpecifier:(PSSpecifier *)arg1 ;
-(void)setSendAllTrafficSpecifier:(PSSpecifier *)arg1 ;
-(void)setProxyLabelSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)proxyLabelSpecifier;
-(void)setProxyGroupSpecifiers:(NSArray *)arg1 ;
-(void)setPacSpecifiers:(NSArray *)arg1 ;
-(void)setManualProxySpecifiers:(NSArray *)arg1 ;
-(void)setProxyAuthSpecifiers:(NSArray *)arg1 ;
-(PSSpecifier *)ciscoImageSpecifier;
-(NSArray *)typeTabSpecifiers;
-(PSSpecifier *)vpnGradeStaticSpecifier;
-(PSSpecifier *)displayNameSpecifier;
-(PSSpecifier *)editServerSpecifier;
-(PSSpecifier *)remoteIdentifierSpecifier;
-(PSSpecifier *)localIdentifierSpecifier;
-(PSSpecifier *)eapTypeSpecifier;
-(PSSpecifier *)authTypeSpecifier;
-(PSSpecifier *)sharedSecretSpecifier;
-(PSSpecifier *)groupNameSpecifier;
-(PSSpecifier *)rsaSpecifier;
-(PSSpecifier *)sendAllTrafficSpecifier;
-(NSArray *)proxyGroupSpecifiers;
-(id)proxyServer:(id)arg1 ;
-(id)proxyServerPort:(id)arg1 ;
-(id)proxyUsername:(id)arg1 ;
-(id)proxyPassword:(id)arg1 ;
-(id)pacFile:(id)arg1 ;
-(void)setOnDemand:(id)arg1 forSpecifier:(id)arg2 ;
-(id)pptpEncryptionLevelForSpecifier:(id)arg1 ;
-(id)eapTypeForSpecifier:(id)arg1 ;
-(id)authTypeForSpecifier:(id)arg1 ;
-(void)setVPNGrade:(id)arg1 forSpecifier:(id)arg2 ;
-(id)vpnGradeForSpecifier:(id)arg1 ;
-(id)vpnGradeNameForSpecifier:(id)arg1 ;
-(void)setVPNType:(CFStringRef)arg1 forSpecifier:(id)arg2 ;
-(CFStringRef)vpnTypeForSpecifier:(id)arg1 ;
-(id)usernameForSpecifier:(id)arg1 ;
-(id)displayNameForSpecifier:(id)arg1 ;
-(id)serverForSpecifier:(id)arg1 ;
-(id)passwordForSpecifier:(id)arg1 ;
-(id)sharedSecretForSpecifier:(id)arg1 ;
-(id)ciscoCertificateForSpecifier:(id)arg1 ;
-(id)groupDisplayNameForSpecifier:(id)arg1 ;
-(id)localIdentifierForSpecifier:(id)arg1 ;
-(id)remoteIdentifierForSpecifier:(id)arg1 ;
-(id)usesCertificatesForSpecifier:(id)arg1 ;
-(id)statusForConnection:(id)arg1 ;
-(id)typeForConnection:(id)arg1 ;
-(void)setEditButton:(PSSpecifier *)arg1 ;
-(void)setAccount:(NSString *)arg1 ;
-(NSUUID *)serviceID;
-(void)setServer:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)setServiceID:(NSUUID *)arg1 ;
-(id)specifiers;
-(BOOL)editMode;
-(void)setEditMode:(BOOL)arg1 ;
-(void)saveButtonTapped:(id)arg1 ;
-(PSSpecifier *)timeSpecifier;
-(void)setTimeSpecifier:(PSSpecifier *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)dirty;
-(UIBarButtonItem *)backButton;
-(void)setBackButton:(UIBarButtonItem *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSString *)localIdentifier;
-(void)setLocalIdentifier:(NSString *)arg1 ;
-(id)bundle;
-(NSString *)displayName;
-(id)connection;
-(NSString *)appName;
-(NSString *)password;
@end

