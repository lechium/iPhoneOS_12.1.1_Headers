/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIView, UILabel;

@interface HUQuickControlStepperSegmentView : UIView {

	BOOL _highlighted;
	NSString* _title;
	unsigned long long _segmentLocation;
	double _cornerRadius;
	UIView* _highlightedOverlayView;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIView * highlightedOverlayView;                    //@synthesize highlightedOverlayView=_highlightedOverlayView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) unsigned long long segmentLocation;                 //@synthesize segmentLocation=_segmentLocation - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(void)setSegmentLocation:(unsigned long long)arg1 ;
-(void)_createTitleLabelIfNecessary;
-(void)_createHighlightedOverlayViewIfNecessary;
-(UIView *)highlightedOverlayView;
-(void)_updateCornerMask;
-(void)_updateTitleFontSize;
-(void)setHighlightedOverlayView:(UIView *)arg1 ;
-(unsigned long long)segmentLocation;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)cornerRadius;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

