/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSArray, NSString;

@interface WFIPViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	NSArray* _addresses;
	NSArray* _prefixes;

}

@property (assign,nonatomic,__weak) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSArray * addresses;                         //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,retain) NSArray * prefixes;                          //@synthesize prefixes=_prefixes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAddresses:(NSArray *)arg1 ;
-(NSArray *)addresses;
-(NSArray *)prefixes;
-(id)initWithAddresses:(id)arg1 prefixLengths:(id)arg2 ;
-(void)setPrefixes:(NSArray *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
@end
