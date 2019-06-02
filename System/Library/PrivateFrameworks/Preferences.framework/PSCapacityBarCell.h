/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSMutableArray, UILabel, UIView, PSLegendColorView, PSCapacityBarView, UIFont, UIColor, NSString, NSMutableDictionary;

@interface PSCapacityBarCell : PSTableCell {

	double _tableWidth;
	NSMutableArray* _constraints;
	UILabel* _titleLabel;
	UILabel* _sizeLabel;
	UILabel* _loadingLabel;
	UIView* _legendView;
	UILabel* _otherLabel;
	PSLegendColorView* _otherLegend;
	PSCapacityBarView* _barView;
	UIFont* _legendFont;
	UIFont* _bigFont;
	UIColor* _legendTextColor;
	BOOL _hideLegend;
	BOOL _showOtherLegend;
	BOOL _sizesAreMem;
	NSString* _sizeFormat;
	NSMutableArray* _legendConstraints;
	NSMutableDictionary* _legendTextCache;
	NSMutableDictionary* _legendColorCache;
	NSMutableArray* _categoryOrder;

}
+(id)specifierWithTitle:(id)arg1 ;
+(id)specifierWithTitle:(id)arg1 useStandardFontSizeForSizeLabel:(BOOL)arg2 ;
-(void)initializeViews;
-(id)legendTextForCategory:(id)arg1 ;
-(id)legendColorForCategory:(id)arg1 ;
-(id)usageString:(id)arg1 ;
-(void)updateLegends:(id)arg1 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)updateConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

