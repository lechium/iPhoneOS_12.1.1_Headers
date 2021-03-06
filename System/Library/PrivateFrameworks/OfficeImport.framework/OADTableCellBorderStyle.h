/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADStroke;

@interface OADTableCellBorderStyle : NSObject {

	OADStroke* mLeftStroke;
	OADStroke* mRightStroke;
	OADStroke* mTopStroke;
	OADStroke* mBottomStroke;
	OADStroke* mHorzInsideStroke;
	OADStroke* mVertInsideStroke;
	OADStroke* mTopLeftToBottomRightStroke;
	OADStroke* mBottomLeftToTopRightStroke;

}
+(id)defaultStyle;
+(id)defaultAxisParallelStroke;
+(id)defaultObliqueStroke;
-(id)shallowCopy;
-(id)topStroke;
-(id)horzInsideStroke;
-(id)bottomStroke;
-(id)leftStroke;
-(id)vertInsideStroke;
-(id)rightStroke;
-(void)setLeftStroke:(id)arg1 ;
-(void)setRightStroke:(id)arg1 ;
-(void)setTopStroke:(id)arg1 ;
-(void)setBottomStroke:(id)arg1 ;
-(void)setHorzInsideStroke:(id)arg1 ;
-(void)setVertInsideStroke:(id)arg1 ;
-(void)setTopLeftToBottomRightStroke:(id)arg1 ;
-(void)setBottomLeftToTopRightStroke:(id)arg1 ;
-(id)topLeftToBottomRightStroke;
-(id)bottomLeftToTopRightStroke;
-(id)stroke:(int)arg1 ;
-(void)setStrokeOfType:(int)arg1 toValue:(id)arg2 ;
-(void)applyOverridesFrom:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end

