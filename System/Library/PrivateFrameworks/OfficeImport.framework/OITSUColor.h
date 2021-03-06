/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OITSUColor : NSObject <NSCopying> {

	CGColorRef mCGColor;
	unsigned long long mColorRGBSpace;

}

@property (readonly) CGColorRef CGColor; 
@property (nonatomic,readonly) unsigned long long colorRGBSpace; 
@property (nonatomic,readonly) double blueComponent; 
@property (nonatomic,readonly) double redComponent; 
@property (nonatomic,readonly) double greenComponent; 
@property (nonatomic,readonly) double alphaComponent; 
+(id)randomColor;
+(id)colorWithUIColor:(id)arg1 ;
+(id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5 ;
+(id)colorWithHexString:(id)arg1 ;
+(id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 alpha:(int)arg4 ;
+(id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 ;
+(id)colorWithCalibratedHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithBGR:(unsigned)arg1 ;
+(id)colorWithSystemColorID:(int)arg1 ;
+(id)stringForSystemColorID:(int)arg1 ;
+(id)stringForColor:(id)arg1 ;
+(id)colorWithCsColour:(const CsColour*)arg1 ;
+(id)colorWithEshColor:(const EshColor*)arg1 ;
+(id)colorWithRGBBytes:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3 ;
+(id)colorWithBGRValue:(long long)arg1 ;
+(id)colorWithRGBValue:(long long)arg1 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)clearColor;
+(id)whiteColor;
+(id)colorWithWhite:(double)arg1 alpha:(double)arg2 ;
+(id)blackColor;
+(id)orangeColor;
+(id)greenColor;
+(id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)lightGrayColor;
+(id)redColor;
+(id)grayColor;
+(id)blueColor;
+(id)yellowColor;
+(id)cyanColor;
+(id)magentaColor;
+(id)purpleColor;
+(id)brownColor;
+(id)colorWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithPatternImage:(id)arg1 ;
-(double)redComponent;
-(double)greenComponent;
-(double)blueComponent;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)grayscaleColor;
-(id)invertedColor;
-(double)luminance;
-(id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2 ;
-(id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2 ;
-(BOOL)isNearlyWhite;
-(BOOL)isAlmostEqualToColor:(id)arg1 ;
-(id)UIColor;
-(void)getRGBAComponents:(double*)arg1 ;
-(BOOL)isBlack;
-(id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5 ;
-(id)initWithHexString:(id)arg1 ;
-(id)initWithCGColor:(CGColorRef)arg1 colorSpace:(unsigned long long)arg2 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5 ;
-(BOOL)isEqualWithTolerance:(id)arg1 ;
-(unsigned long long)colorRGBSpace;
-(BOOL)p_isEqualToColor:(id)arg1 withTolerance:(double)arg2 ;
-(double)p_rgbComponentWithIndex:(unsigned char)arg1 ;
-(double)hueComponent;
-(double)saturationComponent;
-(double)brightnessComponent;
-(BOOL)wantsHighContrastBackgroundForDarkMode:(id)arg1 ;
-(id)hexString;
-(SCD_Struct_OI40)ttColor;
-(id)newSolidColoredBitmap:(CGSize)arg1 ;
-(id)solidColoredPngImage;
-(unsigned)toBGR;
-(id)colorWithTintValue:(double)arg1 ;
-(id)colorWithShadeValue:(double)arg1 ;
-(CsColour)csColour;
-(EshColor)eshColor;
-(void)getRGBBytes:(char*)arg1 green:(char*)arg2 blue:(char*)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)set;
-(CGColorRef)CGColor;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(BOOL)isOpaque;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(double)alphaComponent;
-(id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
-(id)initWithPatternImage:(id)arg1 ;
-(id)initWithUIColor:(id)arg1 ;
@end

