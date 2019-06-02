/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, IKViewElementStyle, TVAppStyle, NSString, NSShadow, TVColor;

@interface TVViewElementStyle : NSObject <NSCopying> {

	NSMutableDictionary* _cachedColorObjects;
	IKViewElementStyle* _style;

}

@property (nonatomic,__weak,readonly) IKViewElementStyle * style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) TVAppStyle * styleMetrics; 
@property (nonatomic,readonly) NSString * textTransform; 
@property (nonatomic,readonly) NSShadow * shadow; 
@property (nonatomic,readonly) TVColor * backgroundColor; 
@property (nonatomic,readonly) TVColor * color; 
@property (nonatomic,readonly) double fontSize; 
@property (nonatomic,readonly) NSString * fontWeight; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) UIEdgeInsets margin; 
@property (nonatomic,readonly) UIEdgeInsets focusMargin; 
@property (nonatomic,readonly) double maxHeight; 
@property (nonatomic,readonly) double maxWidth; 
@property (nonatomic,readonly) double minHeight; 
@property (nonatomic,readonly) double minWidth; 
@property (nonatomic,readonly) UIEdgeInsets padding; 
@property (nonatomic,readonly) long long textAlignment; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) long long alignment; 
@property (nonatomic,readonly) long long contentAlignment; 
@property (nonatomic,readonly) TVColor * highlightColor; 
@property (nonatomic,readonly) NSString * imageTreatmentName; 
@property (nonatomic,readonly) double interitemSpacing; 
@property (nonatomic,readonly) NSString * textHighlightStyle; 
@property (nonatomic,readonly) double textMinimumScaleFactor; 
@property (nonatomic,readonly) long long position; 
@property (nonatomic,readonly) NSString * ratingStyle; 
@property (nonatomic,readonly) unsigned long long maxTextLines; 
@property (nonatomic,readonly) NSString * textStyle; 
@property (nonatomic,readonly) TVColor * tintColor; 
-(long long)contentAlignment;
-(unsigned long long)maxTextLines;
-(double)maxHeight;
-(NSString *)textTransform;
-(id)valueForStyleProperty:(id)arg1 ;
-(TVAppStyle *)styleMetrics;
-(void)setStyleMetrics:(TVAppStyle *)arg1 ;
-(id)cssValueForStyleProperty:(id)arg1 ;
-(UIEdgeInsets)focusMargin;
-(NSString *)imageTreatmentName;
-(NSString *)textHighlightStyle;
-(double)textMinimumScaleFactor;
-(NSString *)ratingStyle;
-(long long)alignment;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIEdgeInsets)margin;
-(IKViewElementStyle *)style;
-(TVColor *)tintColor;
-(id)initWithStyle:(id)arg1 ;
-(TVColor *)backgroundColor;
-(TVColor *)color;
-(double)width;
-(double)height;
-(long long)position;
-(double)maxWidth;
-(UIEdgeInsets)padding;
-(double)fontSize;
-(double)minWidth;
-(double)interitemSpacing;
-(long long)textAlignment;
-(NSString *)textStyle;
-(TVColor *)highlightColor;
-(NSShadow *)shadow;
-(NSString *)fontWeight;
-(double)minHeight;
@end

