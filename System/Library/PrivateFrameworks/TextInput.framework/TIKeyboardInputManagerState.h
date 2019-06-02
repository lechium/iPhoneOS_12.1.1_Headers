/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardBehaviors, TIKeyboardCandidate, NSString, TIKeyEventMap, TICharacterSetDescription;

@interface TIKeyboardInputManagerState : NSObject <NSCopying, NSSecureCoding> {

	TIKeyboardBehaviors* _keyboardBehaviors;
	SCD_Union_TI7 _mask;
	BOOL _shouldAddModifierSymbolsToWordCharacters;
	TIKeyboardCandidate* _autocorrectionRecordForInputString;
	NSString* _wordSeparator;
	unsigned long long _inputCount;
	unsigned long long _inputIndex;
	NSString* _inputString;
	TIKeyEventMap* _keyEventMap;
	NSString* _replacementForDoubleSpace;
	NSString* _shadowTyping;
	unsigned long long _initialCandidateBatchCount;
	TICharacterSetDescription* _wordCharacters;
	TICharacterSetDescription* _shortcutCompletions;
	TICharacterSetDescription* _inputsPreventingAcceptSelectedCandidate;
	TICharacterSetDescription* _inputsToReject;
	TICharacterSetDescription* _terminatorsPreventingAutocorrection;
	TICharacterSetDescription* _terminatorsDeletingAutospace;
	NSString* _searchStringForMarkedText;

}

