/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonView.h>

@class CKBalloonImageView, CKGradientView;

@interface CKColoredBalloonView : CKBalloonView {

	char _color;
	BOOL _wantsGradient;
	CKBalloonImageView* _mask;
	CKBalloonImageView* _effectViewMask;
	CKGradientView* _gradientView;
	CGRect _gradientOverrideFrame;

}

@property (nonatomic,retain) CKBalloonImageView * mask;                                           //@synthesize mask=_mask - In the implementation block
@property (nonatomic,retain) CKBalloonImageView * effectViewMask;                                 //@synthesize effectViewMask=_effectViewMask - In the implementation block
@property (nonatomic,retain) CKGradientView * gradientView;                                       //@synthesize gradientView=_gradientView - In the implementation block
@property (assign,nonatomic) BOOL wantsGradient;                                                  //@synthesize wantsGradient=_wantsGradient - In the implementation block
@property (assign,nonatomic) char color;                                                          //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIView*<CKGradientReferenceView> gradientReferenceView; 
@property (nonatomic,readonly) BOOL hasBackground; 
@property (assign,nonatomic) CGRect gradientOverrideFrame;                                        //@synthesize gradientOverrideFrame=_gradientOverrideFrame - In the implementation block
-(void)addFilter:(id)arg1 ;
-(void)clearFilters;
-(CKGradientView *)gradientView;
-(void)setGradientView:(CKGradientView *)arg1 ;
-(id)overlayColor;
-(void)setGradientReferenceView:(UIView*<CKGradientReferenceView>)arg1 ;
-(BOOL)hasBackground;
-(BOOL)wantsGradient;
-(CKBalloonDescriptor_t)balloonDescriptor;
-(void)setHasTail:(BOOL)arg1 ;
-(void)setCanUseOpaqueMask:(BOOL)arg1 ;
-(BOOL)needsGroupOpacity;
-(void)setBalloonDescriptor:(CKBalloonDescriptor_t)arg1 ;
-(UIView*<CKGradientReferenceView>)gradientReferenceView;
-(void)configureForComposition:(id)arg1 ;
-(void)configureForMessagePart:(id)arg1 ;
-(void)setGradientOverrideFrame:(CGRect)arg1 ;
-(void)setEffectViewMaskImage:(id)arg1 ;
-(void)updateWantsGradient;
-(void)setWantsGradient:(BOOL)arg1 ;
-(CKBalloonImageView *)effectViewMask;
-(CGRect)gradientOverrideFrame;
-(void)setEffectViewMask:(CKBalloonImageView *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)description;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)prepareForReuse;
-(CKBalloonImageView *)mask;
-(void)setMask:(CKBalloonImageView *)arg1 ;
-(char)color;
-(void)setColor:(char)arg1 ;
-(void)prepareForDisplay;
@end
