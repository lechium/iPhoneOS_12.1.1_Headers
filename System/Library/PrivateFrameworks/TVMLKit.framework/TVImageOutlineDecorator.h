/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageScaleDecorator.h>

@class UIColor;

@interface TVImageOutlineDecorator : TVImageScaleDecorator {

	UIColor* _outlineColor;
	UIEdgeInsets _outlineWidths;

}

@property (nonatomic,copy,readonly) UIColor * outlineColor;              //@synthesize outlineColor=_outlineColor - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets outlineWidths;               //@synthesize outlineWidths=_outlineWidths - In the implementation block
+(id)decoratorWithOutlineColor:(id)arg1 outlineWidths:(UIEdgeInsets)arg2 ;
-(void)drawInContext:(id)arg1 imageRect:(CGRect)arg2 ;
-(id)decoratorIdentifier;
-(id)initWithOutlineColor:(id)arg1 outlineWidths:(UIEdgeInsets)arg2 ;
-(UIEdgeInsets)outlineWidths;
-(UIColor *)outlineColor;
@end
