/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <UIKitCore/UIView.h>

@class SLSheetTextComposeView, NSMutableArray, NSMutableDictionary, UIView, UITextView, UILabel;

@interface SLSheetContentView : UIView {

	SLSheetTextComposeView* _textComposeView;
	NSMutableArray* _constraints;
	NSMutableDictionary* _intrinsicSizes;
	double _previewTopMargin;
	double _textViewTopMargin;
	UIView* _bottomSeparator;
	UIView* _autoCompletionModeSeparator;
	BOOL _autoCompletionMode;
	double _autoCompletionTextViewHeight;
	UIView* _previewView;
	UIView* _accessoryView;

}

@property (nonatomic,retain) UIView * previewView;                      //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,readonly) UITextView * textView; 
@property (nonatomic,readonly) UILabel * placeholderLabel; 
@property (nonatomic,retain) UIView * accessoryView;                    //@synthesize accessoryView=_accessoryView - In the implementation block
-(void)_setConstraints;
-(void)setIntrinsicSize:(CGSize)arg1 forVerticalSizeClass:(long long)arg2 ;
-(void)endAutoCompletionMode;
-(void)preflightAutoCompletionModeWithApparentHeight:(double)arg1 ;
-(void)beginAutoCompletionMode;
-(void)_setupView;
-(void)_resetAccessoryView;
-(void)resetPreview;
-(double)_previewMarginForContentSize:(CGSize)arg1 ;
-(double)_textTopMarginForContentSize:(CGSize)arg1 ;
-(void)updatePreviewMargin;
-(void)updateTextViewMargin;
-(void)adjustComposeViewForPreview;
-(void)_setupConstraints;
-(UIView *)previewView;
-(void)setPreviewView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(UILabel *)placeholderLabel;
-(UITextView *)textView;
@end

