/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSTLayoutSpaceBundle, TSTCoordinateArray, TSTLayout, TSTMasterLayout;

@interface TSTLayoutSpace : NSObject {

	TSTLayoutSpaceBundle* mBundle;
	int mLayoutSpaceType;
	struct {
		BOOL coordinates;
		BOOL tableOffset;
	}  mInvalidFlags;
	SCD_Struct_TS175 mGridRange;
	BOOL mHeaderColumnsRepeat;
	BOOL mHeaderRowsRepeat;
	double mViewScale;
	CGAffineTransform mTransformToCanvas;
	CGAffineTransform mTransformFromCanvas;
	CGAffineTransform mTransformToDevice;
	CGAffineTransform mTransformFromDevice;
	BOOL mDrawBlackAndWhite;
	BOOL mDrawPreventAntialias;
	CGPoint mTableOffset;
	TSTCoordinateArray* mHeaderRowColumnCoordinates;
	TSTCoordinateArray* mBodyColumnCoordinates;
	TSTCoordinateArray* mHeaderColumnRowCoordinates;
	TSTCoordinateArray* mBodyRowCoordinates;
	CGRect mCachedFrame;
	CGRect mCachedAlignedFrame;
	CGRect mCachedStrokeFrame;
	CGRect mCachedAlignedStrokeFrame;
	BOOL mLayoutDirectionIsLeftToRight;
	opaque_pthread_rwlock_t mLock;

}

@property (nonatomic,readonly) TSTLayoutSpaceBundle * bundle; 
@property (nonatomic,readonly) int layoutSpaceType; 
@property (nonatomic,readonly) TSTLayout * layout; 
@property (nonatomic,readonly) TSTMasterLayout * masterLayout; 
@property (nonatomic,readonly) BOOL layoutDirectionIsLeftToRight; 
@property (nonatomic,readonly) BOOL isMain; 
@property (nonatomic,readonly) BOOL isFrozen; 
@property (nonatomic,readonly) BOOL isRepeat; 
@property (nonatomic,readonly) BOOL isColumns; 
@property (nonatomic,readonly) BOOL isRows; 
@property (nonatomic,readonly) BOOL isCorner; 
@property (assign,nonatomic) BOOL headerColumnsRepeat; 
@property (assign,nonatomic) BOOL headerRowsRepeat; 
@property (assign,nonatomic) double viewScale; 
@property (assign,nonatomic) CGAffineTransform transformToCanvas; 
@property (assign,nonatomic) CGAffineTransform transformFromCanvas; 
@property (assign,nonatomic) CGAffineTransform transformToDevice; 
@property (assign,nonatomic) CGAffineTransform transformFromDevice; 
@property (assign,nonatomic) BOOL drawBlackAndWhite; 
@property (assign,nonatomic) BOOL drawPreventAntialias; 
@property (assign,nonatomic) CGPoint tableOffset; 
-(double)viewScale;
-(void)setViewScale:(double)arg1 ;
-(TSTMasterLayout *)masterLayout;
-(CGAffineTransform)transformToCanvas;
-(BOOL)isColumns;
-(BOOL)isRows;
-(CGAffineTransform)transformToDevice;
-(CGAffineTransform)transformFromCanvas;
-(void)lockForRead;
-(void)setDrawPreventAntialias:(BOOL)arg1 ;
-(void)setDrawBlackAndWhite:(BOOL)arg1 ;
-(BOOL)layoutDirectionIsLeftToRight;
-(int)validate:(id)arg1 ;
-(BOOL)p_getLayoutDirectionLeftToRight;
-(void)lockForWrite;
-(void)validateCachedFrames;
-(int)validateCoordinateCache:(id)arg1 ;
-(int)validateTableOffset:(id)arg1 ;
-(CGPoint)tableOffset;
-(void)setTableOffset:(CGPoint)arg1 ;
-(BOOL)isMain;
-(BOOL)headerRowsRepeat;
-(int)layoutSpaceType;
-(BOOL)headerColumnsRepeat;
-(BOOL)drawPreventAntialias;
-(BOOL)isRepeat;
-(BOOL)isCorner;
-(id)initWithLayoutSpaceBundle:(id)arg1 type:(int)arg2 ;
-(void)invalidateCoordinates;
-(void)invalidateTableOffset;
-(void)setTransformToCanvas:(CGAffineTransform)arg1 ;
-(void)setHeaderColumnsRepeat:(BOOL)arg1 ;
-(void)setHeaderRowsRepeat:(BOOL)arg1 ;
-(void)setTransformFromCanvas:(CGAffineTransform)arg1 ;
-(void)setTransformToDevice:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transformFromDevice;
-(void)setTransformFromDevice:(CGAffineTransform)arg1 ;
-(BOOL)drawBlackAndWhite;
-(void)dealloc;
-(id)description;
-(TSTLayout *)layout;
-(void)unlock;
-(TSTLayoutSpaceBundle *)bundle;
-(BOOL)isFrozen;
@end

