//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLayoutManager, NSString, NSTextStorage, UIFont;

@interface HKReportTextHelper : NSObject
{
    NSString *_string;	// 8 = 0x8
    UIFont *_font;	// 16 = 0x10
    NSLayoutManager *_layoutManager;	// 24 = 0x18
    NSTextStorage *_textStorage;	// 32 = 0x20
    unsigned long long _usedLength;	// 40 = 0x28
}

@property(nonatomic) unsigned long long usedLength; // @synthesize usedLength=_usedLength;
@property(retain, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(retain, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;	// IMP=0x000000010000c1dc
- (_Bool)allTextUsed;	// IMP=0x000000010000c110
- (id)labelWithSize:(struct CGSize)arg1;	// IMP=0x000000010000bec4
- (void)_setup;	// IMP=0x000000010000bd90
- (id)initWithString:(id)arg1 font:(id)arg2;	// IMP=0x000000010000bccc

@end

