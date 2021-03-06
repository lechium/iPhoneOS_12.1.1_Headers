/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>
#import <libobjc.A.dylib/CKBalloonTextViewInteractionDelegate.h>

@class CKBalloonTextView, NSAttributedString, NSString;

@interface CKTextBalloonView : CKColoredBalloonView <CKBalloonTextViewInteractionDelegate> {

	BOOL _centerTextWhenSkinny;
	CKBalloonTextView* _textView;
	NSAttributedString* _attributedText;

}

@property (nonatomic,retain) CKBalloonTextView * textView;                   //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) BOOL centerTextWhenSkinny;                      //@synthesize centerTextWhenSkinny=_centerTextWhenSkinny - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addFilter:(id)arg1 ;
-(void)clearFilters;
-(Class)invisibleInkEffectViewClass;
-(void)invisibleInkEffectViewWasUncovered;
-(void)attachInvisibleInkEffectView;
-(void)detachInvisibleInkEffectView;
-(void)cullSubviewsWithVisibleBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)updateRasterizationForInvisibleInkEffect;
-(void)configureForComposition:(id)arg1 ;
-(void)configureForMessagePart:(id)arg1 ;
-(void)setCenterTextWhenSkinny:(BOOL)arg1 ;
-(void)interactionStartedFromPreviewItemControllerInTextView:(id)arg1 ;
-(void)interactionStoppedFromPreviewItemControllerInTextView:(id)arg1 ;
-(double)textViewWidthForWidth:(double)arg1 ;
-(void)truncateForLargeText;
-(void)restoreFromLargeTextTruncation;
-(BOOL)centerTextWhenSkinny;
-(NSString *)description;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(void)prepareForReuse;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)prepareForDisplay;
-(NSAttributedString *)attributedText;
-(void)setTextView:(CKBalloonTextView *)arg1 ;
-(CKBalloonTextView *)textView;
@end

