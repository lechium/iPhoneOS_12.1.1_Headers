/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexText/SilexText-Structs.h>
#import <SilexText/STContainerLayout.h>
#import <libobjc.A.dylib/TSWPLayoutParent.h>
#import <libobjc.A.dylib/TSWPColumnMetrics.h>

@protocol STStandaloneTextLayoutDelegate;
@class TSWPPadding;

@interface STStandaloneTextLayout : STContainerLayout <TSWPLayoutParent, TSWPColumnMetrics> {

	id<STStandaloneTextLayoutDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<STStandaloneTextLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize adjustedInsets; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) BOOL alwaysStartsNewTarget; 
@property (nonatomic,readonly) BOOL shrinkTextToFit; 
@property (nonatomic,readonly) BOOL columnsAreLeftToRight; 
@property (nonatomic,readonly) double textScaleFactor; 
-(unsigned long long)columnCount;
-(id)childInfosForLayout;
-(Class)repClassOverride;
-(id)computeLayoutGeometry;
-(unsigned)autosizeFlagsForTextLayout:(id)arg1 ;
-(unsigned)verticalAlignmentForTextLayout:(id)arg1 ;
-(void)invalidateForAutosizingTextLayout:(id)arg1 ;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(id)dependentsOfTextLayout:(id)arg1 ;
-(Class)repClassForTextLayout:(id)arg1 ;
-(id)styleProviderForLayout:(id)arg1 ;
-(id)p_wpLayoutParent;
-(CGSize)adjustedInsets;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double*)arg3 outGap:(double*)arg4 ;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(BOOL)columnsAreLeftToRight;
-(void)setDelegate:(id<STStandaloneTextLayoutDelegate>)arg1 ;
-(id<STStandaloneTextLayoutDelegate>)delegate;
-(TSWPPadding *)layoutMargins;
@end
