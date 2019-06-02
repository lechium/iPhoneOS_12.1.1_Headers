/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHearingSupport-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIVisualEffectView, UILabel;

@interface TTYAbbreviationCell : UICollectionViewCell {

	UIVisualEffectView* _abbreviationContainer;
	UIVisualEffectView* _hintContainer;
	UILabel* _abbreviation;
	UILabel* _hint;

}

@property (nonatomic,retain) UILabel * abbreviation;              //@synthesize abbreviation=_abbreviation - In the implementation block
@property (nonatomic,retain) UILabel * hint;                      //@synthesize hint=_hint - In the implementation block
-(UILabel *)abbreviation;
-(void)setAbbreviationData:(id)arg1 ;
-(id)abbreviationText;
-(void)setAbbreviation:(UILabel *)arg1 ;
-(UILabel *)hint;
-(void)setHint:(UILabel *)arg1 ;
-(void)dealloc;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id)accessibilityIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

