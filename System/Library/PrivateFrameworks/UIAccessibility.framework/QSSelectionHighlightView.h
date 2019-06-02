/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIColor;

@interface QSSelectionHighlightView : UIView {

	BOOL _sentenceHighlight;
	NSArray* _highlightSelectionRects;
	UIColor* _selectionColor;
	UIColor* _underlineColor;

}

@property (nonatomic,retain) NSArray * highlightSelectionRects;              //@synthesize highlightSelectionRects=_highlightSelectionRects - In the implementation block
@property (nonatomic,retain) UIColor * selectionColor;                       //@synthesize selectionColor=_selectionColor - In the implementation block
@property (nonatomic,retain) UIColor * underlineColor;                       //@synthesize underlineColor=_underlineColor - In the implementation block
@property (assign,nonatomic) BOOL sentenceHighlight;                         //@synthesize sentenceHighlight=_sentenceHighlight - In the implementation block
-(BOOL)sentenceHighlight;
-(NSArray *)highlightSelectionRects;
-(void)setHighlightSelectionRects:(NSArray *)arg1 ;
-(void)setSentenceHighlight:(BOOL)arg1 ;
-(void)setUnderlineColor:(UIColor *)arg1 ;
-(UIColor *)underlineColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setSelectionColor:(UIColor *)arg1 ;
-(UIColor *)selectionColor;
@end
