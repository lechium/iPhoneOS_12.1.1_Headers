/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInputPrivate;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIResponder, UITextRange, DOMRange;

@interface UITextSelection : NSObject {

	UIResponder*<UITextInputPrivate> _document;
	long long _granularity;
	UITextRange* _selectedRange;
	UITextRange* _base;
	UITextRange* _initialExtent;
	BOOL _isCommitting;

}

@property (nonatomic,__weak,readonly) UIResponder*<UITextInputPrivate> document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) UITextRange * selectedRange;                                     //@synthesize selectedRange=_selectedRange - In the implementation block
@property (assign,nonatomic) long long granularity;                                           //@synthesize granularity=_granularity - In the implementation block
@property (nonatomic,readonly) BOOL isCommitting;                                             //@synthesize isCommitting=_isCommitting - In the implementation block
@property (nonatomic,retain) UITextRange * base;                                              //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) UITextRange * initialExtent;                                     //@synthesize initialExtent=_initialExtent - In the implementation block
@property (getter=_domRange,nonatomic,readonly) DOMRange * domRange; 
-(void)dealloc;
-(void)selectionChanged;
-(void)invalidate;
-(void)commit;
-(id)initWithDocument:(id)arg1 ;
-(id)selectedText;
-(void)selectAll;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(CGRect)caretRect;
-(void)clearSelection;
-(UITextRange *)selectedRange;
-(void)collapseSelection;
-(BOOL)pointAtEndOfLine:(CGPoint)arg1 ;
-(void)alterSelection:(CGPoint)arg1 granularity:(long long)arg2 ;
-(id)selectionRects;
-(id)wordContainingCaretSelection;
-(id)_domRange;
-(void)moveCaretToBoundaryOfWhitespaceOrLine;
-(void)setSelectedRange:(UITextRange *)arg1 ;
-(void)alterSelectionGranularity:(long long)arg1 ;
-(void)setRangedSelectionBaseToCurrentSelection;
-(void)clearRangedSelectionInitialExtent;
-(void)setRangedSelectionWithExtentPoint:(CGPoint)arg1 ;
-(void)setGranularity:(long long)arg1 ;
-(void)setSelectionWithFirstPoint:(CGPoint)arg1 secondPoint:(CGPoint)arg2 ;
-(BOOL)hasEditableSelection;
-(void)setHybridSelectionWithPoint:(CGPoint)arg1 ;
-(CGPoint)clipPoint:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(UIResponder*<UITextInputPrivate>)document;
-(void)extendSelectionToPoint:(CGPoint)arg1 ;
-(BOOL)setRangedSelectionExtentPoint:(CGPoint)arg1 baseIsStart:(BOOL)arg2 ;
-(void)smartExtendRangedSelection:(int)arg1 downstream:(BOOL)arg2 ;
-(void)setRangedSelectionBaseToCurrentSelectionStart;
-(void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
-(void)setRangedSelectionBaseToCurrentSelectionEnd;
-(void)setRangedSelectionInitialExtentToCurrentSelectionStart;
-(void)setBase:(UITextRange *)arg1 ;
-(void)setInitialExtent:(UITextRange *)arg1 ;
-(long long)granularity;
-(void)aggressivelyExpandSelectionToWordContainingCaretSelection;
-(UITextRange *)base;
-(UITextRange *)initialExtent;
-(BOOL)setRangedSelectionExtentPoint:(CGPoint)arg1 baseIsStart:(BOOL)arg2 allowFlipping:(BOOL)arg3 ;
-(CGRect)caretRectAtEndOfDocument;
-(CGRect)caretRectAtBeginOfDocument;
-(CGRect)closestCaretRectForPoint:(CGPoint)arg1 inSelection:(BOOL)arg2 ;
-(unsigned long long)offsetInMarkedText;
-(void)increaseSelectionGranularity;
-(BOOL)pointAtStartOfLine:(CGPoint)arg1 ;
-(BOOL)isCommitting;
@end

