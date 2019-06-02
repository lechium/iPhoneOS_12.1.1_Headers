/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSURLRequest;

@interface WBSCompletionQuery : NSObject <NSCopying> {

	NSString* _normalizedQueryStringForParsec;
	BOOL _forLastSearch;
	NSString* _queryString;
	NSArray* _querySuggestions;
	NSString* _rewrittenQueryStringFromParsec;
	long long _queryID;
	unsigned long long _triggerEvent;
	NSString* _parsecFeedbackQueryIdentifier;
	NSURLRequest* _parsecSearchRequest;
	time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > _timestamp;
	NSString* _searchSuggestionProviderIdentifier;
	duration<long long, std::__1::ratio<1, 1000> > _searchSuggestionProviderLatency;
	duration<long long, std::__1::ratio<1, 1000> > _parsecLatency;
	unsigned long long _indexInFeedbackArray;

}

@property (nonatomic,copy) NSString * parsecFeedbackQueryIdentifier;                             //@synthesize parsecFeedbackQueryIdentifier=_parsecFeedbackQueryIdentifier - In the implementation block
@property (nonatomic,copy) NSURLRequest * parsecSearchRequest;                                   //@synthesize parsecSearchRequest=_parsecSearchRequest - In the implementation block
@property (nonatomic,readonly) time_point<std::__1::chrono::steady_clock timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * searchSuggestionProviderIdentifier;                        //@synthesize searchSuggestionProviderIdentifier=_searchSuggestionProviderIdentifier - In the implementation block
@property (assign,nonatomic) duration<long long searchSuggestionProviderLatency;                 //@synthesize searchSuggestionProviderLatency=_searchSuggestionProviderLatency - In the implementation block
@property (assign,nonatomic) duration<long long parsecLatency;                                   //@synthesize parsecLatency=_parsecLatency - In the implementation block
@property (assign,nonatomic) unsigned long long indexInFeedbackArray;                            //@synthesize indexInFeedbackArray=_indexInFeedbackArray - In the implementation block
@property (nonatomic,readonly) NSString * queryString;                                           //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,readonly) NSString * normalizedQueryStringForParsec; 
@property (assign,getter=isForLastSearch,nonatomic) BOOL forLastSearch;                          //@synthesize forLastSearch=_forLastSearch - In the implementation block
@property (copy) NSArray * querySuggestions;                                                     //@synthesize querySuggestions=_querySuggestions - In the implementation block
@property (nonatomic,copy) NSString * rewrittenQueryStringFromParsec;                            //@synthesize rewrittenQueryStringFromParsec=_rewrittenQueryStringFromParsec - In the implementation block
@property (nonatomic,readonly) long long queryID;                                                //@synthesize queryID=_queryID - In the implementation block
@property (assign,nonatomic) unsigned long long triggerEvent;                                    //@synthesize triggerEvent=_triggerEvent - In the implementation block
+(void)initialize;
-(NSString *)queryString;
-(id)initWithQueryString:(id)arg1 queryID:(long long)arg2 ;
-(id)initWithQueryString:(id)arg1 queryID:(long long)arg2 triggerEvent:(unsigned long long)arg3 ;
-(id)_initWithQueryString:(id)arg1 queryID:(long long)arg2 timestamp:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg3 indexInFeedbackArray:(unsigned long long)arg4 triggerEvent:(unsigned long long)arg5 ;
-(id)initWithQueryString:(id)arg1 ;
-(id)initWithQueryString:(id)arg1 triggerEvent:(unsigned long long)arg2 ;
-(NSString *)normalizedQueryStringForParsec;
-(BOOL)isForLastSearch;
-(void)setForLastSearch:(BOOL)arg1 ;
-(NSArray *)querySuggestions;
-(void)setQuerySuggestions:(NSArray *)arg1 ;
-(NSString *)rewrittenQueryStringFromParsec;
-(void)setRewrittenQueryStringFromParsec:(NSString *)arg1 ;
-(NSString *)parsecFeedbackQueryIdentifier;
-(void)setParsecFeedbackQueryIdentifier:(NSString *)arg1 ;
-(NSURLRequest *)parsecSearchRequest;
-(void)setParsecSearchRequest:(NSURLRequest *)arg1 ;
-(NSString *)searchSuggestionProviderIdentifier;
-(void)setSearchSuggestionProviderIdentifier:(NSString *)arg1 ;
-(duration<long long)searchSuggestionProviderLatency;
-(void)setSearchSuggestionProviderLatency:(duration<long long)arg1 ;
-(duration<long long)parsecLatency;
-(void)setParsecLatency:(duration<long long)arg1 ;
-(unsigned long long)indexInFeedbackArray;
-(void)setIndexInFeedbackArray:(unsigned long long)arg1 ;
-(long long)queryID;
-(unsigned long long)triggerEvent;
-(void)setTriggerEvent:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(time_point<std::__1::chrono::steady_clock)timestamp;
@end

