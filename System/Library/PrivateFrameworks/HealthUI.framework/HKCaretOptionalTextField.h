/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UITextField.h>

@interface HKCaretOptionalTextField : UITextField {

	BOOL _allowsSelection;
	BOOL _disableActions;

}

@property (assign,nonatomic) BOOL allowsSelection;              //@synthesize allowsSelection=_allowsSelection - In the implementation block
@property (assign,nonatomic) BOOL disableActions;               //@synthesize disableActions=_disableActions - In the implementation block
-(void)setAllowsSelection:(BOOL)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)allowsSelection;
-(void)setDisableActions:(BOOL)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(BOOL)disableActions;
-(double)actualMinimumFontSize;
@end

