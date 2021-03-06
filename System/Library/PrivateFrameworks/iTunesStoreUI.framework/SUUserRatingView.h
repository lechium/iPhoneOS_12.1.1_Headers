/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface SUUserRatingView : UIView {

	float _value;
	UIImageView* _foregroundImageView;
	UIImageView* _backgroundImageView;

}
+(id)copyImageForRating:(float)arg1 backgroundColor:(id)arg2 style:(long long)arg3 ;
+(double)reflectionHeight;
-(CGRect)_foregroundImageClipBounds;
-(id)initWithForeground:(id)arg1 background:(id)arg2 ;
-(float)heightWithoutReflection;
-(id)init;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(void)setValue:(float)arg1 ;
@end

