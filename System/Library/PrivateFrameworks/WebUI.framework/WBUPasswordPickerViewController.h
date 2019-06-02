/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <UIKitCore/UINavigationController.h>

@class NSString, _WBUPasswordPicker, NSArray;

@interface WBUPasswordPickerViewController : UINavigationController {

	NSString* _prompt;
	long long _minimumNumberOfCredentialsToShowLikelyMatchesSection;
	/*^block*/id _completionHandler;
	_WBUPasswordPicker* _picker;
	BOOL _shouldDismissOnCompletion;
	BOOL _shouldShowIcons;
	BOOL _forUserNamesOnly;
	NSArray* _hintStrings;
	NSArray* _serviceNameHintStrings;
	NSArray* _domainHintStrings;

}

@property (nonatomic,readonly) BOOL forUserNamesOnly;                                                       //@synthesize forUserNamesOnly=_forUserNamesOnly - In the implementation block
@property (nonatomic,copy,readonly) NSArray * hintStrings;                                                  //@synthesize hintStrings=_hintStrings - In the implementation block
@property (nonatomic,copy,readonly) NSString * prompt;                                                      //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,copy,readonly) NSArray * serviceNameHintStrings;                                       //@synthesize serviceNameHintStrings=_serviceNameHintStrings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * domainHintStrings;                                            //@synthesize domainHintStrings=_domainHintStrings - In the implementation block
@property (nonatomic,readonly) long long minimumNumberOfCredentialsToShowLikelyMatchesSection;              //@synthesize minimumNumberOfCredentialsToShowLikelyMatchesSection=_minimumNumberOfCredentialsToShowLikelyMatchesSection - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissOnCompletion;                                                //@synthesize shouldDismissOnCompletion=_shouldDismissOnCompletion - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowIcons;                                                        //@synthesize shouldShowIcons=_shouldShowIcons - In the implementation block
+(CGSize)preferredIconSize;
+(BOOL)_preventsAppearanceProxyCustomization;
-(BOOL)forUserNamesOnly;
-(NSArray *)serviceNameHintStrings;
-(NSArray *)domainHintStrings;
-(long long)minimumNumberOfCredentialsToShowLikelyMatchesSection;
-(BOOL)shouldShowIcons;
-(void)_pickSavedPassword:(id)arg1 ;
-(id)initWithPrompt:(id)arg1 forUserNamesOnly:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithPrompt:(id)arg1 forUserNamesOnly:(BOOL)arg2 hintStrings:(id)arg3 minimumNumberOfCredentialsToShowLikelyMatchesSection:(long long)arg4 shouldDismissOnCompletion:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)initWithPrompt:(id)arg1 forUserNamesOnly:(BOOL)arg2 appName:(id)arg3 appID:(id)arg4 matchedSites:(id)arg5 urlString:(id)arg6 minimumNumberOfCredentialsToShowLikelyMatchesSection:(long long)arg7 shouldDismissOnCompletion:(BOOL)arg8 shouldShowIcons:(BOOL)arg9 completionHandler:(/*^block*/id)arg10 ;
-(NSArray *)hintStrings;
-(BOOL)shouldDismissOnCompletion;
-(void)setShouldDismissOnCompletion:(BOOL)arg1 ;
-(void)_appDidEnterBackground:(id)arg1 ;
-(id)initWithPrompt:(id)arg1 forUserNamesOnly:(BOOL)arg2 appNames:(id)arg3 appID:(id)arg4 matchedSites:(id)arg5 urlString:(id)arg6 minimumNumberOfCredentialsToShowLikelyMatchesSection:(long long)arg7 shouldDismissOnCompletion:(BOOL)arg8 shouldShowIcons:(BOOL)arg9 completionHandler:(/*^block*/id)arg10 ;
-(id)iconForDomain:(id)arg1 ;
-(id)backgroundColorForDomain:(id)arg1 ;
-(void)iconDidUpdateForDomain:(id)arg1 ;
-(void)dealloc;
-(NSString *)prompt;
-(BOOL)_viewControllerUnderlapsStatusBar;
-(void)_cancel;
@end

