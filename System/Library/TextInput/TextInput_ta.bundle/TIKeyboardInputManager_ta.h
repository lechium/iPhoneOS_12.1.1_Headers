/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/TextInput/TextInput_ta.bundle/TextInput_ta
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_ta/TextInput_ta-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_ta : TIKeyboardInputManager {

	void* _internalToExternalTransliterator;
	void* _externalToInternalTransliterator;
	BOOL _isQWERTYLayout;

}
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(void)syncToLayoutState:(id)arg1 ;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 fromVariantKey:(BOOL)arg5 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)configureTransliterators;
-(void)closeTransliterators;
-(void)initTransliteratorsWithID:(id)arg1 ;
-(void)dealloc;
@end

