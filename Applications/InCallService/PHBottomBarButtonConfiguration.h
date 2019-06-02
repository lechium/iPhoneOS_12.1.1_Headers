//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIImage;

@interface PHBottomBarButtonConfiguration : NSObject
{
    long long _action;	// 8 = 0x8
    long long _callState;	// 16 = 0x10
    double _diameter;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    UIImage *_icon;	// 40 = 0x28
    UIImage *_selectedIcon;	// 48 = 0x30
    UIColor *_backgroundColor;	// 56 = 0x38
    UIColor *_highlightedColor;	// 64 = 0x40
    UIColor *_selectedColor;	// 72 = 0x48
}

+ (id)imageForAction:(long long)arg1 callState:(long long)arg2;	// IMP=0x000000010003cabc
+ (id)imageColorForState:(unsigned long long)arg1;	// IMP=0x000000010003ca60
+ (id)voipTintColor;	// IMP=0x000000010003ca30
+ (id)systemTintColor;	// IMP=0x000000010003ca1c
+ (double)smallWidth;	// IMP=0x000000010003c9f8
+ (double)smallHeight;	// IMP=0x000000010003c9c0
+ (double)defaultWidth;	// IMP=0x000000010003c99c
+ (double)defaultHeight;	// IMP=0x000000010003c938
@property(readonly, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(readonly, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) UIImage *selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) double diameter; // @synthesize diameter=_diameter;
@property(readonly, nonatomic) long long callState; // @synthesize callState=_callState;
@property(readonly, nonatomic) long long action; // @synthesize action=_action;
- (void).cxx_destruct;	// IMP=0x000000010003dda8
- (id)initWithAction:(long long)arg1;	// IMP=0x000000010003dccc
- (id)initWithAction:(long long)arg1 diameter:(double)arg2 callState:(long long)arg3;	// IMP=0x000000010003cc30

@end
