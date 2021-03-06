/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/News/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@interface TeaUI.TwoLabelButton : UIControl <CAAnimationDelegate> {

	 highlightMask;
	 animationState;
	 buttonState;
	 animationTrigger;
	 titleLabelNormal;
	 titleLabelHighlighted;
	 labelNormal;
	 labelHighlighted;
	 borderColor;
	 backgroundColorNormal;
	 backgroundColorHighlighted;
	 onTap;

}
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end

