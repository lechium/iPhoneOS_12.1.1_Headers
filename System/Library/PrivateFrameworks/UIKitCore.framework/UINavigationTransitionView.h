/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIView, UIResponder, UIWindow;

@interface UINavigationTransitionView : UIView <NSCoding> {

	UIView* _fromView;
	UIView* _toView;
	long long _transition;
	UIResponder* _firstResponderToRestore;
	UIWindow* _originalWindow;
	double _fromViewAlpha;
	unsigned _isTransitioning : 1;
	unsigned _popoverWillCleanUpNavigationTransition : 1;
	unsigned _usesRoundedCorners : 1;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) UIView * fromView;                                                //@synthesize fromView=_fromView - In the implementation block
@property (assign,nonatomic) BOOL usesRoundedCorners; 
@property (readonly) BOOL isTransitioning; 
@property (assign,nonatomic) BOOL popoverWillCleanUpNavigationTransition; 
+(double)defaultDurationForTransition:(long long)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)delegate;
-(BOOL)transition:(long long)arg1 toView:(id)arg2 ;
-(void)setUsesRoundedCorners:(BOOL)arg1 ;
-(BOOL)usesRoundedCorners;
-(UIView *)fromView;
-(BOOL)isTransitioning;
-(BOOL)_isTransitioningFromView:(id)arg1 ;
-(BOOL)transition:(long long)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(void)_navigationTransitionDidStop;
-(void)_cleanupTransition;
-(void)_notifyDelegateTransitionDidStopWithContext:(id)arg1 ;
-(void)setPopoverWillCleanUpNavigationTransition:(BOOL)arg1 ;
-(BOOL)popoverWillCleanUpNavigationTransition;
-(void)_cleanupTransitionFromPopover;
@end

