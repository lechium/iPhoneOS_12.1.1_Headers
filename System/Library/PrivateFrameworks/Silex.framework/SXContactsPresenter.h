/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/SXContactsPresenter.h>

@protocol SXContactsPresenter <NSObject>
@required
-(void)presentContact:(id)arg1;

@end


@protocol SXViewControllerPresenting;
@class CNContactStore, UIViewController, NSString;

@interface SXContactsPresenter : NSObject <CNContactViewControllerDelegate, SXContactsPresenter> {

	id<SXViewControllerPresenting> _viewControllerPresenting;
	CNContactStore* _contactStore;
	UIViewController* _presentedViewController;

}

@property (nonatomic,readonly) id<SXViewControllerPresenting> viewControllerPresenting;              //@synthesize viewControllerPresenting=_viewControllerPresenting - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                                        //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) UIViewController * presentedViewController;                             //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNContactStore *)contactStore;
-(id<SXViewControllerPresenting>)viewControllerPresenting;
-(void)presentContact:(id)arg1 ;
-(id)initWithViewControllerPresenting:(id)arg1 contactStore:(id)arg2 ;
-(void)dismissPresentedViewController;
-(UIViewController *)presentedViewController;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
@end

