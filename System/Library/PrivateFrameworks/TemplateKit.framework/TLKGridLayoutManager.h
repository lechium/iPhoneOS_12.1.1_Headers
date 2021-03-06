/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <libobjc.A.dylib/NUIGridArrangementDataSource.h>
#import <libobjc.A.dylib/NUIArrangementContainer.h>

@class NSDictionary, NSArray, NSMapTable, NUIGridArrangement, NSString;

@interface TLKGridLayoutManager : NSObject <NUIGridArrangementDataSource, NUIArrangementContainer> {

	BOOL _tableContainsRowHeaders;
	NSDictionary* _itemsForIndex;
	NSArray* _itemsForRows;
	NSMapTable* _itemToRowMapping;
	NUIGridArrangement* _gridArrangement;
	long long _indexForFirstTrailingColumn;
	long long _totalEqualColumns;
	NSArray* _spacings;
	double _widthOfEqualFillColumns;
	NSArray* _alignments;
	NSArray* _verticalRowAlignments;
	CGSize _cachedFittingSize;
	CGSize _cachedGridSize;

}

@property (retain) NSDictionary * itemsForIndex;                       //@synthesize itemsForIndex=_itemsForIndex - In the implementation block
@property (retain) NSArray * itemsForRows;                             //@synthesize itemsForRows=_itemsForRows - In the implementation block
@property (retain) NSMapTable * itemToRowMapping;                      //@synthesize itemToRowMapping=_itemToRowMapping - In the implementation block
@property (retain) NUIGridArrangement * gridArrangement;               //@synthesize gridArrangement=_gridArrangement - In the implementation block
@property (assign) CGSize cachedFittingSize;                           //@synthesize cachedFittingSize=_cachedFittingSize - In the implementation block
@property (assign) CGSize cachedGridSize;                              //@synthesize cachedGridSize=_cachedGridSize - In the implementation block
@property (assign) long long indexForFirstTrailingColumn;              //@synthesize indexForFirstTrailingColumn=_indexForFirstTrailingColumn - In the implementation block
@property (assign) long long totalEqualColumns;                        //@synthesize totalEqualColumns=_totalEqualColumns - In the implementation block
@property (retain) NSArray * spacings;                                 //@synthesize spacings=_spacings - In the implementation block
@property (assign) double widthOfEqualFillColumns;                     //@synthesize widthOfEqualFillColumns=_widthOfEqualFillColumns - In the implementation block
@property (retain) NSArray * alignments;                               //@synthesize alignments=_alignments - In the implementation block
@property (retain) NSArray * verticalRowAlignments;                    //@synthesize verticalRowAlignments=_verticalRowAlignments - In the implementation block
@property (assign) BOOL tableContainsRowHeaders;                       //@synthesize tableContainsRowHeaders=_tableContainsRowHeaders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)computeTruncationForAlignments:(id)arg1 indexForFirstTrailingColumn:(unsigned long long)arg2 totalEqualColumns:(unsigned long long)arg3 ;
+(id)verticalAlignmentsForItems:(id)arg1 ;
+(id)arrayOfItemsForSection:(id)arg1 ;
+(double)leadingSectionSpacingForView:(id)arg1 view2:(id)arg2 index:(unsigned long long)arg3 alignmentSchema:(id)arg4 allEqual:(BOOL)arg5 ;
+(id)gridManagerWithAlignments:(id)arg1 rows:(id)arg2 ;
+(id)font;
-(CGSize)sizeForFittingSize:(CGSize)arg1 forRow:(id)arg2 ;
-(void)placeViewsForSize:(CGSize)arg1 forRow:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)tableContainsRowHeaders;
-(NSArray *)alignments;
-(id)initWithWithAlignments:(id)arg1 rows:(id)arg2 ;
-(void)setItemToRowMapping:(NSMapTable *)arg1 ;
-(void)setIndexForFirstTrailingColumn:(long long)arg1 ;
-(void)setTotalEqualColumns:(long long)arg1 ;
-(long long)indexForFirstTrailingColumn;
-(id)addItemsToDictionary:(id)arg1 forSection:(id)arg2 row:(unsigned long long)arg3 truncationPriorities:(id)arg4 ;
-(NSMapTable *)itemToRowMapping;
-(void)setGridArrangement:(NUIGridArrangement *)arg1 ;
-(void)setItemsForIndex:(NSDictionary *)arg1 ;
-(void)setItemsForRows:(NSArray *)arg1 ;
-(void)setTableContainsRowHeaders:(BOOL)arg1 ;
-(id)spacingsForAlignments:(id)arg1 firstValidDataRow:(id)arg2 ;
-(void)setSpacings:(NSArray *)arg1 ;
-(void)setAlignments:(NSArray *)arg1 ;
-(NSArray *)itemsForRows;
-(void)setVerticalRowAlignments:(NSArray *)arg1 ;
-(CGSize)cachedFittingSize;
-(void)setCachedFittingSize:(CGSize)arg1 ;
-(NUIGridArrangement *)gridArrangement;
-(void)setCachedGridSize:(CGSize)arg1 ;
-(long long)totalEqualColumns;
-(void)setWidthOfEqualFillColumns:(double)arg1 ;
-(double)widthOfEqualFillColumns;
-(CGSize)cachedGridSize;
-(NSDictionary *)itemsForIndex;
-(NSArray *)verticalRowAlignments;
-(BOOL)hasManyTrailingColumns;
-(BOOL)allEqualColumns;
-(double)trailingSectionSpacingBasedOnTotalViewsInSection:(long long)arg1 ;
-(long long)numberOfItemsInGridArrangement:(id)arg1 ;
-(id)gridArrangement:(id)arg1 itemAtIndex:(long long)arg2 columns:(NSRange*)arg3 rows:(NSRange*)arg4 horizontalAlignment:(long long*)arg5 verticalAlignment:(long long*)arg6 ;
-(double)gridArrangement:(id)arg1 widthOfColumnAtIndex:(long long)arg2 spacingAfter:(double*)arg3 ;
-(CGSize)contentLayoutSizeFittingSize:(CGSize)arg1 forArrangedSubview:(id)arg2 ;
-(CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(CGRect)arg2 ;
-(BOOL)supportsAsynchronousMeasurement;
-(NSArray *)spacings;
-(NSString *)description;
-(long long)numberOfColumns;
@end

