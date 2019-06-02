/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, UIColor;

@interface _UIToolbarConfiguration : NSObject <NSCopying> {

	BOOL _translucent;
	long long _barStyle;
	UIImage* _shadowImage;
	UIImage* _backgroundImage;
	UIColor* _backgroundColor;
	UIColor* _barTintColor;

}

@property (assign,nonatomic) long long barStyle;                                 //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent;              //@synthesize translucent=_translucent - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                              //@synthesize shadowImage=_shadowImage - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                          //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * barTintColor;                             //@synthesize barTintColor=_barTintColor - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(BOOL)isTranslucent;
-(void)setTranslucent:(BOOL)arg1 ;
-(UIImage *)backgroundImage;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(UIColor *)barTintColor;
-(void)setBackgroundImage:(UIImage *)arg1 ;
@end

