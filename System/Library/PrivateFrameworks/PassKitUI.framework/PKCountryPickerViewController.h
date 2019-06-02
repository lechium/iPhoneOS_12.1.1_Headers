/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@protocol PKCountryPickerViewControllerDelegate;
@class UILocalizedIndexedCollation, NSArray;

@interface PKCountryPickerViewController : UITableViewController {

	id<PKCountryPickerViewControllerDelegate> _delegate;
	UILocalizedIndexedCollation* _collation;
	NSArray* _countries;
	NSArray* _sections;
	long long _style;

}

@property (nonatomic,retain) UILocalizedIndexedCollation * collation;                                //@synthesize collation=_collation - In the implementation block
@property (nonatomic,retain) NSArray * countries;                                                    //@synthesize countries=_countries - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                                     //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) long long style;                                                        //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<PKCountryPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_loadCountryCodes;
-(void)_configureSections;
-(UILocalizedIndexedCollation *)collation;
-(NSArray *)countries;
-(void)setCollation:(UILocalizedIndexedCollation *)arg1 ;
-(void)setCountries:(NSArray *)arg1 ;
-(void)setDelegate:(id<PKCountryPickerViewControllerDelegate>)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(id<PKCountryPickerViewControllerDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(NSArray *)sections;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)setSections:(NSArray *)arg1 ;
@end

