/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PTModuleObserver.h>

@class PTModule, PTSettings, NSString;

@interface PTUIModuleController : UITableViewController <PTModuleObserver> {

	PTModule* _module;

}

@property (nonatomic,readonly) PTSettings * settings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)module:(id)arg1 didInsertRows:(id)arg2 deleteRows:(id)arg3 ;
-(void)moduleDidReload:(id)arg1 ;
-(void)module:(id)arg1 didInsertSections:(id)arg2 deleteSections:(id)arg3 ;
-(id)initWithSettings:(id)arg1 presentingRow:(id)arg2 ;
-(void)_reloadModule;
-(void)showActionsForRowTableViewCell:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(PTSettings *)settings;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
@end

