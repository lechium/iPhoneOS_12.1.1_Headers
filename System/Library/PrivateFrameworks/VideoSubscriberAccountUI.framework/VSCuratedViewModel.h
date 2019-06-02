/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VSViewModel.h>
#import <libobjc.A.dylib/VSLogoImageViewModel.h>

@class NSItemProvider, UIImage, NSString, VSOptional;

@interface VSCuratedViewModel : VSViewModel <VSLogoImageViewModel> {

	BOOL _beginValidationButtonEnabled;
	BOOL _showFooter;
	NSItemProvider* _logoProvider;
	UIImage* _logo;
	NSString* _logoAccessibilityLabel;
	NSString* _beginValidationButtonTitle;
	VSOptional* _identityProviderDisplayName;
	NSString* _message;
	NSString* _notice;
	NSString* _footerText;

}

@property (assign,getter=isBeginValidationButtonEnabled,nonatomic) BOOL beginValidationButtonEnabled;              //@synthesize beginValidationButtonEnabled=_beginValidationButtonEnabled - In the implementation block
@property (nonatomic,copy) NSString * beginValidationButtonTitle;                                                  //@synthesize beginValidationButtonTitle=_beginValidationButtonTitle - In the implementation block
@property (nonatomic,retain) VSOptional * identityProviderDisplayName;                                             //@synthesize identityProviderDisplayName=_identityProviderDisplayName - In the implementation block
@property (nonatomic,copy) NSString * message;                                                                     //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * notice;                                                                      //@synthesize notice=_notice - In the implementation block
@property (assign,nonatomic) BOOL showFooter;                                                                      //@synthesize showFooter=_showFooter - In the implementation block
@property (nonatomic,copy) NSString * footerText;                                                                  //@synthesize footerText=_footerText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSItemProvider * logoProvider;                                                        //@synthesize logoProvider=_logoProvider - In the implementation block
@property (nonatomic,retain) UIImage * logo;                                                                       //@synthesize logo=_logo - In the implementation block
@property (nonatomic,copy) NSString * logoAccessibilityLabel;                                                      //@synthesize logoAccessibilityLabel=_logoAccessibilityLabel - In the implementation block
-(void)setNotice:(NSString *)arg1 ;
-(NSString *)notice;
-(void)setLogo:(UIImage *)arg1 ;
-(UIImage *)logo;
-(VSOptional *)identityProviderDisplayName;
-(void)setShowFooter:(BOOL)arg1 ;
-(BOOL)showFooter;
-(NSString *)footerText;
-(void)setFooterText:(NSString *)arg1 ;
-(void)setLogoProvider:(NSItemProvider *)arg1 ;
-(void)configureWithRequest:(id)arg1 ;
-(NSItemProvider *)logoProvider;
-(NSString *)logoAccessibilityLabel;
-(void)setLogoAccessibilityLabel:(NSString *)arg1 ;
-(NSString *)beginValidationButtonTitle;
-(void)setBeginValidationButtonEnabled:(BOOL)arg1 ;
-(void)setBeginValidationButtonTitle:(NSString *)arg1 ;
-(void)setIdentityProviderDisplayName:(VSOptional *)arg1 ;
-(BOOL)isBeginValidationButtonEnabled;
-(id)init;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
@end

