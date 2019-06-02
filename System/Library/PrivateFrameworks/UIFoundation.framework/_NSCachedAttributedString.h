/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSMutableAttributedString.h>

@class NSAttributeDictionary;

@interface _NSCachedAttributedString : NSMutableAttributedString {

	id _contents;
	NSAttributeDictionary* _baseAttributes;
	long long _length;
	unsigned long long _hashValue;
	SCD_Struct_NS33* _runs;
	long long _numRuns;
	long long _allocedRunsSize;
	long long _numHits;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(BOOL)_isStringDrawingTextStorage;
-(BOOL)_baselineMode;
-(id)copyCachedInstance;
-(BOOL)hasColorGlyphsInRange:(NSRange)arg1 ;
-(void)finalize;
-(unsigned long long)length;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(oneway void)release;
-(id)string;
-(id)initWithString:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithAttributedString:(id)arg1 ;
-(void)cache;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
@end

