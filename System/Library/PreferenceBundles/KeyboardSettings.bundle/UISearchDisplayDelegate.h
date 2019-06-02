/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UISearchDisplayDelegate <NSObject>
@optional
-(void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
-(void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
-(void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
-(void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
-(void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1;
-(void)searchDisplayControllerDidEndSearch:(id)arg1;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1;
-(void)searchDisplayControllerWillEndSearch:(id)arg1;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchScope:(long long)arg2;
-(void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;

@end

