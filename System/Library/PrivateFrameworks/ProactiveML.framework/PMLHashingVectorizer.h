/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/PMLTransformerProtocol.h>
#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class NSString;

@interface PMLHashingVectorizer : NSObject <PMLTransformerProtocol, PMLPlistAndChunksSerializableProtocol> {

	int _buckets;
	BOOL _normalize;
	NSRange _characterNGramRange;
	NSRange _tokenNGramRange;
	BOOL _shouldNormalizeTokens;
	BOOL _shouldNormalizeCharacters;
	BOOL _intercept;

}

@property (assign,nonatomic) BOOL normalize;                        //@synthesize normalize=_normalize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withBucketSize:(int)arg1 ;
+(id)withBucketSize:(int)arg1 ngrams:(int)arg2 andIntercept:(BOOL)arg3 ;
+(id)withBucketSize:(int)arg1 characterNGramRange:(NSRange)arg2 tokenNGramRange:(NSRange)arg3 shouldNormalizeTokens:(BOOL)arg4 shouldNormalizeCharacters:(BOOL)arg5 withIntercept:(BOOL)arg6 ;
+(id)withBucketSize:(int)arg1 andNgrams:(int)arg2 ;
-(id)initWithBucketSize:(int)arg1 characterNGramRange:(NSRange)arg2 tokenNGramRange:(NSRange)arg3 shouldNormalizeTokens:(BOOL)arg4 shouldNormalizeCharacters:(BOOL)arg5 withIntercept:(BOOL)arg6 ;
-(id)initWithBucketSize:(int)arg1 ngrams:(int)arg2 andIntercept:(BOOL)arg3 ;
-(void)setNormalize:(BOOL)arg1 ;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(BOOL)normalize;
-(id)init;
@end

