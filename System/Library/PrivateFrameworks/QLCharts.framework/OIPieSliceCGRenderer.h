/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/QLCharts.framework/QLCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QLCharts/QLCharts-Structs.h>
#import <libobjc.A.dylib/OIPieSliceRenderer.h>

@interface OIPieSliceCGRenderer : NSObject <OIPieSliceRenderer> {

	OIChartRef _chart;

}

@property (assign) OIChartRef chart;              //@synthesize chart=_chart - In the implementation block
-(void)setChart:(OIChartRef)arg1 ;
-(OIChartRef)chart;
-(id)initWithChart:(OIChartRef)arg1 ;
-(void)renderPieSliceFromSeries:(OISeriesRef)arg1 radius:(double)arg2 angle:(double)arg3 newAngle:(double)arg4 xOffset:(double)arg5 yOffset:(double)arg6 thickness:(double)arg7 ;
-(void)dealloc;
@end

