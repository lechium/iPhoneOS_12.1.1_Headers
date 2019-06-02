/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface AAUIProfileSummaryView : UIView {

	UIImageView* _profileImageView;
	UILabel* _nameLabel;
	UILabel* _emailLabel;
	BOOL _hidesPhoto;
	double _topPadding;

}

@property (assign,nonatomic) BOOL hidesPhoto;                //@synthesize hidesPhoto=_hidesPhoto - In the implementation block
@property (assign,nonatomic) double topPadding;              //@synthesize topPadding=_topPadding - In the implementation block
+(double)desiredHeight;
-(id)initWithName:(id)arg1 email:(id)arg2 image:(id)arg3 ;
-(void)setHidesPhoto:(BOOL)arg1 ;
-(BOOL)hidesPhoto;
-(void)setTopPadding:(double)arg1 ;
-(double)topPadding;
-(void)layoutSubviews;
@end

