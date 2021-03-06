/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSArray;

@interface CSAttributeEvaluator : NSObject {

	BOOL _matchOncePerTerm;
	BOOL _fuzzyMatching;
	NSString* _queryString;
	unsigned long long _attributeTokenCount;
	unsigned long long _matcherCount;
	const void* _matchers;
	unsigned long long _queryTermCount;
	void* _tokenizer;
	NSMutableArray* _tokenizedQueryTerms;
	NSString* _language;
	/*^block*/id _handler;

}

@property (assign,nonatomic) unsigned long long attributeTokenCount;              //@synthesize attributeTokenCount=_attributeTokenCount - In the implementation block
@property (assign,nonatomic) BOOL fuzzyMatching;                                  //@synthesize fuzzyMatching=_fuzzyMatching - In the implementation block
@property (assign,nonatomic) unsigned long long matcherCount;                     //@synthesize matcherCount=_matcherCount - In the implementation block
@property (assign,nonatomic) const void* matchers;                                //@synthesize matchers=_matchers - In the implementation block
@property (assign,nonatomic) unsigned long long queryTermCount;                   //@synthesize queryTermCount=_queryTermCount - In the implementation block
@property (assign,nonatomic) void* tokenizer;                                     //@synthesize tokenizer=_tokenizer - In the implementation block
@property (nonatomic,retain) NSMutableArray * tokenizedQueryTerms;                //@synthesize tokenizedQueryTerms=_tokenizedQueryTerms - In the implementation block
@property (nonatomic,retain) NSString * language;                                 //@synthesize language=_language - In the implementation block
@property (nonatomic,copy) id handler;                                            //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) NSArray * queryTerms; 
@property (nonatomic,readonly) NSString * queryString;                            //@synthesize queryString=_queryString - In the implementation block
@property (assign,nonatomic) BOOL matchOncePerTerm;                               //@synthesize matchOncePerTerm=_matchOncePerTerm - In the implementation block
+(void)enumerateTokensForString:(id)arg1 locale:(id)arg2 options:(unsigned long long)arg3 withHandler:(/*^block*/id)arg4 ;
-(NSString *)queryString;
-(void)setTokenizedQueryTerms:(NSMutableArray *)arg1 ;
-(NSMutableArray *)tokenizedQueryTerms;
-(void)setMatchers:(const void*)arg1 ;
-(const void*)matchers;
-(void)setFuzzyMatching:(BOOL)arg1 ;
-(void)setMatcherCount:(unsigned long long)arg1 ;
-(void)setQueryTermCount:(unsigned long long)arg1 ;
-(void)setTokenizer:(void*)arg1 ;
-(void)setMatchOncePerTerm:(BOOL)arg1 ;
-(void)setAttributeTokenCount:(unsigned long long)arg1 ;
-(unsigned long long)matcherCount;
-(unsigned long long)evaluateAttribute:(id)arg1 ignoreSubtokens:(BOOL)arg2 skipTranscriptions:(BOOL)arg3 withFuzzyHandler:(/*^block*/id)arg4 ;
-(unsigned long long)attributeTokenCount;
-(id)initWithQuery:(id)arg1 language:(id)arg2 fuzzyThreshold:(unsigned char)arg3 options:(unsigned long long)arg4 ;
-(NSArray *)queryTerms;
-(unsigned long long)evaluateAttribute:(id)arg1 ignoreSubtokens:(BOOL)arg2 withHandler:(/*^block*/id)arg3 ;
-(unsigned long long)evaluateAttribute:(id)arg1 ignoreSubtokens:(BOOL)arg2 skipTranscriptions:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(BOOL)matchOncePerTerm;
-(BOOL)fuzzyMatching;
-(unsigned long long)queryTermCount;
-(void)dealloc;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void*)tokenizer;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
@end

