/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>

@protocol SearchUIFirstTimeExperienceDelegate;
@class NSString;

@interface SearchUIFirstTimeExperienceViewController : UIViewController <UITextViewDelegate> {

	id<SearchUIFirstTimeExperienceDelegate> _delegate;
	unsigned long long _style;
	unsigned long long _supportedDomains;
	NSString* _explanationText;
	NSString* _learnMoreText;
	NSString* _continueButtonTitle;
	NSString* _bundleIdentifier;
	long long _horizontalSizeClass;

}

@property (assign) unsigned long long style;                                                       //@synthesize style=_style - In the implementation block
@property (assign) unsigned long long supportedDomains;                                            //@synthesize supportedDomains=_supportedDomains - In the implementation block
@property (retain) NSString * explanationText;                                                     //@synthesize explanationText=_explanationText - In the implementation block
@property (retain) NSString * learnMoreText;                                                       //@synthesize learnMoreText=_learnMoreText - In the implementation block
@property (retain) NSString * continueButtonTitle;                                                 //@synthesize continueButtonTitle=_continueButtonTitle - In the implementation block
@property (retain) NSString * bundleIdentifier;                                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign) long long horizontalSizeClass;                                                  //@synthesize horizontalSizeClass=_horizontalSizeClass - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIFirstTimeExperienceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPad;
-(NSString *)explanationText;
-(void)setExplanationText:(NSString *)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 supportedDomains:(unsigned long long)arg2 explanationText:(id)arg3 learnMoreText:(id)arg4 continueButtonTitle:(id)arg5 ;
-(void)setSupportedDomains:(unsigned long long)arg1 ;
-(void)setLearnMoreText:(NSString *)arg1 ;
-(void)setContinueButtonTitle:(NSString *)arg1 ;
-(void)makeViews;
-(unsigned long long)supportedDomains;
-(NSString *)learnMoreText;
-(NSString *)continueButtonTitle;
-(void)remakeViewsForSizeClass:(long long)arg1 ;
-(void)setHorizontalSizeClass:(long long)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 supportedDomains:(unsigned long long)arg2 explanationText:(id)arg3 learnMoreText:(id)arg4 continueButtonTitle:(id)arg5 privacyDetailsTitle:(id)arg6 privacyDetailsText:(id)arg7 ;
-(void)showPrivacyView;
-(void)continueButtonPressed;
-(NSString *)bundleIdentifier;
-(void)setDelegate:(id<SearchUIFirstTimeExperienceDelegate>)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(id<SearchUIFirstTimeExperienceDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)horizontalSizeClass;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

