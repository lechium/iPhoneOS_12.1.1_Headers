/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@interface AXFirstResponderValueChangeManager : NSObject
+(id)sharedInstance;
-(id)outputValueChangeForNewValue:(id)arg1 oldValue:(id)arg2 selectedTextRange:(NSRange)arg3 oldSelectedTextRange:(NSRange)arg4 shouldEchoDeletion:(BOOL)arg5 isSingleInsert:(BOOL)arg6 feedbackType:(unsigned long long)arg7 lastKeyboardKeyPress:(double)arg8 ;
-(id)_outputValueChangeForNewValue:(id)arg1 oldValue:(id)arg2 isFirstResponderValid:(BOOL)arg3 selectedTextRange:(NSRange)arg4 oldSelectedTextRange:(NSRange)arg5 shouldEchoDeletion:(BOOL)arg6 optionalValueChangeType:(unsigned long long)arg7 derivedValueChangeType:(unsigned long long*)arg8 didHitBorder:(BOOL*)arg9 isBreakSpaceCharacter:(BOOL*)arg10 isSingleInsert:(BOOL)arg11 selectionDeleted:(BOOL)arg12 feedbackType:(unsigned long long)arg13 textOperationOccurred:(BOOL*)arg14 lastKeyboardKeyPress:(double)arg15 isSingleCharacterInsertOrDelete:(BOOL*)arg16 singleInsertDeleteAttString:(id*)arg17 singleInsertDeleteString:(id*)arg18 isSingleCharacterUpdate:(BOOL*)arg19 wordRangeToFindMisspelled:(NSRange*)arg20 pasteOperationSucceeded:(BOOL*)arg21 shouldOutputSingleCharactersOnly:(BOOL)arg22 clientType:(long long)arg23 ;
-(id)outputValueChangeForNewValue:(id)arg1 oldValue:(id)arg2 isFirstResponderValid:(BOOL)arg3 selectedTextRange:(NSRange)arg4 oldSelectedTextRange:(NSRange)arg5 shouldEchoDeletion:(BOOL)arg6 optionalValueChangeType:(unsigned long long)arg7 derivedValueChangeType:(unsigned long long*)arg8 didHitBorder:(BOOL*)arg9 isBreakSpaceCharacter:(BOOL*)arg10 isSingleInsert:(BOOL)arg11 selectionDeleted:(BOOL)arg12 feedbackType:(unsigned long long)arg13 textOperationOccurred:(BOOL*)arg14 lastKeyboardKeyPress:(double)arg15 isSingleCharacterInsertOrDelete:(BOOL*)arg16 singleInsertDeleteAttString:(id*)arg17 singleInsertDeleteString:(id*)arg18 isSingleCharacterUpdate:(BOOL*)arg19 wordRangeToFindMisspelled:(NSRange*)arg20 pasteOperationSucceeded:(BOOL*)arg21 clientType:(long long)arg22 ;
-(id)_handleApostropheIfNeeded:(id)arg1 ;
-(void)_handleAttributedApostropheIfNeeded:(id)arg1 ;
-(id)outputValueChangeForNewValue:(id)arg1 oldValue:(id)arg2 selectedTextRange:(NSRange)arg3 shouldEchoDeletion:(BOOL)arg4 isSingleInsert:(BOOL)arg5 feedbackType:(unsigned long long)arg6 lastKeyboardKeyPress:(double)arg7 ;
-(id)outputValueChangeForNewValue:(id)arg1 oldValue:(id)arg2 selectedTextRange:(NSRange)arg3 shouldEchoDeletion:(BOOL)arg4 isSingleInsert:(BOOL)arg5 feedbackType:(unsigned long long)arg6 lastKeyboardKeyPress:(double)arg7 shouldOutputSingleCharactersOnly:(BOOL)arg8 ;
@end

