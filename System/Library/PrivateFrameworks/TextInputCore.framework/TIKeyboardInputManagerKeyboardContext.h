/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TIKeyboardOutput, TIRevisionHistory, TIKeyboardState;

@interface TIKeyboardInputManagerKeyboardContext : NSObject {

	TIKeyboardOutput* _output;
	TIRevisionHistory* _revisionHistory;
	TIKeyboardState* _currentState;

}

@property (nonatomic,readonly) TIKeyboardState * currentState;                 //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) TIKeyboardOutput * output;                      //@synthesize output=_output - In the implementation block
@property (nonatomic,retain) TIRevisionHistory * revisionHistory;              //@synthesize revisionHistory=_revisionHistory - In the implementation block
-(TIKeyboardOutput *)output;
-(TIRevisionHistory *)revisionHistory;
-(id)initWithKeyboardState:(id)arg1 ;
-(void)deleteHandwritingStrokes:(id)arg1 ;
-(void)setRevisionHistory:(TIRevisionHistory *)arg1 ;
-(void)deleteForward:(unsigned long long)arg1 ;
-(TIKeyboardState *)currentState;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward:(unsigned long long)arg1 ;
-(void)unmarkText:(id)arg1 ;
-(void)clearInputForMarkedText;
-(void)acceptCandidate:(id)arg1 ;
-(void)insertTextAfterSelection:(id)arg1 ;
@end

