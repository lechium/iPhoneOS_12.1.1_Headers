/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/STShowMoreUsageGroupSpecifierProvider.h>

@class NSDictionary;

@interface STMostUsedGroupSpecifierProvider : STShowMoreUsageGroupSpecifierProvider {

	NSDictionary* _allowancesByActiveBudgetedIdentifier;
	unsigned long long _selectedItemType;

}

@property (nonatomic,copy) NSDictionary * allowancesByActiveBudgetedIdentifier;              //@synthesize allowancesByActiveBudgetedIdentifier=_allowancesByActiveBudgetedIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long selectedItemType;                            //@synthesize selectedItemType=_selectedItemType - In the implementation block
-(void)showMostUsedDetailListController:(id)arg1 ;
-(id)newSpecifierWithUsageItem:(id)arg1 ;
-(void)updateSpecifier:(id)arg1 usageItem:(id)arg2 ;
-(void)toggleSelectedItemType:(id)arg1 ;
-(id)getUsageItem:(id)arg1 ;
-(id)allowanceIconForUsageItem:(id)arg1 ;
-(void)setAllowancesByActiveBudgetedIdentifier:(NSDictionary *)arg1 ;
-(unsigned long long)selectedItemType;
-(void)reloadMostUsedSpecifiers;
-(void)loadActiveBudgetedIdentifiers;
-(void)setSelectedItemType:(unsigned long long)arg1 ;
-(NSDictionary *)allowancesByActiveBudgetedIdentifier;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCoordinator:(id)arg1 ;
@end

