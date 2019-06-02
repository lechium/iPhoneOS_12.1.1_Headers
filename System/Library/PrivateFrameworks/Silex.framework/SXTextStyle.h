/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXTextStyleFontDescribing.h>

@class NSString, UIColor, SXShadow, SXTextDecoration, SXJSONArray, SXTextStroke;

@interface SXTextStyle : SXJSONObject <SXTextStyleFontDescribing>

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) long long fontSize; 
@property (nonatomic,readonly) UIColor * textColor; 
@property (nonatomic,readonly) SXShadow * textShadow; 
@property (nonatomic,readonly) long long textTransform; 
@property (nonatomic,readonly) double tracking; 
@property (nonatomic,readonly) SXTextDecoration * underline; 
@property (nonatomic,readonly) SXTextDecoration * strikethrough; 
@property (nonatomic,readonly) SXJSONArray * listStyle; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) int verticalAlignment; 
@property (nonatomic,readonly) SXTextStroke * stroke; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,readonly) id<SXTextStyleFontAttributes> fontAttributes; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
-(id<SXTextStyleFontAttributes>)fontAttributes;
-(NSString *)fontName;
-(SXTextStroke *)stroke;
-(int)verticalAlignment;
-(UIColor *)backgroundColor;
-(SXJSONArray *)listStyle;
-(SXTextDecoration *)strikethrough;
-(SXTextDecoration *)underline;
-(double)tracking;
-(long long)textTransform;
-(SXShadow *)textShadow;
-(UIColor *)textColor;
-(long long)fontSize;
-(NSString *)identifier;
-(int)verticalAlignmentWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)textTransformWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)fontSizeWithValue:(id)arg1 withType:(int)arg2 ;
@end

