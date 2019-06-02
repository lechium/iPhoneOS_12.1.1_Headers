/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDDrawableInfo.h>
#import <TSReading/TSSStyleClient.h>

@class TSSStyle, TSDReflection, TSDShadow, TSDStroke, NSString;

@interface TSDStyledInfo : TSDDrawableInfo <TSSStyleClient>

@property (nonatomic,retain) TSSStyle * style; 
@property (nonatomic,copy) TSDReflection * reflection; 
@property (nonatomic,copy) TSDShadow * shadow; 
@property (nonatomic,copy) TSDStroke * stroke; 
@property (assign,nonatomic) float opacity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)boxedValueForProperty:(int)arg1 ;
-(id)referencedStyles;
-(void)replaceReferencedStylesUsingBlock:(/*^block*/id)arg1 ;
-(void)setBoxedValue:(id)arg1 forProperty:(int)arg2 ;
-(void)setValuesForProperties:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)i_setValue:(id)arg1 forProperty:(int)arg2 ;
-(Class)styleClass;
-(void)setStroke:(TSDStroke *)arg1 ;
-(TSDReflection *)reflection;
-(id)stylesForCopyStyle;
-(void)setReflection:(TSDReflection *)arg1 ;
-(id)propertyMapForNewPreset;
-(id)styleIdentifierTemplateForNewPreset;
-(void)setStyle:(TSSStyle *)arg1 ;
-(TSSStyle *)style;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(TSDStroke *)stroke;
-(TSDShadow *)shadow;
-(void)setShadow:(TSDShadow *)arg1 ;
-(id)objectForProperty:(int)arg1 ;
@end
