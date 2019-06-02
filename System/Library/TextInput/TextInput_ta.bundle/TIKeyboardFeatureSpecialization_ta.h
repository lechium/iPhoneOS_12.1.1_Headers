/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/TextInput/TextInput_ta.bundle/TextInput_ta
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIKeyboardFeatureSpecialization.h>

@interface TIKeyboardFeatureSpecialization_ta : TIKeyboardFeatureSpecialization {

	BOOL _qwertyLayout;

}

@property (assign,getter=isQwertyLayout,nonatomic) BOOL qwertyLayout;              //@synthesize qwertyLayout=_qwertyLayout - In the implementation block
-(id)nonstopPunctuationCharacters;
-(BOOL)doesComposeText;
-(void)specializeInputManager:(void*)arg1 forLayoutState:(id)arg2 ;
-(BOOL)dictionaryUsesExternalEncoding;
-(BOOL)shouldConvertCandidateToExternal;
-(BOOL)allowsAutocorrectionOfValidWords;
-(void)setQwertyLayout:(BOOL)arg1 ;
-(BOOL)isQwertyLayout;
@end

