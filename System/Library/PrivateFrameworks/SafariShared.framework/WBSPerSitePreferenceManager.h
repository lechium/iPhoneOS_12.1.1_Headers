/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSPerSitePreferenceManager.h>

@protocol WBSPerSitePreferenceManager <NSObject>
@property (assign,nonatomic,__weak) id<WBSPerSitePreferenceManagerDelegate> delegate; 
@optional
-(BOOL)preferenceAppliesToHighLevelDomains:(id)arg1;

@required
-(void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(/*^block*/id)arg4;
-(void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)getDefaultPreferenceValueForPreference:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setDefaultValue:(id)arg1 ofPreference:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(id)valuesForPreference:(id)arg1;
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
-(void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setDelegate:(id)arg1;
-(id<WBSPerSitePreferenceManagerDelegate>)delegate;
-(id)preferences;

@end


@protocol WBSPerSitePreferenceManagerDelegate, WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate;
@class NSString;

@interface WBSPerSitePreferenceManager : NSObject <WBSPerSitePreferenceManager> {

	id<WBSPerSitePreferenceManagerDelegate> _delegate;
	id<WBSPerSitePreferenceManagerStorageDelegate> _storageDelegate;
	id<WBSPerSitePreferenceManagerDefaultsDelegate> _defaultsDelegate;

}

@property (assign,nonatomic,__weak) id<WBSPerSitePreferenceManagerStorageDelegate> storageDelegate;                //@synthesize storageDelegate=_storageDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<WBSPerSitePreferenceManagerDefaultsDelegate> defaultsDelegate;              //@synthesize defaultsDelegate=_defaultsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WBSPerSitePreferenceManagerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
-(void)setStorageDelegate:(id<WBSPerSitePreferenceManagerStorageDelegate>)arg1 ;
-(void)setDefaultsDelegate:(id<WBSPerSitePreferenceManagerDefaultsDelegate>)arg1 ;
-(void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getDefaultPreferenceValueForPreference:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDefaultValue:(id)arg1 ofPreference:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)valuesForPreference:(id)arg1 ;
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2 ;
-(void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3 ;
-(id)_validatePreferenceValue:(id)arg1 inPreference:(id)arg2 ;
-(void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<WBSPerSitePreferenceManagerStorageDelegate>)storageDelegate;
-(id<WBSPerSitePreferenceManagerDefaultsDelegate>)defaultsDelegate;
-(void)setDelegate:(id<WBSPerSitePreferenceManagerDelegate>)arg1 ;
-(id<WBSPerSitePreferenceManagerDelegate>)delegate;
-(id)preferences;
@end

