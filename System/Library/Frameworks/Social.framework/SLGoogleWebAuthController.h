/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class ACAccount, ACAccountStore, UIViewController, NSExtension, NSError, NSString;

@interface SLGoogleWebAuthController : UIViewController <UIWebViewDelegate> {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	/*^block*/id _presentationBlock;
	UIViewController* _serviceViewController;
	NSExtension* _extension;
	NSError* _extensionCancellationError;
	BOOL _extensionRequestDidComplete;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_commonInitializationWithAccount:(id)arg1 accountStore:(id)arg2 username:(id)arg3 accountDescription:(id)arg4 youTube:(BOOL)arg5 presentationBlock:(/*^block*/id)arg6 ;
-(void)_extensionRequestDidCancelWithError:(id)arg1 ;
-(void)_extensionRequestDidCompleteWithTokens:(id)arg1 extensionCompletion:(/*^block*/id)arg2 ;
-(void)_didInstantiateRemoteViewController;
-(void)_presentInternetOfflineError;
-(void)_dismissAndCompleteWithIdentity:(id)arg1 error:(id)arg2 extensionCompletion:(/*^block*/id)arg3 ;
-(void)_presentUsernameMismatchAlert;
-(id)initWithAccountDescription:(id)arg1 presentationBlock:(/*^block*/id)arg2 ;
-(id)initWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(/*^block*/id)arg3 ;
-(id)initWithYouTubeUsername:(id)arg1 accountDescription:(id)arg2 presentationBlock:(/*^block*/id)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end

