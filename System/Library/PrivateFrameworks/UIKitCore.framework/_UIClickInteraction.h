/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIClickInteractionDriverDelegate.h>
#import <UIKit/UIInteraction_Private.h>
#import <UIKit/UIInteraction.h>

@protocol UIInteractionEffect, _UIClickInteractionDelegate, _UIClickInteractionDriving;
@class UIView, _UIClickFeedbackGenerator, NSString;

@interface _UIClickInteraction : NSObject <_UIClickInteractionDriverDelegate, UIInteraction_Private, UIInteraction> {

	BOOL _latching;
	BOOL _selected;
	BOOL _delaysOtherPanRecognizers;
	UIView* _view;
	id<UIInteractionEffect> _interactionEffect;
	id<_UIClickInteractionDelegate> _delegate;
	double _allowableMovement;
	id<_UIClickInteractionDriving> _driver;
	_UIClickFeedbackGenerator* _feedbackGenerator;
	Class _overrideDriverClass;

}

@property (nonatomic,retain) id<_UIClickInteractionDriving> driver;                                  //@synthesize driver=_driver - In the implementation block
@property (nonatomic,retain) _UIClickFeedbackGenerator * feedbackGenerator;                          //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,setter=_setOverrideDriverClass:,nonatomic) Class overrideDriverClass;              //@synthesize overrideDriverClass=_overrideDriverClass - In the implementation block
@property (assign,nonatomic) BOOL delaysOtherPanRecognizers;                                         //@synthesize delaysOtherPanRecognizers=_delaysOtherPanRecognizers - In the implementation block
@property (assign,nonatomic,__weak) id<_UIClickInteractionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isLatching,nonatomic) BOOL latching;                                        //@synthesize latching=_latching - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                        //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) double allowableMovement;                                               //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view;                                                 //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) id<UIInteractionEffect> interactionEffect;                              //@synthesize interactionEffect=_interactionEffect - In the implementation block
-(id)init;
-(void)setDelegate:(id<_UIClickInteractionDelegate>)arg1 ;
-(UIView *)view;
-(id<_UIClickInteractionDelegate>)delegate;
-(void)setAllowableMovement:(double)arg1 ;
-(void)setFeedbackGenerator:(_UIClickFeedbackGenerator *)arg1 ;
-(_UIClickFeedbackGenerator *)feedbackGenerator;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(void)cancelInteraction;
-(id<UIInteractionEffect>)interactionEffect;
-(double)allowableMovement;
-(void)setInteractionEffect:(id<UIInteractionEffect>)arg1 ;
-(BOOL)clickDriverShouldBegin:(id)arg1 ;
-(void)clickDriver:(id)arg1 didPerformStateChange:(unsigned long long)arg2 ;
-(void)clickDriver:(id)arg1 didUpdateHighlightProgress:(double)arg2 ;
-(BOOL)clickDriver:(id)arg1 shouldDelayGestureRecognizer:(id)arg2 ;
-(void)_beginInteraction;
-(void)setLatching:(BOOL)arg1 ;
-(BOOL)isLatching;
-(void)setDelaysOtherPanRecognizers:(BOOL)arg1 ;
-(void)_viewTraitCollectionDidChange:(id)arg1 ;
-(void)_setOverrideDriverClass:(Class)arg1 ;
-(void)_createFeedbackGenerator;
-(id<_UIClickInteractionDriving>)driver;
-(void)_updateDriver;
-(Class)_driverClass;
-(void)setDriver:(id<_UIClickInteractionDriving>)arg1 ;
-(Class)overrideDriverClass;
-(void)_endInteraction;
-(BOOL)delaysOtherPanRecognizers;
@end

