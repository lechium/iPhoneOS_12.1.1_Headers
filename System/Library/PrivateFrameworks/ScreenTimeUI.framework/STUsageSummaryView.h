/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class STUsageReport, STScreenTimeSummaryView, STHorizontallySegmentedView, STUsageGraphView;

@interface STUsageSummaryView : UIView {

	STUsageReport* _usageReport;
	STScreenTimeSummaryView* _summaryView;
	STHorizontallySegmentedView* _topItemsView;
	STUsageGraphView* _graphView;

}

@property (readonly) STUsageGraphView * graphView;                            //@synthesize graphView=_graphView - In the implementation block
@property (nonatomic,retain) STUsageReport * usageReport;                     //@synthesize usageReport=_usageReport - In the implementation block
@property (readonly) STScreenTimeSummaryView * summaryView;                   //@synthesize summaryView=_summaryView - In the implementation block
@property (readonly) STHorizontallySegmentedView * topItemsView;              //@synthesize topItemsView=_topItemsView - In the implementation block
-(STScreenTimeSummaryView *)summaryView;
-(STUsageGraphView *)graphView;
-(id)initWithDailyAverageLabel:(BOOL)arg1 ;
-(void)setUsageReport:(STUsageReport *)arg1 ;
-(STUsageReport *)usageReport;
-(STHorizontallySegmentedView *)topItemsView;
@end

