/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardState, TIKeyboardCandidateResultSet;

@interface TITypologyRecordCandidateResultSet : TITypologyRecord {

	TIKeyboardState* _keyboardState;
	TIKeyboardCandidateResultSet* _resultSet;

}

@property (nonatomic,retain) TIKeyboardState * keyboardState;                       //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * resultSet;              //@synthesize resultSet=_resultSet - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)applyToStatistic:(id)arg1 ;
-(TIKeyboardCandidateResultSet *)resultSet;
-(TIKeyboardState *)keyboardState;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(void)setResultSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDescription;
@end

