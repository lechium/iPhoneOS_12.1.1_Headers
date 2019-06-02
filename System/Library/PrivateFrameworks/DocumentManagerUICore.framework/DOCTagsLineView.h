/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol DOCTagViewDelegate;
@class NSArray, UIStackView, DOCTagView, DOCTagIconView, DOCVisualEffectLabel;

@interface DOCTagsLineView : UIView {

	NSArray* _tags;
	id<DOCTagViewDelegate> _delegate;
	UIStackView* _stackView;
	DOCTagView* _tag1View;
	DOCTagView* _tag2View;
	UIStackView* _dotsView;
	DOCTagIconView* _dot1View;
	DOCTagIconView* _dot2View;
	DOCTagIconView* _dot3View;
	DOCVisualEffectLabel* _tagSummaryLabel;
	NSArray* _tagWidthConstraints;

}

@property (nonatomic,readonly) UIStackView * stackView;                             //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) DOCTagView * tag1View;                               //@synthesize tag1View=_tag1View - In the implementation block
@property (nonatomic,readonly) DOCTagView * tag2View;                               //@synthesize tag2View=_tag2View - In the implementation block
@property (nonatomic,readonly) UIStackView * dotsView;                              //@synthesize dotsView=_dotsView - In the implementation block
@property (nonatomic,readonly) DOCTagIconView * dot1View;                           //@synthesize dot1View=_dot1View - In the implementation block
@property (nonatomic,readonly) DOCTagIconView * dot2View;                           //@synthesize dot2View=_dot2View - In the implementation block
@property (nonatomic,readonly) DOCTagIconView * dot3View;                           //@synthesize dot3View=_dot3View - In the implementation block
@property (nonatomic,readonly) DOCVisualEffectLabel * tagSummaryLabel;              //@synthesize tagSummaryLabel=_tagSummaryLabel - In the implementation block
@property (nonatomic,readonly) NSArray * tagWidthConstraints;                       //@synthesize tagWidthConstraints=_tagWidthConstraints - In the implementation block
@property (nonatomic,retain) NSArray * tags;                                        //@synthesize tags=_tags - In the implementation block
@property (assign,nonatomic,__weak) id<DOCTagViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
-(void)setTags:(NSArray *)arg1 ;
-(NSArray *)tags;
-(id)createTagView;
-(id)createDotView;
-(id)createTagSummaryLabel;
-(UIStackView *)dotsView;
-(DOCTagIconView *)dot1View;
-(DOCTagIconView *)dot2View;
-(DOCTagIconView *)dot3View;
-(DOCTagView *)tag1View;
-(DOCTagView *)tag2View;
-(DOCVisualEffectLabel *)tagSummaryLabel;
-(double)maxTagWidth;
-(id)widthConstraintForDotView:(id)arg1 ;
-(void)updateMaxTagWidth;
-(void)layoutTags;
-(void)configureTagView:(id)arg1 withTag:(id)arg2 ;
-(void)configureDotsView:(id)arg1 withTags:(id)arg2 ;
-(void)configureTagLabel:(id)arg1 withTag:(id)arg2 tagCount:(unsigned long long)arg3 ;
-(NSArray *)tagWidthConstraints;
-(void)configureDotView:(id)arg1 withTag:(id)arg2 ;
-(void)setDelegate:(id<DOCTagViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<DOCTagViewDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIStackView *)stackView;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
@end

