/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIStackView, STUsageReport, NSMutableArray, NSMutableDictionary;

@interface STWeeklyReportAppUsageView : UIView {

	UILabel* _titleLabel;
	UIStackView* _appImageStackView;
	STUsageReport* _report;
	NSMutableArray* _topEightImageItems;
	NSMutableDictionary* _dimensionByUsageItem;

}

@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIStackView * appImageStackView;                         //@synthesize appImageStackView=_appImageStackView - In the implementation block
@property (nonatomic,retain) STUsageReport * report;                                  //@synthesize report=_report - In the implementation block
@property (nonatomic,retain) NSMutableArray * topEightImageItems;                     //@synthesize topEightImageItems=_topEightImageItems - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dimensionByUsageItem;              //@synthesize dimensionByUsageItem=_dimensionByUsageItem - In the implementation block
-(void)setReport:(STUsageReport *)arg1 ;
-(STUsageReport *)report;
-(void)_didFetchIcon:(id)arg1 ;
-(void)_registerForIconCacheNotifications;
-(id)initWithUsageReport:(id)arg1 ;
-(id)_appImageSubviewWithImage:(id)arg1 dimension:(double)arg2 ;
-(NSMutableArray *)topEightImageItems;
-(UIStackView *)appImageStackView;
-(NSMutableDictionary *)dimensionByUsageItem;
-(void)setAppImageStackView:(UIStackView *)arg1 ;
-(void)setTopEightImageItems:(NSMutableArray *)arg1 ;
-(void)setDimensionByUsageItem:(NSMutableDictionary *)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

