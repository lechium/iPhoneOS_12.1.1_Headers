/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariSafeBrowsing/SafariSafeBrowsing-Structs.h>
@interface SSBLookupContext : NSObject {

	shared_ptr<SafeBrowsing::LookupContext>* _lookupContext;
	unsigned _observerToken;

}
+(id)sharedLookupContext;
-(void)_fetchCellularDataPlanWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_forceDatabaseUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getDatabaseStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getServiceStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_forceLoadRemoteConfigurationFromDiskWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_forceUpdateRemoteConfigurationFromServerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_deleteAllDatabasesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getLastDatabaseUpdateTimeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_lookUpURLs:(id)arg1 forProtectionType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)lookUpURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
@end

