/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class BPSRemoveMigrationWatchView, BPSCheckMarkView, UILabel;

@interface BPSMultipleWatchMigrationViewCell : UITableViewCell {

	BPSRemoveMigrationWatchView* _watchView;
	BPSCheckMarkView* _checkmarkView;
	UILabel* _deviceDetailLabel;

}

@property (nonatomic,retain) BPSRemoveMigrationWatchView * watchView;              //@synthesize watchView=_watchView - In the implementation block
@property (nonatomic,retain) BPSCheckMarkView * checkmarkView;                     //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (nonatomic,retain) UILabel * deviceDetailLabel;                          //@synthesize deviceDetailLabel=_deviceDetailLabel - In the implementation block
-(UILabel *)deviceDetailLabel;
-(void)setDeviceDetailLabel:(UILabel *)arg1 ;
-(BPSCheckMarkView *)checkmarkView;
-(void)setCheckmarkView:(BPSCheckMarkView *)arg1 ;
-(void)setWatchView:(BPSRemoveMigrationWatchView *)arg1 ;
-(BPSRemoveMigrationWatchView *)watchView;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end
