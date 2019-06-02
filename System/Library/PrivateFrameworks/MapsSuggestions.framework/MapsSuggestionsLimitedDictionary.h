/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface MapsSuggestionsLimitedDictionary : NSObject {

	unsigned long long _maxCapacity;
	NSMutableDictionary* _dict;
	NSMutableDictionary* _hits;
	NSMutableArray* _order;
	unsigned long long _totalHits;
	unsigned long long _totalMisses;

}
-(unsigned long long)hitsOnKey:(id)arg1 ;
-(double)totalHitRatio;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(unsigned long long)count;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)description;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithMaximumCapacity:(unsigned long long)arg1 ;
@end
