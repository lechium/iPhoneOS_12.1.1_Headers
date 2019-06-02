/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRegularExpression;

@interface PRSParsecResultSetPattern : NSObject {

	NSRegularExpression* _regularExpression;
	long long _patternLength;

}

@property (readonly) long long patternLength;              //@synthesize patternLength=_patternLength - In the implementation block
+(id)_regularExpressionPatternForToken:(id)arg1 ;
+(id)patternWithString:(id)arg1 ;
+(id)_nextTokenInResultSetPattern:(id)arg1 optional:(BOOL*)arg2 ;
+(id)_regularExpressionPatternForResultSetPatternSuffix:(id)arg1 tokenCount:(long long*)arg2 ;
+(id)_regularExpressionPatternFromResultSetPattern:(id)arg1 tokenCount:(long long*)arg2 ;
-(BOOL)isMatchedByString:(id)arg1 ;
-(id)_initWithRegularExpression:(id)arg1 tokenCount:(long long)arg2 ;
-(long long)patternLength;
@end

