/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHBGraphicProperties : NSObject
+(id)oadStrokeFrom:(const XlChartLineStyle*)arg1 ;
+(id)oadGraphicPropertiesFromState:(id)arg1 xlLineStyle:(const XlChartLineStyle*)arg2 xlFillStyle:(const XlChartFillStyle*)arg3 ;
+(id)oadGraphicPropertiesFromShapePropsStream:(const char*)arg1 size:(unsigned)arg2 ;
+(id)oadGraphicPropertiesFromXlChartSeriesFormat:(const XlChartSeriesFormat*)arg1 state:(id)arg2 ;
+(id)mapFillStyle:(const XlChartFillStyle*)arg1 xlPictureFormat:(const XlChartPicF*)arg2 state:(id)arg3 ;
+(float)widthFromLineWeightEnum:(int)arg1 ;
+(id)mapPresetDashFromPattern:(int)arg1 ;
+(id)mapFillStyleForMarker:(const XlChartMarkerStyle*)arg1 complex:(BOOL)arg2 state:(id)arg3 ;
+(char)oaPresetDashTypeFromLinePatternEnum:(int)arg1 ;
+(id)mapAssociatedEscherObjectstate:(id)arg1 ;
+(int)presetLinePatternEnumFromDash:(id)arg1 ;
+(int)lineWeightEnumFromWidth:(float)arg1 ;
+(id)oadGraphicPropertiesFromXlChartTextFrame:(XlChartTextFrame*)arg1 state:(id)arg2 ;
+(id)oadGraphicPropertiesFromXlMarkerStyle:(const XlChartMarkerStyle*)arg1 complex:(BOOL)arg2 state:(id)arg3 ;
+(id)oadGraphicPropertiesFromXlChartFrameType:(XlChartFrameType*)arg1 state:(id)arg2 ;
@end

