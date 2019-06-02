//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

#import "UIGestureRecognizerDelegate.h"

@class CKContextCompleter, NSArray, NSMapTable, NSString, TopHitCompletionPromotionRecognizer, TopHitCompletionView, UIColor;

@interface UnifiedField : UITextField <UIGestureRecognizerDelegate>
{
    _Bool _lastEditWasADeletion;	// 8 = 0x8
    NSString *_pendingTopHitNavigationText;	// 16 = 0x10
    id <CompletionItem> _topHit;	// 24 = 0x18
    TopHitCompletionView *_topHitCompletionView;	// 32 = 0x20
    TopHitCompletionPromotionRecognizer *_topHitCompletionPromotionRecognizer;	// 40 = 0x28
    NSArray *_keyCommands;	// 48 = 0x30
    NSMapTable *_keyCommandActions;	// 56 = 0x38
    NSString *_userTypedText;	// 64 = 0x40
    _Bool _didInitializeMenuItems;	// 72 = 0x48
    _Bool _pastingText;	// 73 = 0x49
    _Bool _lastInputWasQuerySuggestion;	// 74 = 0x4a
    _Bool _hasSelectedQuerySuggestion;	// 75 = 0x4b
    id <CompletionItem> _reflectedItem;	// 80 = 0x50
    NSArray *_querySuggestions;	// 88 = 0x58
    CKContextCompleter *_contextCompleter;	// 96 = 0x60
}

@property(retain, nonatomic) CKContextCompleter *contextCompleter; // @synthesize contextCompleter=_contextCompleter;
@property(readonly, nonatomic) _Bool hasSelectedQuerySuggestion; // @synthesize hasSelectedQuerySuggestion=_hasSelectedQuerySuggestion;
@property(readonly, nonatomic) _Bool lastInputWasQuerySuggestion; // @synthesize lastInputWasQuerySuggestion=_lastInputWasQuerySuggestion;
@property(readonly, nonatomic) NSArray *querySuggestions; // @synthesize querySuggestions=_querySuggestions;
@property(readonly, nonatomic, getter=isPastingText) _Bool pastingText; // @synthesize pastingText=_pastingText;
@property(retain, nonatomic) id <CompletionItem> reflectedItem; // @synthesize reflectedItem=_reflectedItem;
- (void).cxx_destruct;	// IMP=0x00000001000b8318
- (void)_updateQuerySuggestionsMatchingText:(id)arg1;	// IMP=0x00000001000b7fb8
- (void)updateQuerySuggestionsFromUserTypedText;	// IMP=0x00000001000b7fa0
- (void)insertTextSuggestion:(id)arg1;	// IMP=0x00000001000b7d78
- (void)_keyPressed:(id)arg1 forEvent:(id)arg2;	// IMP=0x00000001000b7c9c
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00000001000b7acc
- (id)keyCommands;	// IMP=0x00000001000b7734
- (_Bool)becomeFirstResponder;	// IMP=0x00000001000b7650
- (_Bool)resignFirstResponder;	// IMP=0x00000001000b75f0
- (void)layoutSubviews;	// IMP=0x00000001000b7548
- (struct CGRect)editRect;	// IMP=0x00000001000b74a4
@property(readonly, nonatomic) double placeholderHorizontalInset;
- (void)_layoutTopHitCompletionView;	// IMP=0x00000001000b6e68
- (void)topHitDidBecomeReady;	// IMP=0x00000001000b6d50
- (void)_setReflectedItem:(id)arg1 updateUserTypedPrefix:(_Bool)arg2;	// IMP=0x00000001000b68d8
- (void)_restoreUserTypedText;	// IMP=0x00000001000b6844
- (void)_setTopHit:(id)arg1;	// IMP=0x00000001000b67b0
- (void)_promoteCompletionToSelection:(_Bool)arg1 andMoveForward:(_Bool)arg2;	// IMP=0x00000001000b6508
- (void)_promoteCompletionToSelection;	// IMP=0x00000001000b64f4
- (void)_moveLeft;	// IMP=0x00000001000b64cc
- (void)_moveRight;	// IMP=0x00000001000b64a4
- (id)_reflectedItemCompletionString;	// IMP=0x00000001000b63e0
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000001000b6370
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000001000b62e8
- (void)_removeTopHitCompletionView;	// IMP=0x00000001000b61dc
- (void)cut:(id)arg1;	// IMP=0x00000001000b611c
- (void)copy:(id)arg1;	// IMP=0x00000001000b60b0
- (id)_textForPasteboard;	// IMP=0x00000001000b5ef0
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;	// IMP=0x00000001000b5e38
- (void)setAttributedText:(id)arg1;	// IMP=0x00000001000b5de8
- (void)setText:(id)arg1;	// IMP=0x00000001000b5d98
- (_Bool)keyboardInputShouldDelete:(id)arg1;	// IMP=0x00000001000b5c7c
- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;	// IMP=0x00000001000b5b08
- (void)_cancelPendingTopHitNavigation;	// IMP=0x00000001000b5af0
- (id)_topHitForCurrentText;	// IMP=0x00000001000b5a44
- (_Bool)_waitingForTopHitForCurrentText;	// IMP=0x00000001000b59a0
- (void)_textDidChangeFromTyping;	// IMP=0x00000001000b57e0
- (void)_updateReturnKey;	// IMP=0x00000001000b570c
- (void)_endEditingWithCurrentText;	// IMP=0x00000001000b5540
- (unsigned long long)_unifiedFieldInputType;	// IMP=0x00000001000b54e4
- (id)_textWithoutWhitespace;	// IMP=0x00000001000b5458
- (id)_clearButtonImageForState:(unsigned long long)arg1;	// IMP=0x00000001000b535c
@property(copy, nonatomic) UIColor *placeholderColor;
- (_Bool)_hasContent;	// IMP=0x00000001000b51e4
- (id)textInputContextIdentifier;	// IMP=0x00000001000b51b8
- (void)pasteAndNavigate:(id)arg1;	// IMP=0x00000001000b5170
- (void)_handlePasteboardChangedNotification:(id)arg1;	// IMP=0x00000001000b5164
- (void)_updateMenuItems;	// IMP=0x00000001000b504c
- (void)paste:(id)arg1;	// IMP=0x00000001000b5008
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000b4ed4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <UnifiedFieldDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
