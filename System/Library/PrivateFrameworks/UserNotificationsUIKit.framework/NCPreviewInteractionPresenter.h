/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPreviewInteractionDelegatePrivate.h>

@protocol NCPreviewInteractionPresenterDelegate;
@class UIView, NSString, UIPreviewInteraction, NCPreviewInteractionPresenterContentView, NCTouchEaterGestureRecognizer, NCPreviewInteractionPresentedControl, MTMaterialView;

@interface NCPreviewInteractionPresenter : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegatePrivate> {

	BOOL _presented;
	BOOL _transitioning;
	BOOL _didSendBeginInteraction;
	UIView* _sourceView;
	NSString* _groupName;
	long long _materialRecipe;
	unsigned long long _backgroundMaterialOptions;
	unsigned long long _overlayMaterialOptions;
	id<NCPreviewInteractionPresenterDelegate> _delegate;
	UIPreviewInteraction* _previewInteraction;
	UIView* _containerView;
	NCPreviewInteractionPresenterContentView* _contentView;
	NCTouchEaterGestureRecognizer* _touchEater;
	NCPreviewInteractionPresentedControl* _presentedControl;
	MTMaterialView* _backgroundMaterialView;
	CGRect _sourceViewVisibleRect;

}

@property (getter=_previewInteraction,nonatomic,readonly) UIPreviewInteraction * previewInteraction;                                        //@synthesize previewInteraction=_previewInteraction - In the implementation block
@property (getter=_containerView,nonatomic,readonly) UIView * containerView;                                                                //@synthesize containerView=_containerView - In the implementation block
@property (getter=_contentView,nonatomic,readonly) NCPreviewInteractionPresenterContentView * contentView;                                  //@synthesize contentView=_contentView - In the implementation block
@property (getter=_touchEater,nonatomic,__weak,readonly) NCTouchEaterGestureRecognizer * touchEater;                                        //@synthesize touchEater=_touchEater - In the implementation block
@property (getter=_presentedControl,nonatomic,readonly) NCPreviewInteractionPresentedControl * presentedControl;                            //@synthesize presentedControl=_presentedControl - In the implementation block
@property (getter=_backgroundMaterialView,nonatomic,readonly) MTMaterialView * backgroundMaterialView;                                      //@synthesize backgroundMaterialView=_backgroundMaterialView - In the implementation block
@property (assign,setter=_setTransitioning:,getter=_isTransitioning,nonatomic) BOOL transitioning;                                          //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,setter=_setDidSendBeginInteraction:,getter=_didSendBeginInteraction,nonatomic) BOOL didSendBeginInteraction;              //@synthesize didSendBeginInteraction=_didSendBeginInteraction - In the implementation block
@property (assign,setter=_setPresented:,getter=isPresented,nonatomic) BOOL presented;                                                       //@synthesize presented=_presented - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,__weak,readonly) UIView * sourceView;                                                                                  //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) CGRect sourceViewVisibleRect;                                                                                  //@synthesize sourceViewVisibleRect=_sourceViewVisibleRect - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                                                                            //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,readonly) long long materialRecipe;                                                                                    //@synthesize materialRecipe=_materialRecipe - In the implementation block
@property (nonatomic,readonly) unsigned long long backgroundMaterialOptions;                                                                //@synthesize backgroundMaterialOptions=_backgroundMaterialOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long overlayMaterialOptions;                                                                   //@synthesize overlayMaterialOptions=_overlayMaterialOptions - In the implementation block
@property (assign,nonatomic,__weak) id<NCPreviewInteractionPresenterDelegate> delegate;                                                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_tearDown;
-(BOOL)isPresented;
-(void)_performCancel;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)_setUpContentView;
-(id)_previewInteraction;
-(BOOL)dismissModalFullScreenIfNeeded;
-(long long)materialRecipe;
-(id)_backgroundMaterialView;
-(unsigned long long)backgroundMaterialOptions;
-(unsigned long long)overlayMaterialOptions;
-(id)_touchEater;
-(id)initWithTitle:(id)arg1 sourceView:(id)arg2 materialRecipe:(long long)arg3 backgroundMaterialOptions:(unsigned long long)arg4 overlayMaterialOptions:(unsigned long long)arg5 ;
-(void)setSourceViewVisibleRect:(CGRect)arg1 ;
-(void)_configurePresentedControlIfNecessaryWithTitle:(id)arg1 ;
-(void)_setUpContainerView;
-(void)_setUpBackgroundMaterialView;
-(void)_setUpPresentedControl;
-(void)_animateTransitionWithProgress:(double)arg1 ended:(BOOL)arg2 cancelled:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleEatenTouch:(id)arg1 ;
-(void)_configureContainerViewIfNecessary;
-(void)_configureContentViewIfNecessary;
-(void)_configureBackgroundMaterialViewIfNecessary;
-(CGRect)_initialPresentedViewFrame;
-(double)_tensionForTransitionProgress:(double)arg1 ended:(BOOL)arg2 cancelled:(BOOL)arg3 ;
-(CGRect)_finalPresentedViewFrame;
-(CGRect)_transitionalPresentedViewFrameWithProgress:(double)arg1 ;
-(double)_frictionForTransitionProgress:(double)arg1 ended:(BOOL)arg2 cancelled:(BOOL)arg3 ;
-(BOOL)_didSendBeginInteraction;
-(void)_setDidSendBeginInteraction:(BOOL)arg1 ;
-(id)_presentedControl;
-(CGRect)sourceViewVisibleRect;
-(void)_setPresented:(BOOL)arg1 ;
-(void)_setTransitioning:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<NCPreviewInteractionPresenterDelegate>)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(NSString *)title;
-(id<NCPreviewInteractionPresenterDelegate>)delegate;
-(id)_contentView;
-(id)_containerView;
-(UIView *)sourceView;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(BOOL)_isTransitioning;
-(BOOL)previewInteractionShouldBegin:(id)arg1 ;
-(BOOL)_previewInteractionShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1 ;
-(id)_previewInteractionHighlighterForPreviewTransition:(id)arg1 ;
-(void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(BOOL)arg3 ;
-(void)previewInteractionDidCancel:(id)arg1 ;
@end
