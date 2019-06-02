/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDStyledInfo.h>
#import <TSReading/TSSThemedObject.h>
#import <TSReading/TSDMixing.h>
#import <TSReading/TSDReducableInfo.h>
#import <TSReading/TSKSearchable.h>

@class TSDPathSource, TSDShapeStyle, TSDLineEnd, TSDFill, NSString;

@interface TSDShapeInfo : TSDStyledInfo <TSSThemedObject, TSDMixing, TSDReducableInfo, TSKSearchable> {

	TSDPathSource* mPathSource;
	TSDShapeStyle* mStyle;
	TSDLineEnd* mHeadLineEnd;
	TSDLineEnd* mTailLineEnd;

}

@property (nonatomic,retain) TSDPathSource * pathSource; 
@property (nonatomic,readonly) TSDShapeStyle * shapeStyle; 
@property (nonatomic,copy) TSDFill * fill; 
@property (nonatomic,retain) TSDLineEnd * headLineEnd; 
@property (nonatomic,retain) TSDLineEnd * tailLineEnd; 
@property (nonatomic,readonly) BOOL supportsTextInset; 
@property (nonatomic,readonly) BOOL supportsShrinkTextToFit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithContext:(id)arg1 ;
-(void)setValuesForProperties:(id)arg1 ;
-(Class)layoutClass;
-(Class)repClass;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(id)animationFilters;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(void)setPathSource:(TSDPathSource *)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 ;
-(TSDShapeStyle *)shapeStyle;
-(TSDPathSource *)pathSource;
-(TSDLineEnd *)headLineEnd;
-(TSDLineEnd *)tailLineEnd;
-(id)imageDatasForReducingFileSizeWithAssociatedHints;
-(CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2 ;
-(void)setHeadLineEnd:(TSDLineEnd *)arg1 ;
-(void)setTailLineEnd:(TSDLineEnd *)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 ;
-(Class)styleClass;
-(BOOL)supportsTextInset;
-(BOOL)supportsShrinkTextToFit;
-(void)setFill:(TSDFill *)arg1 ;
-(int)elementKind;
-(void)dealloc;
-(void)setStyle:(id)arg1 ;
-(id)style;
-(TSDFill *)fill;
-(void)setGeometry:(id)arg1 ;
-(id)objectForProperty:(int)arg1 ;
@end

