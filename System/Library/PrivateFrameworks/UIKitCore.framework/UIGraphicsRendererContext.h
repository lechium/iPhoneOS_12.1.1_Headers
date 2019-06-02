/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIGraphicsRendererFormat;

@interface UIGraphicsRendererContext : NSObject {

	CGContextRef _backingContext;
	UIGraphicsRendererFormat* _format;
	BOOL ___createsImages;

}

@property (assign,nonatomic) BOOL __createsImages;                             //@synthesize __createsImages=___createsImages - In the implementation block
@property (nonatomic,readonly) CGContextRef CGContext; 
@property (nonatomic,readonly) UIGraphicsRendererFormat * format;              //@synthesize format=_format - In the implementation block
-(void)dealloc;
-(CGContextRef)CGContext;
-(void)fillRect:(CGRect)arg1 ;
-(BOOL)__createsImages;
-(UIGraphicsRendererFormat *)format;
-(void)fillRect:(CGRect)arg1 blendMode:(int)arg2 ;
-(void)strokeRect:(CGRect)arg1 blendMode:(int)arg2 ;
-(id)initWithCGContext:(CGContextRef)arg1 format:(id)arg2 ;
-(void)strokeRect:(CGRect)arg1 ;
-(void)clipToRect:(CGRect)arg1 ;
-(void)set__createsImages:(BOOL)arg1 ;
@end

