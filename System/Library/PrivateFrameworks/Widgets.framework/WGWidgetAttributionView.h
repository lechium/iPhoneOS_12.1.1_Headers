/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextView.h>

@class NSMutableAttributedString, UIColor;

@interface WGWidgetAttributionView : UITextView {

	NSMutableAttributedString* _widgetAttributedString;
	UIColor* _legibilityTextColor;

}

@property (nonatomic,retain) UIColor * legibilityTextColor;              //@synthesize legibilityTextColor=_legibilityTextColor - In the implementation block
+(void)requestAttributedStringForIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
+(id)widgetAttributionIDsInOrder;
-(id)initWithWidgetAttributedString:(id)arg1 ;
-(void)setLegibilityTextColor:(UIColor *)arg1 ;
-(void)_configureAttributedString;
-(id)_attributionBackgroundColor;
-(id)_attributionFont;
-(UIColor *)legibilityTextColor;
-(void)layoutSubviews;
@end
