/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/NUIContainerStackViewDelegate.h>

@class TLKFormattedText, TLKVibrantLabel, TLKStackView, TLKTextAreaView, NSString;

@interface TLKAuxilliaryTextView : TLKView <NUIContainerStackViewDelegate> {

	TLKFormattedText* _topText;
	TLKFormattedText* _middleText;
	TLKFormattedText* _bottomText;
	TLKVibrantLabel* _topLabel;
	TLKVibrantLabel* _middleLabel;
	TLKVibrantLabel* _bottomLabel;
	TLKStackView* _stackView;
	TLKTextAreaView* _textAreaViewForAlignment;

}

@property (retain) TLKVibrantLabel * topLabel;                              //@synthesize topLabel=_topLabel - In the implementation block
@property (retain) TLKVibrantLabel * middleLabel;                           //@synthesize middleLabel=_middleLabel - In the implementation block
@property (retain) TLKVibrantLabel * bottomLabel;                           //@synthesize bottomLabel=_bottomLabel - In the implementation block
@property (retain) TLKStackView * stackView;                                //@synthesize stackView=_stackView - In the implementation block
@property (retain) TLKTextAreaView * textAreaViewForAlignment;              //@synthesize textAreaViewForAlignment=_textAreaViewForAlignment - In the implementation block
@property (nonatomic,retain) TLKFormattedText * topText;                    //@synthesize topText=_topText - In the implementation block
@property (nonatomic,retain) TLKFormattedText * middleText;                 //@synthesize middleText=_middleText - In the implementation block
@property (nonatomic,retain) TLKFormattedText * bottomText;                 //@synthesize bottomText=_bottomText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)formattedTextHasTextContent:(id)arg1 ;
+(id)largeMiddleTextFont;
-(TLKFormattedText *)topText;
-(TLKFormattedText *)middleText;
-(TLKFormattedText *)bottomText;
-(void)styleDidChange:(unsigned long long)arg1 ;
-(void)observedPropertiesChanged;
-(void)setMiddleLabel:(TLKVibrantLabel *)arg1 ;
-(TLKVibrantLabel *)middleLabel;
-(void)generateAndSizeTextAreaViewIfNeeded;
-(TLKTextAreaView *)textAreaViewForAlignment;
-(void)matchBaselineOfLabel:(id)arg1 toView:(id)arg2 ;
-(void)setTextAreaViewForAlignment:(TLKTextAreaView *)arg1 ;
-(id)middleLabelFont;
-(id)bottomLabelFont;
-(id)topLabelString;
-(id)middleLabelString;
-(id)bottomLabelString;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg1 ;
-(UIEdgeInsets)containerStackView:(id)arg1 minimumSpacingAdjecentToArrangedSubview:(id)arg2 ;
-(void)setTopText:(TLKFormattedText *)arg1 ;
-(void)setMiddleText:(TLKFormattedText *)arg1 ;
-(void)setBottomText:(TLKFormattedText *)arg1 ;
-(TLKVibrantLabel *)topLabel;
-(void)setTopLabel:(TLKVibrantLabel *)arg1 ;
-(TLKVibrantLabel *)bottomLabel;
-(void)setBottomLabel:(TLKVibrantLabel *)arg1 ;
-(id)init;
-(TLKStackView *)stackView;
-(void)setStackView:(TLKStackView *)arg1 ;
@end

