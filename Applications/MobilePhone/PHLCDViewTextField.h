//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class NSCharacterSet, NSString;

@interface PHLCDViewTextField : UITextField
{
    id <PHLCDViewTextFieldDelegate> _lcdViewTextFieldDelegate;	// 8 = 0x8
    NSCharacterSet *_specialDialerCharacters;	// 16 = 0x10
    NSString *_previousTextSuggestion;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *previousTextSuggestion; // @synthesize previousTextSuggestion=_previousTextSuggestion;
@property(retain, nonatomic) NSCharacterSet *specialDialerCharacters; // @synthesize specialDialerCharacters=_specialDialerCharacters;
@property(nonatomic) __weak id <PHLCDViewTextFieldDelegate> lcdViewTextFieldDelegate; // @synthesize lcdViewTextFieldDelegate=_lcdViewTextFieldDelegate;
- (void).cxx_destruct;	// IMP=0x00000001000b4a80
- (void)_textFieldDidUpdate:(id)arg1;	// IMP=0x00000001000b4894
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00000001000b4838
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000001000b4778
- (void)deleteBackward;	// IMP=0x00000001000b44f8
- (void)replaceRange:(id)arg1 withText:(id)arg2;	// IMP=0x00000001000b4480
- (void)setText:(id)arg1;	// IMP=0x00000001000b4430
- (void)reformatText;	// IMP=0x00000001000b41e0
- (void)dealloc;	// IMP=0x00000001000b4168
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000b3ff0

@end
