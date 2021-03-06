/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>

@class SXUnitConverter, UIColor;

@interface SXDataTableBorder : SXJSONObject {

	double _width;
	SXUnitConverter* unitConverter;

}

@property (nonatomic,readonly) SXConvertibleValue actualWidth; 
@property (nonatomic,readonly) double width;                                //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,retain) SXUnitConverter * unitConverter; 
+(id)jsonPropertyNameForObjCPropertyName:(id)arg1 ;
-(UIColor *)color;
-(SXConvertibleValue)actualWidth;
-(SXUnitConverter *)unitConverter;
-(void)setUnitConverter:(SXUnitConverter *)arg1 ;
-(double)width;
@end

