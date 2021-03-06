/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageDecorator.h>

@class UIColor;

@interface _TVUberBlurImageDecorator : TVImageDecorator {

	UIColor* _gradientColor;
	unsigned long long _blurType;
	unsigned long long _blurStyle;

}

@property (nonatomic,retain) UIColor * gradientColor;                   //@synthesize gradientColor=_gradientColor - In the implementation block
@property (assign,nonatomic) unsigned long long blurType;               //@synthesize blurType=_blurType - In the implementation block
@property (assign,nonatomic) unsigned long long blurStyle;              //@synthesize blurStyle=_blurStyle - In the implementation block
-(void)setGradientColor:(UIColor *)arg1 ;
-(UIColor *)gradientColor;
-(id)decoratorIdentifier;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
-(unsigned long long)blurType;
-(void)setBlurType:(unsigned long long)arg1 ;
-(unsigned long long)blurStyle;
-(void)setBlurStyle:(unsigned long long)arg1 ;
@end

