/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLNLP : NSObject
+(id)stringWithoutDiacriticsFromString:(id)arg1 ;
+(id)stopWordsForLanguageCode:(id)arg1 ;
+(id)dateFilterForCMMWithAttributes:(id)arg1 withReferenceDate:(id)arg2 ;
+(id)_englishStopWords;
+(id)_frenchStopWords;
+(id)lemmasForToken:(id)arg1 locale:(id)arg2 options:(long long)arg3 ;
+(id)tokensFromString:(id)arg1 options:(long long)arg2 ;
+(id)ngramsFromTokens:(id)arg1 ofSize:(unsigned long long)arg2 usingSeparator:(id)arg3 ;
+(id)dateIntervalsFromMessage:(id)arg1 onDate:(id)arg2 ;
+(BOOL)nlpSearchSupportsLocale:(id)arg1 ;
@end

