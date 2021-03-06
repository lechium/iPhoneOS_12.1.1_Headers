/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSEditingPane.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UIScrollView, UIImageView, UIStackView, UITableView, UILabel, NSArray, NSString;

@interface PSUIEnhancedRegulatoryPane : PSEditingPane <UITableViewDataSource, UITableViewDelegate> {

	UIScrollView* _scrollView;
	UIImageView* _primaryImageView;
	UIStackView* _stackView;
	UITableView* _internalBuildTableView;
	UILabel* _yoMLabel;
	UIImageView* _QRSNImageView;
	UIImageView* _indiaBISImageView;
	UILabel* _indiaBISLabel;
	NSArray* _platformInfoArray;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldInsetContent;
-(void)viewDidBecomeVisible;
-(id)platformInfoArray;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
@end

