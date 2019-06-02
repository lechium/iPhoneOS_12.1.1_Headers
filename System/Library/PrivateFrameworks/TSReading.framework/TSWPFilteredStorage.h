/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPTextSource.h>

@class TSWPStorage, TSWPDeletionRangeMap, NSString;

@interface TSWPFilteredStorage : NSObject <TSWPTextSource> {

	TSWPStorage* _storage;
	TSWPDeletionRangeMap* _rangeMap;
	unsigned long long _length;
	unsigned long long _storageLength;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStorage:(id)arg1 subRange:(NSRange)arg2 removeRanges:(id)arg3 ;
-(unsigned long long)previousCharacterIndex:(unsigned long long)arg1 ;
-(unsigned long long)nextCharacterIndex:(unsigned long long)arg1 ;
-(BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1 ;
-(NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(BOOL)arg2 ;
-(void)enumerateSmartFieldsWithAttributeKind:(unsigned)arg1 inRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(BOOL)arg2 attributesTable:(id)arg3 effectiveRange:(NSRange*)arg4 ;
-(unsigned long long)storageLength;
-(BOOL)adjustRangesByDelta:(long long)arg1 ;
-(BOOL)hasColumnBreakAtCharIndex:(unsigned long long)arg1 ;
-(BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1 ;
-(double)filteredCoreTextAttributesFontScaleEffectiveRange:(NSRange*)arg1 filterDelegate:(id)arg2 ;
-(CFDictionaryRef)createFilteredCoreTextAttributes:(CFDictionaryRef)arg1 effectiveRange:(NSRange*)arg2 filterDelegate:(id)arg3 ;
-(id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)smartFieldsWithAttributeKind:(unsigned)arg1 intersectingRange:(NSRange)arg2 ;
-(id)footnoteReferenceAtCharIndex:(unsigned long long)arg1 ;
-(id)attachmentAtCharIndex:(unsigned long long)arg1 ;
-(id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1 ;
-(id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1 ;
-(unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1 ;
-(NSRange)charRangeMappedToStorage:(NSRange)arg1 ;
-(NSRange)charRangeMappedFromStorage:(NSRange)arg1 ;
-(long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(NSRange)arg2 locale:(CFLocaleRef)arg3 hyphenChar:(unsigned*)arg4 ;
-(unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1 ;
-(void)enumerateWithAttributeKind:(unsigned)arg1 inRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)hasSmartFieldsInRange:(NSRange)arg1 ;
-(id)initWithStorage:(id)arg1 subRange:(NSRange)arg2 ;
-(NSRange)whiteSpaceRangeAtCharIndex:(unsigned long long)arg1 includingBreaks:(BOOL)arg2 ;
-(NSRange)scanBackwardForWordAtCharIndex:(unsigned long long)arg1 ;
-(NSRange)rangeForSelectionAtCharIndex:(unsigned long long)arg1 caretIndex:(unsigned long long)arg2 ;
-(unsigned long long)length;
-(void)dealloc;
-(id)string;
-(id)substringWithRange:(NSRange)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
@end

