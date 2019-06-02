/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class NSString;

@interface OBPrivacyCombinedController : UIViewController {

	BOOL _darkMode;
	BOOL _allowsOpeningSafari;
	BOOL _presentedFromPrivacyPane;
	NSString* _displayLanguage;

}

@property (assign,getter=isDarkMode,nonatomic) BOOL darkMode;              //@synthesize darkMode=_darkMode - In the implementation block
@property (assign) BOOL allowsOpeningSafari;                               //@synthesize allowsOpeningSafari=_allowsOpeningSafari - In the implementation block
@property (assign) BOOL presentedFromPrivacyPane;                          //@synthesize presentedFromPrivacyPane=_presentedFromPrivacyPane - In the implementation block
@property (retain) NSString * displayLanguage;                             //@synthesize displayLanguage=_displayLanguage - In the implementation block
+(void)presentPrivacyCombinedControllerOverController:(id)arg1 dismissHandler:(/*^block*/id)arg2 ;
-(id)initWithIdentifiers:(id)arg1 ;
-(BOOL)isDarkMode;
-(void)setDarkMode:(BOOL)arg1 ;
-(void)setAllowsOpeningSafari:(BOOL)arg1 ;
-(BOOL)allowsOpeningSafari;
-(BOOL)presentedFromPrivacyPane;
-(void)setPresentedFromPrivacyPane:(BOOL)arg1 ;
-(NSString *)displayLanguage;
-(void)setDisplayLanguage:(NSString *)arg1 ;
-(id)init;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

