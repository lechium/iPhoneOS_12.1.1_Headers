/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSMutableArray, UILabel;

@interface PSStorageTipInfoCell : PSTableCell {

	NSMutableArray* _constraints;
	UILabel* _infoLabel;

}
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)updateConstraints;
@end

