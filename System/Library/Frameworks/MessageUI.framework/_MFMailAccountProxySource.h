/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSArray;

@interface _MFMailAccountProxySource : NSObject {

	NSLock* _lock;
	NSArray* _accountProxies;
	int _lastSourceAccountManagementQueried;
	BOOL _registeredForNotifications;
	int _notifyToken;

}
+(id)defaultInstance;
-(void)_deregisterForNotifications_nts;
-(void)_registerForNotifications_nts;
-(void)_resetAccountsChanged:(BOOL)arg1 ;
-(id)accountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(id)init;
-(void)dealloc;
-(void)_applicationDidEnterBackground:(id)arg1 ;
@end
