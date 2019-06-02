/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKitCore/UIView.h>

@protocol ChartIntervalButtonRowDelegate;
@class NSArray, ChartIntervalButton;

@interface ChartIntervalButtonRow : UIView {

	id<ChartIntervalButtonRowDelegate> _delegate;
	NSArray* _intervalButtons;
	ChartIntervalButton* _selectedButton;
	long long _maxChartInterval;

}

@property (assign,nonatomic,__weak) id<ChartIntervalButtonRowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * intervalButtons;                                       //@synthesize intervalButtons=_intervalButtons - In the implementation block
@property (assign,nonatomic,__weak) ChartIntervalButton * selectedButton;                     //@synthesize selectedButton=_selectedButton - In the implementation block
@property (assign,nonatomic) long long maxChartInterval;                                      //@synthesize maxChartInterval=_maxChartInterval - In the implementation block
-(void)sizeToBoldLabels;
-(void)intervalButtonsTapped:(id)arg1 ;
-(long long)maxChartInterval;
-(long long)intervalForTouchLocation:(CGPoint)arg1 ;
-(NSArray *)intervalButtons;
-(void)selectChartIntervalButtonForInterval:(long long)arg1 ;
-(void)setMaxChartInterval:(long long)arg1 ;
-(id)initWithMaxChartInterval:(long long)arg1 chartIntervalButtonRowDelegate:(id)arg2 ;
-(void)updateMaxChartInterval:(long long)arg1 ;
-(void)setIntervalButtons:(NSArray *)arg1 ;
-(ChartIntervalButton *)selectedButton;
-(void)setSelectedButton:(ChartIntervalButton *)arg1 ;
-(void)setDelegate:(id<ChartIntervalButtonRowDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<ChartIntervalButtonRowDelegate>)delegate;
@end

