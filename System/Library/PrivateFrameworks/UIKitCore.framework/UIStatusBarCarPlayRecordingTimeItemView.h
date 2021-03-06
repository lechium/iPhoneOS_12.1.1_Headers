/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarCarPlayTimeItemView.h>

@class _UIStatusBarRoundedCornerView;

@interface UIStatusBarCarPlayRecordingTimeItemView : UIStatusBarCarPlayTimeItemView {

	_UIStatusBarRoundedCornerView* _pillView;

}
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(long long)buttonType;
-(BOOL)showsTouchWhenHighlighted;
-(long long)textStyle;
-(double)extraRightPadding;
-(BOOL)allowsUserInteraction;
-(void)_updatePillFrame;
-(CGRect)_pillFrame;
-(void)movedToSuperview:(id)arg1 ;
-(BOOL)usesAdvancedActions;
@end

