/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSString;

@interface PRLexicon : NSObject {

	NSString* _localization;
	NSString* _unigramsPath;
	NSString* _converterPath;
	const void* _lexicon;
	void* _converter;

}
+(id)lexiconWithLocalization:(id)arg1 unigramsPath:(id)arg2 converterPath:(id)arg3 ;
-(void*)converter;
-(unsigned)tokenIDForString:(id)arg1 ;
-(id)stringForTokenID:(unsigned)arg1 ;
-(void)enumerateCompletionsForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(BOOL)getProbabilityForTokenID:(unsigned)arg1 probability:(double*)arg2 ;
-(BOOL)getProbabilityForString:(id)arg1 probability:(double*)arg2 ;
-(void)enumerateEntriesForString:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(LXLexiconRef)lexicon;
-(id)initWithLocalization:(id)arg1 unigramsPath:(id)arg2 converterPath:(id)arg3 ;
-(id)createCursor;
-(void)dealloc;
-(id)description;
@end

