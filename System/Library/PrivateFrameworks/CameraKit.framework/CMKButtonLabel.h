/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel, UIColor;

@interface CMKButtonLabel : UIView {

	BOOL _wantsLegibilityShadow;
	NSString* _text;
	UILabel* __label;
	CGSize _contentSize;

}

@property (nonatomic,retain,readonly) UILabel * _label;               //@synthesize _label=__label - In the implementation block
@property (nonatomic,copy) NSString * text;                           //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) BOOL wantsLegibilityShadow;              //@synthesize wantsLegibilityShadow=_wantsLegibilityShadow - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                    //@synthesize contentSize=_contentSize - In the implementation block
-(void)updateToContentSize:(id)arg1 ;
-(BOOL)wantsLegibilityShadow;
-(void)_updateAttributedText;
-(void)_updateInternalContentSize;
-(void)setWantsLegibilityShadow:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(CGSize)contentSize;
-(CGSize)intrinsicContentSize;
-(UILabel *)_label;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(long long)textAlignment;
-(void)setHighlightedTextColor:(id)arg1 ;
-(id)highlightedTextColor;
@end

