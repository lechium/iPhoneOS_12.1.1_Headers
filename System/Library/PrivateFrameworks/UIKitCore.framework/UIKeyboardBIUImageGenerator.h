/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIImage, NSMutableDictionary, UIColor;

@interface UIKeyboardBIUImageGenerator : NSObject {

	BOOL _useButtonShapes;
	UIImage* _biuBoldImage;
	UIImage* _biuItalicImage;
	UIImage* _biuUnderlineImage;
	NSMutableDictionary* _imageCache;
	UIColor* _tintColor;
	UIColor* _normalColor;

}

@property (nonatomic,retain) UIColor * tintColor;                //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * normalColor;              //@synthesize normalColor=_normalColor - In the implementation block
-(id)init;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(void)_accessibilitySettingsChanged:(id)arg1 ;
-(id)BIUImageForBold:(BOOL)arg1 italic:(BOOL)arg2 underline:(BOOL)arg3 ;
-(void)setNormalColor:(UIColor *)arg1 ;
-(void)_invalidateCache;
-(void)_drawBIUAtSize:(CGSize)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3 underline:(BOOL)arg4 ;
-(UIColor *)normalColor;
@end
