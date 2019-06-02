/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIImageView.h>

@interface NCKeyLineView : UIImageView {

	double _cornerRadius;
	double _lineWidth;

}

@property (assign,nonatomic) double cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double lineWidth;                 //@synthesize lineWidth=_lineWidth - In the implementation block
-(id)_cachedKeyLineImageWithCornerRadius:(double)arg1 lineWidth:(double)arg2 ;
-(void)setKeyLineViewAlphaForProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(double)cornerRadius;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
@end
