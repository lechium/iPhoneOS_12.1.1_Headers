/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <TextInput/TIKeyboardCandidate.h>

@class UITextSuggestion;

@interface TIKeyboardCandidateSuggestion : TIKeyboardCandidate {

	unsigned long long _customInfoType;
	UITextSuggestion* _textSuggestion;

}

@property (nonatomic,readonly) UITextSuggestion * textSuggestion;              //@synthesize textSuggestion=_textSuggestion - In the implementation block
+(id)candidateWithSuggestion:(id)arg1 customInfoType:(unsigned long long)arg2 ;
+(id)candidateWithSuggestion:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(unsigned long long)customInfoType;
-(id)candidate;
-(UITextSuggestion *)textSuggestion;
-(id)input;
-(id)initWithSuggestion:(id)arg1 customInfoType:(unsigned long long)arg2 ;
@end

