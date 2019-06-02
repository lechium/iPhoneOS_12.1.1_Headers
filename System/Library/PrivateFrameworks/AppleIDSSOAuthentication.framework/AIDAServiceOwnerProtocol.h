/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AIDAServiceOwnerProtocol <NSObject>
@required
+(id)supportedServices;
-(id)nameComponentsForAccount:(id)arg1 service:(id)arg2;
-(void)signOutService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(id)initWithAccountStore:(id)arg1;
-(void)signInService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(id)altDSIDForAccount:(id)arg1 service:(id)arg2;
-(id)DSIDForAccount:(id)arg1 service:(id)arg2;
-(id)accountForService:(id)arg1;

@end

