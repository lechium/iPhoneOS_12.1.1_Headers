/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CADManagedConfigurationHandler
@required
-(BOOL)mayShowLocalAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
-(BOOL)mayShowLocalAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(int)arg2;
-(id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
-(id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(int)arg3;
-(BOOL)isOpenInRestrictionInEffect;

@end
