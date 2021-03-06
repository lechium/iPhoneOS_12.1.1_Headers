/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, VSStoreURLBag, NSOperationQueue;

@interface VSSetupFlowPreparationOperation : VSAsyncOperation {

	VSOptional* _storage;
	VSOptional* _preferences;
	VSOptional* _result;
	VSStoreURLBag* _bag;
	NSOperationQueue* _privateQueue;

}

@property (nonatomic,retain) VSOptional * result;                          //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) VSStoreURLBag * bag;                          //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;              //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) VSOptional * storage;                         //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) VSOptional * preferences;                     //@synthesize preferences=_preferences - In the implementation block
-(VSStoreURLBag *)bag;
-(void)setBag:(VSStoreURLBag *)arg1 ;
-(void)setResult:(VSOptional *)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(VSOptional *)storage;
-(void)setStorage:(VSOptional *)arg1 ;
-(void)_checkAvailability;
-(void)_finishWithFlow:(id)arg1 ;
-(void)_checkForExistingAccounts;
-(void)_fetchProviderForAccount:(id)arg1 ;
-(void)_fetchAllProvidersIfNeeded;
-(void)_fetchAllProviders;
-(void)_checkForSupportedAppsButton;
-(void)_checkForSupportedAppsButtonWithFlow:(id)arg1 ;
-(void)_checkForSupportedAppsFromProvider:(id)arg1 ;
-(void)_resolveBundleIDs:(id)arg1 forFlow:(id)arg2 ;
-(void)_checkForPersonalizedChannelsWithResponse:(id)arg1 identityProvider:(id)arg2 ;
-(void)_findBundleIDsForAdamIDs:(id)arg1 withFlow:(id)arg2 ;
-(void)_checkPreferences;
-(id)init;
-(VSOptional *)result;
-(void)setPreferences:(VSOptional *)arg1 ;
-(VSOptional *)preferences;
-(NSOperationQueue *)privateQueue;
-(void)executionDidBegin;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
@end

