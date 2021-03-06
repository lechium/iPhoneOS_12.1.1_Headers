/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIReusableSubtitledHeaderView.h>

@class UIView;

@interface SiriUIReviewsHeaderView : SiriUIReusableSubtitledHeaderView {

	UIView* _ratingView;
	double _verticalSpaceNeededForRatingsView;
	UIView* _providerView;
	UIOffset _ratingViewOffset;
	UIOffset _providerViewOffset;

}

@property (nonatomic,retain) UIView * ratingView;                                   //@synthesize ratingView=_ratingView - In the implementation block
@property (assign,nonatomic) UIOffset ratingViewOffset;                             //@synthesize ratingViewOffset=_ratingViewOffset - In the implementation block
@property (assign,nonatomic) double verticalSpaceNeededForRatingsView;              //@synthesize verticalSpaceNeededForRatingsView=_verticalSpaceNeededForRatingsView - In the implementation block
@property (nonatomic,retain) UIView * providerView;                                 //@synthesize providerView=_providerView - In the implementation block
@property (assign,nonatomic) UIOffset providerViewOffset;                           //@synthesize providerViewOffset=_providerViewOffset - In the implementation block
-(double)desiredHeightForWidth:(double)arg1 ;
-(UIView *)ratingView;
-(void)setRatingView:(UIView *)arg1 ;
-(void)setProviderView:(UIView *)arg1 ;
-(UIOffset)ratingViewOffset;
-(void)setRatingViewOffset:(UIOffset)arg1 ;
-(double)verticalSpaceNeededForRatingsView;
-(void)setVerticalSpaceNeededForRatingsView:(double)arg1 ;
-(UIView *)providerView;
-(UIOffset)providerViewOffset;
-(void)setProviderViewOffset:(UIOffset)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
@end

