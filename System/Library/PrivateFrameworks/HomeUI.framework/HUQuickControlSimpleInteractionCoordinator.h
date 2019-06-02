/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUQuickControlInteractionCoordinator.h>
#import <libobjc.A.dylib/HUQuickControlViewInteractionDelegate.h>

@protocol HUQuickControlInteractiveViewController;
@class UIViewController, NSString;

@interface HUQuickControlSimpleInteractionCoordinator : HUQuickControlInteractionCoordinator <HUQuickControlViewInteractionDelegate> {

	BOOL _shouldDismissAutomatically;
	BOOL _hasStartedSecondTouch;
	id _value;
	UIViewController*<HUQuickControlInteractiveViewController> _contraptionViewController;

}

@property (assign,nonatomic) BOOL hasStartedSecondTouch;                                                                          //@synthesize hasStartedSecondTouch=_hasStartedSecondTouch - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissAutomatically;                                                                     //@synthesize shouldDismissAutomatically=_shouldDismissAutomatically - In the implementation block
@property (nonatomic,readonly) UIView*<HUQuickControlInteractiveView> controlView; 
@property (nonatomic,readonly) UIViewController*<HUQuickControlInteractiveViewController> contraptionViewController;              //@synthesize contraptionViewController=_contraptionViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(void)setShouldDismissAutomatically:(BOOL)arg1 ;
-(id)initWithControlView:(id)arg1 delegate:(id)arg2 ;
-(void)controlView:(id)arg1 valueDidChange:(id)arg2 ;
-(BOOL)isUserInteractionActive;
-(void)controlView:(id)arg1 interactionStateDidChange:(BOOL)arg2 forFirstTouch:(BOOL)arg3 ;
-(void)_setValue:(id)arg1 notifyDelegate:(BOOL)arg2 updateControlView:(BOOL)arg3 ;
-(BOOL)shouldDismissAutomatically;
-(BOOL)hasStartedSecondTouch;
-(void)_requestDismissalIfNecessary;
-(void)setHasStartedSecondTouch:(BOOL)arg1 ;
-(id)initWithContraptionViewController:(id)arg1 delegate:(id)arg2 ;
-(UIViewController*<HUQuickControlInteractiveViewController>)contraptionViewController;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(BOOL)isUserInteractionEnabled;
@end

