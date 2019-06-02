/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFPasswordViewController.h>

@protocol SFPasswordPickerServiceViewControllerProtocol;
@class SFPasswordRemoteViewController, SFQueueingServiceViewControllerProxy;

@interface _SFAppAutoFillPasswordViewController : _SFPasswordViewController {

	SFPasswordRemoteViewController* _remoteViewController;
	SFQueueingServiceViewControllerProxy*<SFPasswordPickerServiceViewControllerProtocol> _serviceProxy;

}
-(void)setAuthenticationGracePeriod:(double)arg1 ;
-(void)remoteViewController:(id)arg1 selectedCredential:(id)arg2 ;
-(void)_setUpServiceProxyIfNeeded;
-(id)_connectToServiceWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)viewDidLoad;
-(id)_remoteViewController;
-(void)setWebViewURL:(id)arg1 ;
-(void)setRemoteAppID:(id)arg1 ;
-(void)setRemoteLocalizedAppName:(id)arg1 ;
-(void)setRemoteUnlocalizedAppName:(id)arg1 ;
-(void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)arg1 ;
-(void)authenticateToPresentInPopover:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
@end
