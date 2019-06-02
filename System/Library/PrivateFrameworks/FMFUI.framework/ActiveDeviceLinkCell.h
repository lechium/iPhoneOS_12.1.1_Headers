/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UILabel, NSLayoutConstraint;

@interface ActiveDeviceLinkCell : PSTableCell {

	UILabel* _fromLabel;
	UILabel* _deviceNameLabel;
	UILabel* _detailsLabel;
	NSLayoutConstraint* _detailsHeightContraint;
	NSLayoutConstraint* _fromLabelLeadingConstraint;

}

@property (nonatomic,retain) UILabel * fromLabel;                                          //@synthesize fromLabel=_fromLabel - In the implementation block
@property (nonatomic,retain) UILabel * deviceNameLabel;                                    //@synthesize deviceNameLabel=_deviceNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailsLabel;                                       //@synthesize detailsLabel=_detailsLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * detailsHeightContraint;                  //@synthesize detailsHeightContraint=_detailsHeightContraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * fromLabelLeadingConstraint;              //@synthesize fromLabelLeadingConstraint=_fromLabelLeadingConstraint - In the implementation block
+(long long)cellStyle;
-(UILabel *)fromLabel;
-(void)setFromLabel:(UILabel *)arg1 ;
-(void)setupSubviews;
-(void)setupConstraints;
-(void)setDetailsLabel:(UILabel *)arg1 ;
-(UILabel *)detailsLabel;
-(NSLayoutConstraint *)detailsHeightContraint;
-(void)setDeviceNameLabel:(UILabel *)arg1 ;
-(void)setFromLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDetailsHeightContraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)fromLabelLeadingConstraint;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(UILabel *)deviceNameLabel;
-(void)layoutSubviews;
@end
