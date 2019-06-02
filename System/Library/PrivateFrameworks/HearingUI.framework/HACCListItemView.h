/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UILabel, UIImage, UIImageView, UIView, NSString;

@interface HACCListItemView : UIControl {

	UILabel* _titleLabel;
	UIImage* _glyphImage;
	UIImageView* _glyphImageView;
	UIView* _highlightedBackgroundView;
	UIView* _separatorView;
	/*^block*/id _handler;
	NSString* _title;

}

@property (nonatomic,copy,readonly) id handler;                    //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
-(id)initWithTitle:(id)arg1 glyphImage:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setSeparatorVisible:(BOOL)arg1 ;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)description;
-(NSString *)title;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)handler;
-(CGSize)intrinsicContentSize;
-(void)setSelected:(BOOL)arg1 ;
@end
