/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SFExternalCredentialIdentityStoreManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedManager;
-(id)_credentialIdentityStoreForBundleIdentifier:(id)arg1 ;
-(void)getPrimaryCredentialIdentityStoreWithCompletion:(/*^block*/id)arg1 ;
-(void)getCredentialIdentityStoreForAppBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCredentialIdentityStoreForAppBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
@end
