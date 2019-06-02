/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView, IKViewElement, IKTextElement, IKImageElement, _TVImageView, _TVLabel;

@interface _TVPopoverTableViewCell : UITableViewCell {

	BOOL _imageLoaded;
	UIView* _dimmingView;
	IKViewElement* _cardElement;
	IKTextElement* _textElement;
	IKImageElement* _imageElement;
	double _preferredHeight;
	UIView* _cardView;
	_TVImageView* _tvImageView;
	_TVLabel* _tvLabel;

}

@property (assign,getter=isImageLoaded,nonatomic) BOOL imageLoaded;              //@synthesize imageLoaded=_imageLoaded - In the implementation block
@property (nonatomic,retain) UIView * cardView;                                  //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                               //@synthesize dimmingView=_dimmingView - In the implementation block
@property (nonatomic,retain) _TVImageView * tvImageView;                         //@synthesize tvImageView=_tvImageView - In the implementation block
@property (nonatomic,retain) _TVLabel * tvLabel;                                 //@synthesize tvLabel=_tvLabel - In the implementation block
@property (nonatomic,retain) IKViewElement * cardElement;                        //@synthesize cardElement=_cardElement - In the implementation block
@property (nonatomic,retain) IKTextElement * textElement;                        //@synthesize textElement=_textElement - In the implementation block
@property (nonatomic,retain) IKImageElement * imageElement;                      //@synthesize imageElement=_imageElement - In the implementation block
@property (assign,nonatomic) double preferredHeight;                             //@synthesize preferredHeight=_preferredHeight - In the implementation block
-(UIView *)cardView;
-(void)setCardView:(UIView *)arg1 ;
-(IKImageElement *)imageElement;
-(IKTextElement *)textElement;
-(_TVLabel *)tvLabel;
-(_TVImageView *)tvImageView;
-(void)setTextElement:(IKTextElement *)arg1 ;
-(void)setImageElement:(IKImageElement *)arg1 ;
-(void)setCardElement:(IKViewElement *)arg1 ;
-(void)setTvLabel:(_TVLabel *)arg1 ;
-(void)setTvImageView:(_TVImageView *)arg1 ;
-(IKViewElement *)cardElement;
-(BOOL)isImageLoaded;
-(void)setImageLoaded:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setDimmingView:(UIView *)arg1 ;
-(UIView *)dimmingView;
-(double)preferredHeight;
-(void)setPreferredHeight:(double)arg1 ;
@end

