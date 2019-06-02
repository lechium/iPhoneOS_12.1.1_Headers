/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_ja/TextInput_ja-Structs.h>
#import <TextInput_ja/TIKeyboardInputManager_ja.h>

@class NSMutableArray, NSString;

@interface TIKeyboardInputManager_ja_Romaji : TIKeyboardInputManager_ja {

	NSMutableArray* _externalIndexToInternalIndexMappingArray;
	unsigned long long _externalInputIndex;
	NSString* _externalString;

}
+(Class)wordSearchClass;
-(void)updateState;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 ;
-(NSRange)analysisStringRange;
-(id)validCharacterSetForAutocorrection;
-(void)loadDictionaries;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)inputLocationChanged;
-(id)remainingInput;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)setInputIndex:(unsigned)arg1 ;
-(void)checkAutocorrectionDictionaries;
-(id)transliterate:(id)arg1 ;
-(unsigned long long)actualInternalInputIndex;
-(id)_convertStringWithBoundary:(unsigned long long)arg1 ;
-(unsigned long long)remainingInputLengthOfCandidate:(id)arg1 ;
-(void)dealloc;
-(void)clearInput;
-(BOOL)usesCandidateSelection;
-(id)searchStringForMarkedText;
-(id)inputString;
-(unsigned)inputIndex;
-(unsigned)inputCount;
@end

