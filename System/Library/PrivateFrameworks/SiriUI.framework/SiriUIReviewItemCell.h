/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class UILabel, UIView;

@interface SiriUIReviewItemCell : SiriUIContentCollectionViewCell {

	UILabel* _commentLabel;
	UILabel* _authorLabel;
	UIView* _ratingView;
	UIOffset _ratingOffset;
	long long _characterLimit;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) long long characterLimit;                //@synthesize characterLimit=_characterLimit - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
+(id)_commentLabelFont;
+(long long)defaultCharacterLimit;
+(CGSize)sizeThatFits:(CGSize)arg1 withReview:(id)arg2 characterLimit:(long long)arg3 ;
+(UIEdgeInsets)_defaultEdgeInsets;
+(id)_authorFontAttribute;
+(id)_displayTextForComment:(id)arg1 characterLimit:(long long)arg2 ;
+(id)_authorDateFontAttribute;
-(void)configureWithReview:(id)arg1 ratingView:(id)arg2 offset:(UIOffset)arg3 ;
-(void)_setComment:(id)arg1 ;
-(void)_setRatingView:(id)arg1 ;
-(void)_setAuthor:(id)arg1 andDate:(id)arg2 timeZoneId:(id)arg3 hasRatingView:(BOOL)arg4 ;
-(id)_relativeStringFromDate:(id)arg1 ;
-(long long)characterLimit;
-(void)setCharacterLimit:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
@end

