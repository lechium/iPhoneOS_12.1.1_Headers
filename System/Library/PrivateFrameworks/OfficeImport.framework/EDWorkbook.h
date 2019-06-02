/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OCDDocument.h>

@class EDResources, NSMutableArray, EDProcessors, ECMappingContext, EDWarnings, EDReference, NSDate, NSString, ESDContainer;

@interface EDWorkbook : OCDDocument {

	EDResources* mResources;
	NSMutableArray* mOtherResources;
	EDProcessors* mProcessors;
	ECMappingContext* mMappingContext;
	EDWarnings* mWarnings;
	NSMutableArray* mSheets;
	EDReference* mVisibleRange;
	unsigned long long mActiveSheetIndex;
	NSDate* mDateBaseDate;
	int mDateBase;
	NSString* mFileName;
	NSString* mTemporaryDirectory;
	NSMutableArray* mBulletBlips;
	ESDContainer* mEscherDrawingGroup;

}
+(id)impliedColorMap;
-(id)resources;
-(void)setResources:(id)arg1 ;
-(id)fileName;
-(id)visibleRange;
-(void)setVisibleRange:(id)arg1 ;
-(id)warnings;
-(id)sheetAtIndex:(unsigned long long)arg1 ;
-(void)removeWorksheetAtIndex:(unsigned)arg1 ;
-(unsigned long long)sheetCount;
-(id)sheetAtIndex:(unsigned long long)arg1 loadIfNeeded:(BOOL)arg2 ;
-(id)workbookName;
-(id)processors;
-(id)initWithStringOptimization:(BOOL)arg1 ;
-(void)addSheet:(id)arg1 ;
-(void)applyProcessors;
-(void)setTemporaryDirectory:(id)arg1 ;
-(id)initWithFileName:(id)arg1 andStringOptimization:(BOOL)arg2 ;
-(void)setDateBase:(int)arg1 ;
-(void)setActiveSheetIndex:(unsigned long long)arg1 ;
-(id)mappingContext;
-(id)dateBaseDate;
-(int)dateBase;
-(unsigned long long)indexOfSheet:(id)arg1 ;
-(void)reduceMemoryIfPossible;
-(unsigned)legacyDateBase;
-(void)removeSheetAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfSheetWithName:(id)arg1 ;
-(id)activeSheet;
-(void)setActiveSheet:(id)arg1 ;
-(void)setMappingContext:(id)arg1 ;
-(id)bulletBlips;
-(id)escherDrawingGroup;
-(void)setEscherDrawingGroup:(id)arg1 ;
-(unsigned long long)activeSheetIndex;
-(void)addOtherResources:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)temporaryDirectory;
@end

