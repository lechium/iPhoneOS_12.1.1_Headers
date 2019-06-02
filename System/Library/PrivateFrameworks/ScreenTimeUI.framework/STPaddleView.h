/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSArray, UIView, UILabel;

@interface STPaddleView : UIView {

	NSArray* _usageItems;
	UIView* _backgroundView;
	UILabel* _dayLabel;
	UILabel* _dateTimeLabel;
	UILabel* _usageLabel;

}

@property (nonatomic,copy) NSArray * usageItems;                     //@synthesize usageItems=_usageItems - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UILabel * dayLabel;                   //@synthesize dayLabel=_dayLabel - In the implementation block
@property (nonatomic,readonly) UILabel * dateTimeLabel;              //@synthesize dateTimeLabel=_dateTimeLabel - In the implementation block
@property (nonatomic,readonly) UILabel * usageLabel;                 //@synthesize usageLabel=_usageLabel - In the implementation block
-(UILabel *)dayLabel;
-(void)setDataPoint:(id)arg1 ;
-(NSArray *)usageItems;
-(void)setUsageItems:(NSArray *)arg1 ;
-(UILabel *)usageLabel;
-(UILabel *)dateTimeLabel;
-(id)init;
-(UIView *)backgroundView;
@end
