/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>

@class SXFill, UIColor, SXShadow, SXBorder, SXDataTableStyle;

@interface SXComponentStyle : SXJSONObject

@property (nonatomic,readonly) SXFill * fill; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) SXShadow * shadow; 
@property (nonatomic,readonly) SXBorder * border; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) double cornerRadius; 
@property (nonatomic,readonly) UIColor * fullscreenBackgroundColor; 
@property (nonatomic,readonly) SXDataTableStyle * tableStyle; 
@property (nonatomic,readonly) unsigned long long traits; 
-(SXDataTableStyle *)tableStyle;
-(UIColor *)fullscreenBackgroundColor;
-(double)cornerRadius;
-(double)opacity;
-(SXBorder *)border;
-(SXShadow *)shadow;
-(UIColor *)backgroundColor;
-(SXFill *)fill;
-(id)fillWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)traits;
@end

