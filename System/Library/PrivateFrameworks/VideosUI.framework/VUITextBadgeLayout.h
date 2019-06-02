/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, VUITextLayout;

@interface VUITextBadgeLayout : NSObject <NSCopying> {

	UIColor* _bgColor;
	double _cornerRadius;
	VUITextLayout* _textLayout;
	unsigned long long _badgeStyle;
	UIEdgeInsets _padding;

}

@property (nonatomic,retain) UIColor * bgColor;                          //@synthesize bgColor=_bgColor - In the implementation block
@property (assign,nonatomic) double cornerRadius;                        //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) VUITextLayout * textLayout;                 //@synthesize textLayout=_textLayout - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                       //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) unsigned long long badgeStyle;              //@synthesize badgeStyle=_badgeStyle - In the implementation block
-(void)setBadgeStyle:(unsigned long long)arg1 ;
-(unsigned long long)badgeStyle;
-(VUITextLayout *)textLayout;
-(void)setBgColor:(UIColor *)arg1 ;
-(UIColor *)bgColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(void)setTextLayout:(VUITextLayout *)arg1 ;
@end

