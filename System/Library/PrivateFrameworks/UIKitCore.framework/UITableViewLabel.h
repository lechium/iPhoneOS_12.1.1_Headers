/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILabel.h>

@class NSAttributedString, UITableViewCell;

@interface UITableViewLabel : UILabel {

	long long _savedNumberOfLines;
	double _firstParagraphFirstLineHeadIndent;
	NSAttributedString* _shadowAttributedText;
	UITableViewCell* _tableCell;

}

@property (assign,nonatomic,__weak) UITableViewCell * tableCell;              //@synthesize tableCell=_tableCell - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(id)_disabledFontColor;
-(void)setTableCell:(UITableViewCell *)arg1 ;
-(void)_setFirstParagraphFirstLineHeadIndent:(double)arg1 ;
-(void)_clearNumberOfLines;
-(void)_setNumberOfLinesForAXLayoutIfNecessary;
-(void)_cleanupErrantFirstLineHeadIndent;
-(void)_restoreNumberOfLines;
-(BOOL)_attributedStringHasParagraphStyleWithNonzeroFirstLineHeadIndent:(id)arg1 ;
-(UITableViewCell *)tableCell;
@end

