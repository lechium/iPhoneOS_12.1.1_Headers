/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUGradientButton.h>

@class UIImageView, NSString;

@interface SUReviewsButton : SUGradientButton {

	UIImageView* _disclosureView;
	float _userRating;
	long long _userRatingCount;
	NSString* _userRatingCountString;

}

@property (assign,nonatomic) float userRating;                              //@synthesize userRating=_userRating - In the implementation block
@property (assign,nonatomic) long long userRatingCount;                     //@synthesize userRatingCount=_userRatingCount - In the implementation block
@property (nonatomic,retain) NSString * userRatingCountString;              //@synthesize userRatingCountString=_userRatingCountString - In the implementation block
-(void)reloadView;
-(NSString *)userRatingCountString;
-(void)setUserRatingCount:(long long)arg1 ;
-(void)setUserRatingCountString:(NSString *)arg1 ;
-(long long)userRatingCount;
-(float)userRating;
-(void)setUserRating:(float)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
@end

