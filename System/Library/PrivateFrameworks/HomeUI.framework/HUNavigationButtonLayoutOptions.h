/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIFont;

@interface HUNavigationButtonLayoutOptions : NSObject <NSCopying> {

	UIFont* _font;
	double _minTextButtonWidth;

}

@property (nonatomic,retain) UIFont * font;                          //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double minTextButtonWidth;              //@synthesize minTextButtonWidth=_minTextButtonWidth - In the implementation block
+(id)defaultOptionsForViewSizeSubclass:(long long)arg1 ;
-(void)setMinTextButtonWidth:(double)arg1 ;
-(double)minTextButtonWidth;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
@end

