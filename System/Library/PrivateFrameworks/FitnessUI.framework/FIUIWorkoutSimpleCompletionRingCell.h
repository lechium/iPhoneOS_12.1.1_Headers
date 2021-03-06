/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class HKRingsView, UIImageView, UIView, UILabel;

@interface FIUIWorkoutSimpleCompletionRingCell : UITableViewCell {

	HKRingsView* _ringsView;
	UIImageView* _ringImageView;
	UIImageView* _iconImageView;
	UIView* _lineView;
	UILabel* _typeLabel;

}

@property (nonatomic,retain) HKRingsView * ringsView;                  //@synthesize ringsView=_ringsView - In the implementation block
@property (nonatomic,retain) UIImageView * ringImageView;              //@synthesize ringImageView=_ringImageView - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UIView * lineView;                        //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) UILabel * typeLabel;                      //@synthesize typeLabel=_typeLabel - In the implementation block
+(double)preferredHeightForWorkout:(id)arg1 fittingWidth:(double)arg2 ;
-(UIImageView *)ringImageView;
-(HKRingsView *)ringsView;
-(void)configureWithWorkout:(id)arg1 ;
-(void)setRingsView:(HKRingsView *)arg1 ;
-(void)setRingImageView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setTypeLabel:(UILabel *)arg1 ;
-(UILabel *)typeLabel;
-(UIView *)lineView;
-(void)setLineView:(UIView *)arg1 ;
@end

