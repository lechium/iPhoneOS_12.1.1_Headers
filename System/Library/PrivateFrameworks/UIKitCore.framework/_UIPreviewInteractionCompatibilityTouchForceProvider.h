/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIPreviewInteractionTouchForceProviding.h>

@class UIView, _UITouchesObservingGestureRecognizer, UITouch, NSString;

@interface _UIPreviewInteractionCompatibilityTouchForceProvider : NSObject <UIGestureRecognizerDelegate, _UIPreviewInteractionTouchForceProviding> {

	UIView* _view;
	_UITouchesObservingGestureRecognizer* _gestureRecognizer;
	UITouch* _currentTouch;
	BOOL _active;

}

@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
@property (nonatomic,__weak,readonly) UIView * view;                   //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double touchForce; 
-(void)dealloc;
-(UIView *)view;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isActive;
-(id)initWithView:(id)arg1 ;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(void)cancelInteraction;
-(double)touchForce;
-(void)_handleTouchObservingGestureRecognizer:(id)arg1 ;
@end