@property (assign,nonatomic) BOOL canHandleKeyHitTest; 
@property (assign,nonatomic) BOOL ignoresDeadKeys; 
@property (assign,nonatomic) BOOL shouldExtendPriorWord; 
@property (assign,nonatomic) BOOL suppliesCompletions; 
@property (assign,nonatomic) BOOL supportsSetPhraseBoundary; 
@property (assign,nonatomic) BOOL suppressCompletionsForFieldEditor; 
@property (assign,nonatomic) BOOL usesAutoDeleteWord; 
@property (assign,nonatomic) BOOL usesCandidateSelection; 
@property (assign,nonatomic) BOOL usesAutocorrectionLists; 
@property (assign,nonatomic) BOOL commitsAcceptedCandidate; 
@property (assign,nonatomic) unsigned long long autoquoteType; 
@property (nonatomic,copy) NSString * replacementForDoubleSpace;                                             //@synthesize replacementForDoubleSpace=_replacementForDoubleSpace - In the implementation block
@property (nonatomic,copy) NSString * wordSeparator;                                                         //@synthesize wordSeparator=_wordSeparator - In the implementation block
@property (assign,nonatomic) unsigned long long initialCandidateBatchCount;                                  //@synthesize initialCandidateBatchCount=_initialCandidateBatchCount - In the implementation block
@property (nonatomic,retain) TIKeyboardBehaviors * keyboardBehaviors;                                        //@synthesize keyboardBehaviors=_keyboardBehaviors - In the implementation block
@property (assign,nonatomic) BOOL shouldAddModifierSymbolsToWordCharacters;                                  //@synthesize shouldAddModifierSymbolsToWordCharacters=_shouldAddModifierSymbolsToWordCharacters - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * wordCharacters;                                       //@synthesize wordCharacters=_wordCharacters - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * shortcutCompletions;                                  //@synthesize shortcutCompletions=_shortcutCompletions - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * inputsPreventingAcceptSelectedCandidate;              //@synthesize inputsPreventingAcceptSelectedCandidate=_inputsPreventingAcceptSelectedCandidate - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * inputsToReject;                                       //@synthesize inputsToReject=_inputsToReject - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * terminatorsPreventingAutocorrection;                  //@synthesize terminatorsPreventingAutocorrection=_terminatorsPreventingAutocorrection - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * terminatorsDeletingAutospace;                         //@synthesize terminatorsDeletingAutospace=_terminatorsDeletingAutospace - In the implementation block
@property (nonatomic,copy) NSString * inputString;                                                           //@synthesize inputString=_inputString - In the implementation block
@property (assign,nonatomic) unsigned long long inputIndex;                                                  //@synthesize inputIndex=_inputIndex - In the implementation block
@property (assign,nonatomic) unsigned long long inputCount;                                                  //@synthesize inputCount=_inputCount - In the implementation block
@property (assign,nonatomic) BOOL nextInputWouldStartSentence; 
@property (assign,nonatomic) BOOL inputStringIsExemptFromChecker; 
@property (assign,nonatomic) BOOL suppressPlaceholderCandidate; 
@property (assign,nonatomic) BOOL supportsNumberKeySelection; 
@property (nonatomic,retain) TIKeyboardCandidate * autocorrectionRecordForInputString;                       //@synthesize autocorrectionRecordForInputString=_autocorrectionRecordForInputString - In the implementation block
@property (nonatomic,copy) NSString * shadowTyping;                                                          //@synthesize shadowTyping=_shadowTyping - In the implementation block
@property (nonatomic,copy) NSString * searchStringForMarkedText;                                             //@synthesize searchStringForMarkedText=_searchStringForMarkedText - In the implementation block
@property (nonatomic,retain) TIKeyEventMap * keyEventMap;                                                    //@synthesize keyEventMap=_keyEventMap - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setInputCount:(unsigned long long)arg1 ;
-(TICharacterSetDescription *)shortcutCompletions;
-(TICharacterSetDescription *)inputsPreventingAcceptSelectedCandidate;
-(void)setInputsPreventingAcceptSelectedCandidate:(TICharacterSetDescription *)arg1 ;
-(TICharacterSetDescription *)inputsToReject;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(TICharacterSetDescription *)wordCharacters;
-(TICharacterSetDescription *)terminatorsDeletingAutospace;
-(void)setInputIndex:(unsigned long long)arg1 ;
-(void)setAutocorrectionRecordForInputString:(TIKeyboardCandidate *)arg1 ;
-(void)setInputStringIsExemptFromChecker:(BOOL)arg1 ;
-(void)setSuppressPlaceholderCandidate:(BOOL)arg1 ;
-(void)setInputsToReject:(TICharacterSetDescription *)arg1 ;
-(void)setShortcutCompletions:(TICharacterSetDescription *)arg1 ;
-(void)setReplacementForDoubleSpace:(NSString *)arg1 ;
-(void)setKeyEventMap:(TIKeyEventMap *)arg1 ;
-(void)setShadowTyping:(NSString *)arg1 ;
-(void)setNextInputWouldStartSentence:(BOOL)arg1 ;
-(void)setInputString:(NSString *)arg1 ;
-(void)setKeyboardBehaviors:(TIKeyboardBehaviors *)arg1 ;
-(void)setTerminatorsDeletingAutospace:(TICharacterSetDescription *)arg1 ;
-(void)setTerminatorsPreventingAutocorrection:(TICharacterSetDescription *)arg1 ;
-(TICharacterSetDescription *)terminatorsPreventingAutocorrection;
-(void)setWordCharacters:(TICharacterSetDescription *)arg1 ;
-(void)setShouldAddModifierSymbolsToWordCharacters:(BOOL)arg1 ;
-(void)setWordSeparator:(NSString *)arg1 ;
-(void)setInitialCandidateBatchCount:(unsigned long long)arg1 ;
-(void)setCommitsAcceptedCandidate:(BOOL)arg1 ;
-(void)setUsesAutocorrectionLists:(BOOL)arg1 ;
-(void)setAutoquoteType:(unsigned long long)arg1 ;
-(void)setUsesAutoDeleteWord:(BOOL)arg1 ;
-(void)setSuppressCompletionsForFieldEditor:(BOOL)arg1 ;
-(void)setSupportsSetPhraseBoundary:(BOOL)arg1 ;
-(void)setSuppliesCompletions:(BOOL)arg1 ;
-(void)setShouldExtendPriorWord:(BOOL)arg1 ;
-(void)setIgnoresDeadKeys:(BOOL)arg1 ;
-(void)setCanHandleKeyHitTest:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TIKeyboardBehaviors *)keyboardBehaviors;
-(BOOL)supportsNumberKeySelection;
-(void)setSupportsNumberKeySelection:(BOOL)arg1 ;
-(void)setUsesCandidateSelection:(BOOL)arg1 ;
-(BOOL)canHandleKeyHitTest;
-(BOOL)usesCandidateSelection;
-(BOOL)acceptInputString:(id)arg1 ;
-(NSString *)searchStringForMarkedText;
-(NSString *)inputString;
-(BOOL)usesAutoDeleteWord;
-(BOOL)supportsSetPhraseBoundary;
-(void)setSearchStringForMarkedText:(NSString *)arg1 ;
-(BOOL)shouldExtendPriorWord;
-(BOOL)usesAutocorrectionLists;
-(BOOL)nextInputWouldStartSentence;
-(unsigned long long)autoquoteType;
-(BOOL)suppressCompletionsForFieldEditor;
-(BOOL)suppliesCompletions;
-(BOOL)shouldDeleteAutospaceBeforeTerminator:(id)arg1 ;
-(BOOL)shouldSuppressAutocorrectionWithTerminator:(id)arg1 ;
-(BOOL)inputStringAcceptsCurrentCandidateIfSelected:(id)arg1 ;
-(BOOL)stringEndsWord:(id)arg1 ;
-(BOOL)inputStringIsExemptFromChecker;
-(NSString *)wordSeparator;
-(NSString *)replacementForDoubleSpace;
-(unsigned long long)inputIndex;
-(NSString *)shadowTyping;
-(unsigned long long)inputCount;
-(BOOL)commitsAcceptedCandidate;
-(TIKeyboardCandidate *)autocorrectionRecordForInputString;
-(unsigned long long)initialCandidateBatchCount;
-(BOOL)suppressPlaceholderCandidate;
-(TIKeyEventMap *)keyEventMap;
-(BOOL)ignoresDeadKeys;
@end

