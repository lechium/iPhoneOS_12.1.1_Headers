/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSArray;

@interface MCInstallationWarningCell : UITableViewCell {

	UILabel* _warningLabel;
	NSArray* _constraints;

}

@property (nonatomic,retain) NSArray * constraints;               //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) UILabel * warningLabel;              //@synthesize warningLabel=_warningLabel - In the implementation block
+(id)reuseIdentifier;
-(void)_setupConstraints;
-(void)_setup;
-(UILabel *)warningLabel;
-(void)setWarningLabel:(UILabel *)arg1 ;
-(NSArray *)constraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setConstraints:(NSArray *)arg1 ;
@end

