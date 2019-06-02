/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSMutableString, PKPaymentSetupAboutView, NSString;

@interface PKPaymentSetupAboutViewController : UIViewController <UIScrollViewDelegate> {

	NSMutableString* _bodyText;
	PKPaymentSetupAboutView* _aboutView;
	void* _navigationController;
	BOOL _navigationControllerHidesShadow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initForPrivacyPresented:(BOOL)arg1 webService:(id)arg2 ;
-(void)_done:(id)arg1 ;
-(void)_setupNavigationItemWithTitle:(id)arg1 isPresented:(BOOL)arg2 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)loadView;
@end
