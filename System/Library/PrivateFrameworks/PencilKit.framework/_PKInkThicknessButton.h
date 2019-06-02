/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSString, UIImageView, UIImage;

@interface _PKInkThicknessButton : UIControl {

	NSString* _inkIdentifier;
	double _weight;
	UIImageView* _inkImageView;
	UIImage* _assetImage;
	CGRect _lastRenderedBounds;

}

@property (nonatomic,retain) UIImageView * inkImageView;              //@synthesize inkImageView=_inkImageView - In the implementation block
@property (assign,nonatomic) CGRect lastRenderedBounds;               //@synthesize lastRenderedBounds=_lastRenderedBounds - In the implementation block
@property (nonatomic,retain) UIImage * assetImage;                    //@synthesize assetImage=_assetImage - In the implementation block
@property (nonatomic,readonly) NSString * inkIdentifier;              //@synthesize inkIdentifier=_inkIdentifier - In the implementation block
@property (nonatomic,readonly) double weight;                         //@synthesize weight=_weight - In the implementation block
+(CGSize)buttonSize;
+(id)backgroundColorForIsSelected:(BOOL)arg1 highlighted:(BOOL)arg2 ;
+(id)imageTintColorForIsSelected:(BOOL)arg1 highlighted:(BOOL)arg2 ;
-(id)initWithInkIdentifier:(id)arg1 weight:(double)arg2 ;
-(NSString *)inkIdentifier;
-(CGRect)lastRenderedBounds;
-(void)setLastRenderedBounds:(CGRect)arg1 ;
-(UIImageView *)inkImageView;
-(void)_animateToHighlightedState:(BOOL)arg1 ;
-(void)setInkImageView:(UIImageView *)arg1 ;
-(UIImage *)assetImage;
-(void)setAssetImage:(UIImage *)arg1 ;
-(void)didTouchUpInside;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)weight;
@end

