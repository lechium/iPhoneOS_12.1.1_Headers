/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, SUOverlayTransition;

@interface SUOverlayAction : NSObject {

	long long _animationCount;
	UIViewController* _otherViewController;
	SUOverlayTransition* _transition;
	int _type;
	UIViewController* _viewController;

}

@property (assign,nonatomic) int actionType;                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long animationCount;                            //@synthesize animationCount=_animationCount - In the implementation block
@property (nonatomic,retain) UIViewController * otherViewController;              //@synthesize otherViewController=_otherViewController - In the implementation block
@property (nonatomic,retain) SUOverlayTransition * transition;                    //@synthesize transition=_transition - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                   //@synthesize viewController=_viewController - In the implementation block
-(int)actionType;
-(void)setActionType:(int)arg1 ;
-(UIViewController *)otherViewController;
-(void)setOtherViewController:(UIViewController *)arg1 ;
-(void)dealloc;
-(UIViewController *)viewController;
-(void)setViewController:(UIViewController *)arg1 ;
-(SUOverlayTransition *)transition;
-(long long)animationCount;
-(void)setAnimationCount:(long long)arg1 ;
-(void)setTransition:(SUOverlayTransition *)arg1 ;
@end
