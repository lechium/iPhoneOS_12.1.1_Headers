/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol DOCAddTagTextFieldDelegate;
@class DOCTagIconView, UILabel, UIVisualEffectView, UITextField, CAShapeLayer, NSString;

@interface DOCAddTagView : UIView <UITextFieldDelegate> {

	id<DOCAddTagTextFieldDelegate> _delegate;
	DOCTagIconView* _tagDotView;
	UILabel* _addNewTagLabel;
	UIVisualEffectView* _addNewTagLabelWrapper;
	UITextField* _tagNameTextField;
	CAShapeLayer* _borderLayer;

}

@property (nonatomic,readonly) DOCTagIconView * tagDotView;                               //@synthesize tagDotView=_tagDotView - In the implementation block
@property (nonatomic,readonly) UILabel * addNewTagLabel;                                  //@synthesize addNewTagLabel=_addNewTagLabel - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * addNewTagLabelWrapper;                //@synthesize addNewTagLabelWrapper=_addNewTagLabelWrapper - In the implementation block
@property (nonatomic,readonly) UITextField * tagNameTextField;                            //@synthesize tagNameTextField=_tagNameTextField - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * borderLayer;                                //@synthesize borderLayer=_borderLayer - In the implementation block
@property (assign,nonatomic,__weak) id<DOCAddTagTextFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textFieldDidChange:(id)arg1 ;
-(DOCTagIconView *)tagDotView;
-(void)configureBorderPath;
-(UIVisualEffectView *)addNewTagLabelWrapper;
-(UILabel *)addNewTagLabel;
-(UITextField *)tagNameTextField;
-(CAShapeLayer *)borderLayer;
-(void)setDelegate:(id<DOCAddTagTextFieldDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(id<DOCAddTagTextFieldDelegate>)delegate;
-(void)cancel;
-(void)commit;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
@end

