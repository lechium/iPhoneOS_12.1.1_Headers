/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIToolbar.h>

@class _UIBackdropView, _UIBackdropViewSettings, UIView, NSString;

@interface _SFToolbar : UIToolbar {

	_UIBackdropView* _backgroundView;
	_UIBackdropViewSettings* _customBackdropSettings;
	UIView* _separator;
	BOOL _usesDarkTheme;
	long long _placement;
	unsigned long long _tintStyle;

}

@property (nonatomic,readonly) long long placement;                          //@synthesize placement=_placement - In the implementation block
@property (nonatomic,readonly) long long toolbarSize; 
@property (assign,nonatomic) unsigned long long tintStyle;                   //@synthesize tintStyle=_tintStyle - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName; 
@property (nonatomic,readonly) double URLFieldHorizontalMargin; 
-(id)_backdropInputSettings;
-(double)URLFieldHorizontalMargin;
-(void)setTintStyle:(unsigned long long)arg1 ;
-(unsigned long long)tintStyle;
-(long long)toolbarSize;
-(BOOL)_tintUsesDarkTheme;
-(id)initWithPlacement:(long long)arg1 ;
-(void)updateBackdropSettings:(id)arg1 ;
-(void)updateTintColor;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(long long)placement;
@end

