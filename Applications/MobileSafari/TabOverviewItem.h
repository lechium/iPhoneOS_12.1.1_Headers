//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TabOverview, TabOverviewItemLayoutInfo, UIImage;

@interface TabOverviewItem : NSObject
{
    _Bool _hidden;	// 8 = 0x8
    _Bool _recording;	// 9 = 0x9
    _Bool _usesDarkTheme;	// 10 = 0xa
    _Bool _closing;	// 11 = 0xb
    NSString *_title;	// 16 = 0x10
    UIImage *_icon;	// 24 = 0x18
    TabOverviewItemLayoutInfo *_layoutInfo;	// 32 = 0x20
    TabOverview *_tabOverview;	// 40 = 0x28
}

@property(nonatomic) __weak TabOverview *tabOverview; // @synthesize tabOverview=_tabOverview;
@property(retain, nonatomic) TabOverviewItemLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(nonatomic) _Bool closing; // @synthesize closing=_closing;
@property(nonatomic) _Bool usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
- (void).cxx_destruct;	// IMP=0x000000010007d240

@end

