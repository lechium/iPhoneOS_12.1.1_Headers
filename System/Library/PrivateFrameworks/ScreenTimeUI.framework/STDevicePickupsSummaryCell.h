/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/STTableCell.h>

@class UILabel, STUsageGraphView, STHorizontallySegmentedView, NSLayoutConstraint;

@interface STDevicePickupsSummaryCell : STTableCell {

	UILabel* _averagePickupsLabel;
	STUsageGraphView* _graphView;
	STHorizontallySegmentedView* _pickupMetricsView;
	UILabel* _firstUsedAfterPickupLabel;
	NSLayoutConstraint* _bottomConstraint;

}

@property (nonatomic,readonly) UILabel * averagePickupsLabel;                                //@synthesize averagePickupsLabel=_averagePickupsLabel - In the implementation block
@property (nonatomic,readonly) STUsageGraphView * graphView;                                 //@synthesize graphView=_graphView - In the implementation block
@property (nonatomic,readonly) STHorizontallySegmentedView * pickupMetricsView;              //@synthesize pickupMetricsView=_pickupMetricsView - In the implementation block
@property (nonatomic,readonly) UILabel * firstUsedAfterPickupLabel;                          //@synthesize firstUsedAfterPickupLabel=_firstUsedAfterPickupLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;                          //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(STUsageGraphView *)graphView;
-(void)_numberOfLinesDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(UILabel *)averagePickupsLabel;
-(STHorizontallySegmentedView *)pickupMetricsView;
-(UILabel *)firstUsedAfterPickupLabel;
-(void)dealloc;
-(NSLayoutConstraint *)bottomConstraint;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setValue:(id)arg1 ;
@end

