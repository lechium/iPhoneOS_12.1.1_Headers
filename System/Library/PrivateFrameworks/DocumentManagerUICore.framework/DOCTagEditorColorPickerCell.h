/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class DOCTagColorPicker, UIGestureRecognizer;

@interface DOCTagEditorColorPickerCell : UICollectionViewCell {

	DOCTagColorPicker* _colorPickerView;

}

@property (nonatomic,retain) DOCTagColorPicker * colorPickerView;                                  //@synthesize colorPickerView=_colorPickerView - In the implementation block
@property (nonatomic,readonly) long long selectedColor; 
@property (nonatomic,readonly) UIGestureRecognizer * changeColorPanGestureRecognizer; 
-(long long)selectedColor;
-(void)setColorPickerView:(DOCTagColorPicker *)arg1 ;
-(DOCTagColorPicker *)colorPickerView;
-(UIGestureRecognizer *)changeColorPanGestureRecognizer;
-(id)initWithFrame:(CGRect)arg1 ;
@end
