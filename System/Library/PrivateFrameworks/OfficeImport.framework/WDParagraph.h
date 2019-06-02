/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDBlock.h>

@class WDParagraphProperties, NSMutableArray;

@interface WDParagraph : WDBlock {

	WDParagraphProperties* mProperties;
	NSMutableArray* mRuns;

}
-(id)addAnnotation:(int)arg1 ;
-(BOOL)isTextFrame;
-(unsigned long long)runCount;
-(id)runAt:(unsigned long long)arg1 ;
-(int)blockType;
-(BOOL)isContinuationOf:(id)arg1 ;
-(id)runs;
-(id)addBookmark:(id)arg1 type:(int)arg2 ;
-(void)removeLastCharacter:(unsigned short)arg1 ;
-(id)addCharacterRun;
-(void)addRun:(id)arg1 ;
-(id)addSpecialCharacter;
-(id)addSymbol;
-(id)addFieldMarker;
-(id)addAnnotation:(int)arg1 atIndex:(unsigned long long)arg2 ;
-(id)addHyperlinkFieldMarker;
-(id)initWithText:(id)arg1 string:(id)arg2 ;
-(void)insertRun:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)clearRuns;
-(id)addDateTime:(id)arg1 ;
-(float)maxReflectionDistance;
-(void)clearProperties;
-(id)runIterator;
-(id)newRunIterator;
-(void)removeRun:(id)arg1 ;
-(id)addFootnote;
-(id)addEndnote;
-(id)addBookmark;
-(id)addHyperlinkFieldMarker:(int)arg1 ;
-(id)addFieldMarker:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithText:(id)arg1 ;
-(BOOL)isEmpty;
-(id)properties;
@end

