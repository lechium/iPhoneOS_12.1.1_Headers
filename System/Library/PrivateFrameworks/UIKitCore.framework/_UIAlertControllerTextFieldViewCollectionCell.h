/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class _UIAlertControllerTextFieldView, UITapGestureRecognizer;

@interface _UIAlertControllerTextFieldViewCollectionCell : UICollectionViewCell {

	_UIAlertControllerTextFieldView* _textField;
	UITapGestureRecognizer* _selectButtonGesture;

}

@property (nonatomic,readonly) _UIAlertControllerTextFieldView * textField; 
-(id)initWithFrame:(CGRect)arg1 ;
-(_UIAlertControllerTextFieldView *)textField;
-(id)preferredFocusedView;
-(void)_selectButton:(id)arg1 ;
-(void)prepareForReuse;
-(void)setTextField:(id)arg1 horizontalMargin:(double)arg2 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
@end

