//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_SFNavigationBar.h"

@class BrowserToolbar, UnifiedField;

@interface NavigationBar : _SFNavigationBar
{
}

- (id)newTextField;	// IMP=0x000000010000bf30
@property(readonly, nonatomic) UnifiedField *textField;
- (void)setTextFieldPlaceHolderColor:(id)arg1;	// IMP=0x000000010000be90
- (double)placeholderHorizontalInset;	// IMP=0x000000010000be3c
@property(readonly, nonatomic) BrowserToolbar *toolbar;
- (id)toolbarPlacedOnTop;	// IMP=0x000000010000bdd4
- (void)updateToolbarTintColor;	// IMP=0x000000010000bd74
- (void)setExpanded:(_Bool)arg1 textFieldSelectionRange:(struct _NSRange)arg2;	// IMP=0x000000010000bcc0

@end

