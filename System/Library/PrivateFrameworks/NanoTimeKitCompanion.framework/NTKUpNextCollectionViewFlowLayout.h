/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class CLKDevice, NSDictionary, NTKUpNextCollectionViewFlowLayoutAttributes, NSSet, NSIndexPath;

@interface NTKUpNextCollectionViewFlowLayout : UICollectionViewFlowLayout {

	CLKDevice* _device;
	NSDictionary* _layoutInfo;
	NSDictionary* _headerLayoutInfo;
	NTKUpNextCollectionViewFlowLayoutAttributes* _decorationLayoutInfo;
	NSSet* _previousSectionsWithHeaders;
	NSSet* _sectionsWithHeaders;
	BOOL _needsHeaderUpdate;
	BOOL _needsInsetsUpdate;
	BOOL _useFixedLowTransitionLayout;
	BOOL _snappingEnabled;
	BOOL _showingAllAttributes;
	double _topItemsAlpha;
	double _headerAlpha;
	double _topItemsShift;
	double _statusBarDecorationHeight;
	NSIndexPath* _topElementIndexPath;
	NSIndexPath* _bottomElementIndexPath;
	double _topOffsetForSnapping;
	double _topOffsetForScrolling;
	double _lowTransitionScale;
	double _lowTransitionShift;
	double _highTransitionScale;
	double _highTransitionShift;
	double _maximumDarkeningAmount;
	double _highTransitionBottomOffset;
	NSIndexPath* _indexPathToSnapTo;
	double _snappingOffset;
	NSSet* _dwellIndexPathes;

}

@property (assign,nonatomic) double topItemsAlpha;                                                 //@synthesize topItemsAlpha=_topItemsAlpha - In the implementation block
@property (assign,nonatomic) double headerAlpha;                                                   //@synthesize headerAlpha=_headerAlpha - In the implementation block
@property (assign,nonatomic) double topItemsShift;                                                 //@synthesize topItemsShift=_topItemsShift - In the implementation block
@property (assign,nonatomic) double statusBarDecorationHeight;                                     //@synthesize statusBarDecorationHeight=_statusBarDecorationHeight - In the implementation block
@property (nonatomic,retain) NSIndexPath * topElementIndexPath;                                    //@synthesize topElementIndexPath=_topElementIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * bottomElementIndexPath;                                 //@synthesize bottomElementIndexPath=_bottomElementIndexPath - In the implementation block
@property (assign,nonatomic) double topOffsetForSnapping;                                          //@synthesize topOffsetForSnapping=_topOffsetForSnapping - In the implementation block
@property (assign,nonatomic) double topOffsetForScrolling;                                         //@synthesize topOffsetForScrolling=_topOffsetForScrolling - In the implementation block
@property (assign,nonatomic) double lowTransitionScale;                                            //@synthesize lowTransitionScale=_lowTransitionScale - In the implementation block
@property (assign,nonatomic) double lowTransitionShift;                                            //@synthesize lowTransitionShift=_lowTransitionShift - In the implementation block
@property (assign,nonatomic) double highTransitionScale;                                           //@synthesize highTransitionScale=_highTransitionScale - In the implementation block
@property (assign,nonatomic) double highTransitionShift;                                           //@synthesize highTransitionShift=_highTransitionShift - In the implementation block
@property (assign,nonatomic) BOOL useFixedLowTransitionLayout;                                     //@synthesize useFixedLowTransitionLayout=_useFixedLowTransitionLayout - In the implementation block
@property (assign,nonatomic) double maximumDarkeningAmount;                                        //@synthesize maximumDarkeningAmount=_maximumDarkeningAmount - In the implementation block
@property (assign,nonatomic) double highTransitionBottomOffset;                                    //@synthesize highTransitionBottomOffset=_highTransitionBottomOffset - In the implementation block
@property (assign,getter=isSnappingEnabled,nonatomic) BOOL snappingEnabled;                        //@synthesize snappingEnabled=_snappingEnabled - In the implementation block
@property (assign,getter=isShowingAllAttributes,nonatomic) BOOL showingAllAttributes;              //@synthesize showingAllAttributes=_showingAllAttributes - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPathToSnapTo;                                      //@synthesize indexPathToSnapTo=_indexPathToSnapTo - In the implementation block
@property (assign,nonatomic) double snappingOffset;                                                //@synthesize snappingOffset=_snappingOffset - In the implementation block
@property (nonatomic,readonly) NSSet * dwellIndexPathes;                                           //@synthesize dwellIndexPathes=_dwellIndexPathes - In the implementation block
+(Class)layoutAttributesClass;
-(void)setShowingAllAttributes:(BOOL)arg1 ;
-(void)setTopElementIndexPath:(NSIndexPath *)arg1 ;
-(void)setBottomElementIndexPath:(NSIndexPath *)arg1 ;
-(void)setTopOffsetForSnapping:(double)arg1 ;
-(void)setTopOffsetForScrolling:(double)arg1 ;
-(void)setStatusBarDecorationHeight:(double)arg1 ;
-(void)setLowTransitionScale:(double)arg1 ;
-(void)setHighTransitionScale:(double)arg1 ;
-(void)setHighTransitionShift:(double)arg1 ;
-(void)setLowTransitionShift:(double)arg1 ;
-(void)setIndexPathToSnapTo:(NSIndexPath *)arg1 ;
-(void)setSnappingOffset:(double)arg1 ;
-(id)flowLayoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)setSnappingEnabled:(BOOL)arg1 ;
-(void)setUseFixedLowTransitionLayout:(BOOL)arg1 ;
-(void)setTopItemsAlpha:(double)arg1 ;
-(void)setHeaderAlpha:(double)arg1 ;
-(void)setTopItemsShift:(double)arg1 ;
-(NSIndexPath *)topElementIndexPath;
-(void)setMaximumDarkeningAmount:(double)arg1 ;
-(BOOL)_hasHeaderForSection:(long long)arg1 ;
-(void)_updateContentInsetsIfNeeded;
-(void)_updateSectionHeaderListIfNeeded;
-(void)_updateVisibilityForLayoutAttributes:(id)arg1 inBounds:(CGRect)arg2 ;
-(double)topItemsAlpha;
-(double)headerAlpha;
-(double)topItemsShift;
-(double)statusBarDecorationHeight;
-(NSIndexPath *)bottomElementIndexPath;
-(double)topOffsetForSnapping;
-(double)topOffsetForScrolling;
-(double)lowTransitionScale;
-(double)lowTransitionShift;
-(double)highTransitionScale;
-(double)highTransitionShift;
-(BOOL)useFixedLowTransitionLayout;
-(double)maximumDarkeningAmount;
-(double)highTransitionBottomOffset;
-(void)setHighTransitionBottomOffset:(double)arg1 ;
-(BOOL)isSnappingEnabled;
-(BOOL)isShowingAllAttributes;
-(NSIndexPath *)indexPathToSnapTo;
-(double)snappingOffset;
-(NSSet *)dwellIndexPathes;
-(id)init;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1 ;
@end

