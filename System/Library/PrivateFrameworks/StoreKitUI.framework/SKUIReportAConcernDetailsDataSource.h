/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSString;

@interface SKUIReportAConcernDetailsDataSource : NSObject <UITableViewDataSource> {

	UITableView* _tableView;
	NSString* _placeholder;
	NSString* _selectedReason;
	NSString* _privacyNote;

}

@property (nonatomic,retain) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                  //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy) NSString * selectedReason;               //@synthesize selectedReason=_selectedReason - In the implementation block
@property (nonatomic,copy) NSString * privacyNote;                  //@synthesize privacyNote=_privacyNote - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)selectedReason;
-(void)setSelectedReason:(NSString *)arg1 ;
-(void)setPrivacyNote:(NSString *)arg1 ;
-(NSString *)privacyNote;
-(id)init;
-(void)setPlaceholder:(NSString *)arg1 ;
-(UITableView *)tableView;
-(NSString *)placeholder;
-(id)initWithTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
@end

