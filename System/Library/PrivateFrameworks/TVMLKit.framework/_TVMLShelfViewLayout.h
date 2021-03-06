/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVShelfViewLayout.h>

@interface _TVMLShelfViewLayout : _TVShelfViewLayout {

	TVCellMetrics _cellMetrics;

}

@property (assign,nonatomic) TVCellMetrics cellMetrics;              //@synthesize cellMetrics=_cellMetrics - In the implementation block
-(id)contentRowMetrics;
-(TVCellMetrics)cellMetrics;
-(void)setCellMetrics:(TVCellMetrics)arg1 ;
-(double)expectedLineSpacing;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(/*^block*/id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3 ;
@end

