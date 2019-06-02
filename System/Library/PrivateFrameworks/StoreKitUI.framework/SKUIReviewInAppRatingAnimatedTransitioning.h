/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIViewController, NSString;

@interface SKUIReviewInAppRatingAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _presentation;
	UIViewController* _viewController;

}

@property (getter=isPresentation) BOOL presentation;                         //@synthesize presentation=_presentation - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_presentedViewControllerForContext:(id)arg1 ;
-(BOOL)isPresentation;
-(double)transitionDuration:(id)arg1 ;
-(void)_animateTransition:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)animateTransition:(id)arg1 ;
-(void)setPresentation:(BOOL)arg1 ;
-(UIViewController *)viewController;
-(void)setViewController:(UIViewController *)arg1 ;
@end
