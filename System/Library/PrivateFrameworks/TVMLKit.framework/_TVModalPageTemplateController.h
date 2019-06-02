/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPageViewControllerDataSource.h>

@class IKViewElement, NSArray, UIPageViewController, NSString;

@interface _TVModalPageTemplateController : UIViewController <UIPageViewControllerDataSource> {

	IKViewElement* _backgroundElement;
	NSArray* _bezelViewControllers;
	IKViewElement* _collectionListElement;
	UIPageViewController* _pageViewController;
	NSArray* _viewControllers;
	IKViewElement* _viewElement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateWithViewElement:(id)arg1 ;
-(id)_viewControllerWithElement:(id)arg1 existingController:(id)arg2 ;
-(BOOL)_updateWithCollectionListElement:(id)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)didMoveToParentViewController:(id)arg1 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)_tapAction:(id)arg1 ;
@end

