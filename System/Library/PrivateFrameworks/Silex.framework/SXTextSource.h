/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXTextSourceDataSource, SXSmartFieldFactory, SXTextStyleFontDescribing;
#import <Silex/Silex-Structs.h>
@class NSString, NSMutableIndexSet, SXFontAttributesConstructor, NSLocale;

@interface SXTextSource : NSObject {

	id<SXTextSourceDataSource> _dataSource;
	NSString* _string;
	id<SXSmartFieldFactory> _smartFieldFactory;
	NSMutableIndexSet* _deletedRangeOffsets;
	NSMutableIndexSet* _insertedRangeOffsets;
	NSMutableIndexSet* _rangesExcludedOfParagraphSpacing;
	SXFontAttributesConstructor* _fontAttributeConstructor;
	id<SXTextStyleFontDescribing> _defaultFontDescribing;

}

@property (nonatomic,readonly) id<SXSmartFieldFactory> smartFieldFactory;                           //@synthesize smartFieldFactory=_smartFieldFactory - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * deletedRangeOffsets;                               //@synthesize deletedRangeOffsets=_deletedRangeOffsets - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * insertedRangeOffsets;                              //@synthesize insertedRangeOffsets=_insertedRangeOffsets - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * rangesExcludedOfParagraphSpacing;                  //@synthesize rangesExcludedOfParagraphSpacing=_rangesExcludedOfParagraphSpacing - In the implementation block
@property (nonatomic,readonly) SXFontAttributesConstructor * fontAttributeConstructor;              //@synthesize fontAttributeConstructor=_fontAttributeConstructor - In the implementation block
@property (nonatomic,readonly) id<SXTextStyleFontDescribing> defaultFontDescribing;                 //@synthesize defaultFontDescribing=_defaultFontDescribing - In the implementation block
@property (nonatomic,__weak,readonly) id<SXTextSourceDataSource> dataSource;                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSString * string;                                                   //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSLocale * locale; 
-(id<SXSmartFieldFactory>)smartFieldFactory;
-(id)initWithString:(id)arg1 smartFieldFactory:(id)arg2 dataSource:(id)arg3 ;
-(void)applyStylingOnTextTangierStorage:(id)arg1 ;
-(void)applyAdditionsOnTextTangierStorage:(id)arg1 ;
-(NSRange)rangeForRange:(NSRange)arg1 ;
-(id)cleanString:(id)arg1 ;
-(NSRange)rangeInBounds:(NSRange)arg1 maxLength:(unsigned long long)arg2 ;
-(NSMutableIndexSet *)deletedRangeOffsets;
-(NSMutableIndexSet *)insertedRangeOffsets;
-(NSMutableIndexSet *)rangesExcludedOfParagraphSpacing;
-(id)attributesForTextStyle:(id)arg1 baseTextStyle:(id)arg2 onParagraphStyle:(id)arg3 forRange:(NSRange)arg4 resultingDropCapStyle:(id*)arg5 textResizer:(id)arg6 ;
-(void)applyListStylingOnTextTangierStorage:(id)arg1 usingAttributesMap:(id)arg2 ;
-(id)characterStyleFromAttributes:(id)arg1 context:(id)arg2 ;
-(id)fontFaceForTextDescribing:(id)arg1 inheritingFromTextStyle:(id)arg2 ;
-(id)populateArray:(id)arg1 withValue:(id)arg2 forSize:(unsigned long long)arg3 ;
-(int)listLabelTypeForListType:(unsigned long long)arg1 ;
-(int)listNumberTypeForListType:(unsigned long long)arg1 ;
-(id<SXTextStyleFontDescribing>)defaultFontDescribing;
-(SXFontAttributesConstructor *)fontAttributeConstructor;
-(id)randomColorWithAlpha:(double)arg1 ;
-(void)setDeletedRangeOffsets:(NSMutableIndexSet *)arg1 ;
-(void)setInsertedRangeOffsets:(NSMutableIndexSet *)arg1 ;
-(void)setRangesExcludedOfParagraphSpacing:(NSMutableIndexSet *)arg1 ;
-(NSString *)string;
-(id)description;
-(id<SXTextSourceDataSource>)dataSource;
-(NSLocale *)locale;
@end
