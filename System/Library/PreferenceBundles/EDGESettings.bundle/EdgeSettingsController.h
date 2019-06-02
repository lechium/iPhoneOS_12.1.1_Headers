/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PreferenceBundles/EDGESettings.bundle/EDGESettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray, NSDictionary, PSSystemConfiguration, NSMutableDictionary, CTXPCServiceSubscriptionContext, CoreTelephonyClient;

@interface EdgeSettingsController : PSListController {

	NSArray* _switchSpecifiers;
	NSArray* _proxyAuthSpecifiers;
	NSArray* _group1Specifiers;
	NSArray* _pacSpecifiers;
	NSArray* _manualSpecifiers;
	NSArray* _advancedSpecifiers;
	NSArray* _InternetContextSpecifiers;
	NSArray* _VVMContextSpecifiers;
	NSArray* _MMSContextSpecifiers;
	NSArray* _IMSContextSpecifiers;
	NSArray* _tetheringContextSpecifiers;
	NSArray* _lteAttachAPNSpecifiers;
	NSArray* _resetSpecifiers;
	BOOL _proxyAuth;
	NSDictionary* _lastProxyDict;
	PSSystemConfiguration* _systemConfig;
	NSMutableDictionary* _lastAttachAPNDict;
	NSMutableDictionary* _newAttachAPNDict;
	BOOL _cacheInitialized;
	NSMutableDictionary* _internetSettingsDictionary;
	NSMutableDictionary* _vvmSettingsDictionary;
	NSMutableDictionary* _mmsSettingsDictionary;
	NSMutableDictionary* _imsSettingsDictionary;
	NSMutableDictionary* _tetheringSettingsDictionary;
	CTXPCServiceSubscriptionContext* _context;
	CoreTelephonyClient* _coreTelephonyClient;
	NSArray* _currectSet;

}

@property (nonatomic,retain) CTXPCServiceSubscriptionContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) CoreTelephonyClient * coreTelephonyClient;              //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,retain) NSArray * currectSet;                                   //@synthesize currectSet=_currectSet - In the implementation block
+(id)makeUIApnBasedOn:(id)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(id)_getAPNDictinaryForService:(int)arg1 ;
-(void)_updateKey:(id)arg1 toValue:(id)arg2 forServiceType:(int)arg3 ;
-(void)resetAPNsDictionaries;
-(void)loadCurrentAPNs;
-(BOOL)shouldResetAttachAPN;
-(void)resetAttachAPNSettings;
-(id)_getMMSObjectForKey:(id)arg1 ;
-(void)_setMMSOverrideValue:(id)arg1 forKey:(id)arg2 ;
-(id)_APNDictionaryForServiceFromSC:(int)arg1 ;
-(BOOL)_shouldShowUIForServiceType:(int)arg1 ;
-(BOOL)isAttachAPNEditingAllowed;
-(BOOL)isTypeOfService:(id)arg1 ofServiceType:(int)arg2 ;
-(id)_blankAPNDictionaryWithTypeMask:(int)arg1 ;
-(void)initAPNCacheDictionaries;
-(void)initDictionaryForUIApn:(id*)arg1 forServiceType:(int)arg2 ;
-(NSArray *)currectSet;
-(BOOL)_isAPNDictionaryBlank:(id)arg1 ;
-(void)uploadSettingsOnCT:(id)arg1 ;
-(void)setCurrectSet:(NSArray *)arg1 ;
-(id)attachAPNSettings;
-(void)commitAttachAPNSettings;
-(void)commitAPNsSettings;
-(id)getAPNDataForSpecifier:(id)arg1 ;
-(void)setAPNData:(id)arg1 forSpecifier:(id)arg2 ;
-(void)resetCarrierSettings:(id)arg1 ;
-(id)getMMSValueForSpecifier:(id)arg1 ;
-(void)setMMSValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getMMSNumericValueForSpecifier:(id)arg1 ;
-(void)setMMSNumericValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)edgeDNS:(id)arg1 ;
-(void)setEdgeDNS:(id)arg1 specifier:(id)arg2 ;
-(id)getAttachAPNDataForSpecifier:(id)arg1 ;
-(void)setAttachAPNData:(id)arg1 forSpecifier:(id)arg2 ;
-(id)specifiers;
-(id)init;
-(void)dealloc;
-(void)setContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(CTXPCServiceSubscriptionContext *)context;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)applicationDidResume;
-(void)applicationWillSuspend;
@end

