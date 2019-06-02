/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHQuery.h>

@class NSArray, NSString;

@interface CHSearchQuery : CHQuery {

	NSArray* _foundItems;
	NSString* _queryString;

}

@property (setter=_setFoundItems:,nonatomic,copy) NSArray * foundItems;              //@synthesize foundItems=_foundItems - In the implementation block
@property (nonatomic,copy) NSString * queryString;                                   //@synthesize queryString=_queryString - In the implementation block
-(id)debugName;
-(void)setQueryString:(NSString *)arg1 ;
-(NSString *)queryString;
-(void)q_updateQueryResult;
-(id)q_foundItemsForSearchString:(id)arg1 sessionResult:(id)arg2 ;
-(void)_setFoundItems:(id)arg1 ;
-(void)_enumerateMatchingRangesForStrokeGroupResult:(id)arg1 locales:(id)arg2 searchString:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(NSRange)_tokenIndexRangeForStringRange:(NSRange)arg1 inResult:(id)arg2 ;
-(id)initWithRecognitionSession:(id)arg1 ;
-(NSArray *)foundItems;
-(void)dealloc;
-(void)stop;
@end
