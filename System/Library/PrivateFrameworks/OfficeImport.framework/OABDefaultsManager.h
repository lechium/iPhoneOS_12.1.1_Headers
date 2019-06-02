/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OABPropertiesManager.h>

@class NSString;

@interface OABDefaultsManager : NSObject <OABPropertiesManager>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)strokeWidth;
-(int)fillType;
-(BOOL)isFilled;
-(int)shadowType;
-(EshColor)fillFgColor;
-(BOOL)isStroked;
-(EshColor)strokeFgColor;
-(EshColor)fillBgColor;
-(EshColor)strokeBgColor;
-(int)fillFgAlpha;
-(int)fillAngle;
-(int)fillFocusLeft;
-(int)fillFocusTop;
-(int)fillFocusRight;
-(int)fillFocusBottom;
-(unsigned)fillBlipID;
-(id)fillBlipName;
-(EshBlip*)fillBlipDataReference;
-(int)fillBgAlpha;
-(int)fillFocus;
-(const EshTablePropVal<EshGradientStop>Ref)fillGradientColors;
-(BOOL)isTextPath;
-(int)strokeFillType;
-(unsigned)strokeFillBlipID;
-(id)strokeFillBlipName;
-(EshBlip*)strokeFillBlipDataReference;
-(int)strokeFgAlpha;
-(int)strokeMiterLimit;
-(int)strokeCompoundType;
-(int)strokePresetDash;
-(const EshTablePropVal<int>Ref)strokeCustomDash;
-(int)strokeCapStyle;
-(int)strokeJoinStyle;
-(int)strokeStartArrowType;
-(int)strokeStartArrowWidth;
-(int)strokeStartArrowLength;
-(int)strokeEndArrowType;
-(int)strokeEndArrowWidth;
-(int)strokeEndArrowLength;
-(BOOL)isShadowed;
-(int)shadowOffsetX;
-(int)shadowOffsetY;
-(int)shadowSoftness;
-(BOOL)isFillOK;
-(BOOL)isStrokeOK;
-(BOOL)isShadowOK;
-(id)textPathUnicodeString;
-(int)textPathTextAlignment;
-(int)textPathFontSize;
-(id)textPathFontFamily;
-(BOOL)textPathBold;
-(BOOL)textPathItalic;
-(BOOL)textPathUnderline;
-(BOOL)textPathSmallcaps;
-(BOOL)textPathStrikethrough;
-(int)shadowAlpha;
-(EshColor)shadowColor;
-(BOOL)hidden;
@end

