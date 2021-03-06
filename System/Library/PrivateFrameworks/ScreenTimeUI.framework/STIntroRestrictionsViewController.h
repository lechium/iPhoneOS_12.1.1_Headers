/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/STIntroSplashViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, STAllowance, NSString;

@interface STIntroRestrictionsViewController : STIntroSplashViewController <UITableViewDataSource, UITableViewDelegate> {

	BOOL _showAllCategories;
	BOOL _showingDatePicker;
	UITableView* _categoriesTableView;
	UITableView* _settingsTableView;
	STAllowance* _allowance;

}

@property (retain) UITableView * categoriesTableView;               //@synthesize categoriesTableView=_categoriesTableView - In the implementation block
@property (retain) UITableView * settingsTableView;                 //@synthesize settingsTableView=_settingsTableView - In the implementation block
@property (retain) STAllowance * allowance;                         //@synthesize allowance=_allowance - In the implementation block
@property (assign) BOOL showAllCategories;                          //@synthesize showAllCategories=_showAllCategories - In the implementation block
@property (assign) BOOL showingDatePicker;                          //@synthesize showingDatePicker=_showingDatePicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateSaveButton;
-(STAllowance *)allowance;
-(void)setAllowance:(STAllowance *)arg1 ;
-(id)selectedCategories;
-(void)setCategoriesTableView:(UITableView *)arg1 ;
-(UITableView *)categoriesTableView;
-(void)setSettingsTableView:(UITableView *)arg1 ;
-(UITableView *)settingsTableView;
-(BOOL)_hasSetTimeAmount;
-(BOOL)showAllCategories;
-(BOOL)showingDatePicker;
-(void)setShowAllCategories:(BOOL)arg1 ;
-(void)setShowingDatePicker:(BOOL)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)datePickerChanged:(id)arg1 ;
@end

