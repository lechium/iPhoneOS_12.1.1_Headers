/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MFSQLExpression : NSObject {

	NSString* _expression;

}

@property (nonatomic,retain) NSString * expression;              //@synthesize expression=_expression - In the implementation block
+(id)expressionWithString:(id)arg1 ;
-(id)like:(id)arg1 ;
-(NSString *)expression;
-(void)setExpression:(NSString *)arg1 ;
-(id)equalToString:(id)arg1 ;
-(id)beginsWithString:(id)arg1 ;
-(id)endsWithString:(id)arg1 ;
-(id)doesNotContainsString:(id)arg1 ;
-(id)SQLExpression;
-(id)like:(id)arg1 escapeCharacter:(unsigned short)arg2 ;
-(id)notLike:(id)arg1 escapeCharacter:(unsigned short)arg2 ;
-(id)equalToExpresion:(id)arg1 ;
-(id)notLike:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)containsString:(id)arg1 ;
@end

