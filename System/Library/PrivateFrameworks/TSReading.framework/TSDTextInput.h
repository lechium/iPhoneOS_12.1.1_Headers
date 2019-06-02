/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol TSDTextInput <TSDEditor,UIResponderStandardEditActions>
@property (nonatomic,retain,readonly) TSKSelection*<TSDTextSelection> textInputSelection; 
@property (nonatomic,readonly) NSRange markedRange; 
@property (retain,readonly) UIView * inputView; 
@property (retain,readonly) UIView * inputAccessoryView; 
@property (readonly) BOOL wantsRawArrowKeyEvents; 
@property (nonatomic,retain) TSKSelection*<TSDTextSelection> selectionForArrowKeys; 
@optional
-(void)setBaseWritingDirection:(long long)arg1 forParagraphsWithRange:(NSRange)arg2;
-(long long)writingDirectionForCharIndex:(unsigned long long)arg1;
-(void)endEditingAndSelectParent:(id)arg1;
-(BOOL)acceptsHyperlink;
-(void)insertHyperlink:(id)arg1;
-(BOOL)acceptsTabs;
-(BOOL)acceptsSectionBreaks;
-(void)insertSectionBreak:(id)arg1;
-(BOOL)acceptsLineBreaks;
-(void)insertLineBreak:(id)arg1;
-(BOOL)acceptsPageBreaks;
-(void)insertPageBreak:(id)arg1;
-(BOOL)acceptsColumnBreaks;
-(void)insertColumnBreak:(id)arg1;
-(unsigned long long)closestCharIndexToPoint:(CGPoint)arg1 isAtEndOfLine:(BOOL*)arg2;
-(void)arrowKeyReceivedInDirection:(int)arg1 withModifierKeys:(int)arg2;
-(id)unfilteredText;
-(BOOL)wantsRawArrowKeyEvents;
-(TSKSelection*<TSDTextSelection>)selectionForArrowKeys;
-(void)setSelectionForArrowKeys:(id)arg1;
-(long long)autocorrectionType;
-(BOOL)isSecureTextEntry;
-(BOOL)canResignFirstResponder;
-(id)keyCommands;
-(id)textInputView;
-(void)insertDictationResult:(id)arg1;
-(void)insertNewlineIgnoringFieldEditor:(id)arg1;
-(void)insertTab:(id)arg1;
-(void)insertTabIgnoringFieldEditor:(id)arg1;

@required
-(BOOL)wantsKeyboard;
-(BOOL)textIsVerticalAtCharIndex:(unsigned long long)arg1;
-(unsigned long long)textLength;
-(void)extendSelectionLeft;
-(void)extendSelectionRight;
-(id)textColorAtCharIndex:(unsigned long long)arg1;
-(id)textFontAtCharIndex:(unsigned long long)arg1;
-(id)selectionWithRange:(NSRange)arg1;
-(void)setSelectionWithRange:(NSRange)arg1 endOfLine:(BOOL)arg2;
-(void)clearMarkedRange;
-(BOOL)isCharIndex:(unsigned long long)arg1 withEolAffinity:(BOOL)arg2 atBoundary:(long long)arg3 inDirection:(long long)arg4;
-(unsigned long long)charIndexByMovingPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 preferPosition:(double*)arg4;
-(BOOL)isCharIndex:(unsigned long long)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
-(NSRange*)rangeOfWordEnclosingCharIndex:(unsigned long long)arg1 backward:(BOOL)arg2;
-(TSKSelection*<TSDTextSelection>)textInputSelection;
-(long long)returnKeyType;
-(UIView *)inputAccessoryView;
-(void)replaceRange:(NSRange)arg1 withText:(id)arg2;
-(void)endEditing;
-(void)insertText:(id)arg1;
-(id)textInRange:(NSRange)arg1;
-(CGRect*)firstRectForRange:(NSRange)arg1;
-(UIView *)inputView;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(id)selectionRectsForRange:(NSRange)arg1;
-(NSRange*)editRange;
-(NSRange)markedRange;

@end

