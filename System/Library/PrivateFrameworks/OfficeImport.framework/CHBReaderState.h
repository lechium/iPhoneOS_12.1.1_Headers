/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CHBState.h>

@protocol CHAutoStyling;
@class EBReaderSheetState, OADColorScheme;

@interface CHBReaderState : CHBState {

	EBReaderSheetState* mEBReaderSheetState;
	XlChartBinaryReader* mXlReader;
	id<CHAutoStyling> mAutoStyling;
	int mAxisGroup;
	XlChartPlot* mXlCurrentPlot;
	int mXlCurrentPlotIndex;

}

@property (nonatomic,readonly) OADColorScheme * colorScheme; 
-(id)resources;
-(OADColorScheme *)colorScheme;
-(id)workbook;
-(void)setChart:(id)arg1 ;
-(XlChartPlot*)xlCurrentPlot;
-(int)axisGroup;
-(XlChartBinaryReader*)xlReader;
-(id)autoStyling;
-(const XlChartSeriesFormat*)xlCurrentDefaultSeriesFormat;
-(int)xlCurrentPlotIndex;
-(id)ebReaderSheetState;
-(void)setAxisGroup:(int)arg1 ;
-(int)xlPlotCount;
-(void)setXlCurrentPlotIndex:(int)arg1 ;
-(void)setXlCurrentPlot:(XlChartPlot*)arg1 ;
-(id)initWithEBReaderSheetState:(id)arg1 ;
-(const XlChartSeriesFormat*)defaultFormatForXlSeries:(const XlChartDataSeries*)arg1 ;
-(void)readAndCacheXlChartDataSeries;
-(void)dealloc;
@end
