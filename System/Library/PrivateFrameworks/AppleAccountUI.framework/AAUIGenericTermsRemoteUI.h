/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RUILoaderDelegate.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>

@protocol AAUIGenericTermsRemoteUIDelegate;
@class UINavigationController, UIViewController, RUILoader, NSMutableArray, ACAccount, ACAccountStore, NSString;

@interface AAUIGenericTermsRemoteUI : NSObject <RUILoaderDelegate, RUIObjectModelDelegate> {

	UINavigationController* _parentNavController;
	UIViewController* _originatingViewController;
	UINavigationController* _genericTermsUIViewController;
	RUILoader* _loader;
	NSMutableArray* _objectModels;
	ACAccount* _account;
	ACAccountStore* _accountStore;
	BOOL _isModal;
	BOOL _isPreferringPassword;
	id<AAUIGenericTermsRemoteUIDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AAUIGenericTermsRemoteUIDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                               //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                                     //@synthesize accountStore=_accountStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAccount:(id)arg1 inStore:(id)arg2 ;
-(void)presentFromViewController:(id)arg1 modal:(BOOL)arg2 ;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)_addHeadersToRequest:(id)arg1 ;
-(void)_displayConnectionErrorAndDismiss;
-(void)_cleanupRUILoader;
-(void)_loadRequestPreferringPassword:(BOOL)arg1 ;
-(void)_cleanUpAndDismissWithSuccess:(BOOL)arg1 agreeURL:(id)arg2 ;
-(BOOL)_isUnauthorizedError:(id)arg1 ;
-(void)_agreeToTermsWithURLString:(id)arg1 preferPassword:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(ACAccount *)account;
-(ACAccountStore *)accountStore;
-(void)_popObjectModelAnimated:(BOOL)arg1 ;
-(id)sessionConfigurationForLoader:(id)arg1 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void)setDelegate:(id<AAUIGenericTermsRemoteUIDelegate>)arg1 ;
-(id<AAUIGenericTermsRemoteUIDelegate>)delegate;
@end

