/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountUI/AAUIBleachedNavigationController.h>
#import <libobjc.A.dylib/FAFamilySetupPageDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@class ACAccount, ACAccountStore, AAGrandSlamSigner, RemoteUIController, NSMutableURLRequest, UIActivityIndicatorView, NSArray, UINavigationItem, NSString;

@interface AAUIFamilySetupViewController : AAUIBleachedNavigationController <FAFamilySetupPageDelegate, RemoteUIControllerDelegate> {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	AAGrandSlamSigner* _grandSlamSigner;
	RemoteUIController* _remoteUIController;
	NSMutableURLRequest* _startRemoteUIRequest;
	NSMutableURLRequest* _currentRemoteUIRequest;
	BOOL _isShowingSpinner;
	UIActivityIndicatorView* _spinnerView;
	NSArray* _originalRightBarButtonItems;
	UINavigationItem* _navigationItemShowingSpinner;

}

@property (assign,nonatomic,__weak) id<AAUIFamilySetupDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
-(id)initWithAccount:(id)arg1 grandSlamSigner:(id)arg2 familyEligibilityResponse:(id)arg3 ;
-(id)_initWithAccount:(id)arg1 grandSlamSigner:(id)arg2 rootViewController:(id)arg3 ;
-(id)_createCloseButton;
-(BOOL)_isRunningInSettings;
-(id)_urlForLaunchingSettings;
-(void)_loadRemoteUIPages;
-(void)_closeButtonWasTapped:(id)arg1 ;
-(void)familySetupPage:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 ;
-(void)_showActivitySpinnerInNavigationBar;
-(void)_sendUserToiTunesSettings;
-(void)_remoteUIDidCancel;
-(void)_hideActivitySpinnerInNavigationBar;
-(id)initTrimmedFlowWithAccount:(id)arg1 grandSlamSigner:(id)arg2 ;
-(BOOL)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(BOOL)shouldAutorotate;
@end

