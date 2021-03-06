/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString;

@interface PSUIBadgeView : UIView {

	UILabel* _badgeLabel;
	double _fontSize;
	double _cornerRadius;
	double _minPadding;
	double _baseline;

}

@property (nonatomic,retain) UILabel * badgeLabel;              //@synthesize badgeLabel=_badgeLabel - In the implementation block
@property (assign,nonatomic) double fontSize;                   //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) double cornerRadius;               //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double minPadding;                 //@synthesize minPadding=_minPadding - In the implementation block
@property (assign,nonatomic) double baseline;                   //@synthesize baseline=_baseline - In the implementation block
@property (nonatomic,copy) NSString * text; 
-(double)minPadding;
-(void)setMinPadding:(double)arg1 ;
-(UILabel *)badgeLabel;
-(void)setBadgeLabel:(UILabel *)arg1 ;
-(double)baseline;
-(void)setBaseline:(double)arg1 ;
-(id)init;
-(void)setCornerRadius:(double)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(CGSize)intrinsicContentSize;
-(double)cornerRadius;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
@end

