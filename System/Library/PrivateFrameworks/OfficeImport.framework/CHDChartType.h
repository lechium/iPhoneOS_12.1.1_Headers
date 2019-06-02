/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CHDChart, EDCollection, CHDSeriesCollection, CHDDataLabel;

@interface CHDChartType : NSObject {

	CHDChart* mChart;
	EDCollection* mAxisIds;
	CHDSeriesCollection* mSeries;
	CHDDataLabel* mDefaultDataLabel;
	BOOL mVaryColors;

}
+(id)chartTypeWithChart:(id)arg1 ;
+(BOOL)is3DType;
-(id)contentFormat;
-(id)axes;
-(id)seriesCollection;
-(id)defaultDataLabel;
-(id)chart;
-(id)initWithChart:(id)arg1 ;
-(void)setVaryColors:(BOOL)arg1 ;
-(id)axisIds;
-(void)setDefaultDataLabel:(id)arg1 ;
-(int)defaultLabelPosition;
-(BOOL)isPlotedOnSecondaryAxis;
-(void)switchAxes:(id)arg1 ;
-(unsigned long long)seriesCount;
-(unsigned long long)categoryCount;
-(void)setSeriesCollection:(id)arg1 ;
-(BOOL)isVaryColors;
-(id)defaultTitleWithResources:(id)arg1 ;
-(id)axisForClass:(Class)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)isHorizontal;
@end

