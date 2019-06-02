/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIFont;

@interface _MKCompassViewSizeParameter : NSObject {

	NSString* _imageNamePart;
	double _diameter;
	UIFont* _font;
	double _textOffsetFromCenter;

}

@property (nonatomic,copy) NSString * imageNamePart;                   //@synthesize imageNamePart=_imageNamePart - In the implementation block
@property (assign,nonatomic) double diameter;                          //@synthesize diameter=_diameter - In the implementation block
@property (nonatomic,retain) UIFont * font;                            //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double textOffsetFromCenter;              //@synthesize textOffsetFromCenter=_textOffsetFromCenter - In the implementation block
-(void)setDiameter:(double)arg1 ;
-(double)diameter;
-(double)textOffsetFromCenter;
-(NSString *)imageNamePart;
-(void)setImageNamePart:(NSString *)arg1 ;
-(void)setTextOffsetFromCenter:(double)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
@end

