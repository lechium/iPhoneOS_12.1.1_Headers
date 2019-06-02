/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIBezierPath, UIColor;

@interface UIDragPreviewParameters : NSObject <NSCopying> {

	BOOL _textMode;
	UIBezierPath* _visiblePath;
	UIColor* _backgroundColor;

}

@property (getter=_textMode,nonatomic,readonly) BOOL textMode;              //@synthesize textMode=_textMode - In the implementation block
@property (nonatomic,copy) UIBezierPath * visiblePath;                      //@synthesize visiblePath=_visiblePath - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                       //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(BOOL)_textMode;
-(UIBezierPath *)visiblePath;
-(id)initWithTextLineRects:(id)arg1 ;
-(id)_initWithTextMode:(BOOL)arg1 visiblePath:(id)arg2 backgroundColor:(id)arg3 ;
-(void)setVisiblePath:(UIBezierPath *)arg1 ;
@end

