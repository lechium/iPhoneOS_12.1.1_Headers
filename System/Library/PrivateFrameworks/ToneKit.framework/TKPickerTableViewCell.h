/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIColor;

@interface TKPickerTableViewCell : UITableViewCell {

	BOOL _shouldTintTextLabel;
	UIColor* _textLabelColor;

}

@property (nonatomic,retain) UIColor * textLabelColor;              //@synthesize textLabelColor=_textLabelColor - In the implementation block
@property (assign,nonatomic) BOOL shouldTintTextLabel;              //@synthesize shouldTintTextLabel=_shouldTintTextLabel - In the implementation block
-(void)_updateTextLabelColor;
-(void)setTextLabelColor:(UIColor *)arg1 ;
-(void)setShouldTintTextLabel:(BOOL)arg1 ;
-(BOOL)shouldTintTextLabel;
-(void)tintColorDidChange;
-(UIColor *)textLabelColor;
-(void)setSectionLocation:(int)arg1 animated:(BOOL)arg2 ;
@end
