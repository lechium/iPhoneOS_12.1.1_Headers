/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, NSShadow, NSNumber;

@interface VUITextLayout : NSObject <NSCopying> {

	unsigned _fontTraits;
	int _blendMode;
	long long _textStyle;
	NSString* _maximumContentSizeCategory;
	long long _fontWeight;
	double _fontSize;
	UIColor* _color;
	UIColor* _highlightOrSelectedColor;
	long long _textTransform;
	long long _alignment;
	unsigned long long _numberOfLines;
	unsigned long long _numberOfLinesAXSmall;
	unsigned long long _numberOfLinesAXLarge;
	double _minimumScaleFactor;
	NSShadow* _shadow;
	NSNumber* _letterSpacing;
	UIEdgeInsets _margin;

}

@property (assign,nonatomic) long long textStyle;                                  //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,retain) NSString * maximumContentSizeCategory;                //@synthesize maximumContentSizeCategory=_maximumContentSizeCategory - In the implementation block
@property (assign,nonatomic) long long fontWeight;                                 //@synthesize fontWeight=_fontWeight - In the implementation block
@property (assign,nonatomic) double fontSize;                                      //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) unsigned fontTraits;                                  //@synthesize fontTraits=_fontTraits - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margin;                                  //@synthesize margin=_margin - In the implementation block
@property (nonatomic,retain) UIColor * color;                                      //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIColor * highlightOrSelectedColor;                   //@synthesize highlightOrSelectedColor=_highlightOrSelectedColor - In the implementation block
@property (assign,nonatomic) long long textTransform;                              //@synthesize textTransform=_textTransform - In the implementation block
@property (assign,nonatomic) long long alignment;                                  //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLines;                     //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLinesAXSmall;              //@synthesize numberOfLinesAXSmall=_numberOfLinesAXSmall - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLinesAXLarge;              //@synthesize numberOfLinesAXLarge=_numberOfLinesAXLarge - In the implementation block
@property (assign,nonatomic) double minimumScaleFactor;                            //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
@property (nonatomic,retain) NSShadow * shadow;                                    //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,retain) NSNumber * letterSpacing;                             //@synthesize letterSpacing=_letterSpacing - In the implementation block
@property (assign,nonatomic) int blendMode;                                        //@synthesize blendMode=_blendMode - In the implementation block
-(NSNumber *)letterSpacing;
-(void)setLetterSpacing:(NSNumber *)arg1 ;
-(void)setTextTransform:(long long)arg1 ;
-(long long)textTransform;
-(long long)alignment;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(UIEdgeInsets)margin;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(unsigned long long)numberOfLines;
-(void)setAlignment:(long long)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setMargin:(UIEdgeInsets)arg1 ;
-(double)fontSize;
-(double)minimumScaleFactor;
-(long long)textStyle;
-(void)setTextStyle:(long long)arg1 ;
-(NSShadow *)shadow;
-(void)setShadow:(NSShadow *)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(void)setFontWeight:(long long)arg1 ;
-(long long)fontWeight;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)setNumberOfLinesAXSmall:(unsigned long long)arg1 ;
-(void)setNumberOfLinesAXLarge:(unsigned long long)arg1 ;
-(void)setMaximumContentSizeCategory:(NSString *)arg1 ;
-(void)setFontTraits:(unsigned)arg1 ;
-(void)setHighlightOrSelectedColor:(UIColor *)arg1 ;
-(id)attributedStringWithString:(id)arg1 view:(id)arg2 ;
-(id)attributedStringWithString:(id)arg1 ;
-(NSString *)maximumContentSizeCategory;
-(unsigned)fontTraits;
-(UIColor *)highlightOrSelectedColor;
-(unsigned long long)numberOfLinesAXSmall;
-(unsigned long long)numberOfLinesAXLarge;
@end

